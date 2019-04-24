/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_TRADEBROADCAST_PACKET_H
#define EUREX_TRADEBROADCAST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "eurexPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexTradeBroadcastPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const int64_t RELATED_SECURITY_ID_MIN;
        static const int64_t RELATED_SECURITY_ID_MAX;
        static const int64_t RELATED_SECURITY_ID_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double LAST_QTY_MIN;
        static const double LAST_QTY_MAX;
        static const int64_t LAST_QTY_NO_VALUE;
        static const double SIDE_LAST_PX_MIN;
        static const double SIDE_LAST_PX_MAX;
        static const int64_t SIDE_LAST_PX_NO_VALUE;
        static const double SIDE_LAST_QTY_MIN;
        static const double SIDE_LAST_QTY_MAX;
        static const int64_t SIDE_LAST_QTY_NO_VALUE;
        static const double CLEARING_TRADE_PRICE_MIN;
        static const double CLEARING_TRADE_PRICE_MAX;
        static const int64_t CLEARING_TRADE_PRICE_NO_VALUE;
        static const double CLEARING_TRADE_QTY_MIN;
        static const double CLEARING_TRADE_QTY_MAX;
        static const int64_t CLEARING_TRADE_QTY_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_MIN;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_MAX;
        static const uint64_t ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const uint32_t ORIG_TRADE_ID_MIN;
        static const uint32_t ORIG_TRADE_ID_MAX;
        static const uint32_t ORIG_TRADE_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_MIN;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_MAX;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t RELATED_SYMBOL_MIN;
        static const int32_t RELATED_SYMBOL_MAX;
        static const int32_t RELATED_SYMBOL_NO_VALUE;
        static const uint32_t SIDE_TRADE_ID_MIN;
        static const uint32_t SIDE_TRADE_ID_MAX;
        static const uint32_t SIDE_TRADE_ID_NO_VALUE;
        static const int32_t MATCH_DATE_MIN;
        static const int32_t MATCH_DATE_MAX;
        static const int32_t MATCH_DATE_NO_VALUE;
        static const uint32_t TRD_MATCH_ID_MIN;
        static const uint32_t TRD_MATCH_ID_MAX;
        static const uint32_t TRD_MATCH_ID_NO_VALUE;
        static const uint32_t STRATEGY_LINK_ID_MIN;
        static const uint32_t STRATEGY_LINK_ID_MAX;
        static const uint32_t STRATEGY_LINK_ID_NO_VALUE;
        static const int32_t TOT_NUM_TRADE_REPORTS_MIN;
        static const int32_t TOT_NUM_TRADE_REPORTS_MAX;
        static const int32_t TOT_NUM_TRADE_REPORTS_NO_VALUE;
        static const int8_t MULTI_LEG_REPORTING_TYPE_MIN;
        static const int8_t MULTI_LEG_REPORTING_TYPE_MAX;
        static const int8_t MULTI_LEG_REPORTING_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t TRANSFER_REASON_MIN;
        static const int8_t TRANSFER_REASON_MAX;
        static const int8_t TRANSFER_REASON_NO_VALUE;
        static const char ROOT_PARTY_IDBENEFICIARY_NO_VALUE[9];
        static const size_t ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH;
        static const char ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7];
        static const size_t ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH;
        static const int8_t MATCH_TYPE_MIN;
        static const int8_t MATCH_TYPE_MAX;
        static const int8_t MATCH_TYPE_NO_VALUE;
        static const int8_t MATCH_SUB_TYPE_MIN;
        static const int8_t MATCH_SUB_TYPE_MAX;
        static const int8_t MATCH_SUB_TYPE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t SIDE_LIQUIDITY_IND_MIN;
        static const int8_t SIDE_LIQUIDITY_IND_MAX;
        static const int8_t SIDE_LIQUIDITY_IND_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
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
        static const char POSITION_EFFECT_NO_VALUE[1];
        static const size_t POSITION_EFFECT_MAX_LENGTH;
        static const char CUST_ORDER_HANDLING_INST_NO_VALUE[1];
        static const size_t CUST_ORDER_HANDLING_INST_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT3_NO_VALUE[12];
        static const size_t FREE_TEXT3_MAX_LENGTH;
        static const char ORDER_CATEGORY_NO_VALUE[1];
        static const size_t ORDER_CATEGORY_MAX_LENGTH;
        static const int8_t ORD_TYPE_MIN;
        static const int8_t ORD_TYPE_MAX;
        static const int8_t ORD_TYPE_NO_VALUE;
        static const int8_t RELATED_PRODUCT_COMPLEX_MIN;
        static const int8_t RELATED_PRODUCT_COMPLEX_MAX;
        static const int8_t RELATED_PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t ORDER_SIDE_MIN;
        static const int8_t ORDER_SIDE_MAX;
        static const int8_t ORDER_SIDE_NO_VALUE;
        static const char ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE[4];
        static const size_t ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH;
        static const char REGULATORY_TRADE_ID_NO_VALUE[52];
        static const size_t REGULATORY_TRADE_ID_MAX_LENGTH;
        static const char ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE[4];
        static const size_t ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        int64_t mSecurityID;
        int64_t mRelatedSecurityID;
        int64_t mPrice;
        int64_t mLastPx;
        int64_t mLastQty;
        int64_t mSideLastPx;
        int64_t mSideLastQty;
        int64_t mClearingTradePrice;
        int64_t mClearingTradeQty;
        uint64_t mTransactTime;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        int64_t mLeavesQty;
        int64_t mCumQty;
        uint64_t mRootPartyIDClientID;
        uint64_t mExecutingTrader;
        uint64_t mRootPartyIDInvestmentDecisionMaker;
        uint32_t mTradeID;
        uint32_t mOrigTradeID;
        uint32_t mRootPartyIDExecutingUnit;
        uint32_t mRootPartyIDSessionID;
        uint32_t mRootPartyIDExecutingTrader;
        uint32_t mRootPartyIDClearingUnit;
        int32_t mMarketSegmentID;
        int32_t mRelatedSymbol;
        uint32_t mSideTradeID;
        int32_t mMatchDate;
        uint32_t mTrdMatchID;
        uint32_t mStrategyLinkID;
        int32_t mTotNumTradeReports;
        int8_t mMultiLegReportingType;
        int8_t mTradeReportType;
        int8_t mTransferReason;
        char mRootPartyIDBeneficiary[9];
        char mRootPartyIDTakeUpTradingFirm[5];
        char mRootPartyIDOrderOriginationFirm[7];
        int8_t mMatchType;
        int8_t mMatchSubType;
        int8_t mSide;
        int8_t mSideLiquidityInd;
        int8_t mTradingCapacity;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mOrderAttributeRiskReduction;
        int8_t mExecutingTraderQualifier;
        int8_t mRootPartyIDInvestmentDecisionMakerQualifier;
        char mAccount[2];
        char mRootPartyIDPositionAccount[32];
        char mPositionEffect[1];
        char mCustOrderHandlingInst[1];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText3[12];
        char mOrderCategory[1];
        int8_t mOrdType;
        int8_t mRelatedProductComplex;
        int8_t mOrderSide;
        char mRootPartyClearingOrganization[4];
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mRootPartyClearingFirm[5];
        char mRegulatoryTradeID[52];
        char mRootPartyIDExecutionVenue[4];
        char mPad3[3];

        // constructor
        eurexTradeBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10500;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mRelatedSecurityID = RELATED_SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mSideLastPx = SIDE_LAST_PX_NO_VALUE;
            mSideLastQty = SIDE_LAST_QTY_NO_VALUE;
            mClearingTradePrice = CLEARING_TRADE_PRICE_NO_VALUE;
            mClearingTradeQty = CLEARING_TRADE_QTY_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mRootPartyIDClientID = ROOT_PARTY_IDCLIENT_ID_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mRootPartyIDInvestmentDecisionMaker = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
            mRootPartyIDExecutingUnit = ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
            mRootPartyIDSessionID = ROOT_PARTY_IDSESSION_ID_NO_VALUE;
            mRootPartyIDExecutingTrader = ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mRootPartyIDClearingUnit = ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mRelatedSymbol = RELATED_SYMBOL_NO_VALUE;
            mSideTradeID = SIDE_TRADE_ID_NO_VALUE;
            mMatchDate = MATCH_DATE_NO_VALUE;
            mTrdMatchID = TRD_MATCH_ID_NO_VALUE;
            mStrategyLinkID = STRATEGY_LINK_ID_NO_VALUE;
            mTotNumTradeReports = TOT_NUM_TRADE_REPORTS_NO_VALUE;
            mMultiLegReportingType = MULTI_LEG_REPORTING_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTransferReason = TRANSFER_REASON_NO_VALUE;
            memcpy(mRootPartyIDBeneficiary, ROOT_PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mRootPartyIDBeneficiary));
            memcpy(mRootPartyIDTakeUpTradingFirm, ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mRootPartyIDTakeUpTradingFirm));
            memcpy(mRootPartyIDOrderOriginationFirm, ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mRootPartyIDOrderOriginationFirm));
            mMatchType = MATCH_TYPE_NO_VALUE;
            mMatchSubType = MATCH_SUB_TYPE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mSideLiquidityInd = SIDE_LIQUIDITY_IND_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mOrderAttributeRiskReduction = ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mRootPartyIDInvestmentDecisionMakerQualifier = ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mRootPartyIDPositionAccount, ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mRootPartyIDPositionAccount));
            memcpy(mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
            memcpy(mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
            memcpy(mOrderCategory, ORDER_CATEGORY_NO_VALUE, sizeof (mOrderCategory));
            mOrdType = ORD_TYPE_NO_VALUE;
            mRelatedProductComplex = RELATED_PRODUCT_COMPLEX_NO_VALUE;
            mOrderSide = ORDER_SIDE_NO_VALUE;
            memcpy(mRootPartyClearingOrganization, ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE, sizeof (mRootPartyClearingOrganization));
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm));
            memcpy(mRegulatoryTradeID, REGULATORY_TRADE_ID_NO_VALUE, sizeof (mRegulatoryTradeID));
            memcpy(mRootPartyIDExecutionVenue, ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE, sizeof (mRootPartyIDExecutionVenue));
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        double getPrice () const
        {
            return mPrice / 100000000.0;
        }

        bool setPrice (double v)
        {
            mPrice = v * 100000000.0;
            return ((PRICE_MIN <= v && v <= PRICE_MAX) || mPrice == PRICE_NO_VALUE);
        }

        bool isPriceValid () const
        {
            return (mPrice != PRICE_NO_VALUE);
        }

        void resetPrice ()
        {
            mPrice = PRICE_NO_VALUE;
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

        double getSideLastPx () const
        {
            return mSideLastPx / 100000000.0;
        }

        bool setSideLastPx (double v)
        {
            mSideLastPx = v * 100000000.0;
            return ((SIDE_LAST_PX_MIN <= v && v <= SIDE_LAST_PX_MAX) || mSideLastPx == SIDE_LAST_PX_NO_VALUE);
        }

        bool isSideLastPxValid () const
        {
            return (mSideLastPx != SIDE_LAST_PX_NO_VALUE);
        }

        void resetSideLastPx ()
        {
            mSideLastPx = SIDE_LAST_PX_NO_VALUE;
        }

        double getSideLastQty () const
        {
            return mSideLastQty / 10000.0;
        }

        bool setSideLastQty (double v)
        {
            mSideLastQty = v * 10000.0;
            return ((SIDE_LAST_QTY_MIN <= v && v <= SIDE_LAST_QTY_MAX) || mSideLastQty == SIDE_LAST_QTY_NO_VALUE);
        }

        bool isSideLastQtyValid () const
        {
            return (mSideLastQty != SIDE_LAST_QTY_NO_VALUE);
        }

        void resetSideLastQty ()
        {
            mSideLastQty = SIDE_LAST_QTY_NO_VALUE;
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

        uint64_t getOrderID () const
        {
            return mOrderID;
        }

        bool setOrderID (uint64_t v)
        {
            mOrderID = v;
            return ((ORDER_ID_MIN <= mOrderID && mOrderID <= ORDER_ID_MAX) || mOrderID == ORDER_ID_NO_VALUE);
        }

        bool isOrderIDValid () const
        {
            return (mOrderID != ORDER_ID_NO_VALUE);
        }

        void resetOrderID ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
        }

        uint64_t getClOrdID () const
        {
            return mClOrdID;
        }

        bool setClOrdID (uint64_t v)
        {
            mClOrdID = v;
            return ((CL_ORD_ID_MIN <= mClOrdID && mClOrdID <= CL_ORD_ID_MAX) || mClOrdID == CL_ORD_ID_NO_VALUE);
        }

        bool isClOrdIDValid () const
        {
            return (mClOrdID != CL_ORD_ID_NO_VALUE);
        }

        void resetClOrdID ()
        {
            mClOrdID = CL_ORD_ID_NO_VALUE;
        }

        double getLeavesQty () const
        {
            return mLeavesQty / 10000.0;
        }

        bool setLeavesQty (double v)
        {
            mLeavesQty = v * 10000.0;
            return ((LEAVES_QTY_MIN <= v && v <= LEAVES_QTY_MAX) || mLeavesQty == LEAVES_QTY_NO_VALUE);
        }

        bool isLeavesQtyValid () const
        {
            return (mLeavesQty != LEAVES_QTY_NO_VALUE);
        }

        void resetLeavesQty ()
        {
            mLeavesQty = LEAVES_QTY_NO_VALUE;
        }

        double getCumQty () const
        {
            return mCumQty / 10000.0;
        }

        bool setCumQty (double v)
        {
            mCumQty = v * 10000.0;
            return ((CUM_QTY_MIN <= v && v <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
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

        int32_t getMatchDate () const
        {
            return mMatchDate;
        }

        bool setMatchDate (int32_t v)
        {
            mMatchDate = v;
            return ((MATCH_DATE_MIN <= mMatchDate && mMatchDate <= MATCH_DATE_MAX) || mMatchDate == MATCH_DATE_NO_VALUE);
        }

        bool isMatchDateValid () const
        {
            return (mMatchDate != MATCH_DATE_NO_VALUE);
        }

        void resetMatchDate ()
        {
            mMatchDate = MATCH_DATE_NO_VALUE;
        }

        uint32_t getTrdMatchID () const
        {
            return mTrdMatchID;
        }

        bool setTrdMatchID (uint32_t v)
        {
            mTrdMatchID = v;
            return ((TRD_MATCH_ID_MIN <= mTrdMatchID && mTrdMatchID <= TRD_MATCH_ID_MAX) || mTrdMatchID == TRD_MATCH_ID_NO_VALUE);
        }

        bool isTrdMatchIDValid () const
        {
            return (mTrdMatchID != TRD_MATCH_ID_NO_VALUE);
        }

        void resetTrdMatchID ()
        {
            mTrdMatchID = TRD_MATCH_ID_NO_VALUE;
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

        int8_t getMatchType () const
        {
            return mMatchType;
        }

        bool setMatchType (int8_t v)
        {
            mMatchType = v;
            return ((MATCH_TYPE_MIN <= mMatchType && mMatchType <= MATCH_TYPE_MAX) || mMatchType == MATCH_TYPE_NO_VALUE);
        }

        bool isMatchTypeValid () const
        {
            return (mMatchType != MATCH_TYPE_NO_VALUE);
        }

        void resetMatchType ()
        {
            mMatchType = MATCH_TYPE_NO_VALUE;
        }

        int8_t getMatchSubType () const
        {
            return mMatchSubType;
        }

        bool setMatchSubType (int8_t v)
        {
            mMatchSubType = v;
            return ((MATCH_SUB_TYPE_MIN <= mMatchSubType && mMatchSubType <= MATCH_SUB_TYPE_MAX) || mMatchSubType == MATCH_SUB_TYPE_NO_VALUE);
        }

        bool isMatchSubTypeValid () const
        {
            return (mMatchSubType != MATCH_SUB_TYPE_NO_VALUE);
        }

        void resetMatchSubType ()
        {
            mMatchSubType = MATCH_SUB_TYPE_NO_VALUE;
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

        int8_t getSideLiquidityInd () const
        {
            return mSideLiquidityInd;
        }

        bool setSideLiquidityInd (int8_t v)
        {
            mSideLiquidityInd = v;
            return ((SIDE_LIQUIDITY_IND_MIN <= mSideLiquidityInd && mSideLiquidityInd <= SIDE_LIQUIDITY_IND_MAX) || mSideLiquidityInd == SIDE_LIQUIDITY_IND_NO_VALUE);
        }

        bool isSideLiquidityIndValid () const
        {
            return (mSideLiquidityInd != SIDE_LIQUIDITY_IND_NO_VALUE);
        }

        void resetSideLiquidityInd ()
        {
            mSideLiquidityInd = SIDE_LIQUIDITY_IND_NO_VALUE;
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

        string getOrderCategory () const
        {
            return string (mOrderCategory, ORDER_CATEGORY_MAX_LENGTH);
        }

        bool setOrderCategory (const string& v)
        {
            memset (mOrderCategory, '\0', sizeof (mOrderCategory));
            size_t size = min ((size_t) v.size (), (size_t) ORDER_CATEGORY_MAX_LENGTH);
            strncpy (mOrderCategory, v.c_str (), size);
            return (v.size () <= ORDER_CATEGORY_MAX_LENGTH);
        }

        bool isOrderCategoryValid () const
        {
            return (memcmp (mOrderCategory, ORDER_CATEGORY_NO_VALUE, sizeof (mOrderCategory)) != 0);
        }

        void resetOrderCategory ()
        {
            memcpy (mOrderCategory, ORDER_CATEGORY_NO_VALUE, sizeof (mOrderCategory));
        }

        int8_t getOrdType () const
        {
            return mOrdType;
        }

        bool setOrdType (int8_t v)
        {
            mOrdType = v;
            return ((ORD_TYPE_MIN <= mOrdType && mOrdType <= ORD_TYPE_MAX) || mOrdType == ORD_TYPE_NO_VALUE);
        }

        bool isOrdTypeValid () const
        {
            return (mOrdType != ORD_TYPE_NO_VALUE);
        }

        void resetOrdType ()
        {
            mOrdType = ORD_TYPE_NO_VALUE;
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

        int8_t getOrderSide () const
        {
            return mOrderSide;
        }

        bool setOrderSide (int8_t v)
        {
            mOrderSide = v;
            return ((ORDER_SIDE_MIN <= mOrderSide && mOrderSide <= ORDER_SIDE_MAX) || mOrderSide == ORDER_SIDE_NO_VALUE);
        }

        bool isOrderSideValid () const
        {
            return (mOrderSide != ORDER_SIDE_NO_VALUE);
        }

        void resetOrderSide ()
        {
            mOrderSide = ORDER_SIDE_NO_VALUE;
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

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mRelatedSecurityID)
                + sizeof (mPrice)
                + sizeof (mLastPx)
                + sizeof (mLastQty)
                + sizeof (mSideLastPx)
                + sizeof (mSideLastQty)
                + sizeof (mClearingTradePrice)
                + sizeof (mClearingTradeQty)
                + sizeof (mTransactTime)
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mLeavesQty)
                + sizeof (mCumQty)
                + sizeof (mRootPartyIDClientID)
                + sizeof (mExecutingTrader)
                + sizeof (mRootPartyIDInvestmentDecisionMaker)
                + sizeof (mTradeID)
                + sizeof (mOrigTradeID)
                + sizeof (mRootPartyIDExecutingUnit)
                + sizeof (mRootPartyIDSessionID)
                + sizeof (mRootPartyIDExecutingTrader)
                + sizeof (mRootPartyIDClearingUnit)
                + sizeof (mMarketSegmentID)
                + sizeof (mRelatedSymbol)
                + sizeof (mSideTradeID)
                + sizeof (mMatchDate)
                + sizeof (mTrdMatchID)
                + sizeof (mStrategyLinkID)
                + sizeof (mTotNumTradeReports)
                + sizeof (mMultiLegReportingType)
                + sizeof (mTradeReportType)
                + sizeof (mTransferReason)
                + sizeof (mRootPartyIDBeneficiary)
                + sizeof (mRootPartyIDTakeUpTradingFirm)
                + sizeof (mRootPartyIDOrderOriginationFirm)
                + sizeof (mMatchType)
                + sizeof (mMatchSubType)
                + sizeof (mSide)
                + sizeof (mSideLiquidityInd)
                + sizeof (mTradingCapacity)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mOrderAttributeRiskReduction)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mRootPartyIDInvestmentDecisionMakerQualifier)
                + sizeof (mAccount)
                + sizeof (mRootPartyIDPositionAccount)
                + sizeof (mPositionEffect)
                + sizeof (mCustOrderHandlingInst)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText3)
                + sizeof (mOrderCategory)
                + sizeof (mOrdType)
                + sizeof (mRelatedProductComplex)
                + sizeof (mOrderSide)
                + sizeof (mRootPartyClearingOrganization)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mRootPartyClearingFirm)
                + sizeof (mRegulatoryTradeID)
                + sizeof (mRootPartyIDExecutionVenue)
                + sizeof (mPad3);
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
            state = eurex::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRelatedSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSideLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSideLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mClearingTradePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mClearingTradeQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRelatedSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMatchDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mStrategyLinkID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTotNumTradeReports, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMultiLegReportingType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMatchSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSideLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrderAttributeRiskReduction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrderCategory, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRelatedProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrderSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyClearingOrganization, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRegulatoryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRootPartyIDExecutionVenue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad3, buf, len, used);
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
            state = eurex::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRelatedSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSideLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSideLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mClearingTradePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mClearingTradeQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRelatedSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMatchDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mStrategyLinkID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTotNumTradeReports, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMultiLegReportingType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMatchSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSideLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrderAttributeRiskReduction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrderCategory, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRelatedProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrderSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyClearingOrganization, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRegulatoryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRootPartyIDExecutionVenue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TradeBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[RelatedSecurityID=" << getRelatedSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[SideLastPx=" << getSideLastPx () << "],"
                << "[SideLastQty=" << getSideLastQty () << "],"
                << "[ClearingTradePrice=" << getClearingTradePrice () << "],"
                << "[ClearingTradeQty=" << getClearingTradeQty () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[RootPartyIDClientID=" << getRootPartyIDClientID () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[RootPartyIDInvestmentDecisionMaker=" << getRootPartyIDInvestmentDecisionMaker () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[OrigTradeID=" << getOrigTradeID () << "],"
                << "[RootPartyIDExecutingUnit=" << getRootPartyIDExecutingUnit () << "],"
                << "[RootPartyIDSessionID=" << getRootPartyIDSessionID () << "],"
                << "[RootPartyIDExecutingTrader=" << getRootPartyIDExecutingTrader () << "],"
                << "[RootPartyIDClearingUnit=" << getRootPartyIDClearingUnit () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[RelatedSymbol=" << getRelatedSymbol () << "],"
                << "[SideTradeID=" << getSideTradeID () << "],"
                << "[MatchDate=" << getMatchDate () << "],"
                << "[TrdMatchID=" << getTrdMatchID () << "],"
                << "[StrategyLinkID=" << getStrategyLinkID () << "],"
                << "[TotNumTradeReports=" << getTotNumTradeReports () << "],"
                << "[MultiLegReportingType=" << getMultiLegReportingType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TransferReason=" << getTransferReason () << "],"
                << "[RootPartyIDBeneficiary=" << getRootPartyIDBeneficiary () << "],"
                << "[RootPartyIDTakeUpTradingFirm=" << getRootPartyIDTakeUpTradingFirm () << "],"
                << "[RootPartyIDOrderOriginationFirm=" << getRootPartyIDOrderOriginationFirm () << "],"
                << "[MatchType=" << getMatchType () << "],"
                << "[MatchSubType=" << getMatchSubType () << "],"
                << "[Side=" << getSide () << "],"
                << "[SideLiquidityInd=" << getSideLiquidityInd () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[OrderAttributeRiskReduction=" << getOrderAttributeRiskReduction () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[RootPartyIDInvestmentDecisionMakerQualifier=" << getRootPartyIDInvestmentDecisionMakerQualifier () << "],"
                << "[Account=" << getAccount () << "],"
                << "[RootPartyIDPositionAccount=" << getRootPartyIDPositionAccount () << "],"
                << "[PositionEffect=" << getPositionEffect () << "],"
                << "[CustOrderHandlingInst=" << getCustOrderHandlingInst () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText3=" << getFreeText3 () << "],"
                << "[OrderCategory=" << getOrderCategory () << "],"
                << "[OrdType=" << getOrdType () << "],"
                << "[RelatedProductComplex=" << getRelatedProductComplex () << "],"
                << "[OrderSide=" << getOrderSide () << "],"
                << "[RootPartyClearingOrganization=" << getRootPartyClearingOrganization () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[RootPartyClearingFirm=" << getRootPartyClearingFirm () << "],"
                << "[RegulatoryTradeID=" << getRegulatoryTradeID () << "],"
                << "[RootPartyIDExecutionVenue=" << getRootPartyIDExecutionVenue () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int64_t eurexTradeBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexTradeBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexTradeBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const int64_t eurexTradeBroadcastPacket::RELATED_SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexTradeBroadcastPacket::RELATED_SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexTradeBroadcastPacket::RELATED_SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::PRICE_MIN = -92233720368.54775807;
const double eurexTradeBroadcastPacket::PRICE_MAX = 92233720368.54775807;
const int64_t eurexTradeBroadcastPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexTradeBroadcastPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexTradeBroadcastPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::LAST_QTY_MIN = -922337203685477.5807;
const double eurexTradeBroadcastPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t eurexTradeBroadcastPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::SIDE_LAST_PX_MIN = -92233720368.54775807;
const double eurexTradeBroadcastPacket::SIDE_LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexTradeBroadcastPacket::SIDE_LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::SIDE_LAST_QTY_MIN = -922337203685477.5807;
const double eurexTradeBroadcastPacket::SIDE_LAST_QTY_MAX = 922337203685477.5807;
const int64_t eurexTradeBroadcastPacket::SIDE_LAST_QTY_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::CLEARING_TRADE_PRICE_MIN = -92233720368.54775807;
const double eurexTradeBroadcastPacket::CLEARING_TRADE_PRICE_MAX = 92233720368.54775807;
const int64_t eurexTradeBroadcastPacket::CLEARING_TRADE_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::CLEARING_TRADE_QTY_MIN = -922337203685477.5807;
const double eurexTradeBroadcastPacket::CLEARING_TRADE_QTY_MAX = 922337203685477.5807;
const int64_t eurexTradeBroadcastPacket::CLEARING_TRADE_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexTradeBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexTradeBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexTradeBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTradeBroadcastPacket::ORDER_ID_MIN = 0UL;
const uint64_t eurexTradeBroadcastPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexTradeBroadcastPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTradeBroadcastPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t eurexTradeBroadcastPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexTradeBroadcastPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexTradeBroadcastPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double eurexTradeBroadcastPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t eurexTradeBroadcastPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double eurexTradeBroadcastPacket::CUM_QTY_MIN = -922337203685477.5807;
const double eurexTradeBroadcastPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t eurexTradeBroadcastPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t eurexTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexTradeBroadcastPacket::ROOT_PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTradeBroadcastPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t eurexTradeBroadcastPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t eurexTradeBroadcastPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t eurexTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t eurexTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::TRADE_ID_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::TRADE_ID_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::ORIG_TRADE_ID_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::ORIG_TRADE_ID_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::ORIG_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTradeBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexTradeBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexTradeBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexTradeBroadcastPacket::RELATED_SYMBOL_MIN = -2147483647;
const int32_t eurexTradeBroadcastPacket::RELATED_SYMBOL_MAX = 2147483647;
const int32_t eurexTradeBroadcastPacket::RELATED_SYMBOL_NO_VALUE = 0x80000000;
const uint32_t eurexTradeBroadcastPacket::SIDE_TRADE_ID_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::SIDE_TRADE_ID_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::SIDE_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTradeBroadcastPacket::MATCH_DATE_MIN = 0;
const int32_t eurexTradeBroadcastPacket::MATCH_DATE_MAX = 99991231;
const int32_t eurexTradeBroadcastPacket::MATCH_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::TRD_MATCH_ID_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::TRD_MATCH_ID_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTradeBroadcastPacket::STRATEGY_LINK_ID_MIN = 0;
const uint32_t eurexTradeBroadcastPacket::STRATEGY_LINK_ID_MAX = 4294967294;
const uint32_t eurexTradeBroadcastPacket::STRATEGY_LINK_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTradeBroadcastPacket::TOT_NUM_TRADE_REPORTS_MIN = -2147483647;
const int32_t eurexTradeBroadcastPacket::TOT_NUM_TRADE_REPORTS_MAX = 2147483647;
const int32_t eurexTradeBroadcastPacket::TOT_NUM_TRADE_REPORTS_NO_VALUE = 0x80000000;
const int8_t eurexTradeBroadcastPacket::MULTI_LEG_REPORTING_TYPE_MIN = 1;
const int8_t eurexTradeBroadcastPacket::MULTI_LEG_REPORTING_TYPE_MAX = 2;
const int8_t eurexTradeBroadcastPacket::MULTI_LEG_REPORTING_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexTradeBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexTradeBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::TRANSFER_REASON_MIN = 1;
const int8_t eurexTradeBroadcastPacket::TRANSFER_REASON_MAX = 5;
const int8_t eurexTradeBroadcastPacket::TRANSFER_REASON_NO_VALUE = 0xFF;
const char eurexTradeBroadcastPacket::ROOT_PARTY_IDBENEFICIARY_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_IDBENEFICIARY_MAX_LENGTH = 9;
const char eurexTradeBroadcastPacket::ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH = 5;
const char eurexTradeBroadcastPacket::ROOT_PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH = 7;
const int8_t eurexTradeBroadcastPacket::MATCH_TYPE_MIN = 0;
const int8_t eurexTradeBroadcastPacket::MATCH_TYPE_MAX = 14;
const int8_t eurexTradeBroadcastPacket::MATCH_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::MATCH_SUB_TYPE_MIN = 1;
const int8_t eurexTradeBroadcastPacket::MATCH_SUB_TYPE_MAX = 6;
const int8_t eurexTradeBroadcastPacket::MATCH_SUB_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::SIDE_MIN = 1;
const int8_t eurexTradeBroadcastPacket::SIDE_MAX = 2;
const int8_t eurexTradeBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::SIDE_LIQUIDITY_IND_MIN = 1;
const int8_t eurexTradeBroadcastPacket::SIDE_LIQUIDITY_IND_MAX = 4;
const int8_t eurexTradeBroadcastPacket::SIDE_LIQUIDITY_IND_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexTradeBroadcastPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexTradeBroadcastPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t eurexTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t eurexTradeBroadcastPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_MIN = 0;
const int8_t eurexTradeBroadcastPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_MAX = 1;
const int8_t eurexTradeBroadcastPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t eurexTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t eurexTradeBroadcastPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t eurexTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t eurexTradeBroadcastPacket::ROOT_PARTY_IDINVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const char eurexTradeBroadcastPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ACCOUNT_MAX_LENGTH = 2;
const char eurexTradeBroadcastPacket::ROOT_PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH = 32;
const char eurexTradeBroadcastPacket::POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexTradeBroadcastPacket::POSITION_EFFECT_MAX_LENGTH = 1;
const char eurexTradeBroadcastPacket::CUST_ORDER_HANDLING_INST_NO_VALUE[1] = {0x00};
const size_t eurexTradeBroadcastPacket::CUST_ORDER_HANDLING_INST_MAX_LENGTH = 1;
const char eurexTradeBroadcastPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexTradeBroadcastPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char eurexTradeBroadcastPacket::FREE_TEXT3_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::FREE_TEXT3_MAX_LENGTH = 12;
const char eurexTradeBroadcastPacket::ORDER_CATEGORY_NO_VALUE[1] = {0x00};
const size_t eurexTradeBroadcastPacket::ORDER_CATEGORY_MAX_LENGTH = 1;
const int8_t eurexTradeBroadcastPacket::ORD_TYPE_MIN = 1;
const int8_t eurexTradeBroadcastPacket::ORD_TYPE_MAX = 4;
const int8_t eurexTradeBroadcastPacket::ORD_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::RELATED_PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexTradeBroadcastPacket::RELATED_PRODUCT_COMPLEX_MAX = 9;
const int8_t eurexTradeBroadcastPacket::RELATED_PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexTradeBroadcastPacket::ORDER_SIDE_MIN = 1;
const int8_t eurexTradeBroadcastPacket::ORDER_SIDE_MAX = 2;
const int8_t eurexTradeBroadcastPacket::ORDER_SIDE_NO_VALUE = 0xFF;
const char eurexTradeBroadcastPacket::ROOT_PARTY_CLEARING_ORGANIZATION_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_CLEARING_ORGANIZATION_MAX_LENGTH = 4;
const char eurexTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH = 5;
const char eurexTradeBroadcastPacket::REGULATORY_TRADE_ID_NO_VALUE[52] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::REGULATORY_TRADE_ID_MAX_LENGTH = 52;
const char eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTION_VENUE_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::ROOT_PARTY_IDEXECUTION_VENUE_MAX_LENGTH = 4;
const char eurexTradeBroadcastPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexTradeBroadcastPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // EUREX_TRADEBROADCAST_PACKET_H
