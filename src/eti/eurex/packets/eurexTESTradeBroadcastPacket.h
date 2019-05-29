/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_TESTRADEBROADCAST_PACKET_H
#define EUREX_TESTRADEBROADCAST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexTESTradeBroadcastPacket
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
        static const double CLEARING_TRADE_PRICE_MIN;
        static const double CLEARING_TRADE_PRICE_MAX;
        static const int64_t CLEARING_TRADE_PRICE_NO_VALUE;
        static const double CLEARING_TRADE_QTY_MIN;
        static const double CLEARING_TRADE_QTY_MAX;
        static const int64_t CLEARING_TRADE_QTY_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const int64_t RELATED_SECURITY_ID_MIN;
        static const int64_t RELATED_SECURITY_ID_MAX;
        static const int64_t RELATED_SECURITY_ID_NO_VALUE;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_MIN;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_MAX;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
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
        static const uint32_t STRATEGY_LINK_ID_MIN;
        static const uint32_t STRATEGY_LINK_ID_MAX;
        static const uint32_t STRATEGY_LINK_ID_NO_VALUE;
        static const int32_t RELATED_SYMBOL_MIN;
        static const int32_t RELATED_SYMBOL_MAX;
        static const int32_t RELATED_SYMBOL_NO_VALUE;
        static const int32_t TOT_NUM_TRADE_REPORTS_MIN;
        static const int32_t TOT_NUM_TRADE_REPORTS_MAX;
        static const int32_t TOT_NUM_TRADE_REPORTS_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_MIN;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_MAX;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t RELATED_PRODUCT_COMPLEX_MIN;
        static const int8_t RELATED_PRODUCT_COMPLEX_MAX;
        static const int8_t RELATED_PRODUCT_COMPLEX_NO_VALUE;
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
        static const int8_t MULTI_LEG_REPORTING_TYPE_MIN;
        static const int8_t MULTI_LEG_REPORTING_TYPE_MAX;
        static const int8_t MULTI_LEG_REPORTING_TYPE_NO_VALUE;
        static const char POSITION_EFFECT_NO_VALUE[1];
        static const size_t POSITION_EFFECT_MAX_LENGTH;
        static const int8_t MULTILEG_PRICE_MODEL_MIN;
        static const int8_t MULTILEG_PRICE_MODEL_MAX;
        static const int8_t MULTILEG_PRICE_MODEL_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_RISK_REDUCTION_MIN;
        static const int8_t ORDER_ATTRIBUTE_RISK_REDUCTION_MAX;
        static const int8_t ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const int8_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const char ACCOUNT_NO_VALUE[2];
        static const size_t ACCOUNT_MAX_LENGTH;
        static const char ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32];
        static const size_t ROOT_PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH;
        static const char CUST_ORDER_HANDLING_INST_NO_VALUE[1];
        static const size_t CUST_ORDER_HANDLING_INST_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT3_NO_VALUE[12];
        static const size_t FREE_TEXT3_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE[4];
        static const size_t ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH;
        static const char ROOT_PARTY_IDBENEFICIARY_NO_VALUE[9];
        static const size_t ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH;
        static const char ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7];
        static const size_t ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE[4];
        static const size_t ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH;
        static const char REGULATORY_TRADE_ID_NO_VALUE[52];
        static const size_t REGULATORY_TRADE_ID_MAX_LENGTH;
        static const char BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD2_1_NO_VALUE[2];
        static const size_t PAD2_1_MAX_LENGTH;
        static const size_t SRQSRELATED_TRADE_IDGRP_MIN;
        static const size_t SRQSRELATED_TRADE_IDGRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        int64_t mSecurityID;
        int64_t mLastPx;
        int64_t mLastQty;
        int64_t mClearingTradePrice;
        int64_t mClearingTradeQty;
        uint64_t mTransactTime;
        int64_t mRelatedSecurityID;
        uint64_t mRootPartyIDClientID;
        uint64_t mExecutingTrader;
        uint64_t mRootPartyIDInvestmentDecisionMaker;
        uint64_t mBasketTrdMatchID;
        uint32_t mPackageID;
        int32_t mMarketSegmentID;
        uint32_t mTradeID;
        int32_t mTradeDate;
        uint32_t mSideTradeID;
        uint32_t mRootPartyIDSessionID;
        uint32_t mOrigTradeID;
        uint32_t mRootPartyIDExecutingUnit;
        uint32_t mRootPartyIDExecutingTrader;
        uint32_t mRootPartyIDClearingUnit;
        uint32_t mStrategyLinkID;
        int32_t mRelatedSymbol;
        int32_t mTotNumTradeReports;
        uint32_t mNegotiationID;
        int8_t mNoSRQSRelatedTradeIDs;
        char mPad1[1];
        int16_t mTrdType;
        int8_t mProductComplex;
        int8_t mRelatedProductComplex;
        int8_t mSide;
        int8_t mTradingCapacity;
        int8_t mTradeReportType;
        int8_t mTransferReason;
        int8_t mTradePublishIndicator;
        int8_t mMultiLegReportingType;
        char mPositionEffect[1];
        int8_t mMultilegPriceModel;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mOrderAttributeRiskReduction;
        int8_t mExecutingTraderQualifier;
        int8_t mRootPartyIDInvestmentDecisionMakerQualifier;
        char mAccount[2];
        char mRootPartyIDPositionAccount[32];
        char mCustOrderHandlingInst[1];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText3[12];
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mRootPartyClearingFirm[5];
        char mRootPartyClearingOrganization[4];
        char mRootPartyIDBeneficiary[9];
        char mRootPartyIDTakeUpTradingFirm[5];
        char mRootPartyIDOrderOriginationFirm[7];
        char mRootPartyIDExecutionVenue[4];
        char mRegulatoryTradeID[52];
        char mBasketSideTradeReportID[20];
        char mPad2_1[2];
        vector<eurexSRQSRelatedTradeIDGrpCompPacket> mSRQSRelatedTradeIDGrp;

        // constructor
        eurexTESTradeBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10614;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mClearingTradePrice = CLEARING_TRADE_PRICE_NO_VALUE;
            mClearingTradeQty = CLEARING_TRADE_QTY_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mRelatedSecurityID = RELATED_SECURITY_ID_NO_VALUE;
            mRootPartyIDClientID = ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mRootPartyIDInvestmentDecisionMaker = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mTradeDate = TRADE_DATE_NO_VALUE;
            mSideTradeID = SIDE_TRADE_ID_NO_VALUE;
            mRootPartyIDSessionID = ROOT_PARTY_IDSESSION_ID_NO_VALUE;
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
            mRootPartyIDExecutingUnit = ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
            mRootPartyIDExecutingTrader = ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mRootPartyIDClearingUnit = ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
            mStrategyLinkID = STRATEGY_LINK_ID_NO_VALUE;
            mRelatedSymbol = RELATED_SYMBOL_NO_VALUE;
            mTotNumTradeReports = TOT_NUM_TRADE_REPORTS_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
            mTrdType = TRD_TYPE_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mRelatedProductComplex = RELATED_PRODUCT_COMPLEX_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTransferReason = TRANSFER_REASON_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            mMultiLegReportingType = MULTI_LEG_REPORTING_TYPE_NO_VALUE;
            memcpy(mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
            mMultilegPriceModel = MULTILEG_PRICE_MODEL_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mOrderAttributeRiskReduction = ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mRootPartyIDInvestmentDecisionMakerQualifier = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mRootPartyIDPositionAccount, ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mRootPartyIDPositionAccount));
            memcpy(mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm));
            memcpy(mRootPartyClearingOrganization, ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE, sizeof (mRootPartyClearingOrganization));
            memcpy(mRootPartyIDBeneficiary, ROOT_PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mRootPartyIDBeneficiary));
            memcpy(mRootPartyIDTakeUpTradingFirm, ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mRootPartyIDTakeUpTradingFirm));
            memcpy(mRootPartyIDOrderOriginationFirm, ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mRootPartyIDOrderOriginationFirm));
            memcpy(mRootPartyIDExecutionVenue, ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE, sizeof (mRootPartyIDExecutionVenue));
            memcpy(mRegulatoryTradeID, REGULATORY_TRADE_ID_NO_VALUE, sizeof (mRegulatoryTradeID));
            memcpy(mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
            memcpy(mPad2_1, PAD2_1_NO_VALUE, sizeof (mPad2_1));
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const eurexRBCHeaderCompPacket& v)
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

        double getClearingTradePrice () const
        {
            return mClearingTradePrice / 100000000.0;
        }

        bool setClearingTradePrice (double v)
        {
            mClearingTradePrice = v * 100000000.0;
            return ((CLEARING_TRADE_PRICE_MIN <= v && v <= CLEARING_TRADE_PRICE_MAX) || mClearingTradePrice == CLEARING_TRADE_PRICE_NO_VALUE);
        }

        bool isClearingTradePriceValid () const
        {
            return (mClearingTradePrice != CLEARING_TRADE_PRICE_NO_VALUE);
        }

        void resetClearingTradePrice ()
        {
            mClearingTradePrice = CLEARING_TRADE_PRICE_NO_VALUE;
        }

        double getClearingTradeQty () const
        {
            return mClearingTradeQty / 10000.0;
        }

        bool setClearingTradeQty (double v)
        {
            mClearingTradeQty = v * 10000.0;
            return ((CLEARING_TRADE_QTY_MIN <= v && v <= CLEARING_TRADE_QTY_MAX) || mClearingTradeQty == CLEARING_TRADE_QTY_NO_VALUE);
        }

        bool isClearingTradeQtyValid () const
        {
            return (mClearingTradeQty != CLEARING_TRADE_QTY_NO_VALUE);
        }

        void resetClearingTradeQty ()
        {
            mClearingTradeQty = CLEARING_TRADE_QTY_NO_VALUE;
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

        int64_t getRelatedSecurityID () const
        {
            return mRelatedSecurityID;
        }

        bool setRelatedSecurityID (int64_t v)
        {
            mRelatedSecurityID = v;
            return ((RELATED_SECURITY_ID_MIN <= mRelatedSecurityID && mRelatedSecurityID <= RELATED_SECURITY_ID_MAX) || mRelatedSecurityID == RELATED_SECURITY_ID_NO_VALUE);
        }

        bool isRelatedSecurityIDValid () const
        {
            return (mRelatedSecurityID != RELATED_SECURITY_ID_NO_VALUE);
        }

        void resetRelatedSecurityID ()
        {
            mRelatedSecurityID = RELATED_SECURITY_ID_NO_VALUE;
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

        uint64_t getBasketTrdMatchID () const
        {
            return mBasketTrdMatchID;
        }

        bool setBasketTrdMatchID (uint64_t v)
        {
            mBasketTrdMatchID = v;
            return ((BASKET_TRD_MATCH_ID_MIN <= mBasketTrdMatchID && mBasketTrdMatchID <= BASKET_TRD_MATCH_ID_MAX) || mBasketTrdMatchID == BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        bool isBasketTrdMatchIDValid () const
        {
            return (mBasketTrdMatchID != BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        void resetBasketTrdMatchID ()
        {
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
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

        uint32_t getStrategyLinkID () const
        {
            return mStrategyLinkID;
        }

        bool setStrategyLinkID (uint32_t v)
        {
            mStrategyLinkID = v;
            return ((STRATEGY_LINK_ID_MIN <= mStrategyLinkID && mStrategyLinkID <= STRATEGY_LINK_ID_MAX) || mStrategyLinkID == STRATEGY_LINK_ID_NO_VALUE);
        }

        bool isStrategyLinkIDValid () const
        {
            return (mStrategyLinkID != STRATEGY_LINK_ID_NO_VALUE);
        }

        void resetStrategyLinkID ()
        {
            mStrategyLinkID = STRATEGY_LINK_ID_NO_VALUE;
        }

        int32_t getRelatedSymbol () const
        {
            return mRelatedSymbol;
        }

        bool setRelatedSymbol (int32_t v)
        {
            mRelatedSymbol = v;
            return ((RELATED_SYMBOL_MIN <= mRelatedSymbol && mRelatedSymbol <= RELATED_SYMBOL_MAX) || mRelatedSymbol == RELATED_SYMBOL_NO_VALUE);
        }

        bool isRelatedSymbolValid () const
        {
            return (mRelatedSymbol != RELATED_SYMBOL_NO_VALUE);
        }

        void resetRelatedSymbol ()
        {
            mRelatedSymbol = RELATED_SYMBOL_NO_VALUE;
        }

        int32_t getTotNumTradeReports () const
        {
            return mTotNumTradeReports;
        }

        bool setTotNumTradeReports (int32_t v)
        {
            mTotNumTradeReports = v;
            return ((TOT_NUM_TRADE_REPORTS_MIN <= mTotNumTradeReports && mTotNumTradeReports <= TOT_NUM_TRADE_REPORTS_MAX) || mTotNumTradeReports == TOT_NUM_TRADE_REPORTS_NO_VALUE);
        }

        bool isTotNumTradeReportsValid () const
        {
            return (mTotNumTradeReports != TOT_NUM_TRADE_REPORTS_NO_VALUE);
        }

        void resetTotNumTradeReports ()
        {
            mTotNumTradeReports = TOT_NUM_TRADE_REPORTS_NO_VALUE;
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

        int8_t getNoSRQSRelatedTradeIDs () const
        {
            return mNoSRQSRelatedTradeIDs;
        }

        bool setNoSRQSRelatedTradeIDs (int8_t v)
        {
            mNoSRQSRelatedTradeIDs = v;
            return ((NO_SRQSRELATED_TRADE_IDS_MIN <= mNoSRQSRelatedTradeIDs && mNoSRQSRelatedTradeIDs <= NO_SRQSRELATED_TRADE_IDS_MAX) || mNoSRQSRelatedTradeIDs == NO_SRQSRELATED_TRADE_IDS_NO_VALUE);
        }

        bool isNoSRQSRelatedTradeIDsValid () const
        {
            return (mNoSRQSRelatedTradeIDs != NO_SRQSRELATED_TRADE_IDS_NO_VALUE);
        }

        void resetNoSRQSRelatedTradeIDs ()
        {
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
        }

        string getPad1 () const
        {
            return string (mPad1, PAD1_MAX_LENGTH);
        }

        bool setPad1 (const string& v)
        {
            memset (mPad1, '\0', sizeof (mPad1));
            size_t size = min ((size_t) v.size (), (size_t) PAD1_MAX_LENGTH);
            strncpy (mPad1, v.c_str (), size);
            return (v.size () <= PAD1_MAX_LENGTH);
        }

        bool isPad1Valid () const
        {
            return (memcmp (mPad1, PAD1_NO_VALUE, sizeof (mPad1)) != 0);
        }

        void resetPad1 ()
        {
            memcpy (mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        int8_t getProductComplex () const
        {
            return mProductComplex;
        }

        bool setProductComplex (int8_t v)
        {
            mProductComplex = v;
            return ((PRODUCT_COMPLEX_MIN <= mProductComplex && mProductComplex <= PRODUCT_COMPLEX_MAX) || mProductComplex == PRODUCT_COMPLEX_NO_VALUE);
        }

        bool isProductComplexValid () const
        {
            return (mProductComplex != PRODUCT_COMPLEX_NO_VALUE);
        }

        void resetProductComplex ()
        {
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
        }

        int8_t getRelatedProductComplex () const
        {
            return mRelatedProductComplex;
        }

        bool setRelatedProductComplex (int8_t v)
        {
            mRelatedProductComplex = v;
            return ((RELATED_PRODUCT_COMPLEX_MIN <= mRelatedProductComplex && mRelatedProductComplex <= RELATED_PRODUCT_COMPLEX_MAX) || mRelatedProductComplex == RELATED_PRODUCT_COMPLEX_NO_VALUE);
        }

        bool isRelatedProductComplexValid () const
        {
            return (mRelatedProductComplex != RELATED_PRODUCT_COMPLEX_NO_VALUE);
        }

        void resetRelatedProductComplex ()
        {
            mRelatedProductComplex = RELATED_PRODUCT_COMPLEX_NO_VALUE;
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

        int8_t getMultiLegReportingType () const
        {
            return mMultiLegReportingType;
        }

        bool setMultiLegReportingType (int8_t v)
        {
            mMultiLegReportingType = v;
            return ((MULTI_LEG_REPORTING_TYPE_MIN <= mMultiLegReportingType && mMultiLegReportingType <= MULTI_LEG_REPORTING_TYPE_MAX) || mMultiLegReportingType == MULTI_LEG_REPORTING_TYPE_NO_VALUE);
        }

        bool isMultiLegReportingTypeValid () const
        {
            return (mMultiLegReportingType != MULTI_LEG_REPORTING_TYPE_NO_VALUE);
        }

        void resetMultiLegReportingType ()
        {
            mMultiLegReportingType = MULTI_LEG_REPORTING_TYPE_NO_VALUE;
        }

        string getPositionEffect () const
        {
            return string (mPositionEffect, POSITION_EFFECT_MAX_LENGTH);
        }

        bool setPositionEffect (const string& v)
        {
            memset (mPositionEffect, '\0', sizeof (mPositionEffect));
            size_t size = min ((size_t) v.size (), (size_t) POSITION_EFFECT_MAX_LENGTH);
            strncpy (mPositionEffect, v.c_str (), size);
            return (v.size () <= POSITION_EFFECT_MAX_LENGTH);
        }

        bool isPositionEffectValid () const
        {
            return (memcmp (mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect)) != 0);
        }

        void resetPositionEffect ()
        {
            memcpy (mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
        }

        int8_t getMultilegPriceModel () const
        {
            return mMultilegPriceModel;
        }

        bool setMultilegPriceModel (int8_t v)
        {
            mMultilegPriceModel = v;
            return ((MULTILEG_PRICE_MODEL_MIN <= mMultilegPriceModel && mMultilegPriceModel <= MULTILEG_PRICE_MODEL_MAX) || mMultilegPriceModel == MULTILEG_PRICE_MODEL_NO_VALUE);
        }

        bool isMultilegPriceModelValid () const
        {
            return (mMultilegPriceModel != MULTILEG_PRICE_MODEL_NO_VALUE);
        }

        void resetMultilegPriceModel ()
        {
            mMultilegPriceModel = MULTILEG_PRICE_MODEL_NO_VALUE;
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

        int8_t getOrderAttributeRiskReduction () const
        {
            return mOrderAttributeRiskReduction;
        }

        bool setOrderAttributeRiskReduction (int8_t v)
        {
            mOrderAttributeRiskReduction = v;
            return ((ORDER_ATTRIBUTE_RISK_REDUCTION_MIN <= mOrderAttributeRiskReduction && mOrderAttributeRiskReduction <= ORDER_ATTRIBUTE_RISK_REDUCTION_MAX) || mOrderAttributeRiskReduction == ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE);
        }

        bool isOrderAttributeRiskReductionValid () const
        {
            return (mOrderAttributeRiskReduction != ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE);
        }

        void resetOrderAttributeRiskReduction ()
        {
            mOrderAttributeRiskReduction = ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
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

        string getRootPartyIDPositionAccount () const
        {
            return string (mRootPartyIDPositionAccount, ROOT_PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH);
        }

        bool setRootPartyIDPositionAccount (const string& v)
        {
            memset (mRootPartyIDPositionAccount, '\0', sizeof (mRootPartyIDPositionAccount));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH);
            strncpy (mRootPartyIDPositionAccount, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH);
        }

        bool isRootPartyIDPositionAccountValid () const
        {
            return (memcmp (mRootPartyIDPositionAccount, ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mRootPartyIDPositionAccount)) != 0);
        }

        void resetRootPartyIDPositionAccount ()
        {
            memcpy (mRootPartyIDPositionAccount, ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mRootPartyIDPositionAccount));
        }

        string getCustOrderHandlingInst () const
        {
            return string (mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_MAX_LENGTH);
        }

        bool setCustOrderHandlingInst (const string& v)
        {
            memset (mCustOrderHandlingInst, '\0', sizeof (mCustOrderHandlingInst));
            size_t size = min ((size_t) v.size (), (size_t) CUST_ORDER_HANDLING_INST_MAX_LENGTH);
            strncpy (mCustOrderHandlingInst, v.c_str (), size);
            return (v.size () <= CUST_ORDER_HANDLING_INST_MAX_LENGTH);
        }

        bool isCustOrderHandlingInstValid () const
        {
            return (memcmp (mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst)) != 0);
        }

        void resetCustOrderHandlingInst ()
        {
            memcpy (mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
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

        string getFreeText3 () const
        {
            return string (mFreeText3, FREE_TEXT3_MAX_LENGTH);
        }

        bool setFreeText3 (const string& v)
        {
            memset (mFreeText3, '\0', sizeof (mFreeText3));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT3_MAX_LENGTH);
            strncpy (mFreeText3, v.c_str (), size);
            return (v.size () <= FREE_TEXT3_MAX_LENGTH);
        }

        bool isFreeText3Valid () const
        {
            return (memcmp (mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3)) != 0);
        }

        void resetFreeText3 ()
        {
            memcpy (mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
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

        string getRootPartyIDBeneficiary () const
        {
            return string (mRootPartyIDBeneficiary, ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH);
        }

        bool setRootPartyIDBeneficiary (const string& v)
        {
            memset (mRootPartyIDBeneficiary, '\0', sizeof (mRootPartyIDBeneficiary));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH);
            strncpy (mRootPartyIDBeneficiary, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH);
        }

        bool isRootPartyIDBeneficiaryValid () const
        {
            return (memcmp (mRootPartyIDBeneficiary, ROOT_PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mRootPartyIDBeneficiary)) != 0);
        }

        void resetRootPartyIDBeneficiary ()
        {
            memcpy (mRootPartyIDBeneficiary, ROOT_PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mRootPartyIDBeneficiary));
        }

        string getRootPartyIDTakeUpTradingFirm () const
        {
            return string (mRootPartyIDTakeUpTradingFirm, ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH);
        }

        bool setRootPartyIDTakeUpTradingFirm (const string& v)
        {
            memset (mRootPartyIDTakeUpTradingFirm, '\0', sizeof (mRootPartyIDTakeUpTradingFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH);
            strncpy (mRootPartyIDTakeUpTradingFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH);
        }

        bool isRootPartyIDTakeUpTradingFirmValid () const
        {
            return (memcmp (mRootPartyIDTakeUpTradingFirm, ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mRootPartyIDTakeUpTradingFirm)) != 0);
        }

        void resetRootPartyIDTakeUpTradingFirm ()
        {
            memcpy (mRootPartyIDTakeUpTradingFirm, ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mRootPartyIDTakeUpTradingFirm));
        }

        string getRootPartyIDOrderOriginationFirm () const
        {
            return string (mRootPartyIDOrderOriginationFirm, ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH);
        }

        bool setRootPartyIDOrderOriginationFirm (const string& v)
        {
            memset (mRootPartyIDOrderOriginationFirm, '\0', sizeof (mRootPartyIDOrderOriginationFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH);
            strncpy (mRootPartyIDOrderOriginationFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH);
        }

        bool isRootPartyIDOrderOriginationFirmValid () const
        {
            return (memcmp (mRootPartyIDOrderOriginationFirm, ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mRootPartyIDOrderOriginationFirm)) != 0);
        }

        void resetRootPartyIDOrderOriginationFirm ()
        {
            memcpy (mRootPartyIDOrderOriginationFirm, ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mRootPartyIDOrderOriginationFirm));
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

        string getBasketSideTradeReportID () const
        {
            return string (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setBasketSideTradeReportID (const string& v)
        {
            memset (mBasketSideTradeReportID, '\0', sizeof (mBasketSideTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mBasketSideTradeReportID, v.c_str (), size);
            return (v.size () <= BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isBasketSideTradeReportIDValid () const
        {
            return (memcmp (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID)) != 0);
        }

        void resetBasketSideTradeReportID ()
        {
            memcpy (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
        }

        string getPad2_1 () const
        {
            return string (mPad2_1, PAD2_1_MAX_LENGTH);
        }

        bool setPad2_1 (const string& v)
        {
            memset (mPad2_1, '\0', sizeof (mPad2_1));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_1_MAX_LENGTH);
            strncpy (mPad2_1, v.c_str (), size);
            return (v.size () <= PAD2_1_MAX_LENGTH);
        }

        bool isPad2_1Valid () const
        {
            return (memcmp (mPad2_1, PAD2_1_NO_VALUE, sizeof (mPad2_1)) != 0);
        }

        void resetPad2_1 ()
        {
            memcpy (mPad2_1, PAD2_1_NO_VALUE, sizeof (mPad2_1));
        }

        const vector<eurexSRQSRelatedTradeIDGrpCompPacket>& getSRQSRelatedTradeIDGrp () const
        {
            return mSRQSRelatedTradeIDGrp;
        }

        bool setSRQSRelatedTradeIDGrp (const vector<eurexSRQSRelatedTradeIDGrpCompPacket>& v)
        {
            mSRQSRelatedTradeIDGrp = v;
            mNoSRQSRelatedTradeIDs = v.size ();
            return (SRQSRELATED_TRADE_IDGRP_MIN <= v.size () && v.size () <= SRQSRELATED_TRADE_IDGRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mLastQty)
                + sizeof (mClearingTradePrice)
                + sizeof (mClearingTradeQty)
                + sizeof (mTransactTime)
                + sizeof (mRelatedSecurityID)
                + sizeof (mRootPartyIDClientID)
                + sizeof (mExecutingTrader)
                + sizeof (mRootPartyIDInvestmentDecisionMaker)
                + sizeof (mBasketTrdMatchID)
                + sizeof (mPackageID)
                + sizeof (mMarketSegmentID)
                + sizeof (mTradeID)
                + sizeof (mTradeDate)
                + sizeof (mSideTradeID)
                + sizeof (mRootPartyIDSessionID)
                + sizeof (mOrigTradeID)
                + sizeof (mRootPartyIDExecutingUnit)
                + sizeof (mRootPartyIDExecutingTrader)
                + sizeof (mRootPartyIDClearingUnit)
                + sizeof (mStrategyLinkID)
                + sizeof (mRelatedSymbol)
                + sizeof (mTotNumTradeReports)
                + sizeof (mNegotiationID)
                + sizeof (mNoSRQSRelatedTradeIDs)
                + sizeof (mPad1)
                + sizeof (mTrdType)
                + sizeof (mProductComplex)
                + sizeof (mRelatedProductComplex)
                + sizeof (mSide)
                + sizeof (mTradingCapacity)
                + sizeof (mTradeReportType)
                + sizeof (mTransferReason)
                + sizeof (mTradePublishIndicator)
                + sizeof (mMultiLegReportingType)
                + sizeof (mPositionEffect)
                + sizeof (mMultilegPriceModel)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mOrderAttributeRiskReduction)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mRootPartyIDInvestmentDecisionMakerQualifier)
                + sizeof (mAccount)
                + sizeof (mRootPartyIDPositionAccount)
                + sizeof (mCustOrderHandlingInst)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText3)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mRootPartyClearingFirm)
                + sizeof (mRootPartyClearingOrganization)
                + sizeof (mRootPartyIDBeneficiary)
                + sizeof (mRootPartyIDTakeUpTradingFirm)
                + sizeof (mRootPartyIDOrderOriginationFirm)
                + sizeof (mRootPartyIDExecutionVenue)
                + sizeof (mRegulatoryTradeID)
                + sizeof (mBasketSideTradeReportID)
                + sizeof (mPad2_1)
                + eti::getRawSize (mSRQSRelatedTradeIDGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSRQSRelatedTradeIDs = mSRQSRelatedTradeIDGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClearingTradePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClearingTradeQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mStrategyLinkID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTotNumTradeReports, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoSRQSRelatedTradeIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMultiLegReportingType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMultilegPriceModel, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeRiskReduction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyClearingOrganization, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyIDExecutionVenue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRegulatoryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2_1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSRQSRelatedTradeIDGrp.size (); i++)
            {
                state = mSRQSRelatedTradeIDGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClearingTradePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClearingTradeQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mStrategyLinkID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTotNumTradeReports, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoSRQSRelatedTradeIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMultiLegReportingType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMultilegPriceModel, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeRiskReduction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyClearingOrganization, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyIDExecutionVenue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRegulatoryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2_1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSRQSRelatedTradeIDGrp.resize (mNoSRQSRelatedTradeIDs);
            for (vector<eurexSRQSRelatedTradeIDGrpCompPacket>::iterator it = mSRQSRelatedTradeIDGrp.begin (); it != mSRQSRelatedTradeIDGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
                << "[ClearingTradePrice=" << getClearingTradePrice () << "],"
                << "[ClearingTradeQty=" << getClearingTradeQty () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[RelatedSecurityID=" << getRelatedSecurityID () << "],"
                << "[RootPartyIDClientID=" << getRootPartyIDClientID () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[RootPartyIDInvestmentDecisionMaker=" << getRootPartyIDInvestmentDecisionMaker () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[TradeDate=" << getTradeDate () << "],"
                << "[SideTradeID=" << getSideTradeID () << "],"
                << "[RootPartyIDSessionID=" << getRootPartyIDSessionID () << "],"
                << "[OrigTradeID=" << getOrigTradeID () << "],"
                << "[RootPartyIDExecutingUnit=" << getRootPartyIDExecutingUnit () << "],"
                << "[RootPartyIDExecutingTrader=" << getRootPartyIDExecutingTrader () << "],"
                << "[RootPartyIDClearingUnit=" << getRootPartyIDClearingUnit () << "],"
                << "[StrategyLinkID=" << getStrategyLinkID () << "],"
                << "[RelatedSymbol=" << getRelatedSymbol () << "],"
                << "[TotNumTradeReports=" << getTotNumTradeReports () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NoSRQSRelatedTradeIDs=" << getNoSRQSRelatedTradeIDs () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[RelatedProductComplex=" << getRelatedProductComplex () << "],"
                << "[Side=" << getSide () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TransferReason=" << getTransferReason () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[MultiLegReportingType=" << getMultiLegReportingType () << "],"
                << "[PositionEffect=" << getPositionEffect () << "],"
                << "[MultilegPriceModel=" << getMultilegPriceModel () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[OrderAttributeRiskReduction=" << getOrderAttributeRiskReduction () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[RootPartyIDInvestmentDecisionMakerQualifier=" << getRootPartyIDInvestmentDecisionMakerQualifier () << "],"
                << "[Account=" << getAccount () << "],"
                << "[RootPartyIDPositionAccount=" << getRootPartyIDPositionAccount () << "],"
                << "[CustOrderHandlingInst=" << getCustOrderHandlingInst () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText3=" << getFreeText3 () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[RootPartyClearingFirm=" << getRootPartyClearingFirm () << "],"
                << "[RootPartyClearingOrganization=" << getRootPartyClearingOrganization () << "],"
                << "[RootPartyIDBeneficiary=" << getRootPartyIDBeneficiary () << "],"
                << "[RootPartyIDTakeUpTradingFirm=" << getRootPartyIDTakeUpTradingFirm () << "],"
                << "[RootPartyIDOrderOriginationFirm=" << getRootPartyIDOrderOriginationFirm () << "],"
                << "[RootPartyIDExecutionVenue=" << getRootPartyIDExecutionVenue () << "],"
                << "[RegulatoryTradeID=" << getRegulatoryTradeID () << "],"
                << "[BasketSideTradeReportID=" << getBasketSideTradeReportID () << "],"
                << "[Pad2_1=" << getPad2_1 () << "],"
                << "[SRQSRelatedTradeIDGrp=" << eti::toString (getSRQSRelatedTradeIDGrp ()) << "]";
            return sss.str();
        }
};

const int64_t eurexTESTradeBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexTESTradeBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexTESTradeBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexTESTradeBroadcastPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexTESTradeBroadcastPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexTESTradeBroadcastPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexTESTradeBroadcastPacket::LAST_QTY_MIN = -922337203685477.5807;
const double eurexTESTradeBroadcastPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t eurexTESTradeBroadcastPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const double eurexTESTradeBroadcastPacket::CLEARING_TRADE_PRICE_MIN = -92233720368.54775807;
const double eurexTESTradeBroadcastPacket::CLEARING_TRADE_PRICE_MAX = 92233720368.54775807;
const int64_t eurexTESTradeBroadcastPacket::CLEARING_TRADE_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexTESTradeBroadcastPacket::CLEARING_TRADE_QTY_MIN = -922337203685477.5807;
const double eurexTESTradeBroadcastPacket::CLEARING_TRADE_QTY_MAX = 922337203685477.5807;
const int64_t eurexTESTradeBroadcastPacket::CLEARING_TRADE_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexTESTradeBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexTESTradeBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexTESTradeBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexTESTradeBroadcastPacket::RELATED_SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexTESTradeBroadcastPacket::RELATED_SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexTESTradeBroadcastPacket::RELATED_SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTESTradeBroadcastPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t eurexTESTradeBroadcastPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t eurexTESTradeBroadcastPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTESTradeBroadcastPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexTESTradeBroadcastPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexTESTradeBroadcastPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::PACKAGE_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTESTradeBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexTESTradeBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexTESTradeBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexTESTradeBroadcastPacket::TRADE_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::TRADE_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTESTradeBroadcastPacket::TRADE_DATE_MIN = 0;
const int32_t eurexTESTradeBroadcastPacket::TRADE_DATE_MAX = 99991231;
const int32_t eurexTESTradeBroadcastPacket::TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::SIDE_TRADE_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::SIDE_TRADE_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::SIDE_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::ORIG_TRADE_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::ORIG_TRADE_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::ORIG_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESTradeBroadcastPacket::STRATEGY_LINK_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::STRATEGY_LINK_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::STRATEGY_LINK_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTESTradeBroadcastPacket::RELATED_SYMBOL_MIN = -2147483647;
const int32_t eurexTESTradeBroadcastPacket::RELATED_SYMBOL_MAX = 2147483647;
const int32_t eurexTESTradeBroadcastPacket::RELATED_SYMBOL_NO_VALUE = 0x80000000;
const int32_t eurexTESTradeBroadcastPacket::TOT_NUM_TRADE_REPORTS_MIN = -2147483647;
const int32_t eurexTESTradeBroadcastPacket::TOT_NUM_TRADE_REPORTS_MAX = 2147483647;
const int32_t eurexTESTradeBroadcastPacket::TOT_NUM_TRADE_REPORTS_NO_VALUE = 0x80000000;
const uint32_t eurexTESTradeBroadcastPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexTESTradeBroadcastPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexTESTradeBroadcastPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexTESTradeBroadcastPacket::NO_SRQSRELATED_TRADE_IDS_MIN = 0;
const int8_t eurexTESTradeBroadcastPacket::NO_SRQSRELATED_TRADE_IDS_MAX = 12;
const int8_t eurexTESTradeBroadcastPacket::NO_SRQSRELATED_TRADE_IDS_NO_VALUE = 0xFF;
const char eurexTESTradeBroadcastPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexTESTradeBroadcastPacket::PAD1_MAX_LENGTH = 1;
const int16_t eurexTESTradeBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t eurexTESTradeBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexTESTradeBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexTESTradeBroadcastPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexTESTradeBroadcastPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexTESTradeBroadcastPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::RELATED_PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexTESTradeBroadcastPacket::RELATED_PRODUCT_COMPLEX_MAX = 9;
const int8_t eurexTESTradeBroadcastPacket::RELATED_PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::SIDE_MIN = 1;
const int8_t eurexTESTradeBroadcastPacket::SIDE_MAX = 2;
const int8_t eurexTESTradeBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexTESTradeBroadcastPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexTESTradeBroadcastPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexTESTradeBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexTESTradeBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::TRANSFER_REASON_MIN = 1;
const int8_t eurexTESTradeBroadcastPacket::TRANSFER_REASON_MAX = 5;
const int8_t eurexTESTradeBroadcastPacket::TRANSFER_REASON_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t eurexTESTradeBroadcastPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t eurexTESTradeBroadcastPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::MULTI_LEG_REPORTING_TYPE_MIN = 1;
const int8_t eurexTESTradeBroadcastPacket::MULTI_LEG_REPORTING_TYPE_MAX = 2;
const int8_t eurexTESTradeBroadcastPacket::MULTI_LEG_REPORTING_TYPE_NO_VALUE = 0xFF;
const char eurexTESTradeBroadcastPacket::POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexTESTradeBroadcastPacket::POSITION_EFFECT_MAX_LENGTH = 1;
const int8_t eurexTESTradeBroadcastPacket::MULTILEG_PRICE_MODEL_MIN = 0;
const int8_t eurexTESTradeBroadcastPacket::MULTILEG_PRICE_MODEL_MAX = 1;
const int8_t eurexTESTradeBroadcastPacket::MULTILEG_PRICE_MODEL_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t eurexTESTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t eurexTESTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_MIN = 0;
const int8_t eurexTESTradeBroadcastPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_MAX = 1;
const int8_t eurexTESTradeBroadcastPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t eurexTESTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t eurexTESTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const char eurexTESTradeBroadcastPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ACCOUNT_MAX_LENGTH = 2;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH = 32;
const char eurexTESTradeBroadcastPacket::CUST_ORDER_HANDLING_INST_NO_VALUE[1] = {0x00};
const size_t eurexTESTradeBroadcastPacket::CUST_ORDER_HANDLING_INST_MAX_LENGTH = 1;
const char eurexTESTradeBroadcastPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexTESTradeBroadcastPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char eurexTESTradeBroadcastPacket::FREE_TEXT3_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::FREE_TEXT3_MAX_LENGTH = 12;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH = 5;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH = 4;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_IDBENEFICIARY_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH = 9;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH = 5;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH = 7;
const char eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH = 4;
const char eurexTESTradeBroadcastPacket::REGULATORY_TRADE_ID_NO_VALUE[52] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::REGULATORY_TRADE_ID_MAX_LENGTH = 52;
const char eurexTESTradeBroadcastPacket::BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexTESTradeBroadcastPacket::PAD2_1_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexTESTradeBroadcastPacket::PAD2_1_MAX_LENGTH = 2;
const size_t eurexTESTradeBroadcastPacket::SRQSRELATED_TRADE_IDGRP_MIN = 0;
const size_t eurexTESTradeBroadcastPacket::SRQSRELATED_TRADE_IDGRP_MAX = 12;


} // namespace neueda

#endif // EUREX_TESTRADEBROADCAST_PACKET_H
