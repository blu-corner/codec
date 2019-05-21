/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_LIQUIDITYPROVIDERCOMMAND_PACKET_H_
#define _OPTIQ_LIQUIDITYPROVIDERCOMMAND_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqLiquidityProviderCommandPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int32_t mExecutionWithinFirmShortCode;
        int32_t mClientIdentificationShortcode;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mLPActionCode;

    optiqLiquidityProviderCommandPacket ()
    {
        mFrameLength = sizeof (optiqLiquidityProviderCommandPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqLiquidityProviderCommandPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqLiquidityProviderCommandTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mExecutionWithinFirmShortCode = 0;
        mClientIdentificationShortcode = INT32_MIN;
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mLPActionCode = 0;
    }

    
    uint32_t getClMsgSeqNum () const
    {
        return mClMsgSeqNum;
    }

    bool setClMsgSeqNum (uint32_t val)
    {
        mClMsgSeqNum = val;
        return true;
    }
    
    string getFirmID () const
    {
        return getString (mFirmID, sizeof (mFirmID));
    }

    bool setFirmID (const string& val)
    {
        return setString (mFirmID, val, sizeof (mFirmID));
    }
    
    uint64_t getSendingTime () const
    {
        return mSendingTime;
    }

    bool setSendingTime (uint64_t val)
    {
        mSendingTime = val;
        return true;
    }
    
    int32_t getExecutionWithinFirmShortCode () const
    {
        return mExecutionWithinFirmShortCode;
    }

    bool setExecutionWithinFirmShortCode (int32_t val)
    {
        mExecutionWithinFirmShortCode = val;
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
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
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
    
    uint8_t getLPActionCode () const
    {
        return mLPActionCode;
    }

    bool setLPActionCode (uint8_t val)
    {
        mLPActionCode = val;
        return true;
    }
});

} // namespace neueda

#endif
