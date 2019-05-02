/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_INSTRUMENTSYNCHRONIZATIONLISTINSTRUMENTSYNCHRONIZATIONSECTION_PACKET_H_
#define _OPTIQ_INSTRUMENTSYNCHRONIZATIONLISTINSTRUMENTSYNCHRONIZATIONSECTION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket
{
public:
        uint32_t mSymbolIndex;
        uint8_t mEMM;

    optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket ()
    {
        mSymbolIndex = 0;
        mEMM = 0;
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
