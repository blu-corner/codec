/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_QUOTEACKQUOTEACKS_PACKET_H_
#define _OPTIQ_QUOTEACKQUOTEACKS_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqQuoteAckQuoteAcksPacket
{
public:
        uint64_t mBidOrderID;
        uint64_t mOfferOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mBuyRevisionFlag;
        uint8_t mSellRevisionFlag;
        uint16_t mBidErrorCode;
        uint16_t mOfferErrorCode;

    optiqQuoteAckQuoteAcksPacket ()
    {
        mBidOrderID = UINT64_MAX;
        mOfferOrderID = UINT64_MAX;
        mSymbolIndex = 0;
        mEMM = 0;
        mBuyRevisionFlag = 0;
        mSellRevisionFlag = 0;
        mBidErrorCode = UINT16_MAX;
        mOfferErrorCode = UINT16_MAX;
    }

    
    uint64_t getBidOrderID () const
    {
        return mBidOrderID;
    }

    bool setBidOrderID (uint64_t val)
    {
        mBidOrderID = val;
        return true;
    }
    
    uint64_t getOfferOrderID () const
    {
        return mOfferOrderID;
    }

    bool setOfferOrderID (uint64_t val)
    {
        mOfferOrderID = val;
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
    
    uint8_t getBuyRevisionFlag () const
    {
        return mBuyRevisionFlag;
    }

    bool setBuyRevisionFlag (uint8_t val)
    {
        mBuyRevisionFlag = val;
        return true;
    }
    
    uint8_t getSellRevisionFlag () const
    {
        return mSellRevisionFlag;
    }

    bool setSellRevisionFlag (uint8_t val)
    {
        mSellRevisionFlag = val;
        return true;
    }
    
    uint16_t getBidErrorCode () const
    {
        return mBidErrorCode;
    }

    bool setBidErrorCode (uint16_t val)
    {
        mBidErrorCode = val;
        return true;
    }
    
    uint16_t getOfferErrorCode () const
    {
        return mOfferErrorCode;
    }

    bool setOfferErrorCode (uint16_t val)
    {
        mOfferErrorCode = val;
        return true;
    }

});

} // namespace neueda

#endif
