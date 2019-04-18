/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_LOGONREJECT_PACKET_H_
#define _OPTIQ_LOGONREJECT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqLogonRejectPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        char mExchangeID[8];
        uint8_t mLogonRejectCode;
        uint32_t mLastClMsgSeqNum;
        uint32_t mLastMsgSeqNum;

    optiqLogonRejectPacket ()
    {
        mFrameLength = sizeof (optiqLogonRejectPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqLogonRejectPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqLogonRejectTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        memset (mExchangeID, 0, 8);
        mLogonRejectCode = 0;
        mLastClMsgSeqNum = 0;
        mLastMsgSeqNum = 0;
    }

    
    string getExchangeID () const
    {
        return getString (mExchangeID, sizeof (mExchangeID));
    }

    bool setExchangeID (const string& val)
    {
        return setString (mExchangeID, val, sizeof (mExchangeID));
    }
    
    uint8_t getLogonRejectCode () const
    {
        return mLogonRejectCode;
    }

    bool setLogonRejectCode (uint8_t val)
    {
        mLogonRejectCode = val;
        return true;
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
    
    uint32_t getLastMsgSeqNum () const
    {
        return mLastMsgSeqNum;
    }

    bool setLastMsgSeqNum (uint32_t val)
    {
        mLastMsgSeqNum = val;
        return true;
    }
});

} // namespace neueda

#endif
