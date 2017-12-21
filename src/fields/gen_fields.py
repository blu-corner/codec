from wheezy.template.engine import Engine
from wheezy.template.ext.core import CoreExtension
from wheezy.template.loader import FileLoader
from lxml import etree as ET
import sys


def transform(context, template, target):
    searchpath = ['.']
    engine = Engine(
        loader=FileLoader(searchpath),
        extensions=[CoreExtension()]
    )

    template = engine.get_template(template)
    with open(target, 'w') as fd:
        fd.write(template.render(context))

fxml = ET.parse(sys.argv[1])

root = fxml.getroot()

fields = []
for f in root.findall('field'):
    fields.append(f.attrib)


transform({'fields': fields}, 'fields_h.tmpl', 'fields.h')
transform({'fields': fields}, 'fields_cc.tmpl', 'fields.cc')
