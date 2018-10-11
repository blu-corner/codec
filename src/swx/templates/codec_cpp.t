/*
 * Copyright 2014-2018 Neueda
 */
@require(name, messages, message_data, message_fields, remove_space, metadata, duplicate_messages, offsetof)
/* @name Version @metadata['ProtocolVersion'] */
#include "@{name.lower()}Codec.h"
#include "@{name.lower()}PacketUtils.h"
#include <stdint.h>
#include <limits.h>
#include <sstream>

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new @{name.lower()}Codec ();
}
 
bool
@{name.lower()}Codec::setLeftPaddedString (const cdr& d,
                                     cdrKey_t name,    
                                     char* buf,
                                     size_t bufLen,
                                     unsigned char paddingByte)
{
    std::string from;
    if (!d.getString (name, from))
        return false;
    if (from.size () > bufLen)
        return false;

    return setLeftPaddedStringBuf (from, buf, bufLen, paddingByte);
}

bool
@{name.lower()}Codec::setRightPaddedString (const cdr& d,
                                     cdrKey_t name,    
                                     char* buf,
                                     size_t bufLen,
                                     unsigned char paddingByte)
{
    std::string from;
    if (!d.getString (name, from))
        return false;
    if (from.size () > bufLen)
        return false;

    return setRightPaddedStringBuf (from, buf, bufLen, paddingByte);
}

bool
@{name.lower()}Codec::putCharacter (const cdr& d,
                                 cdrKey_t key,
                                 char* c)
{
    if (!d.isType (key, CDR_STRING, 1))
    {
        std::ostringstream s;
        s << key <<  " not a string";
        setLastError (s.str ());
        return false;
    }
    *c = *d.getItem (key)->mString.c_str ();
    return true;
}

bool
@{name.lower()}Codec::putIntegerBigEndian (const cdr& d,
                                     cdrKey_t key,
                                     void* vp,
                                     size_t size)
{
    if (!d.isType (key, CDR_INTEGER))
    {
        std::ostringstream s;
        s << key << " not an integer";
        setLastError (s.str ());
        return false;
    }
    int64_t value = d.getItem (key)->mInteger;
    switch (size)
    {
    case 2:
        if (value > UINT16_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint16_t*)vp = htons (value);
        return true;
    case 4:
        if (value > UINT32_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint32_t*)vp = htonl (value);
        return true;
    case 8:
        *(uint64_t*)vp = htonll (value);
        return true;
    default:
        setLastError ("unknown integer size");
        return false;
    }
}

bool
@{name.lower()}Codec::putIntegerLittleEndian (const cdr& d,
                                     cdrKey_t key,
                                     void* vp,
                                     size_t size)
{
    if (!d.isType (key, CDR_INTEGER))
    {
        std::ostringstream s;
        s << key << " not an integer";
        setLastError (s.str ());
        return false;
    }
    int64_t value = d.getItem (key)->mInteger;
    switch (size)
    {
    case 2:
        if (value > UINT16_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint16_t*)vp = value;
        return true;
    case 4:
        if (value > UINT32_MAX)
        {
            std::ostringstream s;
            s << key << " too big";
            setLastError (s.str ());
            return false;
        }
        *(uint32_t*)vp = value;
        return true;
    case 8:
        *(uint64_t*)vp = value;
        return true;
    default:
        setLastError ("unknown integer size");
        return false;
    }
}

