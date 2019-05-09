/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_NEWORDER_PACKET_H_
#define _OPTIQ_NEWORDER_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqNewOrderPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mOrderSide;
        uint8_t mOrderType;
        uint8_t mTimeInForce;
        int64_t mOrderPx;
        uint64_t mOrderQty;
        int32_t mExecutionWithinFirmShortCode;
        uint8_t mTradingCapacity;
        uint8_t mAccountType;
        uint8_t mLPRole;
        uint8_t mExecutionInstruction;
        uint8_t mDarkExecutionInstruction;
        uint8_t mMiFIDIndicators;
        uint16_t mSTPID;

    optiqNewOrderPacket ()
    {
        mFrameLength = sizeof (optiqNewOrderPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqNewOrderPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqNewOrderTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mOrderSide = 0;
        mOrderType = 0;
        mTimeInForce = 0;
        mOrderPx = INT64_MIN;
        mOrderQty = 0;
        mExecutionWithinFirmShortCode = 0;
        mTradingCapacity = 0;
        mAccountType = 0;
        mLPRole = 0;
        mExecutionInstruction = 0;
        mDarkExecutionInstruction = 0;
        mMiFIDIndicators = 0;
        mSTPID = UINT16_MAX;
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
    
    uint8_t getOrderSide () const
    {
        return mOrderSide;
    }

    bool setOrderSide (uint8_t val)
    {
        mOrderSide = val;
        return true;
    }
    
    uint8_t getOrderType () const
    {
        return mOrderType;
    }

    bool setOrderType (uint8_t val)
    {
        mOrderType = val;
        return true;
    }
    
    uint8_t getTimeInForce () const
    {
        return mTimeInForce;
    }

    bool setTimeInForce (uint8_t val)
    {
        mTimeInForce = val;
        return true;
    }
    
    int64_t getOrderPx () const
    {
        return mOrderPx;
    }

    bool setOrderPx (int64_t val)
    {
        mOrderPx = val;
        return true;
    }
    
    uint64_t getOrderQty () const
    {
        return mOrderQty;
    }

    bool setOrderQty (uint64_t val)
    {
        mOrderQty = val;
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
    
    uint8_t getExecutionInstruction () const
    {
        return mExecutionInstruction;
    }

    bool setExecutionInstruction (uint8_t val)
    {
        mExecutionInstruction = val;
        return true;
    }
    bool getExecutionInstruction_STPRestingOrder () const
    {
        return ((mExecutionInstruction >> OPTIQ_EXECUTIONINSTRUCTION_STPRESTINGORDER) & 1);
    }

    void setExecutionInstruction_STPRestingOrder ()
    {
        mExecutionInstruction |= OPTIQ_EXECUTIONINSTRUCTION_STPRESTINGORDER;
    }

    bool getExecutionInstruction_STPIncomingOrder () const
    {
        return ((mExecutionInstruction >> OPTIQ_EXECUTIONINSTRUCTION_STPINCOMINGORDER) & 1);
    }

    void setExecutionInstruction_STPIncomingOrder ()
    {
        mExecutionInstruction |= OPTIQ_EXECUTIONINSTRUCTION_STPINCOMINGORDER;
    }

    bool getExecutionInstruction_DisclosedQuantityRandomization () const
    {
        return ((mExecutionInstruction >> OPTIQ_EXECUTIONINSTRUCTION_DISCLOSEDQUANTITYRANDOMIZATION) & 1);
    }

    void setExecutionInstruction_DisclosedQuantityRandomization ()
    {
        mExecutionInstruction |= OPTIQ_EXECUTIONINSTRUCTION_DISCLOSEDQUANTITYRANDOMIZATION;
    }

    bool getExecutionInstruction_DisabledCancelOnDisconnectIndicator () const
    {
        return ((mExecutionInstruction >> OPTIQ_EXECUTIONINSTRUCTION_DISABLEDCANCELONDISCONNECTINDICATOR) & 1);
    }

    void setExecutionInstruction_DisabledCancelOnDisconnectIndicator ()
    {
        mExecutionInstruction |= OPTIQ_EXECUTIONINSTRUCTION_DISABLEDCANCELONDISCONNECTINDICATOR;
    }

    bool getExecutionInstruction_RFQAnswer () const
    {
        return ((mExecutionInstruction >> OPTIQ_EXECUTIONINSTRUCTION_RFQANSWER) & 1);
    }

    void setExecutionInstruction_RFQAnswer ()
    {
        mExecutionInstruction |= OPTIQ_EXECUTIONINSTRUCTION_RFQANSWER;
    }

    bool getExecutionInstruction_RFQConfirmation () const
    {
        return ((mExecutionInstruction >> OPTIQ_EXECUTIONINSTRUCTION_RFQCONFIRMATION) & 1);
    }

    void setExecutionInstruction_RFQConfirmation ()
    {
        mExecutionInstruction |= OPTIQ_EXECUTIONINSTRUCTION_RFQCONFIRMATION;
    }

    
    uint8_t getDarkExecutionInstruction () const
    {
        return mDarkExecutionInstruction;
    }

    bool setDarkExecutionInstruction (uint8_t val)
    {
        mDarkExecutionInstruction = val;
        return true;
    }
    bool getDarkExecutionInstruction_DarkIndicator () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_DARKINDICATOR) & 1);
    }

    void setDarkExecutionInstruction_DarkIndicator ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_DARKINDICATOR;
    }

    bool getDarkExecutionInstruction_DeferredTradeIndicator () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_DEFERREDTRADEINDICATOR) & 1);
    }

    void setDarkExecutionInstruction_DeferredTradeIndicator ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_DEFERREDTRADEINDICATOR;
    }

    bool getDarkExecutionInstruction_DisplayedOrderInteraction () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_DISPLAYEDORDERINTERACTION) & 1);
    }

    void setDarkExecutionInstruction_DisplayedOrderInteraction ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_DISPLAYEDORDERINTERACTION;
    }

    bool getDarkExecutionInstruction_SweepOrderIndicator () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_SWEEPORDERINDICATOR) & 1);
    }

    void setDarkExecutionInstruction_SweepOrderIndicator ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_SWEEPORDERINDICATOR;
    }

    bool getDarkExecutionInstruction_MinimumQuantityType () const
    {
        return ((mDarkExecutionInstruction >> OPTIQ_DARKEXECUTIONINSTRUCTION_MINIMUMQUANTITYTYPE) & 1);
    }

    void setDarkExecutionInstruction_MinimumQuantityType ()
    {
        mDarkExecutionInstruction |= OPTIQ_DARKEXECUTIONINSTRUCTION_MINIMUMQUANTITYTYPE;
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

    
    uint16_t getSTPID () const
    {
        return mSTPID;
    }

    bool setSTPID (uint16_t val)
    {
        mSTPID = val;
        return true;
    }
});

} // namespace neueda

#endif
