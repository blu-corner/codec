/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_DECLARATIONENTRY_PACKET_H_
#define _OPTIQ_DECLARATIONENTRY_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqDeclarationEntryPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int64_t mClientOrderID;
        uint8_t mOperationType;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        char mEnteringCounterparty[8];
        uint8_t mSide;
        uint64_t mQuantity;
        int64_t mPrice;
        int32_t mExecutionWithinFirmShortCode;
        int32_t mClientIdentificationShortcode;
        char mMICofSecondaryListing[4];
        char mCentralisationDate[10];
        char mClearingFirmID[8];
        uint8_t mAccountType;
        uint8_t mAccountTypeCross;
        uint8_t mTradingCapacity;
        uint8_t mTradingCapacityCross;
        uint8_t mSettlementPeriod;
        uint8_t mSettlementFlag;
        uint8_t mGuaranteeFlag;
        uint8_t mMiFIDIndicators;
        uint8_t mTransactionPriceType;
        char mPrincipalCode[8];
        char mPrincipalCodeCross[8];
        uint32_t mStartTimeVwap;
        uint32_t mEndTimeVwap;
        int64_t mGrossTradeAmount;
        char mAccountNumber[12];
        char mAccountNumberCross[12];
        char mFreeText[18];
        char mFreeTextCross[18];
        int32_t mInvestmentDecisionWFirmShortCode;
        int32_t mClientIdentificationShortCodeCross;

    optiqDeclarationEntryPacket ()
    {
        mFrameLength = sizeof (optiqDeclarationEntryPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqDeclarationEntryPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqDeclarationEntryTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mClientOrderID = 0;
        mOperationType = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        memset (mEnteringCounterparty, 0, 8);
        mSide = 0;
        mQuantity = UINT64_MAX;
        mPrice = INT64_MIN;
        mExecutionWithinFirmShortCode = 0;
        mClientIdentificationShortcode = INT32_MIN;
        memset (mMICofSecondaryListing, 0, 4);
        memset (mCentralisationDate, 0, 10);
        memset (mClearingFirmID, 0, 8);
        mAccountType = 0;
        mAccountTypeCross = 0;
        mTradingCapacity = 0;
        mTradingCapacityCross = 0;
        mSettlementPeriod = 0;
        mSettlementFlag = 0;
        mGuaranteeFlag = 0;
        mMiFIDIndicators = 0;
        mTransactionPriceType = 0;
        memset (mPrincipalCode, 0, 8);
        memset (mPrincipalCodeCross, 0, 8);
        mStartTimeVwap = UINT32_MAX;
        mEndTimeVwap = UINT32_MAX;
        mGrossTradeAmount = INT64_MIN;
        memset (mAccountNumber, 0, 12);
        memset (mAccountNumberCross, 0, 12);
        memset (mFreeText, 0, 18);
        memset (mFreeTextCross, 0, 18);
        mInvestmentDecisionWFirmShortCode = INT32_MIN;
        mClientIdentificationShortCodeCross = INT32_MIN;
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
    
    uint8_t getOperationType () const
    {
        return mOperationType;
    }

    bool setOperationType (uint8_t val)
    {
        mOperationType = val;
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
    
    string getEnteringCounterparty () const
    {
        return getString (mEnteringCounterparty, sizeof (mEnteringCounterparty));
    }

    bool setEnteringCounterparty (const string& val)
    {
        return setString (mEnteringCounterparty, val, sizeof (mEnteringCounterparty));
    }
    
    uint8_t getSide () const
    {
        return mSide;
    }

    bool setSide (uint8_t val)
    {
        mSide = val;
        return true;
    }
    
    uint64_t getQuantity () const
    {
        return mQuantity;
    }

    bool setQuantity (uint64_t val)
    {
        mQuantity = val;
        return true;
    }
    
    int64_t getPrice () const
    {
        return mPrice;
    }

    bool setPrice (int64_t val)
    {
        mPrice = val;
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
    
    string getMICofSecondaryListing () const
    {
        return getString (mMICofSecondaryListing, sizeof (mMICofSecondaryListing));
    }

    bool setMICofSecondaryListing (const string& val)
    {
        return setString (mMICofSecondaryListing, val, sizeof (mMICofSecondaryListing));
    }
    
    string getCentralisationDate () const
    {
        return getString (mCentralisationDate, sizeof (mCentralisationDate));
    }

    bool setCentralisationDate (const string& val)
    {
        return setString (mCentralisationDate, val, sizeof (mCentralisationDate));
    }
    
    string getClearingFirmID () const
    {
        return getString (mClearingFirmID, sizeof (mClearingFirmID));
    }

    bool setClearingFirmID (const string& val)
    {
        return setString (mClearingFirmID, val, sizeof (mClearingFirmID));
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
    
    uint8_t getAccountTypeCross () const
    {
        return mAccountTypeCross;
    }

    bool setAccountTypeCross (uint8_t val)
    {
        mAccountTypeCross = val;
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
    
    uint8_t getTradingCapacityCross () const
    {
        return mTradingCapacityCross;
    }

    bool setTradingCapacityCross (uint8_t val)
    {
        mTradingCapacityCross = val;
        return true;
    }
    
    uint8_t getSettlementPeriod () const
    {
        return mSettlementPeriod;
    }

    bool setSettlementPeriod (uint8_t val)
    {
        mSettlementPeriod = val;
        return true;
    }
    
    uint8_t getSettlementFlag () const
    {
        return mSettlementFlag;
    }

    bool setSettlementFlag (uint8_t val)
    {
        mSettlementFlag = val;
        return true;
    }
    
    uint8_t getGuaranteeFlag () const
    {
        return mGuaranteeFlag;
    }

    bool setGuaranteeFlag (uint8_t val)
    {
        mGuaranteeFlag = val;
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

    
    uint8_t getTransactionPriceType () const
    {
        return mTransactionPriceType;
    }

    bool setTransactionPriceType (uint8_t val)
    {
        mTransactionPriceType = val;
        return true;
    }
    
    string getPrincipalCode () const
    {
        return getString (mPrincipalCode, sizeof (mPrincipalCode));
    }

    bool setPrincipalCode (const string& val)
    {
        return setString (mPrincipalCode, val, sizeof (mPrincipalCode));
    }
    
    string getPrincipalCodeCross () const
    {
        return getString (mPrincipalCodeCross, sizeof (mPrincipalCodeCross));
    }

    bool setPrincipalCodeCross (const string& val)
    {
        return setString (mPrincipalCodeCross, val, sizeof (mPrincipalCodeCross));
    }
    
    uint32_t getStartTimeVwap () const
    {
        return mStartTimeVwap;
    }

    bool setStartTimeVwap (uint32_t val)
    {
        mStartTimeVwap = val;
        return true;
    }
    
    uint32_t getEndTimeVwap () const
    {
        return mEndTimeVwap;
    }

    bool setEndTimeVwap (uint32_t val)
    {
        mEndTimeVwap = val;
        return true;
    }
    
    int64_t getGrossTradeAmount () const
    {
        return mGrossTradeAmount;
    }

    bool setGrossTradeAmount (int64_t val)
    {
        mGrossTradeAmount = val;
        return true;
    }
    
    string getAccountNumber () const
    {
        return getString (mAccountNumber, sizeof (mAccountNumber));
    }

    bool setAccountNumber (const string& val)
    {
        return setString (mAccountNumber, val, sizeof (mAccountNumber));
    }
    
    string getAccountNumberCross () const
    {
        return getString (mAccountNumberCross, sizeof (mAccountNumberCross));
    }

    bool setAccountNumberCross (const string& val)
    {
        return setString (mAccountNumberCross, val, sizeof (mAccountNumberCross));
    }
    
    string getFreeText () const
    {
        return getString (mFreeText, sizeof (mFreeText));
    }

    bool setFreeText (const string& val)
    {
        return setString (mFreeText, val, sizeof (mFreeText));
    }
    
    string getFreeTextCross () const
    {
        return getString (mFreeTextCross, sizeof (mFreeTextCross));
    }

    bool setFreeTextCross (const string& val)
    {
        return setString (mFreeTextCross, val, sizeof (mFreeTextCross));
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
    
    int32_t getClientIdentificationShortCodeCross () const
    {
        return mClientIdentificationShortCodeCross;
    }

    bool setClientIdentificationShortCodeCross (int32_t val)
    {
        mClientIdentificationShortCodeCross = val;
        return true;
    }
});

} // namespace neueda

#endif
