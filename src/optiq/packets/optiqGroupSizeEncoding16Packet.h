/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08:18:20 18/04/19
 */
#ifndef _OPTIQ_OPTIQGROUPSIZEENCODING16PACKET_PACKET_H_
#define _OPTIQ_OPTIQGROUPSIZEENCODING16PACKET_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"


namespace neueda
{

PACKED(class optiqGroupSizeEncoding16Packet
{
public:
        uint16_t mBlockLength;
        uint8_t mNumInGroup;

    optiqGroupSizeEncoding16Packet ()
    {
        mBlockLength = 0;
        mNumInGroup = 0;
    }

    
    uint16_t getBlockLength () const
    {
        return mBlockLength;
    }

    bool setBlockLength (uint16_t val)
    {
        mBlockLength = val;
        return true;
    }
    
    uint8_t getNumInGroup () const
    {
        return mNumInGroup;
    }

    bool setNumInGroup (uint8_t val)
    {
        mNumInGroup = val;
        return true;
    }

});

} // namespace neueda

#endif
