/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_FUNDPRICEINPUT_PACKET_H_
#define _OPTIQ_FUNDPRICEINPUT_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqFundPriceInputPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        int64_t mPrice;
        uint8_t mBypassIndicator;

    optiqFundPriceInputPacket ()
    {
        mFrameLength = sizeof (optiqFundPriceInputPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqFundPriceInputPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqFundPriceInputTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mPrice = 0;
        mBypassIndicator = UINT8_MAX;
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
    
    int64_t getPrice () const
    {
        return mPrice;
    }

    bool setPrice (int64_t val)
    {
        mPrice = val;
        return true;
    }
    
    uint8_t getBypassIndicator () const
    {
        return mBypassIndicator;
    }

    bool setBypassIndicator (uint8_t val)
    {
        mBypassIndicator = val;
        return true;
    }
});

} // namespace neueda

#endif
