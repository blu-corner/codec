/*
 * Copyright 2014-2018 Neueda
 */
@require(name, messages, message_data, message_fields, remove_space, metadata)
/* @name Version @metadata['ProtocolVersion'] */
#include "@{name.lower()}Codec.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new @{name.lower()}Codec ();
}

const double mPriceConverter = 100000000.0;

@for msg in messages:
codecState
@{name.lower()}Codec::get@{msg !! remove_space} (cdr &d, @{name}Header* hdr)
{
    d.setString (MessageName, "@{msg !! remove_space}");
    @if message_fields[msg]:
    @{name}@{msg !! remove_space}* p = (@{name}@{msg !! remove_space}*)hdr;
    @end

    @for field in message_fields[msg]:
        @if 'Reserved' not in field['name']:
            @if field['type'] == 'char' and field.get('length', None):
    codecHelper_setString (d, @field['name'], p->m@field['name'],
                           sizeof (p->m@field['name']));
            @elif field['type'] == 'char' and not field.get('length', None):
    d.setInteger (@field['name'], p->m@field['name']);
            @elif 'Price' in field['name']:
    d.setDouble (@field['name'], (p->m@field['name']) / mPriceConverter);
            @elif 'int' in field['type']:
    d.setInteger (@field['name'], p->m@field['name']);
            @end
        @end
    @end

    return GW_CODEC_SUCCESS;
}

@end
@for msg in messages:
codecState
@{name.lower()}Codec::put@{msg !! remove_space} (const cdr &d, @{name}Header* hdr, size_t len, size_t& used)
{
    @{name}@{msg !! remove_space}* p = (@{name}@{msg !! remove_space}*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

    @for field in message_fields[msg]:
        @if 'Reserved' not in field['name']:
            @if field['type'] == 'char' and field.get('length', None):
        if (!putString (d, @field['name'], p->m@field['name'], sizeof p->m@field['name']))
        {
            setLastError ("@field['name'] missing or not string");
            return GW_CODEC_ERROR;
        }
            @elif field['type'] == 'char' and not field.get('length', None):
        if (!putCharacter (d, @field['name'], &p->m@field['name']))
        {
            setLastError ("invalid or missing @field['name']");
            return GW_CODEC_ERROR;
        }
            @elif 'Price' in field['name'] and field['type'] not in ['uint8_t', 'int8_t']:
        if (!putPrice (d, @field['name'], &p->m@field['name']))
        {
            setLastError ("invalid or missing @field['name']");
            return GW_CODEC_ERROR;
        }
            @elif 'int' in field['type']:
        if (!d.getInteger (@field['name'], &p->m@field['name']))
        {
            setLastError ("invalid or missing @field['name']");
            return GW_CODEC_ERROR;
        }
            @end
        @end
    @end

    return GW_CODEC_SUCCESS;
}

@end

codecState
@{name.lower()}Codec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    @{name}Header* hdr = (@{name}Header*)buf;
    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;
    if (len < (unsigned)hdr->mMessageLength + sizeof(*hdr) - 1)
        return GW_CODEC_SHORT;

    used = ((hdr->mMessageLength-1) + sizeof (*hdr));

    d.setString (MessageType, "%c", hdr->mMessageType);
    d.setInteger (MessageLength, hdr->mMessageLength);
    switch (hdr->mMessageType) {
        @for msg in messages:
        case '@{message_data[msg]["msgtype"]}':
            return get@{msg!!remove_space} (d, hdr);
        @end
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
}

codecState
@{name.lower()}Codec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    @{name}Header* hdr = (@{name}Header*)buf;

    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;

    if (!d.isType (MessageType, CDR_STRING, 1))
    {
        setLastError ("MessageType missing or not string");
        return GW_CODEC_ERROR;
    }
    std::string s;
    d.getString (MessageType, s);
    hdr->mMessageType = *s.c_str ();
    hdr->mStartOfMessage = 2;

    codecState state;
    switch (hdr->mMessageType)
    {
        @for msg in messages:
        case '@{message_data[msg]["msgtype"]}':
            state = put@{msg!!remove_space} (d, hdr, len, used);
            break;
        @end
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
    if (state != GW_CODEC_SUCCESS)
        return state;

    hdr->mMessageLength = used - (sizeof(*hdr) - 1);
    return GW_CODEC_SUCCESS;
}

} // namespace neueda
