
PACKET_H = '''\
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated {GENERATION}
 */
#ifndef {EXCH_UPPER}_PACKETS_H
#define {EXCH_UPPER}_PACKETS_H
{INCLUDES}

#endif // {EXCH_UPPER}_PACKETS_H
'''

PACKET_H_INCLUDE = '''\
#include "{EXCH_LOWER}{PACKET}Packet.h"\
'''

def get_packets(root):
	result = ['Header']
	for group in root.findall('group'):
		result.append(group.attrib['name'])
	for message in root.findall('message'):
		result.append(message.attrib['name'])
	return result

def compose_packet_h(file, generation, venue):
	includes = ''
	for packet in get_packets(venue):
		include = PACKET_H_INCLUDE.format(EXCH_LOWER=venue.attrib['name'].lower(), PACKET=packet)
		includes += '\n' + include
	string = PACKET_H.format(GENERATION=generation, EXCH_UPPER=venue.attrib['name'].upper(), INCLUDES=includes)
	with open(file, 'wt') as f:
		f.write(string)
