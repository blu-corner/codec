/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_TECHNICALREJECT_PACKET_H_
#define _OPTIQ_TECHNICALREJECT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqTechnicalRejectPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint64_t mOEGOUTToMember;
        uint32_t mRejectedClientMessageSequenceNumber;
        uint8_t mRejectedMessage;
        uint16_t mErrorCode;
        uint16_t mRejectedMessageID;

    optiqTechnicalRejectPacket ()
    {
        mFrameLength = sizeof (optiqTechnicalRejectPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqTechnicalRejectPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqTechnicalRejectTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mOEGOUTToMember = UINT64_MAX;
        mRejectedClientMessageSequenceNumber = UINT32_MAX;
        mRejectedMessage = UINT8_MAX;
        mErrorCode = 0;
        mRejectedMessageID = UINT16_MAX;
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
    
    uint32_t getRejectedClientMessageSequenceNumber () const
    {
        return mRejectedClientMessageSequenceNumber;
    }

    bool setRejectedClientMessageSequenceNumber (uint32_t val)
    {
        mRejectedClientMessageSequenceNumber = val;
        return true;
    }
    
    uint8_t getRejectedMessage () const
    {
        return mRejectedMessage;
    }

    bool setRejectedMessage (uint8_t val)
    {
        mRejectedMessage = val;
        return true;
    }
    
    uint16_t getErrorCode () const
    {
        return mErrorCode;
    }

    bool setErrorCode (uint16_t val)
    {
        mErrorCode = val;
        return true;
    }
    
    uint16_t getRejectedMessageID () const
    {
        return mRejectedMessageID;
    }

    bool setRejectedMessageID (uint16_t val)
    {
        mRejectedMessageID = val;
        return true;
    }
});

} // namespace neueda

#endif
