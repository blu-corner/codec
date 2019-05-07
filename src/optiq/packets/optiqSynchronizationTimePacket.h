/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_SYNCHRONIZATIONTIME_PACKET_H_
#define _OPTIQ_SYNCHRONIZATIONTIME_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqSynchronizationTimePacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        uint64_t mOEGOUTToMember;
        uint16_t mResynchronizationID;
        uint64_t mLastBookInTime;

    optiqSynchronizationTimePacket ()
    {
        mFrameLength = sizeof (optiqSynchronizationTimePacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqSynchronizationTimePacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqSynchronizationTimeTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mMsgSeqNum = 0;
        mOEGOUTToMember = UINT64_MAX;
        mResynchronizationID = 0;
        mLastBookInTime = 0;
    }

    
    uint32_t getMsgSeqNum () const
    {
        return mMsgSeqNum;
    }

    bool setMsgSeqNum (uint32_t val)
    {
        mMsgSeqNum = val;
        return true;
    }
    
    uint64_t getOEGOUTToMember () const
    {
        return mOEGOUTToMember;
    }

    bool setOEGOUTToMember (uint64_t val)
    {
        mOEGOUTToMember = val;
        return true;
    }
    
    uint16_t getResynchronizationID () const
    {
        return mResynchronizationID;
    }

    bool setResynchronizationID (uint16_t val)
    {
        mResynchronizationID = val;
        return true;
    }
    
    uint64_t getLastBookInTime () const
    {
        return mLastBookInTime;
    }

    bool setLastBookInTime (uint64_t val)
    {
        mLastBookInTime = val;
        return true;
    }
});

} // namespace neueda

#endif
