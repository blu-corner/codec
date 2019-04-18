/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_COLLARBREACHCONFIRMATION_PACKET_H_
#define _OPTIQ_COLLARBREACHCONFIRMATION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqCollarBreachConfirmationPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int32_t mExecutionWithinFirmShortCode;
        int32_t mClientIdentificationShortcode;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint64_t mOrderID;
        int64_t mOrigClientOrderID;

    optiqCollarBreachConfirmationPacket ()
    {
        mFrameLength = sizeof (optiqCollarBreachConfirmationPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqCollarBreachConfirmationPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqCollarBreachConfirmationTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mExecutionWithinFirmShortCode = 0;
        mClientIdentificationShortcode = INT32_MIN;
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mOrderID = UINT64_MAX;
        mOrigClientOrderID = INT64_MIN;
    }

    
    uint32_t getClMsgSeqNum () const
    {
        return mClMsgSeqNum;
    }

    bool setClMsgSeqNum (uint32_t val)
    {
        mClMsgSeqNum = val;
        return true;
    }
    
    string getFirmID () const
    {
        return getString (mFirmID, sizeof (mFirmID));
    }

    bool setFirmID (const string& val)
    {
        return setString (mFirmID, val, sizeof (mFirmID));
    }
    
    uint64_t getSendingTime () const
    {
        return mSendingTime;
    }

    bool setSendingTime (uint64_t val)
    {
        mSendingTime = val;
        return true;
    }
    
    int32_t getExecutionWithinFirmShortCode () const
    {
        return mExecutionWithinFirmShortCode;
    }

    bool setExecutionWithinFirmShortCode (int32_t val)
    {
        mExecutionWithinFirmShortCode = val;
        return true;
    }
    
    int32_t getClientIdentificationShortcode () const
    {
        return mClientIdentificationShortcode;
    }

    bool setClientIdentificationShortcode (int32_t val)
    {
        mClientIdentificationShortcode = val;
        return true;
    }
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
        return true;
    }
    
    uint32_t getSymbolIndex () const
    {
        return mSymbolIndex;
    }

    bool setSymbolIndex (uint32_t val)
    {
        mSymbolIndex = val;
        return true;
    }
    
    uint8_t getEMM () const
    {
        return mEMM;
    }

    bool setEMM (uint8_t val)
    {
        mEMM = val;
        return true;
    }
    
    uint64_t getOrderID () const
    {
        return mOrderID;
    }

    bool setOrderID (uint64_t val)
    {
        mOrderID = val;
        return true;
    }
    
    int64_t getOrigClientOrderID () const
    {
        return mOrigClientOrderID;
    }

    bool setOrigClientOrderID (int64_t val)
    {
        mOrigClientOrderID = val;
        return true;
    }
});

} // namespace neueda

#endif
