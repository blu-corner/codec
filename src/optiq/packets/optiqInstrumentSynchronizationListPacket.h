/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_INSTRUMENTSYNCHRONIZATIONLIST_PACKET_H_
#define _OPTIQ_INSTRUMENTSYNCHRONIZATIONLIST_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqInstrumentSynchronizationListPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        uint64_t mOEGOUTToMember;
        uint16_t mResynchronizationID;

    optiqInstrumentSynchronizationListPacket ()
    {
        mFrameLength = sizeof (optiqInstrumentSynchronizationListPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqInstrumentSynchronizationListPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqInstrumentSynchronizationListTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mMsgSeqNum = 0;
        mOEGOUTToMember = UINT64_MAX;
        mResynchronizationID = 0;
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
});

} // namespace neueda

#endif
