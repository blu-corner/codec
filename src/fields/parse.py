# import xml.etree.ElementTree as ET
from lxml import etree as ET
import sys
import re


def transform_name(name):

    name = re.sub(' ', '', name)
    # preg = re.compile('(.*)(ID)$')
    #
    # idfield = None
    # if name.endswith('ID'):
    #     idfield = '_ID'
    #     name = re.sub(r'ID$', '', name)
    # elif name.endswith('IDs'):
    #     idfield = '_IDs'
    #     name = re.sub(r'IDs$', '', name)
    #
    # name = re.findall('[A-Z][^A-Z]*', name)
    # name = [x.upper() for x in name]
    #
    # new_name = []
    # count = 0
    #
    # for n in name:
    #     if len(n) == 1:
    #         if len(new_name) == 0 or count >= len(new_name):
    #             new_name.append(n)
    #         else:
    #             new_name[count] += n
    #     else:
    #         count += 1
    #         new_name.append(n)
    #
    # name = '_'.join(new_name)
    # if idfield:
    #     name += idfield
    #
    return name

# print transform_name('NoNewsRefIDs')
# sys.exit(1)
#
fxml = sys.argv[1]

xml = ET.parse(fxml)
root = xml.getroot()

master_fields = []

for fields in root.findall('fields'):
    for f in fields.findall('field'):
        if 'number' in f.attrib:
            try:
                name = transform_name(f.attrib['name'])
            except Exception as e:
                print f.attrib['name']
                print e
                sys.exit(1)
            master_fields.append({'name': name, 'number': f.attrib['number']})

fields = ET.Element('fields')
for fld in master_fields:
    ET.SubElement(fields, 'field', attrib=fld)

sys.stdout.write(ET.tostring(fields, pretty_print=True))
