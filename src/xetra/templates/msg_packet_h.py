
PACKET_H = '''\
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated {GENERATION}
 */
#ifndef XETRA_{MESSAGE}_PACKET_H
#define XETRA_{MESSAGE}_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "xetraPacketUtils.h"

namespace neueda
{{

using namespace std;

{PACKED_START}class {CLASSNAME}
{{
    public:
        // no value constants
{CONSTANTS}
        // fields (use with care)
{FIELDS}
        // constructor
{CONSTRUCTOR}
        // getters & setters
{GETTER_AND_SETTERS}
        // render current raw size
{GET_RAW_SIZE}
        // serialization
{SERIALIZE}
        // deserialization
{DESERIALIZE}
        // string conversion
{TO_STRING}\
}}{PACKED_END};

{CONSTANT_INITIALIZATIONS}

}} // namespace neueda

#endif // XETRA_{MESSAGE}_PACKET_H
'''


PACKET_H_CONSTRUCTOR = '''\
        {CLASSNAME} ()
        {{
{CODE}\
        }}
'''

PACKET_H_SETTER = '''\
        bool set{NAME} ({TYPE} v)
        {{
{CODE}\
        }}
'''

PACKET_H_GETTER = '''\
        {TYPE} get{NAME} () const
        {{
{CODE}\
        }}
'''

PACKET_H_IS_VALID = '''\
        bool is{NAME}Valid () const
        {{
{CODE}\
        }}
'''

PACKET_H_RESET = '''\
        void reset{NAME} ()
        {{
{CODE}\
        }}
'''

PACKET_H_SERIALIZE = '''\
        codecState serialize (void *buf, size_t len, size_t &used)
        {{
{CODE}\
            return GW_CODEC_SUCCESS;
        }}
'''

PACKET_H_DESERIALIZE = '''\
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {{
{CODE}\
            return GW_CODEC_SUCCESS;
        }}
'''

PACKET_H_TO_STRING = '''\
        string toString () const
        {{
            stringstream sss;
{CODE}\
            return sss.str();
        }}
'''

def get_typename(name):
	return 'Xetra' + name + 'Packet'

def get_constname(name, suffix):
	result = name[0]
	for char in name[1:]:
		if result[-1].islower() and char.isupper():
			result += '_'
		result += char
	return result.upper() + '_' + suffix

def get_int(field, which):
	value = field.attrib[which + 'Value']
	if field.attrib['type'] == 'int64_t':
		return value + 'L'
	elif field.attrib['type'] == 'uint64_t':
		return value + 'UL'
	else:
		return value

def get_scaling(field):
	value = field.attrib['precision']
	return str(10**int(value)) + '.0'

def get_no_value(field):
	if not 'noValue' in field.attrib:
		return ''
	hex_value = field.attrib['noValue']
	if not 'size' in field.attrib:
		return hex_value
	size = int(field.attrib['size'])
	result = ''
	while len(hex_value)-2 < size*2:
		hex_value += hex_value[-2:]
	result = '{'
	if len(hex_value) >= 4:
		result += hex_value[0:4]
		index = 4
		while index < len(hex_value):
			result += ', 0x' + hex_value[index:index+2]
			index += 2
	result += '}'
	return result

def render_constants(struct, venue):
	spaces = ' '*8
	result = ''
	for field in struct.findall('field'):
		if field.attrib['class'] == 'sequence':
			result += '{0}static const size_t {1};\n'.format(spaces, get_constname(field.attrib['name'], 'MIN'))
			result += '{0}static const size_t {1};\n'.format(spaces, get_constname(field.attrib['name'], 'MAX'))
		elif field.attrib['class'] == 'group':
			pass
		elif field.attrib['class'] == 'integer':
			result += '{0}static const {1} {2};\n'.format(spaces, field.attrib['type'], get_constname(field.attrib['name'], 'MIN'))
			result += '{0}static const {1} {2};\n'.format(spaces, field.attrib['type'], get_constname(field.attrib['name'], 'MAX'))
			result += '{0}static const {1} {2};\n'.format(spaces, field.attrib['type'], get_constname(field.attrib['name'], 'NO_VALUE'))
		elif field.attrib['class'] == 'double':
			result += '{0}static const double {1};\n'.format(spaces, get_constname(field.attrib['name'], 'MIN'))
			result += '{0}static const double {1};\n'.format(spaces, get_constname(field.attrib['name'], 'MAX'))
			result += '{0}static const {1} {2};\n'.format(spaces, field.attrib['type'], get_constname(field.attrib['name'], 'NO_VALUE'))
		elif field.attrib['class'] == 'string':
			result += '{0}static const {1} {2}[{3}];\n'.format(spaces, field.attrib['type'], get_constname(field.attrib['name'], 'NO_VALUE'), field.attrib['size'])
			result += '{0}static const size_t {1};\n'.format(spaces, get_constname(field.attrib['name'], 'MAX_LENGTH'))
		elif field.attrib['class'] == 'varstring':
			result += '{0}static const size_t {1};\n'.format(spaces, get_constname(field.attrib['name'], 'MAX_LENGTH'))
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	return result

