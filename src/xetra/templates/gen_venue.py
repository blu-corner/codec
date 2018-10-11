#!/usr/bin/env python

###############################################################################
# IMPORTS
###############################################################################

import sys, argparse, re
import xml.etree.ElementTree as ET, xml.dom.minidom as minidom


###############################################################################
# FUNCTIONS
###############################################################################

def read_fields(node, types):
	fields = []
	for element in node.findall('Member'):
		field = {}
		field['name'] = element.attrib['name']
		#field['usage'] = re.match(r'Pad\d+', field['name']) and 'notUsed' or 'used'
		type = element.attrib['type'] in types and types[element.attrib['type']]
		if 'cardinality' in element.attrib and int(element.attrib['cardinality']) > 1: # sequence
			field['class'] = 'sequence'
			field['type'] = element.attrib['type']
			field['counter'] = element.attrib['counter']
			field['minGroups'] = element.attrib['minCardinality']
			field['maxGroups'] = element.attrib['cardinality']
		elif element.attrib['type'].endswith("Comp"): # group
			field['class'] = 'group'
			field['type'] = element.attrib['type']
		elif type.attrib['rootType'] == 'int': # integer
			field['class'] = 'integer'
			size = int(type.attrib['size'])*8
			prefix = ''
			if int(type.attrib['minValue']) >= 0 and int(type.attrib['maxValue']) > 2**(size-1):
				prefix = 'u'
			field['type'] = prefix + 'int' + str(size) + '_t'
			field['minValue'] = type.attrib['minValue']
			field['maxValue'] = type.attrib['maxValue']
			field['noValue'] = type.attrib['noValue']
		elif type.attrib['rootType'] == 'floatDecimal': # double
			field['class'] = 'double'
			if type.attrib['size'] == '4':
				field['type'] = 'int32_t'
			elif type.attrib['size'] == '8':
				field['type'] = 'int64_t'
			else:
				raise Exception('unknown decimal size ' + type.attrib['size'])
			field['minValue'] = type.attrib['minValue']
			field['maxValue'] = type.attrib['maxValue']
			field['noValue'] = type.attrib['noValue']
			field['precision'] = type.attrib['precision']
		elif type.attrib['rootType'] == 'String' or type.attrib['rootType'] == 'data': # string or byte array
			field['class'] = 'counter' in type.attrib and 'varstring' or 'string'
			field['type'] = 'char'
			field['size'] = type.attrib['size']
			if 'isTerminable' in type.attrib and type.attrib['isTerminable'] == 'true':
				field['terminable'] = 'true'
			else:
				field['terminable'] = 'false'
			if 'variableSize' in type.attrib:
				field['counter'] = type.attrib['counter']
			if 'range' in type.attrib:
				field['range'] = type.attrib['range'].replace('\\', '')
			if 'noValue' in type.attrib:
				field['noValue'] = type.attrib['noValue']
		else:
			raise Exception('unknown type ' + type.attrib['rootType'])
		fields.append(field)
	return fields

def read_spec(eti):
	# read file
	input = ET.parse(args.eti)
	root = input.getroot()

	# read types
	types = {}
	for data_type in root.findall('DataTypes/*'):
		types[data_type.attrib['name']] = data_type

	# read groups & messages
	groups = {}
	messages = []
	for element in root.findall('Structures/*'):
		structure = {}
		structure['name'] = element.attrib['name']
		structure['fields'] = read_fields(element, types)
		if 'numericID' in element.attrib:
			structure['msgtype'] = element.attrib['numericID']
			messages.append(structure)
		else:
			groups[structure['name']] = structure

	# render minimum header
	messageHeaderIn_fields = groups['MessageHeaderInComp']['fields']
	messageHeaderOut_fields = groups['MessageHeaderOutComp']['fields']
	header = {'name':'header', 'fields':[]}
	for i in range(min(len(messageHeaderIn_fields), len(messageHeaderOut_fields))):
		if messageHeaderIn_fields[i] == messageHeaderOut_fields[i]:
			header['fields'].append(messageHeaderIn_fields[i])
		else:
			break

	return (header, groups, messages)


###############################################################################
# MAIN PROGRAM
###############################################################################

# parse arguments
parser = argparse.ArgumentParser(description='Generate venue.xml from ETI XML file.')
parser.add_argument('eti', metavar='FILE', type=str, help='ETI XML file.')
args = parser.parse_args()

# read ETI xml and start writing
header, groups, messages = read_spec(args.eti)
input = ET.parse(args.eti)
root = input.getroot()
output = ET.Element('exchange', {'name':'Xetra'})

#generate GLOBAL section
g = ET.SubElement(output, 'global', {'name':'global'})
ET.SubElement(g, 'parameter', {'name':'MessageSpecTitle', 'value':'Enhanced Trading Interface - Cash Message Reference - Release 6.0 - 24 Nov 2017'})
ET.SubElement(g, 'parameter', {'name':'MessageSpecFilename', 'value':'T7-Enhanced-Trading-Interface-Cash-Message-Reference.pdf'})
ET.SubElement(g, 'parameter', {'name':'ProtocolGroup', 'value':'XETRA'})
ET.SubElement(g, 'parameter', {'name':'Venue', 'value':'Frankfurt', 'desc':'The Enhanced Trading Interface (ETI) is the high performance interface designed for participants who require the highest throughput and the lowest latency for their transactions.'})
ET.SubElement(g, 'parameter', {'name':'VenueMIC', 'value':'XETR'})
ET.SubElement(g, 'parameter', {'name':'Interface', 'value':'OrderEntry'})
ET.SubElement(g, 'parameter', {'name':'ProtocolVersion', 'value':'6.0'})
ET.SubElement(g, 'parameter', {'name':'ProtocolIssueDate', 'value':'2017.11.24'})
ET.SubElement(g, 'parameter', {'name':'Endianness', 'value':'little'})
ET.SubElement(g, 'parameter', {'name':'ETX', 'value':'', 'default':''})

#generate HEADER section
g = ET.SubElement(output, 'header', {'name':'Header'})
for field in header['fields']:
	ET.SubElement(g, 'field', field)

#generate GROUP sections
for key, group in groups.items():
	g = ET.SubElement(output, 'group', {'name':group['name']})
	for field in group['fields']:
		ET.SubElement(g, 'field', field)

#generate MESSAGE sections
for message in messages:
	g = ET.SubElement(output, 'message', {'msgtype': message['msgtype'], 'name':message['name']})
	for field in message['fields']:
		ET.SubElement(g, 'field', field)

#print(ET.tostring(output))
string = minidom.parseString(ET.tostring(output)).toprettyxml(indent=' '*4)
string = string[string.find('>')+1:].strip()
print(string)
