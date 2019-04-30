/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_QUOTES_PACKET_H_
#define _OPTIQ_QUOTES_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqQuotesPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int64_t mClientOrderID;
        int32_t mExecutionWithinFirmShortCode;
        uint8_t mTradingCapacity;
        uint8_t mAccountType;
        uint8_t mLPRole;
        uint8_t mMiFIDIndicators;
        uint8_t mRFEAnswer;

    optiqQuotesPacket ()
    {
        mFrameLength = sizeof (optiqQuotesPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqQuotesPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqQuotesTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mClientOrderID = 0;
        mExecutionWithinFirmShortCode = 0;
        mTradingCapacity = 0;
        mAccountType = 0;
        mLPRole = 0;
        mMiFIDIndicators = 0;
        mRFEAnswer = 0;
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
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
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
    
    uint8_t getTradingCapacity () const
    {
        return mTradingCapacity;
    }

    bool setTradingCapacity (uint8_t val)
    {
        mTradingCapacity = val;
        return true;
    }
    
    uint8_t getAccountType () const
    {
        return mAccountType;
    }

    bool setAccountType (uint8_t val)
    {
        mAccountType = val;
        return true;
    }
    
    uint8_t getLPRole () const
    {
        return mLPRole;
    }

    bool setLPRole (uint8_t val)
    {
        mLPRole = val;
        return true;
    }
    
    uint8_t getMiFIDIndicators () const
    {
        return mMiFIDIndicators;
    }

    bool setMiFIDIndicators (uint8_t val)
    {
        mMiFIDIndicators = val;
        return true;
    }
    bool getMiFIDIndicators_DEAIndicator () const
    {
        return ((mMiFIDIndicators >> OPTIQ_MIFIDINDICATORS_DEAINDICATOR) & 1);
    }

    void setMiFIDIndicators_DEAIndicator ()
    {
        mMiFIDIndicators |= OPTIQ_MIFIDINDICATORS_DEAINDICATOR;
    }

    bool getMiFIDIndicators_InvestmentAlgoIndicator () const
    {
        return ((mMiFIDIndicators >> OPTIQ_MIFIDINDICATORS_INVESTMENTALGOINDICATOR) & 1);
    }

    void setMiFIDIndicators_InvestmentAlgoIndicator ()
    {
        mMiFIDIndicators |= OPTIQ_MIFIDINDICATORS_INVESTMENTALGOINDICATOR;
    }

    bool getMiFIDIndicators_ExecutionAlgoIndicator () const
    {
        return ((mMiFIDIndicators >> OPTIQ_MIFIDINDICATORS_EXECUTIONALGOINDICATOR) & 1);
    }

    void setMiFIDIndicators_ExecutionAlgoIndicator ()
    {
        mMiFIDIndicators |= OPTIQ_MIFIDINDICATORS_EXECUTIONALGOINDICATOR;
    }

    bool getMiFIDIndicators_CommodityDerivativeIndicator () const
    {
        return ((mMiFIDIndicators >> OPTIQ_MIFIDINDICATORS_COMMODITYDERIVATIVEINDICATOR) & 1);
    }

    void setMiFIDIndicators_CommodityDerivativeIndicator ()
    {
        mMiFIDIndicators |= OPTIQ_MIFIDINDICATORS_COMMODITYDERIVATIVEINDICATOR;
    }

    bool getMiFIDIndicators_DeferralIndicator () const
    {
        return ((mMiFIDIndicators >> OPTIQ_MIFIDINDICATORS_DEFERRALINDICATOR) & 1);
    }

    void setMiFIDIndicators_DeferralIndicator ()
    {
        mMiFIDIndicators |= OPTIQ_MIFIDINDICATORS_DEFERRALINDICATOR;
    }

    
    uint8_t getRFEAnswer () const
    {
        return mRFEAnswer;
    }

    bool setRFEAnswer (uint8_t val)
    {
        mRFEAnswer = val;
        return true;
    }
});

} // namespace neueda

#endif
