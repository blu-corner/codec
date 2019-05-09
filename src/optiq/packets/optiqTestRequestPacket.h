/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_TESTREQUEST_PACKET_H_
#define _OPTIQ_TESTREQUEST_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqTestRequestPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;

    optiqTestRequestPacket ()
    {
        mFrameLength = sizeof (optiqTestRequestPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqTestRequestPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqTestRequestTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
    }

});

} // namespace neueda

#endif