@for msg in messages:
codecState
@{name.lower()}Codec::get@{msg !! remove_space} (cdr &d, @{name}Header* hdr)
{
    d.setString (MessageName, "@{msg !! remove_space}");
    @if message_fields[msg] and 'Debug' not in msg:
    @{name}@{msg !! remove_space}* p = (@{name}@{msg !! remove_space}*)hdr;
    @end

    @for field in message_fields[msg]:
        @if 'Reserved' not in field['name']:
            @if field['name'] == 'TransactTime':
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
            @elif field['type'] == 'number' and field['length'] is not None:
    {
    std::string stringBuffer;
                    @if field['stringAlignment'] == 'right':
    bool ok = getLeftPaddedString (p->m@field['name'],
                                   @field['length'],
                                   '@{message_data[msg]['padding']}',
                                   stringBuffer);
                    @else:
    bool ok = getRightPaddedString (p->m@field['name'],
                                    @field['length'],
                                    '@message_data[msg]['padding']',
                                    stringBuffer);
                    @end
    
    if (not ok)
        return GW_CODEC_ERROR;            

    uint32_t value;
    std::istringstream iss(stringBuffer);
    iss >> value;
    if (iss.bad ())
        return GW_CODEC_ERROR;

    d.setInteger (@field['name'], value);
    }
            @elif field['type'] == 'char':
                @if field.get('length', None) is None:
    d.setString (@field['name'], "%c", p->m@field['name']);
                @elif field.get('length', None) == '-':
    {
    uint16_t messageLength = ntohs(hdr->mMessageLength);
    uint16_t totalLength = messageLength + 2;

    size_t offset = sizeof(@{name}Header) + @{offsetof(msg, field['name'], message_fields[msg])};
    unsigned char* ptr = (unsigned char*)hdr + offset;
    
    std::string buffer ((const char*)ptr, totalLength - offset);
    d.setString (@field['name'], "%s", buffer.c_str ());
    }
                @elif message_data[msg].get('stringAlignment', None):
    {
    std::string stringBuffer;
                    @if field['stringAlignment'] == 'right':
    bool ok = getLeftPaddedString (p->m@field['name'],
                                   @field['length'],
                                   '@{message_data[msg]['padding']}',
                                   stringBuffer);
                    @else:
    bool ok = getRightPaddedString (p->m@field['name'],
                                    @field['length'],
                                    '@message_data[msg]['padding']',
                                    stringBuffer);
                    @end
    
    if (not ok)
        return GW_CODEC_ERROR;
    d.setString (@field['name'], stringBuffer);
    }
                @else:
    d.setString (@field['name'], std::string(p->m@field['name'], @{field['length']}));
                @end
            @elif 'int' in field['type']:
                @if message_data[msg].get('endian') is not None:
                    @if message_data[msg]['endian'] == 'big':
                        @if '16' in field['type']:
    d.setInteger (@field['name'], ntohs (p->m@field['name']));
                        @elif '32' in field['type']:
    d.setInteger (@field['name'], ntohl (p->m@field['name']));
                        @elif '64' in field['type']:
    d.setInteger (@field['name'], ntohll (p->m@field['name']));
                        @else:
    d.setInteger (@field['name'], p->m@field['name']);
                        @end
                    @else:
    d.setInteger (@field['name'], p->m@field['name']);
                    @end
                @else:
    d.setInteger (@field['name'], p->m@field['name']);
                @end
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
            @if field['name'] == 'TransactTime':
        if (!d.getInteger (TransactTimeSeconds, &p->mTransactTimeSeconds))
        {
            setLastError ("invalid or missing TransactTimeSeconds");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeUsecs, &p->mTransactTimeUsecs))
        {
            setLastError ("invalid or missing TransactTimeUsecs");
            return GW_CODEC_ERROR;
        }
            @elif field['type'] == 'number' and field['length'] is not None:
        {
            uint32_t value;
            if (!d.getInteger (@field['name'], &value))
            {
                setLastError ("invalid or missing Sequence Number");
                return GW_CODEC_ERROR;
            }
            std::ostringstream oss;
            oss << value;
            if (oss.bad ())
            {
                setLastError ("invalid value");
                return GW_CODEC_ERROR;
            }
            std::string stringValue = oss.str ();
                @if field['stringAlignment'] == 'right':
            if (!setLeftPaddedStringBuf(stringValue, p->m@field['name'], sizeof p->m@field['name'], '@message_data[msg]['padding']'))
            {
                setLastError ("@field['name'] missing or not string");
                return GW_CODEC_ERROR;
            }
                @else:
            if (!setRightPaddedStringBuf(stringValue, p->m@field['name'], sizeof p->m@field['name'], '@message_data[msg]['padding']'))
            {
                setLastError ("@field['name'] missing or not string");
                return GW_CODEC_ERROR;
            }   
                @end
        }
            @elif field['type'] == 'char':
                @if field.get('length', None) is None or field['length'] == '-':
        if (!putCharacter (d, @field['name'], &p->m@field['name']))
        {
            setLastError ("invalid or missing @field['name']");
            return GW_CODEC_ERROR;
        }
                @elif message_data[msg].get('stringAlignment', None):
                    @if field['stringAlignment'] == 'right':
        if (!setLeftPaddedString(d, @field['name'], p->m@field['name'], sizeof p->m@field['name'], '@message_data[msg]['padding']'))
        {
            setLastError ("@field['name'] missing or not string");
            return GW_CODEC_ERROR;
        }
                    @else:
        if (!setRightPaddedString(d, @field['name'], p->m@field['name'], sizeof p->m@field['name'], '@message_data[msg]['padding']'))
        {
            setLastError ("@field['name'] missing or not string");
            return GW_CODEC_ERROR;
        }
                    @end
                @else:
        if (!putString (d, @field['name'], p->m@field['name'], sizeof p->m@field['name']))
        {
            setLastError ("@field['name'] missing or not string");
            return GW_CODEC_ERROR;
        }
            @end
            @elif 'int' in field['type']:
        {
            @{field['type']} tmp;
            if (!d.getInteger (@field['name'], &tmp))
            {
                setLastError ("invalid or missing @field['name']");
                return GW_CODEC_ERROR;
            }
            p->set@field['name'] (tmp);
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

    uint16_t messageLength = ntohs(hdr->mMessageLength);
    if (len < (uint16_t)(messageLength + 2))
        return GW_CODEC_SHORT;

    used = messageLength + 2;
    d.setString (MessageType, "%c", hdr->mMessageType);
    d.setInteger (MessageLength, messageLength);

    @for msgType in duplicate_messages.keys():
    if (hdr->mMessageType == '@{msgType}')
    {
        char swxMessageType = *((const unsigned char*)buf + sizeof(@{name}Header));
        @for msg in duplicate_messages[msgType]:
        if (swxMessageType == '@{message_data[msg]['type']}')
        {
            return get@{msg!!remove_space} (d, hdr);
        }
        @end

        std::ostringstream ss;
        ss << "unhandled decode type: " << swxMessageType;
        setLastError (ss.str ());
        return GW_CODEC_ERROR;
    }
    @end
    
    switch (hdr->mMessageType) {
        @for msg in messages:
            @if message_data[msg]['msgtype'] not in duplicate_messages.keys():
        case '@{message_data[msg]["msgtype"]}':
            return get@{msg!!remove_space} (d, hdr);
            @end
        @end
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }

    return GW_CODEC_SUCCESS;
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

    codecState state;
    uint16_t payloadLength = 0;

    @for msgType in duplicate_messages.keys():
    if (hdr->mMessageType == '@{msgType}')
    {
        std::string swxMessageTypeStr;
        bool ok = d.getString (Type, swxMessageTypeStr);
        if (not ok)
        {
            setLastError ("Type missing or not string");
            return GW_CODEC_ERROR;
        }
        char swxMessageType = swxMessageTypeStr[0];
        
        @for msg in duplicate_messages[msgType]:
        if (swxMessageType == '@{message_data[msg]['type']}')
        {
            state = put@{msg!!remove_space} (d, hdr, len, used);
            payloadLength = sizeof (@{name}@{msg!!remove_space});
            goto encode_done;
        }
        @end

        std::ostringstream ss;
        ss << "unhandled encode type: " << swxMessageType;
        setLastError (ss.str ());
        return GW_CODEC_ERROR;
    }
    @end

    switch (hdr->mMessageType)
    {
        @for msg in messages:
            @if message_data[msg]['msgtype'] not in duplicate_messages.keys():
        case '@{message_data[msg]["msgtype"]}':
            state = put@{msg!!remove_space} (d, hdr, len, used);
            payloadLength = sizeof (@{name}@{msg!!remove_space});
            break;
            @end
        @end
        
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }

encode_done:
    if (state != GW_CODEC_SUCCESS)
        return state;

    hdr->mMessageLength = htons(payloadLength - 2);
    return GW_CODEC_SUCCESS;
}

} // namespace neueda
