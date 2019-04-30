/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_FILLOPTIONALFIELDSFILL_PACKET_H_
#define _OPTIQ_FILLOPTIONALFIELDSFILL_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqFillOptionalFieldsFillPacket
{
public:
        char mCounterpartFirmID[8];
        int64_t mOtherLegLastPx;
        char mPackageID[12];
        uint32_t mUnderlyingInstrumentID;

    optiqFillOptionalFieldsFillPacket ()
    {
        memset (mCounterpartFirmID, 0, 8);
        mOtherLegLastPx = INT64_MIN;
        memset (mPackageID, 0, 12);
        mUnderlyingInstrumentID = UINT32_MAX;
    }

    
    string getCounterpartFirmID () const
    {
        return getString (mCounterpartFirmID, sizeof (mCounterpartFirmID));
    }

    bool setCounterpartFirmID (const string& val)
    {
        return setString (mCounterpartFirmID, val, sizeof (mCounterpartFirmID));
    }
    
    int64_t getOtherLegLastPx () const
    {
        return mOtherLegLastPx;
    }

    bool setOtherLegLastPx (int64_t val)
    {
        mOtherLegLastPx = val;
        return true;
    }
    
    string getPackageID () const
    {
        return getString (mPackageID, sizeof (mPackageID));
    }

    bool setPackageID (const string& val)
    {
        return setString (mPackageID, val, sizeof (mPackageID));
    }
    
    uint32_t getUnderlyingInstrumentID () const
    {
        return mUnderlyingInstrumentID;
    }

    bool setUnderlyingInstrumentID (uint32_t val)
    {
        mUnderlyingInstrumentID = val;
        return true;
    }

});

} // namespace neueda

#endif
