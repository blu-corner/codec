/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_NEWORDERMIFIDSHORTCODES_PACKET_H_
#define _OPTIQ_NEWORDERMIFIDSHORTCODES_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqNewOrderMiFIDShortcodesPacket
{
public:
        int32_t mInvestmentDecisionWFirmShortCode;
        int32_t mNonExecutingBrokerShortCode;
        int32_t mClientIdentificationShortcode;

    optiqNewOrderMiFIDShortcodesPacket ()
    {
        mInvestmentDecisionWFirmShortCode = INT32_MIN;
        mNonExecutingBrokerShortCode = INT32_MIN;
        mClientIdentificationShortcode = INT32_MIN;
    }

    
    int32_t getInvestmentDecisionWFirmShortCode () const
    {
        return mInvestmentDecisionWFirmShortCode;
    }

    bool setInvestmentDecisionWFirmShortCode (int32_t val)
    {
        mInvestmentDecisionWFirmShortCode = val;
        return true;
    }
    
    int32_t getNonExecutingBrokerShortCode () const
    {
        return mNonExecutingBrokerShortCode;
    }

    bool setNonExecutingBrokerShortCode (int32_t val)
    {
        mNonExecutingBrokerShortCode = val;
        return true;
    }
    
    int32_t getClientIdentificationShortcode () const
    {
        return mClientIdentificationShortcode;
    }

    bool setClientIdentificationShortcode (int32_t val)
    {
        mClientIdentificationShortcode = val;
        return true;
    }

});

} // namespace neueda

#endif
