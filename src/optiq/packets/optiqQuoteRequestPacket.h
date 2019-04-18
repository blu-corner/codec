/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_QUOTEREQUEST_PACKET_H_
#define _OPTIQ_QUOTEREQUEST_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqQuoteRequestPacket
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
        uint64_t mOrderQty;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mOrderSide;
        uint8_t mFirmIDPublication;
        char mEndClient[11];

    optiqQuoteRequestPacket ()
    {
        mFrameLength = sizeof (optiqQuoteRequestPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqQuoteRequestPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqQuoteRequestTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mExecutionWithinFirmShortCode = 0;
        mClientIdentificationShortcode = INT32_MIN;
        mClientOrderID = 0;
        mOrderQty = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mOrderSide = 0;
        mFirmIDPublication = 0;
        memset (mEndClient, 0, 11);
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
    
    uint64_t getOrderQty () const
    {
        return mOrderQty;
    }

    bool setOrderQty (uint64_t val)
    {
        mOrderQty = val;
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
    
    uint8_t getOrderSide () const
    {
        return mOrderSide;
    }

    bool setOrderSide (uint8_t val)
    {
        mOrderSide = val;
        return true;
    }
    
    uint8_t getFirmIDPublication () const
    {
        return mFirmIDPublication;
    }

    bool setFirmIDPublication (uint8_t val)
    {
        mFirmIDPublication = val;
        return true;
    }
    
    string getEndClient () const
    {
        return getString (mEndClient, sizeof (mEndClient));
    }

    bool setEndClient (const string& val)
    {
        return setString (mEndClient, val, sizeof (mEndClient));
    }
});

} // namespace neueda

#endif
