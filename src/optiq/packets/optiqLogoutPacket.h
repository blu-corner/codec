/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_LOGOUT_PACKET_H_
#define _OPTIQ_LOGOUT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqLogoutPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint8_t mLogOutReasonCode;

    optiqLogoutPacket ()
    {
        mFrameLength = sizeof (optiqLogoutPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqLogoutPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqLogoutTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mLogOutReasonCode = 0;
    }

    
    uint8_t getLogOutReasonCode () const
    {
        return mLogOutReasonCode;
    }

    bool setLogOutReasonCode (uint8_t val)
    {
        mLogOutReasonCode = val;
        return true;
    }
});

} // namespace neueda

#endif
