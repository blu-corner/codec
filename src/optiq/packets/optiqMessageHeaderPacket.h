/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_OPTIQMESSAGEHEADERPACKET_PACKET_H_
#define _OPTIQ_OPTIQMESSAGEHEADERPACKET_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"


namespace neueda
{

PACKED(class optiqMessageHeaderPacket
{
public:
        uint16_t mBlockLength;
        uint16_t mTemplateId;
        uint16_t mSchemaId;
        uint16_t mVersion;

    optiqMessageHeaderPacket ()
    {
        mBlockLength = 0;
        mTemplateId = 0;
        mSchemaId = 0;
        mVersion = 0;
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
    
    uint16_t getTemplateId () const
    {
        return mTemplateId;
    }

    bool setTemplateId (uint16_t val)
    {
        mTemplateId = val;
        return true;
    }
    
    uint16_t getSchemaId () const
    {
        return mSchemaId;
    }

    bool setSchemaId (uint16_t val)
    {
        mSchemaId = val;
        return true;
    }
    
    uint16_t getVersion () const
    {
        return mVersion;
    }

    bool setVersion (uint16_t val)
    {
        mVersion = val;
        return true;
    }

});

} // namespace neueda

#endif
