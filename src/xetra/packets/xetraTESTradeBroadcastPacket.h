/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_TESTRADEBROADCAST_PACKET_H
#define XETRA_TESTRADEBROADCAST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "xetraPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraTESTradeBroadcastPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double LAST_QTY_MIN;
        static const double LAST_QTY_MAX;
        static const int64_t LAST_QTY_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const double SETTL_CURR_AMT_MIN;
        static const double SETTL_CURR_AMT_MAX;
        static const int64_t SETTL_CURR_AMT_NO_VALUE;
        static const double SIDE_GROSS_TRADE_AMT_MIN;
        static const double SIDE_GROSS_TRADE_AMT_MAX;
        static const int64_t SIDE_GROSS_TRADE_AMT_NO_VALUE;
        static const double SETTL_CURR_FX_RATE_MIN;
        static const double SETTL_CURR_FX_RATE_MAX;
        static const int64_t SETTL_CURR_FX_RATE_NO_VALUE;
        static const double ACCRUED_INTERES_AMT_MIN;
        static const double ACCRUED_INTERES_AMT_MAX;
        static const int64_t ACCRUED_INTERES_AMT_NO_VALUE;
        static const double COUPON_RATE_MIN;
        static const double COUPON_RATE_MAX;
        static const int64_t COUPON_RATE_NO_VALUE;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_MIN;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_MAX;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const int32_t TRADE_DATE_MIN;
        static const int32_t TRADE_DATE_MAX;
        static const int32_t TRADE_DATE_NO_VALUE;
        static const uint32_t SIDE_TRADE_ID_MIN;
        static const uint32_t SIDE_TRADE_ID_MAX;
        static const uint32_t SIDE_TRADE_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_MIN;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_MAX;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDSETTLEMENT_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDSETTLEMENT_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCONTRA_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCONTRA_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE;
        static const uint32_t ORIG_TRADE_ID_MIN;
        static const uint32_t ORIG_TRADE_ID_MAX;
        static const uint32_t ORIG_TRADE_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const uint32_t NUM_DAYS_INTEREST_MIN;
        static const uint32_t NUM_DAYS_INTEREST_MAX;
        static const uint32_t NUM_DAYS_INTEREST_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t SRQSRELATED_TRADE_ID_MIN;
        static const uint32_t SRQSRELATED_TRADE_ID_MAX;
        static const uint32_t SRQSRELATED_TRADE_ID_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int16_t LAST_MKT_MIN;
        static const int16_t LAST_MKT_MAX;
        static const int16_t LAST_MKT_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t TRANSFER_REASON_MIN;
        static const int8_t TRANSFER_REASON_MAX;
        static const int8_t TRANSFER_REASON_NO_VALUE;
        static const int8_t TRADE_PUBLISH_INDICATOR_MIN;
        static const int8_t TRADE_PUBLISH_INDICATOR_MAX;
        static const int8_t TRADE_PUBLISH_INDICATOR_NO_VALUE;
        static const int8_t LAST_COUPON_DEVIATION_INDICATOR_MIN;
        static const int8_t LAST_COUPON_DEVIATION_INDICATOR_MAX;
        static const int8_t LAST_COUPON_DEVIATION_INDICATOR_NO_VALUE;
        static const int8_t REFINANCING_ELIGIBILITY_INDICATOR_MIN;
        static const int8_t REFINANCING_ELIGIBILITY_INDICATOR_MAX;
        static const int8_t REFINANCING_ELIGIBILITY_INDICATOR_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const int8_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const char ACCOUNT_NO_VALUE[2];
        static const size_t ACCOUNT_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char SETTL_CURRENCY_NO_VALUE[3];
        static const size_t SETTL_CURRENCY_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE[4];
        static const size_t ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE[4];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH;
        static const char ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE[35];
        static const size_t ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH;
        static const char ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE[3];
        static const size_t ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH;
        static const char ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE[4];
        static const size_t ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE[35];
        static const size_t ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE[3];
        static const size_t ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH;
        static const char ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE[4];
        static const size_t ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH;
        static const char REGULATORY_TRADE_ID_NO_VALUE[52];
        static const size_t REGULATORY_TRADE_ID_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        int64_t mSecurityID;
        int64_t mLastPx;
        int64_t mLastQty;
        uint64_t mTransactTime;
        int64_t mSettlCurrAmt;
        int64_t mSideGrossTradeAmt;
        int64_t mSettlCurrFxRate;
        int64_t mAccruedInteresAmt;
        int64_t mCouponRate;
        uint64_t mRootPartyIDClientID;
        uint64_t mExecutingTrader;
        uint64_t mRootPartyIDInvestmentDecisionMaker;
        uint32_t mPackageID;
        int32_t mMarketSegmentID;
        uint32_t mTradeID;
        int32_t mTradeDate;
        uint32_t mSideTradeID;
        uint32_t mRootPartyIDSessionID;
        uint32_t mRootPartyIDSettlementUnit;
        uint32_t mRootPartyIDContraUnit;
        uint32_t mRootPartyIDContraSettlementUnit;
        uint32_t mOrigTradeID;
        uint32_t mRootPartyIDExecutingUnit;
        uint32_t mRootPartyIDExecutingTrader;
        uint32_t mRootPartyIDClearingUnit;
        int32_t mSettlDate;
        uint32_t mNumDaysInterest;
        uint32_t mNegotiationID;
        uint32_t mSRQSRelatedTradeID;
        int16_t mTrdType;
        int16_t mLastMkt;
        int8_t mSide;
        int8_t mTradingCapacity;
        int8_t mTradeReportType;
        int8_t mTransferReason;
        int8_t mTradePublishIndicator;
        int8_t mLastCouponDeviationIndicator;
        int8_t mRefinancingEligibilityIndicator;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mExecutingTraderQualifier;
        int8_t mRootPartyIDInvestmentDecisionMakerQualifier;
        char mAccount[2];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mSettlCurrency[3];
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mRootPartyClearingFirm[5];
        char mRootPartyClearingOrganization[4];
        char mRootPartyExecutingFirmKVNumber[4];
        char mRootPartySettlementAccount[35];
        char mRootPartySettlementLocation[3];
        char mRootPartySettlementFirm[5];
        char mRootPartyContraFirm[5];
        char mRootPartyContraSettlementFirm[5];
        char mRootPartyContraFirmKVNumber[4];
        char mRootPartyContraSettlementAccount[35];
        char mRootPartyContraSettlementLocation[3];
        char mRootPartyIDExecutionVenue[4];
        char mRegulatoryTradeID[52];
        char mPad2[2];

        // constructor
        xetraTESTradeBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10614;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mSettlCurrAmt = SETTL_CURR_AMT_NO_VALUE;
            mSideGrossTradeAmt = SIDE_GROSS_TRADE_AMT_NO_VALUE;
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
            mAccruedInteresAmt = ACCRUED_INTERES_AMT_NO_VALUE;
            mCouponRate = COUPON_RATE_NO_VALUE;
            mRootPartyIDClientID = ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mRootPartyIDInvestmentDecisionMaker = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mTradeDate = TRADE_DATE_NO_VALUE;
            mSideTradeID = SIDE_TRADE_ID_NO_VALUE;
            mRootPartyIDSessionID = ROOT_PARTY_IDSESSION_ID_NO_VALUE;
            mRootPartyIDSettlementUnit = ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE;
            mRootPartyIDContraUnit = ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE;
            mRootPartyIDContraSettlementUnit = ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE;
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
            mRootPartyIDExecutingUnit = ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
            mRootPartyIDExecutingTrader = ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mRootPartyIDClearingUnit = ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mNumDaysInterest = NUM_DAYS_INTEREST_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mLastMkt = LAST_MKT_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTransferReason = TRANSFER_REASON_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            mLastCouponDeviationIndicator = LAST_COUPON_DEVIATION_INDICATOR_NO_VALUE;
            mRefinancingEligibilityIndicator = REFINANCING_ELIGIBILITY_INDICATOR_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mRootPartyIDInvestmentDecisionMakerQualifier = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
            memcpy(mSettlCurrency, SETTL_CURRENCY_NO_VALUE, sizeof (mSettlCurrency));
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm));
            memcpy(mRootPartyClearingOrganization, ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE, sizeof (mRootPartyClearingOrganization));
            memcpy(mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyExecutingFirmKVNumber));
            memcpy(mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartySettlementAccount));
            memcpy(mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartySettlementLocation));
            memcpy(mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartySettlementFirm));
            memcpy(mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
            memcpy(mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartyContraSettlementFirm));
            memcpy(mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyContraFirmKVNumber));
            memcpy(mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartyContraSettlementAccount));
            memcpy(mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartyContraSettlementLocation));
            memcpy(mRootPartyIDExecutionVenue, ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE, sizeof (mRootPartyIDExecutionVenue));
            memcpy(mRegulatoryTradeID, REGULATORY_TRADE_ID_NO_VALUE, sizeof (mRegulatoryTradeID));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const xetraRBCHeaderCompPacket& v)
        {
            mRBCHeader = v;
            return true;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
        }

        double getLastPx () const
        {
            return mLastPx / 100000000.0;
        }

        bool setLastPx (double v)
        {
            mLastPx = v * 100000000.0;
            return ((LAST_PX_MIN <= v && v <= LAST_PX_MAX) || mLastPx == LAST_PX_NO_VALUE);
        }

        bool isLastPxValid () const
        {
            return (mLastPx != LAST_PX_NO_VALUE);
        }

        void resetLastPx ()
        {
            mLastPx = LAST_PX_NO_VALUE;
        }

        double getLastQty () const
        {
            return mLastQty / 10000.0;
        }

        bool setLastQty (double v)
        {
            mLastQty = v * 10000.0;
            return ((LAST_QTY_MIN <= v && v <= LAST_QTY_MAX) || mLastQty == LAST_QTY_NO_VALUE);
        }

        bool isLastQtyValid () const
        {
            return (mLastQty != LAST_QTY_NO_VALUE);
        }

        void resetLastQty ()
        {
            mLastQty = LAST_QTY_NO_VALUE;
        }

        uint64_t getTransactTime () const
        {
            return mTransactTime;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return ((TRANSACT_TIME_MIN <= mTransactTime && mTransactTime <= TRANSACT_TIME_MAX) || mTransactTime == TRANSACT_TIME_NO_VALUE);
        }

        bool isTransactTimeValid () const
        {
            return (mTransactTime != TRANSACT_TIME_NO_VALUE);
        }

        void resetTransactTime ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
        }

        double getSettlCurrAmt () const
        {
            return mSettlCurrAmt / 100000000.0;
        }

        bool setSettlCurrAmt (double v)
        {
            mSettlCurrAmt = v * 100000000.0;
            return ((SETTL_CURR_AMT_MIN <= v && v <= SETTL_CURR_AMT_MAX) || mSettlCurrAmt == SETTL_CURR_AMT_NO_VALUE);
        }

        bool isSettlCurrAmtValid () const
        {
            return (mSettlCurrAmt != SETTL_CURR_AMT_NO_VALUE);
        }

        void resetSettlCurrAmt ()
        {
            mSettlCurrAmt = SETTL_CURR_AMT_NO_VALUE;
        }

        double getSideGrossTradeAmt () const
        {
            return mSideGrossTradeAmt / 100000000.0;
        }

        bool setSideGrossTradeAmt (double v)
        {
            mSideGrossTradeAmt = v * 100000000.0;
            return ((SIDE_GROSS_TRADE_AMT_MIN <= v && v <= SIDE_GROSS_TRADE_AMT_MAX) || mSideGrossTradeAmt == SIDE_GROSS_TRADE_AMT_NO_VALUE);
        }

        bool isSideGrossTradeAmtValid () const
        {
            return (mSideGrossTradeAmt != SIDE_GROSS_TRADE_AMT_NO_VALUE);
        }

        void resetSideGrossTradeAmt ()
        {
            mSideGrossTradeAmt = SIDE_GROSS_TRADE_AMT_NO_VALUE;
        }

        double getSettlCurrFxRate () const
        {
            return mSettlCurrFxRate / 100000000.0;
        }

        bool setSettlCurrFxRate (double v)
        {
            mSettlCurrFxRate = v * 100000000.0;
            return ((SETTL_CURR_FX_RATE_MIN <= v && v <= SETTL_CURR_FX_RATE_MAX) || mSettlCurrFxRate == SETTL_CURR_FX_RATE_NO_VALUE);
        }

        bool isSettlCurrFxRateValid () const
        {
            return (mSettlCurrFxRate != SETTL_CURR_FX_RATE_NO_VALUE);
        }

        void resetSettlCurrFxRate ()
        {
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
        }

        double getAccruedInteresAmt () const
        {
            return mAccruedInteresAmt / 100000000.0;
        }

        bool setAccruedInteresAmt (double v)
        {
            mAccruedInteresAmt = v * 100000000.0;
            return ((ACCRUED_INTERES_AMT_MIN <= v && v <= ACCRUED_INTERES_AMT_MAX) || mAccruedInteresAmt == ACCRUED_INTERES_AMT_NO_VALUE);
        }

        bool isAccruedInteresAmtValid () const
        {
            return (mAccruedInteresAmt != ACCRUED_INTERES_AMT_NO_VALUE);
        }

        void resetAccruedInteresAmt ()
        {
            mAccruedInteresAmt = ACCRUED_INTERES_AMT_NO_VALUE;
        }

        double getCouponRate () const
        {
            return mCouponRate / 10000000.0;
        }

        bool setCouponRate (double v)
        {
            mCouponRate = v * 10000000.0;
            return ((COUPON_RATE_MIN <= v && v <= COUPON_RATE_MAX) || mCouponRate == COUPON_RATE_NO_VALUE);
        }

        bool isCouponRateValid () const
        {
            return (mCouponRate != COUPON_RATE_NO_VALUE);
        }

        void resetCouponRate ()
        {
            mCouponRate = COUPON_RATE_NO_VALUE;
        }

        uint64_t getRootPartyIDClientID () const
        {
            return mRootPartyIDClientID;
        }

        bool setRootPartyIDClientID (uint64_t v)
        {
            mRootPartyIDClientID = v;
            return ((ROOT_PARTY_IDCLIENT_ID_MIN <= mRootPartyIDClientID && mRootPartyIDClientID <= ROOT_PARTY_IDCLIENT_ID_MAX) || mRootPartyIDClientID == ROOT_PARTY_IDCLIENT_ID_NO_VALUE);
        }

        bool isRootPartyIDClientIDValid () const
        {
            return (mRootPartyIDClientID != ROOT_PARTY_IDCLIENT_ID_NO_VALUE);
        }

        void resetRootPartyIDClientID ()
        {
            mRootPartyIDClientID = ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
        }

        uint64_t getExecutingTrader () const
        {
            return mExecutingTrader;
        }

        bool setExecutingTrader (uint64_t v)
        {
            mExecutingTrader = v;
            return ((EXECUTING_TRADER_MIN <= mExecutingTrader && mExecutingTrader <= EXECUTING_TRADER_MAX) || mExecutingTrader == EXECUTING_TRADER_NO_VALUE);
        }

        bool isExecutingTraderValid () const
        {
            return (mExecutingTrader != EXECUTING_TRADER_NO_VALUE);
        }

        void resetExecutingTrader ()
        {
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
        }

        uint64_t getRootPartyIDInvestmentDecisionMaker () const
        {
            return mRootPartyIDInvestmentDecisionMaker;
        }

        bool setRootPartyIDInvestmentDecisionMaker (uint64_t v)
        {
            mRootPartyIDInvestmentDecisionMaker = v;
            return ((ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN <= mRootPartyIDInvestmentDecisionMaker && mRootPartyIDInvestmentDecisionMaker <= ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX) || mRootPartyIDInvestmentDecisionMaker == ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        bool isRootPartyIDInvestmentDecisionMakerValid () const
        {
            return (mRootPartyIDInvestmentDecisionMaker != ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        void resetRootPartyIDInvestmentDecisionMaker ()
        {
            mRootPartyIDInvestmentDecisionMaker = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
        }

        uint32_t getPackageID () const
        {
            return mPackageID;
        }

        bool setPackageID (uint32_t v)
        {
            mPackageID = v;
            return ((PACKAGE_ID_MIN <= mPackageID && mPackageID <= PACKAGE_ID_MAX) || mPackageID == PACKAGE_ID_NO_VALUE);
        }

        bool isPackageIDValid () const
        {
            return (mPackageID != PACKAGE_ID_NO_VALUE);
        }

        void resetPackageID ()
        {
            mPackageID = PACKAGE_ID_NO_VALUE;
        }

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
        }

        uint32_t getTradeID () const
        {
            return mTradeID;
        }

        bool setTradeID (uint32_t v)
        {
            mTradeID = v;
            return ((TRADE_ID_MIN <= mTradeID && mTradeID <= TRADE_ID_MAX) || mTradeID == TRADE_ID_NO_VALUE);
        }

        bool isTradeIDValid () const
        {
            return (mTradeID != TRADE_ID_NO_VALUE);
        }

        void resetTradeID ()
        {
            mTradeID = TRADE_ID_NO_VALUE;
        }

        int32_t getTradeDate () const
        {
            return mTradeDate;
        }

        bool setTradeDate (int32_t v)
        {
            mTradeDate = v;
            return ((TRADE_DATE_MIN <= mTradeDate && mTradeDate <= TRADE_DATE_MAX) || mTradeDate == TRADE_DATE_NO_VALUE);
        }

        bool isTradeDateValid () const
        {
            return (mTradeDate != TRADE_DATE_NO_VALUE);
        }

        void resetTradeDate ()
        {
            mTradeDate = TRADE_DATE_NO_VALUE;
        }

        uint32_t getSideTradeID () const
        {
            return mSideTradeID;
        }

        bool setSideTradeID (uint32_t v)
        {
            mSideTradeID = v;
            return ((SIDE_TRADE_ID_MIN <= mSideTradeID && mSideTradeID <= SIDE_TRADE_ID_MAX) || mSideTradeID == SIDE_TRADE_ID_NO_VALUE);
        }

        bool isSideTradeIDValid () const
        {
            return (mSideTradeID != SIDE_TRADE_ID_NO_VALUE);
        }

        void resetSideTradeID ()
        {
            mSideTradeID = SIDE_TRADE_ID_NO_VALUE;
        }

        uint32_t getRootPartyIDSessionID () const
        {
            return mRootPartyIDSessionID;
        }

        bool setRootPartyIDSessionID (uint32_t v)
        {
            mRootPartyIDSessionID = v;
            return ((ROOT_PARTY_IDSESSION_ID_MIN <= mRootPartyIDSessionID && mRootPartyIDSessionID <= ROOT_PARTY_IDSESSION_ID_MAX) || mRootPartyIDSessionID == ROOT_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isRootPartyIDSessionIDValid () const
        {
            return (mRootPartyIDSessionID != ROOT_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetRootPartyIDSessionID ()
        {
            mRootPartyIDSessionID = ROOT_PARTY_IDSESSION_ID_NO_VALUE;
        }

        uint32_t getRootPartyIDSettlementUnit () const
        {
            return mRootPartyIDSettlementUnit;
        }

        bool setRootPartyIDSettlementUnit (uint32_t v)
        {
            mRootPartyIDSettlementUnit = v;
            return ((ROOT_PARTY_IDSETTLEMENT_UNIT_MIN <= mRootPartyIDSettlementUnit && mRootPartyIDSettlementUnit <= ROOT_PARTY_IDSETTLEMENT_UNIT_MAX) || mRootPartyIDSettlementUnit == ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE);
        }

        bool isRootPartyIDSettlementUnitValid () const
        {
            return (mRootPartyIDSettlementUnit != ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE);
        }

        void resetRootPartyIDSettlementUnit ()
        {
            mRootPartyIDSettlementUnit = ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDContraUnit () const
        {
            return mRootPartyIDContraUnit;
        }

        bool setRootPartyIDContraUnit (uint32_t v)
        {
            mRootPartyIDContraUnit = v;
            return ((ROOT_PARTY_IDCONTRA_UNIT_MIN <= mRootPartyIDContraUnit && mRootPartyIDContraUnit <= ROOT_PARTY_IDCONTRA_UNIT_MAX) || mRootPartyIDContraUnit == ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE);
        }

        bool isRootPartyIDContraUnitValid () const
        {
            return (mRootPartyIDContraUnit != ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE);
        }

        void resetRootPartyIDContraUnit ()
        {
            mRootPartyIDContraUnit = ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDContraSettlementUnit () const
        {
            return mRootPartyIDContraSettlementUnit;
        }

        bool setRootPartyIDContraSettlementUnit (uint32_t v)
        {
            mRootPartyIDContraSettlementUnit = v;
            return ((ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MIN <= mRootPartyIDContraSettlementUnit && mRootPartyIDContraSettlementUnit <= ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MAX) || mRootPartyIDContraSettlementUnit == ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE);
        }

        bool isRootPartyIDContraSettlementUnitValid () const
        {
            return (mRootPartyIDContraSettlementUnit != ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE);
        }

        void resetRootPartyIDContraSettlementUnit ()
        {
            mRootPartyIDContraSettlementUnit = ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE;
        }

        uint32_t getOrigTradeID () const
        {
            return mOrigTradeID;
        }

        bool setOrigTradeID (uint32_t v)
        {
            mOrigTradeID = v;
            return ((ORIG_TRADE_ID_MIN <= mOrigTradeID && mOrigTradeID <= ORIG_TRADE_ID_MAX) || mOrigTradeID == ORIG_TRADE_ID_NO_VALUE);
        }

        bool isOrigTradeIDValid () const
        {
            return (mOrigTradeID != ORIG_TRADE_ID_NO_VALUE);
        }

        void resetOrigTradeID ()
        {
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
        }

        uint32_t getRootPartyIDExecutingUnit () const
        {
            return mRootPartyIDExecutingUnit;
        }

        bool setRootPartyIDExecutingUnit (uint32_t v)
        {
            mRootPartyIDExecutingUnit = v;
            return ((ROOT_PARTY_IDEXECUTING_UNIT_MIN <= mRootPartyIDExecutingUnit && mRootPartyIDExecutingUnit <= ROOT_PARTY_IDEXECUTING_UNIT_MAX) || mRootPartyIDExecutingUnit == ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE);
        }

        bool isRootPartyIDExecutingUnitValid () const
        {
            return (mRootPartyIDExecutingUnit != ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE);
        }

        void resetRootPartyIDExecutingUnit ()
        {
            mRootPartyIDExecutingUnit = ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDExecutingTrader () const
        {
            return mRootPartyIDExecutingTrader;
        }

        bool setRootPartyIDExecutingTrader (uint32_t v)
        {
            mRootPartyIDExecutingTrader = v;
            return ((ROOT_PARTY_IDEXECUTING_TRADER_MIN <= mRootPartyIDExecutingTrader && mRootPartyIDExecutingTrader <= ROOT_PARTY_IDEXECUTING_TRADER_MAX) || mRootPartyIDExecutingTrader == ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isRootPartyIDExecutingTraderValid () const
        {
            return (mRootPartyIDExecutingTrader != ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetRootPartyIDExecutingTrader ()
        {
            mRootPartyIDExecutingTrader = ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        }

        uint32_t getRootPartyIDClearingUnit () const
        {
            return mRootPartyIDClearingUnit;
        }

        bool setRootPartyIDClearingUnit (uint32_t v)
        {
            mRootPartyIDClearingUnit = v;
            return ((ROOT_PARTY_IDCLEARING_UNIT_MIN <= mRootPartyIDClearingUnit && mRootPartyIDClearingUnit <= ROOT_PARTY_IDCLEARING_UNIT_MAX) || mRootPartyIDClearingUnit == ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE);
        }

        bool isRootPartyIDClearingUnitValid () const
        {
            return (mRootPartyIDClearingUnit != ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE);
        }

        void resetRootPartyIDClearingUnit ()
        {
            mRootPartyIDClearingUnit = ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
        }

        int32_t getSettlDate () const
        {
            return mSettlDate;
        }

        bool setSettlDate (int32_t v)
        {
            mSettlDate = v;
            return ((SETTL_DATE_MIN <= mSettlDate && mSettlDate <= SETTL_DATE_MAX) || mSettlDate == SETTL_DATE_NO_VALUE);
        }

        bool isSettlDateValid () const
        {
            return (mSettlDate != SETTL_DATE_NO_VALUE);
        }

        void resetSettlDate ()
        {
            mSettlDate = SETTL_DATE_NO_VALUE;
        }

        uint32_t getNumDaysInterest () const
        {
            return mNumDaysInterest;
        }

        bool setNumDaysInterest (uint32_t v)
        {
            mNumDaysInterest = v;
            return ((NUM_DAYS_INTEREST_MIN <= mNumDaysInterest && mNumDaysInterest <= NUM_DAYS_INTEREST_MAX) || mNumDaysInterest == NUM_DAYS_INTEREST_NO_VALUE);
        }

        bool isNumDaysInterestValid () const
        {
            return (mNumDaysInterest != NUM_DAYS_INTEREST_NO_VALUE);
        }

        void resetNumDaysInterest ()
        {
            mNumDaysInterest = NUM_DAYS_INTEREST_NO_VALUE;
        }

        uint32_t getNegotiationID () const
        {
            return mNegotiationID;
        }

        bool setNegotiationID (uint32_t v)
        {
            mNegotiationID = v;
            return ((NEGOTIATION_ID_MIN <= mNegotiationID && mNegotiationID <= NEGOTIATION_ID_MAX) || mNegotiationID == NEGOTIATION_ID_NO_VALUE);
        }

        bool isNegotiationIDValid () const
        {
            return (mNegotiationID != NEGOTIATION_ID_NO_VALUE);
        }

        void resetNegotiationID ()
        {
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
        }

        uint32_t getSRQSRelatedTradeID () const
        {
            return mSRQSRelatedTradeID;
        }

        bool setSRQSRelatedTradeID (uint32_t v)
        {
            mSRQSRelatedTradeID = v;
            return ((SRQSRELATED_TRADE_ID_MIN <= mSRQSRelatedTradeID && mSRQSRelatedTradeID <= SRQSRELATED_TRADE_ID_MAX) || mSRQSRelatedTradeID == SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        bool isSRQSRelatedTradeIDValid () const
        {
            return (mSRQSRelatedTradeID != SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        void resetSRQSRelatedTradeID ()
        {
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
        }

        int16_t getTrdType () const
        {
            return mTrdType;
        }

        bool setTrdType (int16_t v)
        {
            mTrdType = v;
            return ((TRD_TYPE_MIN <= mTrdType && mTrdType <= TRD_TYPE_MAX) || mTrdType == TRD_TYPE_NO_VALUE);
        }

        bool isTrdTypeValid () const
        {
            return (mTrdType != TRD_TYPE_NO_VALUE);
        }

        void resetTrdType ()
        {
            mTrdType = TRD_TYPE_NO_VALUE;
        }

        int16_t getLastMkt () const
        {
            return mLastMkt;
        }

        bool setLastMkt (int16_t v)
        {
            mLastMkt = v;
            return ((LAST_MKT_MIN <= mLastMkt && mLastMkt <= LAST_MKT_MAX) || mLastMkt == LAST_MKT_NO_VALUE);
        }

        bool isLastMktValid () const
        {
            return (mLastMkt != LAST_MKT_NO_VALUE);
        }

        void resetLastMkt ()
        {
            mLastMkt = LAST_MKT_NO_VALUE;
        }

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
        }

        int8_t getTradingCapacity () const
        {
            return mTradingCapacity;
        }

        bool setTradingCapacity (int8_t v)
        {
            mTradingCapacity = v;
            return ((TRADING_CAPACITY_MIN <= mTradingCapacity && mTradingCapacity <= TRADING_CAPACITY_MAX) || mTradingCapacity == TRADING_CAPACITY_NO_VALUE);
        }

        bool isTradingCapacityValid () const
        {
            return (mTradingCapacity != TRADING_CAPACITY_NO_VALUE);
        }

        void resetTradingCapacity ()
        {
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
        }

        int8_t getTradeReportType () const
        {
            return mTradeReportType;
        }

        bool setTradeReportType (int8_t v)
        {
            mTradeReportType = v;
            return ((TRADE_REPORT_TYPE_MIN <= mTradeReportType && mTradeReportType <= TRADE_REPORT_TYPE_MAX) || mTradeReportType == TRADE_REPORT_TYPE_NO_VALUE);
        }

        bool isTradeReportTypeValid () const
        {
            return (mTradeReportType != TRADE_REPORT_TYPE_NO_VALUE);
        }

        void resetTradeReportType ()
        {
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
        }

        int8_t getTransferReason () const
        {
            return mTransferReason;
        }

        bool setTransferReason (int8_t v)
        {
            mTransferReason = v;
            return ((TRANSFER_REASON_MIN <= mTransferReason && mTransferReason <= TRANSFER_REASON_MAX) || mTransferReason == TRANSFER_REASON_NO_VALUE);
        }

        bool isTransferReasonValid () const
        {
            return (mTransferReason != TRANSFER_REASON_NO_VALUE);
        }

        void resetTransferReason ()
        {
            mTransferReason = TRANSFER_REASON_NO_VALUE;
        }

        int8_t getTradePublishIndicator () const
        {
            return mTradePublishIndicator;
        }

        bool setTradePublishIndicator (int8_t v)
        {
            mTradePublishIndicator = v;
            return ((TRADE_PUBLISH_INDICATOR_MIN <= mTradePublishIndicator && mTradePublishIndicator <= TRADE_PUBLISH_INDICATOR_MAX) || mTradePublishIndicator == TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        bool isTradePublishIndicatorValid () const
        {
            return (mTradePublishIndicator != TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        void resetTradePublishIndicator ()
        {
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
        }

        int8_t getLastCouponDeviationIndicator () const
        {
            return mLastCouponDeviationIndicator;
        }

        bool setLastCouponDeviationIndicator (int8_t v)
        {
            mLastCouponDeviationIndicator = v;
            return ((LAST_COUPON_DEVIATION_INDICATOR_MIN <= mLastCouponDeviationIndicator && mLastCouponDeviationIndicator <= LAST_COUPON_DEVIATION_INDICATOR_MAX) || mLastCouponDeviationIndicator == LAST_COUPON_DEVIATION_INDICATOR_NO_VALUE);
        }

        bool isLastCouponDeviationIndicatorValid () const
        {
            return (mLastCouponDeviationIndicator != LAST_COUPON_DEVIATION_INDICATOR_NO_VALUE);
        }

        void resetLastCouponDeviationIndicator ()
        {
            mLastCouponDeviationIndicator = LAST_COUPON_DEVIATION_INDICATOR_NO_VALUE;
        }

        int8_t getRefinancingEligibilityIndicator () const
        {
            return mRefinancingEligibilityIndicator;
        }

        bool setRefinancingEligibilityIndicator (int8_t v)
        {
            mRefinancingEligibilityIndicator = v;
            return ((REFINANCING_ELIGIBILITY_INDICATOR_MIN <= mRefinancingEligibilityIndicator && mRefinancingEligibilityIndicator <= REFINANCING_ELIGIBILITY_INDICATOR_MAX) || mRefinancingEligibilityIndicator == REFINANCING_ELIGIBILITY_INDICATOR_NO_VALUE);
        }

        bool isRefinancingEligibilityIndicatorValid () const
        {
            return (mRefinancingEligibilityIndicator != REFINANCING_ELIGIBILITY_INDICATOR_NO_VALUE);
        }

        void resetRefinancingEligibilityIndicator ()
        {
            mRefinancingEligibilityIndicator = REFINANCING_ELIGIBILITY_INDICATOR_NO_VALUE;
        }

        int8_t getOrderAttributeLiquidityProvision () const
        {
            return mOrderAttributeLiquidityProvision;
        }

        bool setOrderAttributeLiquidityProvision (int8_t v)
        {
            mOrderAttributeLiquidityProvision = v;
            return ((ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN <= mOrderAttributeLiquidityProvision && mOrderAttributeLiquidityProvision <= ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX) || mOrderAttributeLiquidityProvision == ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE);
        }

        bool isOrderAttributeLiquidityProvisionValid () const
        {
            return (mOrderAttributeLiquidityProvision != ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE);
        }

        void resetOrderAttributeLiquidityProvision ()
        {
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        }

        int8_t getExecutingTraderQualifier () const
        {
            return mExecutingTraderQualifier;
        }

        bool setExecutingTraderQualifier (int8_t v)
        {
            mExecutingTraderQualifier = v;
            return ((EXECUTING_TRADER_QUALIFIER_MIN <= mExecutingTraderQualifier && mExecutingTraderQualifier <= EXECUTING_TRADER_QUALIFIER_MAX) || mExecutingTraderQualifier == EXECUTING_TRADER_QUALIFIER_NO_VALUE);
        }

        bool isExecutingTraderQualifierValid () const
        {
            return (mExecutingTraderQualifier != EXECUTING_TRADER_QUALIFIER_NO_VALUE);
        }

        void resetExecutingTraderQualifier ()
        {
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        }

        int8_t getRootPartyIDInvestmentDecisionMakerQualifier () const
        {
            return mRootPartyIDInvestmentDecisionMakerQualifier;
        }

        bool setRootPartyIDInvestmentDecisionMakerQualifier (int8_t v)
        {
            mRootPartyIDInvestmentDecisionMakerQualifier = v;
            return ((ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MIN <= mRootPartyIDInvestmentDecisionMakerQualifier && mRootPartyIDInvestmentDecisionMakerQualifier <= ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MAX) || mRootPartyIDInvestmentDecisionMakerQualifier == ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        bool isRootPartyIDInvestmentDecisionMakerQualifierValid () const
        {
            return (mRootPartyIDInvestmentDecisionMakerQualifier != ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        void resetRootPartyIDInvestmentDecisionMakerQualifier ()
        {
            mRootPartyIDInvestmentDecisionMakerQualifier = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        }

        string getAccount () const
        {
            return string (mAccount, ACCOUNT_MAX_LENGTH);
        }

        bool setAccount (const string& v)
        {
            memset (mAccount, '\0', sizeof (mAccount));
            size_t size = min ((size_t) v.size (), (size_t) ACCOUNT_MAX_LENGTH);
            strncpy (mAccount, v.c_str (), size);
            return (v.size () <= ACCOUNT_MAX_LENGTH);
        }

        bool isAccountValid () const
        {
            return (memcmp (mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount)) != 0);
        }

        void resetAccount ()
        {
            memcpy (mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
        }

        string getFreeText1 () const
        {
            return string (mFreeText1, FREE_TEXT1_MAX_LENGTH);
        }

        bool setFreeText1 (const string& v)
        {
            memset (mFreeText1, '\0', sizeof (mFreeText1));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT1_MAX_LENGTH);
            strncpy (mFreeText1, v.c_str (), size);
            return (v.size () <= FREE_TEXT1_MAX_LENGTH);
        }

        bool isFreeText1Valid () const
        {
            return (memcmp (mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1)) != 0);
        }

        void resetFreeText1 ()
        {
            memcpy (mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
        }

        string getFreeText2 () const
        {
            return string (mFreeText2, FREE_TEXT2_MAX_LENGTH);
        }

        bool setFreeText2 (const string& v)
        {
            memset (mFreeText2, '\0', sizeof (mFreeText2));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT2_MAX_LENGTH);
            strncpy (mFreeText2, v.c_str (), size);
            return (v.size () <= FREE_TEXT2_MAX_LENGTH);
        }

        bool isFreeText2Valid () const
        {
            return (memcmp (mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2)) != 0);
        }

        void resetFreeText2 ()
        {
            memcpy (mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
        }

        string getFreeText4 () const
        {
            return string (mFreeText4, FREE_TEXT4_MAX_LENGTH);
        }

        bool setFreeText4 (const string& v)
        {
            memset (mFreeText4, '\0', sizeof (mFreeText4));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT4_MAX_LENGTH);
            strncpy (mFreeText4, v.c_str (), size);
            return (v.size () <= FREE_TEXT4_MAX_LENGTH);
        }

        bool isFreeText4Valid () const
        {
            return (memcmp (mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4)) != 0);
        }

        void resetFreeText4 ()
        {
            memcpy (mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
        }

        string getSettlCurrency () const
        {
            return string (mSettlCurrency, SETTL_CURRENCY_MAX_LENGTH);
        }

        bool setSettlCurrency (const string& v)
        {
            memset (mSettlCurrency, '\0', sizeof (mSettlCurrency));
            size_t size = min ((size_t) v.size (), (size_t) SETTL_CURRENCY_MAX_LENGTH);
            strncpy (mSettlCurrency, v.c_str (), size);
            return (v.size () <= SETTL_CURRENCY_MAX_LENGTH);
        }

        bool isSettlCurrencyValid () const
        {
            return (memcmp (mSettlCurrency, SETTL_CURRENCY_NO_VALUE, sizeof (mSettlCurrency)) != 0);
        }

        void resetSettlCurrency ()
        {
            memcpy (mSettlCurrency, SETTL_CURRENCY_NO_VALUE, sizeof (mSettlCurrency));
        }

        string getRootPartyExecutingFirm () const
        {
            return string (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setRootPartyExecutingFirm (const string& v)
        {
            memset (mRootPartyExecutingFirm, '\0', sizeof (mRootPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mRootPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isRootPartyExecutingFirmValid () const
        {
            return (memcmp (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm)) != 0);
        }

        void resetRootPartyExecutingFirm ()
        {
            memcpy (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
        }

        string getRootPartyExecutingTrader () const
        {
            return string (mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setRootPartyExecutingTrader (const string& v)
        {
            memset (mRootPartyExecutingTrader, '\0', sizeof (mRootPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mRootPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isRootPartyExecutingTraderValid () const
        {
            return (memcmp (mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader)) != 0);
        }

        void resetRootPartyExecutingTrader ()
        {
            memcpy (mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
        }

        string getRootPartyClearingFirm () const
        {
            return string (mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH);
        }

        bool setRootPartyClearingFirm (const string& v)
        {
            memset (mRootPartyClearingFirm, '\0', sizeof (mRootPartyClearingFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH);
            strncpy (mRootPartyClearingFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH);
        }

        bool isRootPartyClearingFirmValid () const
        {
            return (memcmp (mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm)) != 0);
        }

        void resetRootPartyClearingFirm ()
        {
            memcpy (mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm));
        }

        string getRootPartyClearingOrganization () const
        {
            return string (mRootPartyClearingOrganization, ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH);
        }

        bool setRootPartyClearingOrganization (const string& v)
        {
            memset (mRootPartyClearingOrganization, '\0', sizeof (mRootPartyClearingOrganization));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH);
            strncpy (mRootPartyClearingOrganization, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH);
        }

        bool isRootPartyClearingOrganizationValid () const
        {
            return (memcmp (mRootPartyClearingOrganization, ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE, sizeof (mRootPartyClearingOrganization)) != 0);
        }

        void resetRootPartyClearingOrganization ()
        {
            memcpy (mRootPartyClearingOrganization, ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE, sizeof (mRootPartyClearingOrganization));
        }

        string getRootPartyExecutingFirmKVNumber () const
        {
            return string (mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool setRootPartyExecutingFirmKVNumber (const string& v)
        {
            memset (mRootPartyExecutingFirmKVNumber, '\0', sizeof (mRootPartyExecutingFirmKVNumber));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH);
            strncpy (mRootPartyExecutingFirmKVNumber, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool isRootPartyExecutingFirmKVNumberValid () const
        {
            return (memcmp (mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyExecutingFirmKVNumber)) != 0);
        }

        void resetRootPartyExecutingFirmKVNumber ()
        {
            memcpy (mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyExecutingFirmKVNumber));
        }

        string getRootPartySettlementAccount () const
        {
            return string (mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool setRootPartySettlementAccount (const string& v)
        {
            memset (mRootPartySettlementAccount, '\0', sizeof (mRootPartySettlementAccount));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH);
            strncpy (mRootPartySettlementAccount, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool isRootPartySettlementAccountValid () const
        {
            return (memcmp (mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartySettlementAccount)) != 0);
        }

        void resetRootPartySettlementAccount ()
        {
            memcpy (mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartySettlementAccount));
        }

        string getRootPartySettlementLocation () const
        {
            return string (mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool setRootPartySettlementLocation (const string& v)
        {
            memset (mRootPartySettlementLocation, '\0', sizeof (mRootPartySettlementLocation));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH);
            strncpy (mRootPartySettlementLocation, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool isRootPartySettlementLocationValid () const
        {
            return (memcmp (mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartySettlementLocation)) != 0);
        }

        void resetRootPartySettlementLocation ()
        {
            memcpy (mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartySettlementLocation));
        }

        string getRootPartySettlementFirm () const
        {
            return string (mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool setRootPartySettlementFirm (const string& v)
        {
            memset (mRootPartySettlementFirm, '\0', sizeof (mRootPartySettlementFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH);
            strncpy (mRootPartySettlementFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool isRootPartySettlementFirmValid () const
        {
            return (memcmp (mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartySettlementFirm)) != 0);
        }

        void resetRootPartySettlementFirm ()
        {
            memcpy (mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartySettlementFirm));
        }

        string getRootPartyContraFirm () const
        {
            return string (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool setRootPartyContraFirm (const string& v)
        {
            memset (mRootPartyContraFirm, '\0', sizeof (mRootPartyContraFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
            strncpy (mRootPartyContraFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool isRootPartyContraFirmValid () const
        {
            return (memcmp (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm)) != 0);
        }

        void resetRootPartyContraFirm ()
        {
            memcpy (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
        }

        string getRootPartyContraSettlementFirm () const
        {
            return string (mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool setRootPartyContraSettlementFirm (const string& v)
        {
            memset (mRootPartyContraSettlementFirm, '\0', sizeof (mRootPartyContraSettlementFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH);
            strncpy (mRootPartyContraSettlementFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool isRootPartyContraSettlementFirmValid () const
        {
            return (memcmp (mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartyContraSettlementFirm)) != 0);
        }

        void resetRootPartyContraSettlementFirm ()
        {
            memcpy (mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartyContraSettlementFirm));
        }

        string getRootPartyContraFirmKVNumber () const
        {
            return string (mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool setRootPartyContraFirmKVNumber (const string& v)
        {
            memset (mRootPartyContraFirmKVNumber, '\0', sizeof (mRootPartyContraFirmKVNumber));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH);
            strncpy (mRootPartyContraFirmKVNumber, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool isRootPartyContraFirmKVNumberValid () const
        {
            return (memcmp (mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyContraFirmKVNumber)) != 0);
        }

        void resetRootPartyContraFirmKVNumber ()
        {
            memcpy (mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyContraFirmKVNumber));
        }

        string getRootPartyContraSettlementAccount () const
        {
            return string (mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool setRootPartyContraSettlementAccount (const string& v)
        {
            memset (mRootPartyContraSettlementAccount, '\0', sizeof (mRootPartyContraSettlementAccount));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH);
            strncpy (mRootPartyContraSettlementAccount, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool isRootPartyContraSettlementAccountValid () const
        {
            return (memcmp (mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartyContraSettlementAccount)) != 0);
        }

        void resetRootPartyContraSettlementAccount ()
        {
            memcpy (mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartyContraSettlementAccount));
        }

        string getRootPartyContraSettlementLocation () const
        {
            return string (mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool setRootPartyContraSettlementLocation (const string& v)
        {
            memset (mRootPartyContraSettlementLocation, '\0', sizeof (mRootPartyContraSettlementLocation));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH);
            strncpy (mRootPartyContraSettlementLocation, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool isRootPartyContraSettlementLocationValid () const
        {
            return (memcmp (mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartyContraSettlementLocation)) != 0);
        }

        void resetRootPartyContraSettlementLocation ()
        {
            memcpy (mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartyContraSettlementLocation));
        }

        string getRootPartyIDExecutionVenue () const
        {
            return string (mRootPartyIDExecutionVenue, ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH);
        }

        bool setRootPartyIDExecutionVenue (const string& v)
        {
            memset (mRootPartyIDExecutionVenue, '\0', sizeof (mRootPartyIDExecutionVenue));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH);
            strncpy (mRootPartyIDExecutionVenue, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH);
        }

        bool isRootPartyIDExecutionVenueValid () const
        {
            return (memcmp (mRootPartyIDExecutionVenue, ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE, sizeof (mRootPartyIDExecutionVenue)) != 0);
        }

        void resetRootPartyIDExecutionVenue ()
        {
            memcpy (mRootPartyIDExecutionVenue, ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE, sizeof (mRootPartyIDExecutionVenue));
        }

        string getRegulatoryTradeID () const
        {
            return string (mRegulatoryTradeID, REGULATORY_TRADE_ID_MAX_LENGTH);
        }

        bool setRegulatoryTradeID (const string& v)
        {
            memset (mRegulatoryTradeID, '\0', sizeof (mRegulatoryTradeID));
            size_t size = min ((size_t) v.size (), (size_t) REGULATORY_TRADE_ID_MAX_LENGTH);
            strncpy (mRegulatoryTradeID, v.c_str (), size);
            return (v.size () <= REGULATORY_TRADE_ID_MAX_LENGTH);
        }

        bool isRegulatoryTradeIDValid () const
        {
            return (memcmp (mRegulatoryTradeID, REGULATORY_TRADE_ID_NO_VALUE, sizeof (mRegulatoryTradeID)) != 0);
        }

        void resetRegulatoryTradeID ()
        {
            memcpy (mRegulatoryTradeID, REGULATORY_TRADE_ID_NO_VALUE, sizeof (mRegulatoryTradeID));
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mLastQty)
                + sizeof (mTransactTime)
                + sizeof (mSettlCurrAmt)
                + sizeof (mSideGrossTradeAmt)
                + sizeof (mSettlCurrFxRate)
                + sizeof (mAccruedInteresAmt)
                + sizeof (mCouponRate)
                + sizeof (mRootPartyIDClientID)
                + sizeof (mExecutingTrader)
                + sizeof (mRootPartyIDInvestmentDecisionMaker)
                + sizeof (mPackageID)
                + sizeof (mMarketSegmentID)
                + sizeof (mTradeID)
                + sizeof (mTradeDate)
                + sizeof (mSideTradeID)
                + sizeof (mRootPartyIDSessionID)
                + sizeof (mRootPartyIDSettlementUnit)
                + sizeof (mRootPartyIDContraUnit)
                + sizeof (mRootPartyIDContraSettlementUnit)
                + sizeof (mOrigTradeID)
                + sizeof (mRootPartyIDExecutingUnit)
                + sizeof (mRootPartyIDExecutingTrader)
                + sizeof (mRootPartyIDClearingUnit)
                + sizeof (mSettlDate)
                + sizeof (mNumDaysInterest)
                + sizeof (mNegotiationID)
                + sizeof (mSRQSRelatedTradeID)
                + sizeof (mTrdType)
                + sizeof (mLastMkt)
                + sizeof (mSide)
                + sizeof (mTradingCapacity)
                + sizeof (mTradeReportType)
                + sizeof (mTransferReason)
                + sizeof (mTradePublishIndicator)
                + sizeof (mLastCouponDeviationIndicator)
                + sizeof (mRefinancingEligibilityIndicator)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mRootPartyIDInvestmentDecisionMakerQualifier)
                + sizeof (mAccount)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mSettlCurrency)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mRootPartyClearingFirm)
                + sizeof (mRootPartyClearingOrganization)
                + sizeof (mRootPartyExecutingFirmKVNumber)
                + sizeof (mRootPartySettlementAccount)
                + sizeof (mRootPartySettlementLocation)
                + sizeof (mRootPartySettlementFirm)
                + sizeof (mRootPartyContraFirm)
                + sizeof (mRootPartyContraSettlementFirm)
                + sizeof (mRootPartyContraFirmKVNumber)
                + sizeof (mRootPartyContraSettlementAccount)
                + sizeof (mRootPartyContraSettlementLocation)
                + sizeof (mRootPartyIDExecutionVenue)
                + sizeof (mRegulatoryTradeID)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSideGrossTradeAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mAccruedInteresAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCouponRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDContraUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDContraSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNumDaysInterest, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastMkt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastCouponDeviationIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRefinancingEligibilityIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyClearingOrganization, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartySettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartySettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartySettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraSettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraSettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDExecutionVenue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRegulatoryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSideGrossTradeAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mAccruedInteresAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCouponRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDContraUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDContraSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNumDaysInterest, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastMkt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastCouponDeviationIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRefinancingEligibilityIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyClearingOrganization, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartySettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartySettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartySettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraSettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraSettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDExecutionVenue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRegulatoryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TESTradeBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[SettlCurrAmt=" << getSettlCurrAmt () << "],"
                << "[SideGrossTradeAmt=" << getSideGrossTradeAmt () << "],"
                << "[SettlCurrFxRate=" << getSettlCurrFxRate () << "],"
                << "[AccruedInteresAmt=" << getAccruedInteresAmt () << "],"
                << "[CouponRate=" << getCouponRate () << "],"
                << "[RootPartyIDClientID=" << getRootPartyIDClientID () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[RootPartyIDInvestmentDecisionMaker=" << getRootPartyIDInvestmentDecisionMaker () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[TradeDate=" << getTradeDate () << "],"
                << "[SideTradeID=" << getSideTradeID () << "],"
                << "[RootPartyIDSessionID=" << getRootPartyIDSessionID () << "],"
                << "[RootPartyIDSettlementUnit=" << getRootPartyIDSettlementUnit () << "],"
                << "[RootPartyIDContraUnit=" << getRootPartyIDContraUnit () << "],"
                << "[RootPartyIDContraSettlementUnit=" << getRootPartyIDContraSettlementUnit () << "],"
                << "[OrigTradeID=" << getOrigTradeID () << "],"
                << "[RootPartyIDExecutingUnit=" << getRootPartyIDExecutingUnit () << "],"
                << "[RootPartyIDExecutingTrader=" << getRootPartyIDExecutingTrader () << "],"
                << "[RootPartyIDClearingUnit=" << getRootPartyIDClearingUnit () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[NumDaysInterest=" << getNumDaysInterest () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[SRQSRelatedTradeID=" << getSRQSRelatedTradeID () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[LastMkt=" << getLastMkt () << "],"
                << "[Side=" << getSide () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TransferReason=" << getTransferReason () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[LastCouponDeviationIndicator=" << getLastCouponDeviationIndicator () << "],"
                << "[RefinancingEligibilityIndicator=" << getRefinancingEligibilityIndicator () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[RootPartyIDInvestmentDecisionMakerQualifier=" << getRootPartyIDInvestmentDecisionMakerQualifier () << "],"
                << "[Account=" << getAccount () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[SettlCurrency=" << getSettlCurrency () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[RootPartyClearingFirm=" << getRootPartyClearingFirm () << "],"
                << "[RootPartyClearingOrganization=" << getRootPartyClearingOrganization () << "],"
                << "[RootPartyExecutingFirmKVNumber=" << getRootPartyExecutingFirmKVNumber () << "],"
                << "[RootPartySettlementAccount=" << getRootPartySettlementAccount () << "],"
                << "[RootPartySettlementLocation=" << getRootPartySettlementLocation () << "],"
                << "[RootPartySettlementFirm=" << getRootPartySettlementFirm () << "],"
                << "[RootPartyContraFirm=" << getRootPartyContraFirm () << "],"
                << "[RootPartyContraSettlementFirm=" << getRootPartyContraSettlementFirm () << "],"
                << "[RootPartyContraFirmKVNumber=" << getRootPartyContraFirmKVNumber () << "],"
                << "[RootPartyContraSettlementAccount=" << getRootPartyContraSettlementAccount () << "],"
                << "[RootPartyContraSettlementLocation=" << getRootPartyContraSettlementLocation () << "],"
                << "[RootPartyIDExecutionVenue=" << getRootPartyIDExecutionVenue () << "],"
                << "[RegulatoryTradeID=" << getRegulatoryTradeID () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const int64_t xetraTESTradeBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraTESTradeBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraTESTradeBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraTESTradeBroadcastPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraTESTradeBroadcastPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraTESTradeBroadcastPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double xetraTESTradeBroadcastPacket::LAST_QTY_MIN = -922337203685477.5807;
const double xetraTESTradeBroadcastPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t xetraTESTradeBroadcastPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraTESTradeBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraTESTradeBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraTESTradeBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraTESTradeBroadcastPacket::SETTL_CURR_AMT_MIN = -92233720368.54775807;
const double xetraTESTradeBroadcastPacket::SETTL_CURR_AMT_MAX = 92233720368.54775807;
const int64_t xetraTESTradeBroadcastPacket::SETTL_CURR_AMT_NO_VALUE = 0x8000000000000000;
const double xetraTESTradeBroadcastPacket::SIDE_GROSS_TRADE_AMT_MIN = -92233720368.54775807;
const double xetraTESTradeBroadcastPacket::SIDE_GROSS_TRADE_AMT_MAX = 92233720368.54775807;
const int64_t xetraTESTradeBroadcastPacket::SIDE_GROSS_TRADE_AMT_NO_VALUE = 0x8000000000000000;
const double xetraTESTradeBroadcastPacket::SETTL_CURR_FX_RATE_MIN = -92233720368.54775807;
const double xetraTESTradeBroadcastPacket::SETTL_CURR_FX_RATE_MAX = 92233720368.54775807;
const int64_t xetraTESTradeBroadcastPacket::SETTL_CURR_FX_RATE_NO_VALUE = 0x8000000000000000;
const double xetraTESTradeBroadcastPacket::ACCRUED_INTERES_AMT_MIN = -92233720368.54775807;
const double xetraTESTradeBroadcastPacket::ACCRUED_INTERES_AMT_MAX = 92233720368.54775807;
const int64_t xetraTESTradeBroadcastPacket::ACCRUED_INTERES_AMT_NO_VALUE = 0x8000000000000000;
const double xetraTESTradeBroadcastPacket::COUPON_RATE_MIN = -922337203685.4775807;
const double xetraTESTradeBroadcastPacket::COUPON_RATE_MAX = 922337203685.4775807;
const int64_t xetraTESTradeBroadcastPacket::COUPON_RATE_NO_VALUE = 0x8000000000000000;
const uint64_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTESTradeBroadcastPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraTESTradeBroadcastPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraTESTradeBroadcastPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::PACKAGE_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTESTradeBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraTESTradeBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraTESTradeBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraTESTradeBroadcastPacket::TRADE_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::TRADE_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTESTradeBroadcastPacket::TRADE_DATE_MIN = 0;
const int32_t xetraTESTradeBroadcastPacket::TRADE_DATE_MAX = 99991231;
const int32_t xetraTESTradeBroadcastPacket::TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::SIDE_TRADE_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::SIDE_TRADE_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::SIDE_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDSETTLEMENT_UNIT_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDSETTLEMENT_UNIT_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_UNIT_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_UNIT_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ORIG_TRADE_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ORIG_TRADE_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ORIG_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTESTradeBroadcastPacket::SETTL_DATE_MIN = 0;
const int32_t xetraTESTradeBroadcastPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraTESTradeBroadcastPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::NUM_DAYS_INTEREST_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::NUM_DAYS_INTEREST_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::NUM_DAYS_INTEREST_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESTradeBroadcastPacket::SRQSRELATED_TRADE_ID_MIN = 0;
const uint32_t xetraTESTradeBroadcastPacket::SRQSRELATED_TRADE_ID_MAX = 4294967294;
const uint32_t xetraTESTradeBroadcastPacket::SRQSRELATED_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraTESTradeBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t xetraTESTradeBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t xetraTESTradeBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int16_t xetraTESTradeBroadcastPacket::LAST_MKT_MIN = 1;
const int16_t xetraTESTradeBroadcastPacket::LAST_MKT_MAX = 255;
const int16_t xetraTESTradeBroadcastPacket::LAST_MKT_NO_VALUE = 0xFFFF;
const int8_t xetraTESTradeBroadcastPacket::SIDE_MIN = 1;
const int8_t xetraTESTradeBroadcastPacket::SIDE_MAX = 2;
const int8_t xetraTESTradeBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraTESTradeBroadcastPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraTESTradeBroadcastPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t xetraTESTradeBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t xetraTESTradeBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::TRANSFER_REASON_MIN = 1;
const int8_t xetraTESTradeBroadcastPacket::TRANSFER_REASON_MAX = 5;
const int8_t xetraTESTradeBroadcastPacket::TRANSFER_REASON_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t xetraTESTradeBroadcastPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t xetraTESTradeBroadcastPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::LAST_COUPON_DEVIATION_INDICATOR_MIN = 0;
const int8_t xetraTESTradeBroadcastPacket::LAST_COUPON_DEVIATION_INDICATOR_MAX = 5;
const int8_t xetraTESTradeBroadcastPacket::LAST_COUPON_DEVIATION_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::REFINANCING_ELIGIBILITY_INDICATOR_MIN = 0;
const int8_t xetraTESTradeBroadcastPacket::REFINANCING_ELIGIBILITY_INDICATOR_MAX = 1;
const int8_t xetraTESTradeBroadcastPacket::REFINANCING_ELIGIBILITY_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraTESTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraTESTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraTESTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraTESTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const char xetraTESTradeBroadcastPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ACCOUNT_MAX_LENGTH = 2;
const char xetraTESTradeBroadcastPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraTESTradeBroadcastPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraTESTradeBroadcastPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraTESTradeBroadcastPacket::SETTL_CURRENCY_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::SETTL_CURRENCY_MAX_LENGTH = 3;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH = 5;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH = 4;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH = 4;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE[35] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH = 35;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH = 3;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH = 5;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH = 5;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH = 5;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH = 4;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE[35] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH = 35;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH = 3;
const char xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH = 4;
const char xetraTESTradeBroadcastPacket::REGULATORY_TRADE_ID_NO_VALUE[52] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::REGULATORY_TRADE_ID_MAX_LENGTH = 52;
const char xetraTESTradeBroadcastPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraTESTradeBroadcastPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_TESTRADEBROADCAST_PACKET_H
