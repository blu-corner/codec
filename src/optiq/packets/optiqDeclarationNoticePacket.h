/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_DECLARATIONNOTICE_PACKET_H_
#define _OPTIQ_DECLARATIONNOTICE_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqDeclarationNoticePacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        int64_t mClientOrderID;
        uint64_t mDeclarationID;
        uint8_t mDeclarationStatus;
        uint8_t mOperationType;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        char mEnteringCounterparty[8];
        uint8_t mSide;
        uint64_t mQuantity;
        int64_t mPrice;
        uint8_t mPreMatchingType;
        uint64_t mTradeTime;
        char mMICofSecondaryListing[4];
        char mCentralisationDate[10];
        char mClearingFirmID[8];
        uint8_t mAccountType;
        uint8_t mAccountTypeCross;
        uint8_t mTradingCapacity;
        uint8_t mTradingCapacityCross;
        uint8_t mSettlementFlag;
        uint8_t mSettlementPeriod;
        uint8_t mGuaranteeFlag;
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
        uint8_t mWaiverIndicator;
        uint8_t mPreviousDayIndicator;
        int64_t mMiscellaneousFeeAmount;
        uint8_t mCCPID;

    optiqDeclarationNoticePacket ()
    {
        mFrameLength = sizeof (optiqDeclarationNoticePacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqDeclarationNoticePacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqDeclarationNoticeTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mClientOrderID = INT64_MIN;
        mDeclarationID = 0;
        mDeclarationStatus = 0;
        mOperationType = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        memset (mEnteringCounterparty, 0, 8);
        mSide = 0;
        mQuantity = UINT64_MAX;
        mPrice = INT64_MIN;
        mPreMatchingType = 0;
        mTradeTime = UINT64_MAX;
        memset (mMICofSecondaryListing, 0, 4);
        memset (mCentralisationDate, 0, 10);
        memset (mClearingFirmID, 0, 8);
        mAccountType = 0;
        mAccountTypeCross = 0;
        mTradingCapacity = 0;
        mTradingCapacityCross = 0;
        mSettlementFlag = UINT8_MAX;
        mSettlementPeriod = UINT8_MAX;
        mGuaranteeFlag = 0;
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
        mWaiverIndicator = 0;
        mPreviousDayIndicator = UINT8_MAX;
        mMiscellaneousFeeAmount = INT64_MIN;
        mCCPID = 0;
    }

    
    uint32_t getMsgSeqNum () const
    {
        return mMsgSeqNum;
    }

    bool setMsgSeqNum (uint32_t val)
    {
        mMsgSeqNum = val;
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
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
        return true;
    }
    
    uint64_t getDeclarationID () const
    {
        return mDeclarationID;
    }

    bool setDeclarationID (uint64_t val)
    {
        mDeclarationID = val;
        return true;
    }
    
    uint8_t getDeclarationStatus () const
    {
        return mDeclarationStatus;
    }

    bool setDeclarationStatus (uint8_t val)
    {
        mDeclarationStatus = val;
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
    
    uint8_t getPreMatchingType () const
    {
        return mPreMatchingType;
    }

    bool setPreMatchingType (uint8_t val)
    {
        mPreMatchingType = val;
        return true;
    }
    
    uint64_t getTradeTime () const
    {
        return mTradeTime;
    }

    bool setTradeTime (uint64_t val)
    {
        mTradeTime = val;
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
    
    uint8_t getSettlementFlag () const
    {
        return mSettlementFlag;
    }

    bool setSettlementFlag (uint8_t val)
    {
        mSettlementFlag = val;
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
    
    uint8_t getGuaranteeFlag () const
    {
        return mGuaranteeFlag;
    }

    bool setGuaranteeFlag (uint8_t val)
    {
        mGuaranteeFlag = val;
        return true;
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
    
    uint8_t getWaiverIndicator () const
    {
        return mWaiverIndicator;
    }

    bool setWaiverIndicator (uint8_t val)
    {
        mWaiverIndicator = val;
        return true;
    }
    bool getWaiverIndicator_LRGS () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_LRGS) & 1);
    }

    void setWaiverIndicator_LRGS ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_LRGS;
    }

    bool getWaiverIndicator_RFPT () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_RFPT) & 1);
    }

    void setWaiverIndicator_RFPT ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_RFPT;
    }

    bool getWaiverIndicator_NLIQ () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_NLIQ) & 1);
    }

    void setWaiverIndicator_NLIQ ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_NLIQ;
    }

    bool getWaiverIndicator_OILQ () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_OILQ) & 1);
    }

    void setWaiverIndicator_OILQ ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_OILQ;
    }

    bool getWaiverIndicator_PRIC () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_PRIC) & 1);
    }

    void setWaiverIndicator_PRIC ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_PRIC;
    }

    bool getWaiverIndicator_SIZE () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_SIZE) & 1);
    }

    void setWaiverIndicator_SIZE ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_SIZE;
    }

    bool getWaiverIndicator_ILQD () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_ILQD) & 1);
    }

    void setWaiverIndicator_ILQD ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_ILQD;
    }

    bool getWaiverIndicator_OMF () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_OMF) & 1);
    }

    void setWaiverIndicator_OMF ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_OMF;
    }

    
    uint8_t getPreviousDayIndicator () const
    {
        return mPreviousDayIndicator;
    }

    bool setPreviousDayIndicator (uint8_t val)
    {
        mPreviousDayIndicator = val;
        return true;
    }
    
    int64_t getMiscellaneousFeeAmount () const
    {
        return mMiscellaneousFeeAmount;
    }

    bool setMiscellaneousFeeAmount (int64_t val)
    {
        mMiscellaneousFeeAmount = val;
        return true;
    }
    
    uint8_t getCCPID () const
    {
        return mCCPID;
    }

    bool setCCPID (uint8_t val)
    {
        mCCPID = val;
        return true;
    }
});

} // namespace neueda

#endif
