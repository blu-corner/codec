/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_REJECTCOLLARFIELDS_PACKET_H_
#define _OPTIQ_REJECTCOLLARFIELDS_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqRejectCollarFieldsPacket
{
public:
        uint8_t mCollarRejType;
        int64_t mBreachedCollarPrice;

    optiqRejectCollarFieldsPacket ()
    {
        mCollarRejType = 0;
        mBreachedCollarPrice = INT64_MIN;
    }

    
    uint8_t getCollarRejType () const
    {
        return mCollarRejType;
    }

    bool setCollarRejType (uint8_t val)
    {
        mCollarRejType = val;
        return true;
    }
    
    int64_t getBreachedCollarPrice () const
    {
        return mBreachedCollarPrice;
    }

    bool setBreachedCollarPrice (int64_t val)
    {
        mBreachedCollarPrice = val;
        return true;
    }

});

} // namespace neueda

#endif