def render_constant_initializations(struct, venue):
	result = ''
	for field in struct.findall('field'):
		if field.attrib['class'] == 'sequence':
                        result += 'const size_t {0}::{1} = {2};\n'.format(get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:],  get_constname(field.attrib['name'], 'MIN'), field.attrib['minGroups'])
			result += 'const size_t {0}::{1} = {2};\n'.format(get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MAX'), field.attrib['maxGroups'])
		elif field.attrib['class'] == 'group':
			pass
		elif field.attrib['class'] == 'integer':
                        result += 'const {0} {1}::{2} = {3};\n'.format(field.attrib['type'], get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MIN'), get_int(field, 'min'))
			result += 'const {0} {1}::{2} = {3};\n'.format(field.attrib['type'], get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MAX'), get_int(field, 'max'))
			result += 'const {0} {1}::{2} = {3};\n'.format(field.attrib['type'], get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'NO_VALUE'), get_no_value(field))
		elif field.attrib['class'] == 'double':
			result += 'const double {0}::{1} = {2};\n'.format(get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MIN'), field.attrib['minValue'])
			result += 'const double {0}::{1} = {2};\n'.format(get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MAX'), field.attrib['maxValue'])
                        result += 'const {0} {1}::{2} = {3};\n'.format(field.attrib['type'], get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'NO_VALUE'), get_no_value(field))
		elif field.attrib['class'] == 'string':
                        result += 'const {0} {1}::{2}[{3}] = {4};\n'.format(field.attrib['type'], get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'NO_VALUE'), field.attrib['size'], get_no_value(field))
                        result += 'const size_t {0}::{1} = {2};\n'.format(get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MAX_LENGTH'), field.attrib['size'])
		elif field.attrib['class'] == 'varstring':
                        result += 'const size_t {0}::{1} = {2};\n'.format(get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:], get_constname(field.attrib['name'], 'MAX_LENGTH'), field.attrib['size'])
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	return result

def render_fields(struct, venue):
	spaces = ' '*8
	hasVarText = False
	result = ''
	for field in struct.findall('field'):
		if field.attrib['class'] == 'sequence':
                    result += '{0}vector<{1}> m{2};\n'.format(spaces, get_typename(field.attrib['type'])[:1].lower() + get_typename(field.attrib['type'])[1:], field.attrib['name'])
		elif field.attrib['class'] == 'group':
			result += '{0}{1} m{2};\n'.format(spaces, get_typename(field.attrib['type'])[:1].lower() + get_typename(field.attrib['type'])[1:], field.attrib['name'])
		elif field.attrib['class'] == 'integer':
			result += '{0}{1} m{2};\n'.format(spaces, field.attrib['type'], field.attrib['name'])
		elif field.attrib['class'] == 'double':
			result += '{0}{1} m{2};\n'.format(spaces, field.attrib['type'], field.attrib['name'])
		elif field.attrib['class'] == 'string':
			result += '{0}char m{1}[{2}];\n'.format(spaces, field.attrib['name'], field.attrib['size'])
		elif field.attrib['class'] == 'varstring':
			result += '{0}string m{1};\n'.format(spaces, field.attrib['name'], field.attrib['size'])
			hasVarText = True
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	if hasVarText:
		result += '{0}int mVarTextPad; // reserved for internal use\n'.format(spaces);
	return result

def render_constructor(struct, venue):
	spaces = ' '*12
	code = ''
	if struct.tag == 'message':
		header = struct.find('field').attrib['name']
		code += '{0}m{1}.mTemplateID = {2};\n'.format(spaces, header, struct.attrib['msgtype'])
	for field in struct.findall('field'):
		if not 'noValue' in field.attrib:
			continue
		if field.attrib['class'] == 'sequence':
			pass
		elif field.attrib['class'] == 'group':
			pass
		elif field.attrib['class'] == 'integer':
			code += '{0}m{1} = {2};\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
		elif field.attrib['class'] == 'double':
			code += '{0}m{1} = {2};\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
		elif field.attrib['class'] == 'string':
			code += '{0}memcpy(m{1}, {2}, sizeof (m{1}));\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
		elif field.attrib['class'] == 'varstring':
			pass
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	format = \
	{
                'CLASSNAME': get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:],
		'CODE': code
	}
	return PACKET_H_CONSTRUCTOR.format(**format)

def render_getters_and_setters(struct, venue):
	spaces = ' '*12
	result = ''
	for field in struct.findall('field'):
		format = {}
		if field.attrib['class'] == 'sequence':
			format['NAME'] = field.attrib['name']
                        format['TYPE'] = 'const vector<' + get_typename(field.attrib['type'])[:1].lower() + get_typename(field.attrib['type'])[1:] + '>&'
			format['CODE'] = '{0}return m{1};\n'.format(spaces, field.attrib['name'])
			result += PACKET_H_GETTER.format(**format) + '\n'
			format['CODE']  = '{0}m{1} = v;\n'.format(spaces, field.attrib['name'])
			format['CODE'] += '{0}m{1} = v.size ();\n'.format(spaces, field.attrib['counter'])
			format['CODE'] += '{0}return ({1} <= v.size () && v.size () <= {2});\n'.format(spaces, get_constname(field.attrib['name'], 'MIN'), get_constname(field.attrib['name'], 'MAX'))
			result += PACKET_H_SETTER.format(**format) + '\n'
		elif field.attrib['class'] == 'group':
			format['NAME'] = field.attrib['name']
			format['TYPE'] = 'const ' + get_typename(field.attrib['type'])[:1].lower() + get_typename(field.attrib['type'])[1:] + '&'
			format['CODE'] = '{0}return m{1};\n'.format(spaces, field.attrib['name'])
			result += PACKET_H_GETTER.format(**format) + '\n'
			format['CODE']  = '{0}m{1} = v;\n'.format(spaces, field.attrib['name'])
			format['CODE'] += '{0}return true;\n'.format(spaces)
			result += PACKET_H_SETTER.format(**format) + '\n'
		elif field.attrib['class'] == 'integer':
			format['NAME'] = field.attrib['name']
			format['TYPE'] = field.attrib['type']
			format['CODE'] = '{0}return m{1};\n'.format(spaces, field.attrib['name'])
			result += PACKET_H_GETTER.format(**format) + '\n'
			format['CODE']  = '{0}m{1} = v;\n'.format(spaces, field.attrib['name'])
			format['CODE'] += '{0}return (({1} <= m{2} && m{2} <= {3}) || m{2} == {4});\n'.format(spaces, get_constname(field.attrib['name'], 'MIN'), field.attrib['name'], get_constname(field.attrib['name'], 'MAX'), get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_SETTER.format(**format) + '\n'
			format['CODE'] = '{0}return (m{1} != {2});\n'.format (spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_IS_VALID.format(**format) + '\n'
			format['CODE'] = '{0}m{1} = {2};\n'.format (spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_RESET.format(**format) + '\n'
		elif field.attrib['class'] == 'double':
			format['NAME'] = field.attrib['name']
			format['TYPE'] = 'double'
			format['CODE'] = '{0}return m{1} / {2};\n'.format(spaces, field.attrib['name'], get_scaling(field))
			result += PACKET_H_GETTER.format(**format) + '\n'
			format['CODE']  = '{0}m{1} = v * {2};\n'.format(spaces, field.attrib['name'], get_scaling(field))
			format['CODE'] += '{0}return (({1} <= v && v <= {3}) || m{2} == {4});\n'.format(spaces, get_constname(field.attrib['name'], 'MIN'), field.attrib['name'], get_constname(field.attrib['name'], 'MAX'), get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_SETTER.format(**format) + '\n'
			format['CODE'] = '{0}return (m{1} != {2});\n'.format (spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_IS_VALID.format(**format) + '\n'
			format['CODE'] = '{0}m{1} = {2};\n'.format (spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_RESET.format(**format) + '\n'
		elif field.attrib['class'] == 'string':
			format['NAME'] = field.attrib['name']
			format['TYPE'] = 'string'
			if field.attrib['terminable'] == 'true':
				format['CODE']  = '{0}string result;\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'MAX_LENGTH'))
				format['CODE'] += '{0}for (size_t i = 0; m{1}[i] && i < {2}; i++)\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'MAX_LENGTH'))
				format['CODE'] += '{0}    result += (m{1}[i]);\n'.format(spaces, field.attrib['name'])
				format['CODE'] += '{0}return result;\n'.format(spaces)
			else:
				format['CODE']  = '{0}return string (m{1}, {2});\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'MAX_LENGTH'))
			result += PACKET_H_GETTER.format(**format) + '\n'
			format['TYPE'] = 'const string&'
			format['CODE'] = '{0}memset (m{1}, \'\\0\', sizeof (m{1}));\n'.format(spaces, field.attrib['name'])
			format['CODE'] += '{0}size_t size = min ((size_t) v.size (), (size_t) {1});\n'.format(spaces, get_constname(field.attrib['name'], 'MAX_LENGTH'))
			format['CODE'] += '{0}strncpy (m{1}, v.c_str (), size);\n'.format(spaces, field.attrib['name'])
			format['CODE'] += '{0}return (v.size () <= {1});\n'.format(spaces, get_constname(field.attrib['name'], 'MAX_LENGTH'))
			result += PACKET_H_SETTER.format(**format) + '\n'
			format['CODE'] = '{0}return (memcmp (m{1}, {2}, sizeof (m{1})) != 0);\n'.format (spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_IS_VALID.format(**format) + '\n'
			format['CODE'] = '{0}memcpy (m{1}, {2}, sizeof (m{1}));\n'.format (spaces, field.attrib['name'], get_constname(field.attrib['name'], 'NO_VALUE'))
			result += PACKET_H_RESET.format(**format) + '\n'
		elif field.attrib['class'] == 'varstring':
			format['NAME'] = field.attrib['name']
			format['TYPE'] = 'string'
			format['CODE'] = '{0}return m{1};\n'.format(spaces, field.attrib['name'])
			result += PACKET_H_GETTER.format(**format) + '\n'
			format['TYPE'] = 'const string&'
			format['CODE']  = '{0}m{1} = string (v);\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'MAX_LENGTH'))
			format['CODE'] += '{0}m{1}.resize (min ( (size_t) v.size (), (size_t) {2}));\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'MAX_LENGTH'))
			format['CODE'] += '{0}m{1} = m{2}.size ();\n'.format(spaces, field.attrib['counter'], field.attrib['name'])
			format['CODE'] += '{0}return (v.size () <= {1});\n'.format(spaces, get_constname(field.attrib['name'], 'MAX_LENGTH'))
			result += PACKET_H_SETTER.format(**format) + '\n'
			format['CODE'] = '{0}return (m{1} != {2});\n'.format (spaces, field.attrib['counter'], get_constname(field.attrib['counter'], 'NO_VALUE'))
			result += PACKET_H_IS_VALID.format(**format) + '\n'
			format['CODE']  = '{0}m{1} = {2};\n'.format (spaces, field.attrib['counter'], get_constname(field.attrib['counter'], 'NO_VALUE'))
			format['CODE'] += '{0}m{1} = string();\n'.format (spaces, field.attrib['name'])
			result += PACKET_H_RESET.format(**format) + '\n'
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	return result

def render_get_raw_size(struct, venue):
	spaces = ' '*12
	hasVarText = False
	code = ''
	prefix = 'size_t result = '
	for field in struct.findall('field'):
		if field.attrib['class'] == 'sequence':
			code += '{0}{1}xetra::getRawSize (m{2})\n'.format(spaces, prefix, field.attrib['name'])
		elif field.attrib['class'] == 'group':
			code += '{0}{1}m{2}.getRawSize()\n'.format(spaces, prefix, field.attrib['name'])
		elif field.attrib['class'] == 'integer':
			code += '{0}{1}sizeof (m{2})\n'.format(spaces, prefix, field.attrib['name'])
		elif field.attrib['class'] == 'double':
			code += '{0}{1}sizeof (m{2})\n'.format(spaces, prefix, field.attrib['name'])
		elif field.attrib['class'] == 'string':
			code += '{0}{1}sizeof (m{2})\n'.format(spaces, prefix, field.attrib['name'])
		elif field.attrib['class'] == 'varstring':
			code += '{0}{1}m{2}.size ()\n'.format(spaces, prefix, field.attrib['name'])
			hasVarText = True
		else:
			raise Exception('unknown class ' + field.attrib['class'])
		prefix = '    + '
	code = code[:-1] + ';\n'.format(spaces)
	if hasVarText:
		code += '{0}result += (8 - result) % 8;\n'.format(spaces);
	code += '{0}return result;\n'.format(spaces)
	format = {'NAME':'RawSize', 'TYPE':'size_t', 'CODE':code}
	return PACKET_H_GETTER.format(**format)

def render_serialize(struct, venue):
	spaces = ' '*12
	hasVarText = False
	code = ''
	for field in struct.findall('field'):
		if 'counter' in field.attrib:
			code += '{0}m{1} = m{2}.size ();\n'.format(spaces, field.attrib['counter'], field.attrib['name'])
	if struct.tag == 'message':
		code += '{0}m{1}.mBodyLen = getRawSize ();\n'.format(spaces, struct.find('field').attrib['name'])
	code += '{0}codecState state;\n'.format(spaces)
	for field in struct.findall('field'):
		checkState = True
		if field.attrib['class'] == 'sequence':
			code += '{0}for (size_t i = 0; i < m{1}.size (); i++)\n'.format(spaces, field.attrib['name']);
			code += '{0}{{\n'.format(spaces);
			code += '{0}    state = m{1}[i].serialize (buf, len, used);\n'.format(spaces, field.attrib['name']);
			code += '{0}    if (state != GW_CODEC_SUCCESS) return state;\n'.format(spaces);
			code += '{0}}}\n'.format(spaces);
			checkState = False
		elif field.attrib['class'] == 'group':
			code += '{0}state = m{1}.serialize (buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'integer':
			code += '{0}state = xetra::serialize (m{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'double':
			code += '{0}state = xetra::serialize (m{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'string':
			code += '{0}state = xetra::serialize (m{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'varstring':
			code += '{0}state = xetra::serialize (m{1}, {2}, buf, len, used);\n'.format(spaces, field.attrib['name'], get_constname(field.attrib['name'], 'MAX_LENGTH'));
			hasVarText = True
		else:
			raise Exception('unknown class ' + field.attrib['class'])
		if checkState:
			code += '{0}if (state != GW_CODEC_SUCCESS) return state;\n'. format(spaces)
	if hasVarText:
		code += '{0}size_t extraPad = m{1}.mBodyLen - used;\n'.format(spaces, struct.find('field').attrib['name']);
		code += '{0}state = xetra::serialize (string (extraPad, \'\\0\'), extraPad, buf, len, used);\n'.format(spaces);
		code += '{0}if (state != GW_CODEC_SUCCESS) return state;\n'. format(spaces)
	format = {'CODE':code}
	return PACKET_H_SERIALIZE.format(**format)

def render_deserialize(struct, venue):
	spaces = ' '*12
	hasVarText = False
	code = ''
	code += '{0}codecState state;\n'.format(spaces)
	for field in struct.findall('field'):
		checkState = True
		if field.attrib['class'] == 'sequence':
			code += '{0}m{1}.resize (m{2});\n'.format(spaces, field.attrib['name'], field.attrib['counter']);
                        code += '{0}for (vector<{2}>::iterator it = m{1}.begin (); it != m{1}.end (); ++it)\n'.format(spaces, field.attrib['name'], get_typename(field.attrib['type'])[:1].lower() + get_typename(field.attrib['type'])[1:]);
			code += '{0}{{\n'.format(spaces);
			code += '{0}    state = it->deserialize (buf, len, used);\n'.format(spaces, field.attrib['name']);
			code += '{0}    if (state != GW_CODEC_SUCCESS) return state;\n'.format(spaces);
			code += '{0}}}\n'.format(spaces);
			checkState = False
		elif field.attrib['class'] == 'group':
			code += '{0}state = m{1}.deserialize (buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'integer' and struct.tag == 'header':
			code += '{0}{1} v{2};\n'.format(spaces, field.attrib['type'], field.attrib['name']);
			code += '{0}state = xetra::deserialize (v{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
			code += '{0}m{1} = v{1};\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'integer':
			code += '{0}state = xetra::deserialize (m{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'double':
			code += '{0}state = xetra::deserialize (m{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'string':
			code += '{0}state = xetra::deserialize (m{1}, buf, len, used);\n'.format(spaces, field.attrib['name']);
		elif field.attrib['class'] == 'varstring':
			code += '{0}state = xetra::deserialize (m{1}, m{2}, buf, len, used);\n'.format(spaces, field.attrib['name'], field.attrib['counter']);
			hasVarText = True
		else:
			raise Exception('unknown class ' + field.attrib['class'])
		if checkState:
			code += '{0}if (state != GW_CODEC_SUCCESS) return state;\n'. format(spaces)
	if struct.tag == 'message':
		code += '{0}m{1}.mBodyLen = getRawSize ();\n'.format(spaces, struct.find('field').attrib['name'])
	if hasVarText:
		code += '{0}size_t extraPad = m{1}.mBodyLen - used;\n'.format(spaces, struct.find('field').attrib['name']);
		code += '{0}string stringPad;\n'.format(spaces);
		code += '{0}state = xetra::deserialize (stringPad, extraPad, buf, len, used);\n'.format(spaces);
		code += '{0}if (state != GW_CODEC_SUCCESS) return state;\n'. format(spaces)
	format = {'CODE':code}
	return PACKET_H_DESERIALIZE.format(**format)

def render_to_string(struct, venue):
	spaces = ' '*12
	code = '{0}sss << "{1}::"\n'.format(spaces, struct.attrib['name'])
	prefix = '{0}    '.format(spaces)
	for field in struct.findall('field'):
		if field.attrib['class'] == 'sequence':
			code += '{0}<< "[{1}=" << xetra::toString (get{1} ()) << "]'.format(prefix, field.attrib['name']);
		elif field.attrib['class'] == 'group':
			code += '{0}<< "[{1}=" << m{1}.toString () << "]'.format(prefix, field.attrib['name']);
		elif field.attrib['class'] == 'integer':
			code += '{0}<< "[{1}=" << get{1} () << "]'.format(prefix, field.attrib['name']);
		elif field.attrib['class'] == 'double':
			code += '{0}<< "[{1}=" << get{1} () << "]'.format(prefix, field.attrib['name']);
		elif field.attrib['class'] == 'string':
			code += '{0}<< "[{1}=" << get{1} () << "]'.format(prefix, field.attrib['name']);
		elif field.attrib['class'] == 'varstring':
			code += '{0}<< "[{1}=" << get{1} () << "]'.format(prefix, field.attrib['name']);
		else:
			raise Exception('unknown class ' + field.attrib['class'])
		prefix = ',"\n{0}    '.format(spaces)
	code += '";\n'
	format = {'CODE':code}
	return PACKET_H_TO_STRING.format(**format)

def compose_msg_packet_h(file, generation, struct, venue):
	format = \
	{
		'GENERATION': generation,
		'PACKED_START': struct.tag == 'header' and 'PACKED(' or '',
		'PACKED_END': struct.tag == 'header' and ')' or '',
		'CLASSNAME': get_typename(struct.attrib['name'])[:1].lower() + get_typename(struct.attrib['name'])[1:],
		'MESSAGE': struct.attrib['name'].upper(),
		'CONSTANTS': render_constants(struct, venue),
		'FIELDS': render_fields(struct, venue),
		'CONSTRUCTOR': render_constructor(struct, venue),
		'GETTER_AND_SETTERS': render_getters_and_setters(struct, venue),
		'GET_RAW_SIZE': render_get_raw_size(struct, venue),
		'SERIALIZE': render_serialize(struct, venue),
		'DESERIALIZE': render_deserialize(struct, venue),
		'TO_STRING': render_to_string(struct, venue),
		'CONSTANT_INITIALIZATIONS': render_constant_initializations(struct, venue),
	}
	string = PACKET_H.format(**format)
	with open(file, 'wt') as f:
		f.write(string)
