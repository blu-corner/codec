/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_QUOTESQUOTESREP_PACKET_H_
#define _OPTIQ_QUOTESQUOTESREP_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqQuotesQuotesRepPacket
{
public:
        uint64_t mBidSize;
        int64_t mBidPx;
        uint64_t mOfferSize;
        int64_t mOfferPx;
        uint32_t mSymbolIndex;
        uint8_t mEMM;

    optiqQuotesQuotesRepPacket ()
    {
        mBidSize = UINT64_MAX;
        mBidPx = INT64_MIN;
        mOfferSize = UINT64_MAX;
        mOfferPx = INT64_MIN;
        mSymbolIndex = 0;
        mEMM = 0;
    }

    
    uint64_t getBidSize () const
    {
        return mBidSize;
    }

    bool setBidSize (uint64_t val)
    {
        mBidSize = val;
        return true;
    }
    
    int64_t getBidPx () const
    {
        return mBidPx;
    }

    bool setBidPx (int64_t val)
    {
        mBidPx = val;
        return true;
    }
    
    uint64_t getOfferSize () const
    {
        return mOfferSize;
    }

    bool setOfferSize (uint64_t val)
    {
        mOfferSize = val;
        return true;
    }
    
    int64_t getOfferPx () const
    {
        return mOfferPx;
    }

    bool setOfferPx (int64_t val)
    {
        mOfferPx = val;
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

});

} // namespace neueda

#endif
