/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_FILLSTRATEGYFIELDS_PACKET_H_
#define _OPTIQ_FILLSTRATEGYFIELDS_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqFillStrategyFieldsPacket
{
public:
        int64_t mLegLastPx;
        uint64_t mLegLastQty;
        uint32_t mLegInstrumentID;
        uint8_t mLegSide;

    optiqFillStrategyFieldsPacket ()
    {
        mLegLastPx = INT64_MIN;
        mLegLastQty = UINT64_MAX;
        mLegInstrumentID = UINT32_MAX;
        mLegSide = 0;
    }

    
    int64_t getLegLastPx () const
    {
        return mLegLastPx;
    }

    bool setLegLastPx (int64_t val)
    {
        mLegLastPx = val;
        return true;
    }
    
    uint64_t getLegLastQty () const
    {
        return mLegLastQty;
    }

    bool setLegLastQty (uint64_t val)
    {
        mLegLastQty = val;
        return true;
    }
    
    uint32_t getLegInstrumentID () const
    {
        return mLegInstrumentID;
    }

    bool setLegInstrumentID (uint32_t val)
    {
        mLegInstrumentID = val;
        return true;
    }
    
    uint8_t getLegSide () const
    {
        return mLegSide;
    }

    bool setLegSide (uint8_t val)
    {
        mLegSide = val;
        return true;
    }

});

} // namespace neueda

#endif
