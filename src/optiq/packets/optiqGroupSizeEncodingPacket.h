/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_OPTIQGROUPSIZEENCODINGPACKET_PACKET_H_
#define _OPTIQ_OPTIQGROUPSIZEENCODINGPACKET_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"


namespace neueda
{

PACKED(class optiqGroupSizeEncodingPacket
{
public:
        uint8_t mBlockLength;
        uint8_t mNumInGroup;

    optiqGroupSizeEncodingPacket ()
    {
        mBlockLength = 0;
        mNumInGroup = 0;
    }

    
    uint8_t getBlockLength () const
    {
        return mBlockLength;
    }

    bool setBlockLength (uint8_t val)
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
