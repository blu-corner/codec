/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_LOGONACK_PACKET_H_
#define _OPTIQ_LOGONACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqLogonAckPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        char mExchangeID[8];
        uint32_t mLastClMsgSeqNum;

    optiqLogonAckPacket ()
    {
        mFrameLength = sizeof (optiqLogonAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqLogonAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqLogonAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        memset (mExchangeID, 0, 8);
        mLastClMsgSeqNum = 0;
    }

    
    string getExchangeID () const
    {
        return getString (mExchangeID, sizeof (mExchangeID));
    }

    bool setExchangeID (const string& val)
    {
        return setString (mExchangeID, val, sizeof (mExchangeID));
    }
    
    uint32_t getLastClMsgSeqNum () const
    {
        return mLastClMsgSeqNum;
    }

    bool setLastClMsgSeqNum (uint32_t val)
    {
        mLastClMsgSeqNum = val;
        return true;
    }
});

} // namespace neueda

#endif
