/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_FUNDPRICEINPUTACK_PACKET_H_
#define _OPTIQ_FUNDPRICEINPUTACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqFundPriceInputAckPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        int64_t mPrice;
        uint8_t mBypassIndicator;

    optiqFundPriceInputAckPacket ()
    {
        mFrameLength = sizeof (optiqFundPriceInputAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqFundPriceInputAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqFundPriceInputAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mPrice = 0;
        mBypassIndicator = UINT8_MAX;
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
    
    string getFirmID () const
    {
        return getString (mFirmID, sizeof (mFirmID));
    }

    bool setFirmID (const string& val)
    {
        return setString (mFirmID, val, sizeof (mFirmID));
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
