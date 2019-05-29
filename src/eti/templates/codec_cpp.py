CODEC_CPP = '''\
/*
 * Copyright 2014-2018 Neueda
 */
#include "{EXCH}Codec.h"
#include "{EXCH}Packets.h"
#include "EtiPacketUtils.h"

namespace neueda
{{

extern "C" codec*
getCodec ()
{{
    return new {EXCH}Codec ();
}}

{GET_GROUPS}
{GET_MESSAGES}
{PUT_GROUPS}
{PUT_MESSAGES}
{DECODE}
{ENCODE}
}} // namespace neueda
'''

CODEC_CPP_GET_GROUP = '''\
static void
get{GROUP} (cdr &d, const {EXCH}{GROUP}Packet& packet)
{{
{CODE}
}}
'''

CODEC_CPP_GET_MESSAGE = '''\
void
{EXCH}Codec::get{MESSAGE} (cdr &d, const void *buf, size_t len, size_t& used)
{{
    {EXCH}{MESSAGE}Packet packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw eti::codecError(state, "cannot deserialize {MESSAGE}");
    d.setString (MessageName, "{MESSAGE}");
{CODE}
}}
'''

CODEC_CPP_PUT_GROUP = '''\
static void
put{GROUP} (const cdr &d, {EXCH}{GROUP}Packet& packet)
{{
{CODE}
}}
'''

CODEC_CPP_PUT_MESSAGE = '''\
void
{EXCH}Codec::put{MESSAGE} (const cdr &d, void *buf, size_t len, size_t& used)
{{
    {EXCH}{MESSAGE}Packet packet;
{CODE}
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw eti::codecError(state, "cannot serialize {MESSAGE}");
}}
'''

CODEC_CPP_DECODE = '''\
codecState
{EXCH}Codec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{{
    clearLastError ();
    used = 0;
    d.clear ();

    {EXCH}HeaderPacket* hdr = ({EXCH}HeaderPacket *) buf;
    if (len < sizeof (*hdr) || len < (size_t) hdr->mBodyLen)
        return GW_CODEC_SHORT;

    codecState state = GW_CODEC_SUCCESS;
    try
    {{
        switch (hdr->mTemplateID)
        {{
{SWITCH}
            default:
                stringstream ss;
                ss << "unknown message type " << hdr->mTemplateID;
                throw eti::codecError (GW_CODEC_ERROR, ss.str ());
        }}
    }}
    catch (eti::codecError &e)
    {{
        setLastError (e.mMessage);
        state = e.mState;
    }}
    catch (...)
    {{
        setLastError ("unknown error while encoding");
        state = GW_CODEC_ERROR;
    }}
    return state;
}}
'''

CODEC_CPP_ENCODE = '''\
codecState
{EXCH}Codec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{{
    clearLastError ();
    used = 0;

    {EXCH}HeaderPacket* hdr = ({EXCH}HeaderPacket *)buf;
    if (len < sizeof (* hdr))
        return GW_CODEC_SHORT;
    if (!d.isType (TemplateID, CDR_INTEGER, 1))
    {{
        setLastError ("TemplateID missing or not integer");
        return GW_CODEC_ERROR;
    }}

    codecState state = GW_CODEC_SUCCESS;
    try
    {{
        uint16_t templateID;
        d.getInteger (TemplateID, templateID);
        switch (templateID)
        {{
{SWITCH}
            default:
                stringstream ss;
                ss << "unknown message type " << templateID;
                throw eti::codecError (GW_CODEC_ERROR, ss.str ());
        }}
    }}
    catch (eti::codecError &e)
    {{
        setLastError (e.mMessage);
        state = e.mState;
    }}
    catch (...)
    {{
        setLastError ("unknown error while encoding");
        state = GW_CODEC_ERROR;
    }}

    return state;
}}
'''

CODEC_CPP_GET_CASE = '''\
        case {ID}:
            get{MESSAGE} (d, buf, len, used);
            break;
'''

