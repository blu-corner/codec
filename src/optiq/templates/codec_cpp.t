@require(Venue, venue, generation_date, messages, msg_data, types, get_field, sets, set_field)
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation_date}
 */
#include "@{venue}Codec.h"
#include "@{venue}Packets.h"
#include "fields.h"
#include "codecHelpers.h"
#include <sstream>


namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new @{venue}Codec ();
}

@for msg in messages:
codecState
@{venue}Codec::get@{msg['name']} (cdr& d, const void* buf)
{
    d.setString (MessageName, "@{msg['name']}");

    @if len(msg_data[msg['name']]) > 0:
    const @{venue}@{msg['name']}Packet* packet = (@{venue}@{msg['name']}Packet*)buf;
    size_t offset = sizeof (@{venue}MessageHeaderPacket) + 2;
    @end
    @for field in msg_data[msg['name']]:
    @get_field(field)
    @end
    return GW_CODEC_SUCCESS;
}

@end

@for msg in messages:
codecState
@{venue}Codec::put@{msg['name']} (const cdr& d, void* buf, size_t len, size_t& used)
{
    @{venue}@{msg['name']}Packet base;
    memcpy (buf, &base, sizeof(base));

    @if len(msg_data[msg['name']]) > 0:
    @{venue}@{msg['name']}Packet* packet = (@{venue}@{msg['name']}Packet*)((char*)buf);
    @end
    size_t offset = sizeof (@{venue}MessageHeaderPacket) + 2;

    if (len < sizeof (@{venue}@{msg['name']}Packet))
        return GW_CODEC_SHORT;

    @for field in msg_data[msg['name']]:
    @set_field(field)
    @end
    used += offset;

    return GW_CODEC_SUCCESS;
}

@end

codecState
@{venue}Codec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    if (len < sizeof(@{venue}MessageHeaderPacket))
        return GW_CODEC_SHORT;

    uint16_t frameLength = *((uint16_t*)buf);
    if (len < frameLength)
        return GW_CODEC_SHORT;

    @{venue}MessageHeaderPacket* hdr =
        (@{venue}MessageHeaderPacket*)
            (((unsigned char*)buf) + sizeof(uint16_t));

    used = frameLength;

    std::ostringstream oss;
    oss << hdr->mTemplateId;
    
    d.setInteger (FrameLength, frameLength);
    d.setString (MessageType, "%s", oss.str ().c_str ());
    d.setInteger (TemplateId, hdr->mTemplateId);
    d.setInteger (SchemaId, hdr->mSchemaId);
    d.setInteger (Version, hdr->mVersion);

    switch (hdr->mTemplateId) {
@for message in messages:
        case @{message['id']}:
            return get@{message['name']} (d, buf);
@end
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }

    return GW_CODEC_ERROR;
}

codecState
@{venue}Codec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    if (len < sizeof(@{venue}MessageHeaderPacket))
        return GW_CODEC_SHORT;

    if (!d.isType (TemplateId, CDR_INTEGER, 1))
    {
        setLastError ("TemplateId missing or not string");
        return GW_CODEC_ERROR;
    }
    uint16_t type;
    d.getInteger (TemplateId, type);

    codecState state = GW_CODEC_ERROR;
    switch (type) {
@for message in messages:
        case @{message['id']}:
            state = put@{message['name']} (d, buf, len, used);
            break;
@end
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }

    uint16_t* frameLength = (uint16_t*)buf;
    *frameLength = used;

    return state;
}

} // namespace neueda
