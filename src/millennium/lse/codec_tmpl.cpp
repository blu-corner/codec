@require(name, messages, message_data, message_fields, remove_space, metadata)
/* @name Version @metadata['ProtocolVersion'] */
#include "gw@{name}Codec.h"
#include "gw@{name}Packets.h"

extern "C" gwCodec*
getCodec ()
{
    return new gw@{name}Codec ();
}

const double mPriceConverter = 100000000.0;

bool
gw@{name}Codec::putString (const cdr& d,
                              const char* name,
                              char* s,
                              size_t slen)
{
    std::string from;
    if (!d.getString (name, from))
        return false;
    if (from.size () > slen)
        return false;
    memset (s, '\0', slen);
    memcpy (s, from.c_str (), from.length());
    return true;
}

bool
gw@{name}Codec::putPrice (const cdr& d,
                             const std::string& key,
                             int64_t* price)
{
    std::stringstream err;
    err << key << " not a double";
    if (!d.isType (key, CDR_DOUBLE))
    {
        setLastError (err.str ());
            return false;
    }
    double value;
    d.getDouble (key, value);
    *price = value * 100000000;
    return true;
}

bool
gw@{name}Codec::putCharacter (const cdr& d,
                                 const std::string& key,
                                 char* c)
{
    if (!d.isType (key, CDR_STRING, 1))
    {
        setLastError (key + " not a string");
        return false;
    }
    *c = *d.getItem (key)->mString.c_str ();
    return true;
}

@for msg in messages:
gwCodecState
gw@{name}Codec::get@{msg !! remove_space} (cdr &d, gw@{name}Header* hdr)
{
    d.setString ("MessageName", "@{msg !! remove_space}");
    @if message_fields[msg]:
    gw@{name}@{msg !! remove_space}* p = (gw@{name}@{msg !! remove_space}*)hdr;
    @end

    @for field in message_fields[msg]:
        @if 'Reserved' not in field['name']:
            @if field['name'] == 'TransactTime':
    d.setInteger ("TransactTimeSeconds", p->mTransactTimeSeconds);
    d.setInteger ("TransactTimeUsecs", p->mTransactTimeUsecs);
            @elif field['type'] == 'char' and field.get('length', None):
    codecHelper_setString (d, "@field['name']", p->m@field['name'],
                           sizeof (p->m@field['name']));
            @elif field['type'] == 'char' and not field.get('length', None):
    d.setInteger ("@field['name']", p->m@field['name']);
            @elif 'Price' in field['name']:
    d.setDouble ("@field['name']", (p->m@field['name']) / mPriceConverter);
            @elif 'int' in field['type']:
    d.setInteger ("@field['name']", p->m@field['name']);
            @end
        @end
    @end

    return GW_CODEC_SUCCESS;
}

@end
@for msg in messages:
gwCodecState
gw@{name}Codec::put@{msg !! remove_space} (const cdr &d, gw@{name}Header* hdr, size_t len, size_t& used)
{
    gw@{name}@{msg !! remove_space}* p = (gw@{name}@{msg !! remove_space}*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

    @for field in message_fields[msg]:
        @if 'Reserved' not in field['name']:
            @if field['name'] == 'TransactTime':
        if (!d.getInteger ("TransactTimeSeconds", &p->mTransactTimeSeconds))
        {
            setLastError ("invalid or missing TransactTimeSeconds");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger ("TransactTimeUsecs", &p->mTransactTimeUsecs))
        {
            setLastError ("invalid or missing TransactTimeUsecs");
            return GW_CODEC_ERROR;
        }
            @elif field['type'] == 'char' and field.get('length', None):
        if (!putString (d, "@field['name']", p->m@field['name'], sizeof p->m@field['name']))
        {
            setLastError ("@field['name'] missing or not string");
            return GW_CODEC_ERROR;
        }
            @elif field['type'] == 'char' and not field.get('length', None):
        if (!putCharacter (d, "@field['name']", &p->m@field['name']))
        {
            setLastError ("invalid or missing @field['name']");
            return GW_CODEC_ERROR;
        }
            @elif 'Price' in field['name'] and field['type'] not in ['uint8_t', 'int8_t']:
        if (!putPrice (d, "@field['name']", &p->m@field['name']))
        {
            setLastError ("invalid or missing @field['name']");
            return GW_CODEC_ERROR;
        }
            @elif 'int' in field['type']:
        if (!d.getInteger ("@field['name']", &p->m@field['name']))
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

gwCodecState
gw@{name}Codec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    gw@{name}Header* hdr = (gw@{name}Header*)buf;
    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;
    if (len < (unsigned)hdr->mMessageLength)
        return GW_CODEC_SHORT;

    used = ((hdr->mMessageLength-1) + sizeof (*hdr));

    d.setString ("MessageType", "%c", hdr->mMessageType);
    d.setInteger ("MessageLength", hdr->mMessageLength);
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

gwCodecState
gw@{name}Codec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    gw@{name}Header* hdr = (gw@{name}Header*)buf;

    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;

    if (!d.isType ("MessageType", CDR_STRING, 1))
    {
        setLastError ("MessageType missing or not string");
        return GW_CODEC_ERROR;
    }
    std::string s;
    d.getString ("MessageType", s);
    hdr->mMessageType = *s.c_str ();
    hdr->mStartOfMessage = 2;

    gwCodecState state;
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

    hdr->mMessageLength = (used - 3);
    return GW_CODEC_SUCCESS;
}