CODEC_CPP_PUT_CASE = '''\
        case {ID}:
            put{MESSAGE} (d, buf, len, used);
            break;
'''

def get_typename(exch, name):
	return exch + name + 'Packet'

def render_get_fields(group, venue):
	spaces = ' '*4
	result = ''
	for field in group.findall('field'):
		if field.attrib['class'] == 'sequence':
			result += '{0}const vector<{1}>& v{2} = packet.get{2} ();\n'.format(spaces, get_typename(venue.attrib['name'].lower(), field.attrib['type']), field.attrib['name'])
			result += '{0}for (size_t i = 0; i < v{1}.size (); i++)\n'.format(spaces, field.attrib['name'])
			result += '{0}{{\n'.format(spaces)
			result += '{0}    cdr c;\n'.format(spaces)
			result += '{0}    get{1} (c, v{2}[i]);\n'.format(spaces, field.attrib['type'], field.attrib['name'])
			result += '{0}    d.appendArray ({1}, c);\n'.format(spaces, field.attrib['name'])
			result += '{0}}}\n'.format(spaces)
		elif field.attrib['class'] == 'group':
			result += '{0}get{1} (d, packet.get{2} ());\n'.format(spaces, field.attrib['type'], field.attrib['name'])
		elif field.attrib['class'] == 'integer':
			result += '{0}eti::setInteger<{1}, {2}, &{2}::get{3}, &{2}::is{3}Valid> (d, {3}, packet);\n'.format(spaces, field.attrib['type'], get_typename(venue.attrib['name'].lower(), group.attrib['name']), field.attrib['name'])
		elif field.attrib['class'] == 'double':
			result += '{0}eti::setDouble<{1}, &{1}::get{2}, &{1}::is{2}Valid> (d, {2}, packet);\n'.format(spaces, get_typename(venue.attrib['name'].lower(), group.attrib['name']), field.attrib['name'])
		elif field.attrib['class'] == 'string':
			result += '{0}eti::setString<{1}, &{1}::get{2}, &{1}::is{2}Valid> (d, {2}, packet);\n'.format(spaces, get_typename(venue.attrib['name'].lower(), group.attrib['name']), field.attrib['name'])
		elif field.attrib['class'] == 'varstring':
			result += '{0}eti::setString<{1}, &{1}::get{2}, &{1}::is{2}Valid> (d, {2}, packet);\n'.format(spaces, get_typename(venue.attrib['name'].lower(), group.attrib['name']), field.attrib['name'])
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	return result[:-1]

def render_put_fields(struct, venue, number_of_spaces=4):
	spaces = ' '*4
	result = ''
	for field in struct.findall('field'):
		if field.attrib['class'] == 'sequence':
			result += '{0}const cdrArray* v{1};\n'.format(spaces, field.attrib['name'])
			result += '{0}bool b{1} = d.getArray ({1}, &v{1});\n'.format(spaces, field.attrib['name'])
			result += '{0}for (size_t i = 0; b{1} && i < v{1}->size (); i++)\n'.format(spaces, field.attrib['name'])
			result += '{0}{{\n'.format(spaces)
			result += '{0}    {1} group;\n'.format(spaces, get_typename(venue.attrib['name'].lower(), field.attrib['type']))
			result += '{0}    put{1} ((*v{2})[i], group);\n'.format(spaces, field.attrib['type'], field.attrib['name'])
			result += '{0}    packet.m{1}.push_back (group);\n'.format(spaces, field.attrib['name'])
			result += '{0}}}\n'.format(spaces)
		elif field.attrib['class'] == 'group':
			result += '{0}put{1} (d, packet.m{2});\n'.format(spaces, field.attrib['type'], field.attrib['name'])
		elif field.attrib['class'] == 'integer':
			result += '{0}eti::getInteger<{1}, {2}, &{2}::set{3}, &{2}::reset{3}> (d, {3}, packet);\n'.format(spaces, field.attrib['type'], get_typename(venue.attrib['name'].lower(), struct.attrib['name']), field.attrib['name'])
		elif field.attrib['class'] == 'double':
			result += '{0}eti::getDouble<{1}, &{1}::set{2}, &{1}::reset{2}> (d, {2}, packet);\n'.format(spaces, get_typename(venue.attrib['name'].lower(), struct.attrib['name']), field.attrib['name'])
		elif field.attrib['class'] == 'string':
			result += '{0}eti::getString<{1}, &{1}::set{2}, &{1}::reset{2}> (d, {2}, packet);\n'.format(spaces, get_typename(venue.attrib['name'].lower(), struct.attrib['name']), field.attrib['name'])
		elif field.attrib['class'] == 'varstring':
			result += '{0}eti::getString<{1}, &{1}::set{2}, &{1}::reset{2}> (d, {2}, packet);\n'.format(spaces, get_typename(venue.attrib['name'].lower(), struct.attrib['name']), field.attrib['name'])
		else:
			raise Exception('unknown class ' + field.attrib['class'])
	return result[:-1]

