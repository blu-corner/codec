/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_HEARTBEAT_PACKET_H_
#define _OPTIQ_HEARTBEAT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqHeartbeatPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;

    optiqHeartbeatPacket ()
    {
        mFrameLength = sizeof (optiqHeartbeatPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqHeartbeatPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqHeartbeatTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
    }

});

} // namespace neueda

#endif
