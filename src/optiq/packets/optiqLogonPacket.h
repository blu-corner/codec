/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_LOGON_PACKET_H_
#define _OPTIQ_LOGON_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqLogonPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mLogicalAccessID;
        uint16_t mOEPartitionID;
        uint32_t mLastMsgSeqNum;
        char mSoftwareProvider[8];
        uint8_t mQueueingIndicator;

    optiqLogonPacket ()
    {
        mFrameLength = sizeof (optiqLogonPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqLogonPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqLogonTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mLogicalAccessID = 0;
        mOEPartitionID = 0;
        mLastMsgSeqNum = UINT32_MAX;
        memset (mSoftwareProvider, 0, 8);
        mQueueingIndicator = 0;
    }

    
    uint32_t getLogicalAccessID () const
    {
        return mLogicalAccessID;
    }

    bool setLogicalAccessID (uint32_t val)
    {
        mLogicalAccessID = val;
        return true;
    }
    
    uint16_t getOEPartitionID () const
    {
        return mOEPartitionID;
    }

    bool setOEPartitionID (uint16_t val)
    {
        mOEPartitionID = val;
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
    
    string getSoftwareProvider () const
    {
        return getString (mSoftwareProvider, sizeof (mSoftwareProvider));
    }

    bool setSoftwareProvider (const string& val)
    {
        return setString (mSoftwareProvider, val, sizeof (mSoftwareProvider));
    }
    
    uint8_t getQueueingIndicator () const
    {
        return mQueueingIndicator;
    }

    bool setQueueingIndicator (uint8_t val)
    {
        mQueueingIndicator = val;
        return true;
    }
});

} // namespace neueda

#endif