def render_get_groups(venue):
	result = ''
	for group in venue.findall('group'):
		format = {}
		format['EXCH'] = venue.attrib['name'].lower()
		format['GROUP'] = group.attrib['name']
		format['CODE'] = render_get_fields(group, venue)
		result += CODEC_CPP_GET_GROUP.format(**format) + '\n'
	return result

def render_get_messages(venue):
	result = ''
	for message in venue.findall('message'):
		format = {}
		format['EXCH'] = venue.attrib['name'].lower()
		format['MESSAGE'] = message.attrib['name']
		format['CODE'] = render_get_fields(message, venue)
		result += CODEC_CPP_GET_MESSAGE.format(**format) + '\n'
	return result

def render_put_groups(venue):
	result = ''
	for group in venue.findall('group'):
		format = {}
		format['EXCH'] = venue.attrib['name'].lower()
		format['GROUP'] = group.attrib['name']
		format['CODE'] = render_put_fields(group, venue)
		result += CODEC_CPP_PUT_GROUP.format(**format) + '\n'
	return result

def render_put_messages(venue):
	result = ''
	for message in venue.findall('message'):
		format = {}
		format['EXCH'] = venue.attrib['name'].lower()
		format['MESSAGE'] = message.attrib['name']
		format['CODE'] = render_put_fields(message, venue)
		result += CODEC_CPP_PUT_MESSAGE.format(**format) + '\n'
	return result

def render_decode(venue):
	spaces = ' '*8
	switch = ''
	for message in venue.findall('message'):
		format = {}
		format['ID'] = message.attrib['msgtype']
		format['MESSAGE'] = message.attrib['name']
		switch += CODEC_CPP_GET_CASE.format(**format)
	return CODEC_CPP_DECODE.format(EXCH=venue.attrib['name'].lower(), SWITCH=switch[:-1])

def render_encode(venue):
	spaces = ' '*8
	switch = ''
	for message in venue.findall('message'):
		format = {}
		format['ID'] = message.attrib['msgtype']
		format['MESSAGE'] = message.attrib['name']
		switch += CODEC_CPP_PUT_CASE.format(**format)
	return CODEC_CPP_ENCODE.format(EXCH=venue.attrib['name'].lower(), SWITCH=switch[:-1])

def compose_codec_cpp(file, venue):
	format = \
	{
        'EXCH': venue.attrib['name'].lower(),
		'GET_GROUPS': render_get_groups(venue),
		'PUT_GROUPS': render_put_groups(venue),
		'GET_MESSAGES': render_get_messages(venue),
		'PUT_MESSAGES': render_put_messages(venue),
		'DECODE': render_decode(venue),
		'ENCODE': render_encode(venue)
	}
	string = CODEC_CPP.format(**format)
	with open(file, 'wt') as f:
		f.write(string)
