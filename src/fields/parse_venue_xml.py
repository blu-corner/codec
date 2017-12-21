from lxml import etree as ET
import sys
import math
import re

mfxml = ET.parse(sys.argv[1])
vxml = ET.parse(sys.argv[2])


root = mfxml.getroot()
exchange = vxml.getroot()

by_number = {}
by_name = {}


def get_master_fields(root):
    global by_number
    global by_name

    for f in root.findall('field'):
        by_number[int(f.attrib['number'])] = f.attrib
        by_name[f.attrib['name']] = f.attrib


def get_venue_fields(root, next_tag_id):
    for message in root.findall('message'):
        for field in message.findall('field'):
            name = re.sub(' ', '', field.attrib['name'])
            if name in by_name:
                # already exists in dictionary
                continue
            else:
                attrib = {}
                attrib['name'] = name
                attrib['number'] = str(next_tag_id)

                by_name[name] = attrib
                by_number[next_tag_id] = attrib
                next_tag_id += 1


def get_next_tag():
    max_tag = max(by_number.keys())
    next_int = int(math.ceil(max_tag / 500.0) * 500.0)
    return next_int


get_master_fields(root)
next_tag_id = get_next_tag()

get_venue_fields(vxml, next_tag_id)

numbers = sorted(by_number.keys())

fields = ET.Element('fields')
for n in numbers:
    ET.SubElement(fields, 'field', attrib=by_number[n])

f = open(sys.argv[1], 'w')
f.write(ET.tostring(fields, pretty_print=True))
