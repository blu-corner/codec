import re

CODEC_H = '''\
/*
 * Copyright 2014-2018 Neueda
 */
#ifndef EUREX_CODEC_H
#define EUREX_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "fields.h"

namespace neueda
{{

class eurexCodec: public codec
{{
    public:
        eurexCodec()
        {{
{MESSAGE_DESCRIPTIONS}
        }}

        codecState decode (cdr& d, const void* buf, size_t len, size_t& used);
        codecState encode (const cdr& d, void* buf, size_t len, size_t& used);
        std::string getType () const {{ return "eurex"; }}

    private:
        // get messages
{GET_MESSAGES}

        // put messages
{PUT_MESSAGES}
}};

}} // namespace neueda

#endif /* EUREX_CODEC_H */
'''

CODEC_H_MESSAGE_DESCRIPTION = '''\
            mMsgTypes.insert (std::make_pair ("{MESSAGE_ID}", "{MESSAGE_NAME}"));
'''

CODEC_H_GET_MESSAGE = '''\
        void get{MESSAGE_NAME} (cdr& d, const void *buf, size_t len, size_t& used);
'''

CODEC_H_PUT_MESSAGE = '''\
        void put{MESSAGE_NAME} (const cdr& d, void *buf, size_t len, size_t& used);
'''

def get_description(name):
	result = re.sub("([a-z])([A-Z])", r"\1 \2" , name)
	result = re.sub("([A-Z])([a-z])", r" \1\2" , result)
	result = re.sub("\s{2,}", r" ", result)
	return result.strip()

def render_message_descriptions(venue):
	result = ''
	for message in venue.findall('message'):
		format = {}
		format['MESSAGE_ID'] = message.attrib['msgtype']
		format['MESSAGE_NAME'] = get_description(message.attrib['name'])
		result += CODEC_H_MESSAGE_DESCRIPTION.format(**format)
	return result[:-1]

def render_get_messages(venue):
	result = ''
	for message in venue.findall('message'):
		result += CODEC_H_GET_MESSAGE.format(MESSAGE_NAME=message.attrib['name'])
	return result[:-1]

def render_put_messages(venue):
	result = ''
	for message in venue.findall('message'):
		result += CODEC_H_PUT_MESSAGE.format(MESSAGE_NAME=message.attrib['name'])
	return result[:-1]

def compose_codec_h(file, venue):
	format = \
	{
		'MESSAGE_DESCRIPTIONS': render_message_descriptions(venue),
		'GET_MESSAGES': render_get_messages(venue),
		'PUT_MESSAGES': render_put_messages(venue)
	}
	string = CODEC_H.format(**format)
	with open(file, 'wt') as f:
		f.write(string)
