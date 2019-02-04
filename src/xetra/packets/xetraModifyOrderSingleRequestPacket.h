/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_MODIFYORDERSINGLEREQUEST_PACKET_H
#define XETRA_MODIFYORDERSINGLEREQUEST_PACKET_H

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

class xetraModifyOrderSingleRequestPacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint64_t ORIG_CL_ORD_ID_MIN;
        static const uint64_t ORIG_CL_ORD_ID_MAX;
        static const uint64_t ORIG_CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const double DISPLAY_QTY_MIN;
        static const double DISPLAY_QTY_MAX;
        static const int64_t DISPLAY_QTY_NO_VALUE;
        static const double DISPLAY_LOW_QTY_MIN;
        static const double DISPLAY_LOW_QTY_MAX;
        static const int64_t DISPLAY_LOW_QTY_NO_VALUE;
        static const double DISPLAY_HIGH_QTY_MIN;
        static const double DISPLAY_HIGH_QTY_MAX;
        static const int64_t DISPLAY_HIGH_QTY_NO_VALUE;
        static const double STOP_PX_MIN;
        static const double STOP_PX_MAX;
        static const int64_t STOP_PX_NO_VALUE;
        static const double VOLUME_DISCOVERY_PRICE_MIN;
        static const double VOLUME_DISCOVERY_PRICE_MAX;
        static const int64_t VOLUME_DISCOVERY_PRICE_NO_VALUE;
        static const double PEG_OFFSET_VALUE_ABS_MIN;
        static const double PEG_OFFSET_VALUE_ABS_MAX;
        static const int64_t PEG_OFFSET_VALUE_ABS_NO_VALUE;
        static const double PEG_OFFSET_VALUE_PCT_MIN;
        static const double PEG_OFFSET_VALUE_PCT_MAX;
        static const int64_t PEG_OFFSET_VALUE_PCT_NO_VALUE;
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const int32_t EXPIRE_DATE_MIN;
        static const int32_t EXPIRE_DATE_MAX;
        static const int32_t EXPIRE_DATE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t MATCH_INST_CROSS_ID_MIN;
        static const uint32_t MATCH_INST_CROSS_ID_MAX;
        static const uint32_t MATCH_INST_CROSS_ID_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        static const int8_t APPL_SEQ_INDICATOR_MIN;
        static const int8_t APPL_SEQ_INDICATOR_MAX;
        static const int8_t APPL_SEQ_INDICATOR_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t ORD_TYPE_MIN;
        static const int8_t ORD_TYPE_MAX;
        static const int8_t ORD_TYPE_NO_VALUE;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MIN;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MAX;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MIN;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MAX;
        static const int8_t VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MIN;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MAX;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t TIME_IN_FORCE_MIN;
        static const int8_t TIME_IN_FORCE_MAX;
        static const int8_t TIME_IN_FORCE_NO_VALUE;
        static const int8_t EXEC_INST_MIN;
        static const int8_t EXEC_INST_MAX;
        static const int8_t EXEC_INST_NO_VALUE;
        static const int8_t TRADING_SESSION_SUB_ID_MIN;
        static const int8_t TRADING_SESSION_SUB_ID_MAX;
        static const int8_t TRADING_SESSION_SUB_ID_NO_VALUE;
        static const int8_t STOP_PX_INDICATOR_MIN;
        static const int8_t STOP_PX_INDICATOR_MAX;
        static const int8_t STOP_PX_INDICATOR_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t EX_DESTINATION_TYPE_MIN;
        static const int8_t EX_DESTINATION_TYPE_MAX;
        static const int8_t EX_DESTINATION_TYPE_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const int8_t OWNERSHIP_INDICATOR_MIN;
        static const int8_t OWNERSHIP_INDICATOR_MAX;
        static const int8_t OWNERSHIP_INDICATOR_NO_VALUE;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        int64_t mPrice;
        int64_t mOrderQty;
        int64_t mDisplayQty;
        int64_t mDisplayLowQty;
        int64_t mDisplayHighQty;
        int64_t mStopPx;
        int64_t mVolumeDiscoveryPrice;
        int64_t mPegOffsetValueAbs;
        int64_t mPegOffsetValuePct;
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int32_t mExpireDate;
        int32_t mMarketSegmentID;
        uint32_t mMatchInstCrossID;
        uint32_t mTargetPartyIDSessionID;
        int8_t mApplSeqIndicator;
        int8_t mSide;
        int8_t mOrdType;
        int8_t mPriceValidityCheckType;
        int8_t mValueCheckTypeValue;
        int8_t mValueCheckTypeQuantity;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mTimeInForce;
        int8_t mExecInst;
        int8_t mTradingSessionSubID;
        int8_t mStopPxIndicator;
        int8_t mTradingCapacity;
        int8_t mExDestinationType;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        int8_t mOwnershipIndicator;
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mFIXClOrdID[20];
        char mPad4[4];

        // constructor
        xetraModifyOrderSingleRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10106;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
            mDisplayLowQty = DISPLAY_LOW_QTY_NO_VALUE;
            mDisplayHighQty = DISPLAY_HIGH_QTY_NO_VALUE;
            mStopPx = STOP_PX_NO_VALUE;
            mVolumeDiscoveryPrice = VOLUME_DISCOVERY_PRICE_NO_VALUE;
            mPegOffsetValueAbs = PEG_OFFSET_VALUE_ABS_NO_VALUE;
            mPegOffsetValuePct = PEG_OFFSET_VALUE_PCT_NO_VALUE;
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mExpireDate = EXPIRE_DATE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mOrdType = ORD_TYPE_NO_VALUE;
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
            mExecInst = EXEC_INST_NO_VALUE;
            mTradingSessionSubID = TRADING_SESSION_SUB_ID_NO_VALUE;
            mStopPxIndicator = STOP_PX_INDICATOR_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mExDestinationType = EX_DESTINATION_TYPE_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mOwnershipIndicator = OWNERSHIP_INDICATOR_NO_VALUE;
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
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

        uint64_t getOrigClOrdID () const
        {
            return mOrigClOrdID;
        }

        bool setOrigClOrdID (uint64_t v)
        {
            mOrigClOrdID = v;
            return ((ORIG_CL_ORD_ID_MIN <= mOrigClOrdID && mOrigClOrdID <= ORIG_CL_ORD_ID_MAX) || mOrigClOrdID == ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isOrigClOrdIDValid () const
        {
            return (mOrigClOrdID != ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetOrigClOrdID ()
        {
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
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

        double getOrderQty () const
        {
            return mOrderQty / 10000.0;
        }

        bool setOrderQty (double v)
        {
            mOrderQty = v * 10000.0;
            return ((ORDER_QTY_MIN <= v && v <= ORDER_QTY_MAX) || mOrderQty == ORDER_QTY_NO_VALUE);
        }

        bool isOrderQtyValid () const
        {
            return (mOrderQty != ORDER_QTY_NO_VALUE);
        }

        void resetOrderQty ()
        {
            mOrderQty = ORDER_QTY_NO_VALUE;
        }

        double getDisplayQty () const
        {
            return mDisplayQty / 10000.0;
        }

        bool setDisplayQty (double v)
        {
            mDisplayQty = v * 10000.0;
            return ((DISPLAY_QTY_MIN <= v && v <= DISPLAY_QTY_MAX) || mDisplayQty == DISPLAY_QTY_NO_VALUE);
        }

        bool isDisplayQtyValid () const
        {
            return (mDisplayQty != DISPLAY_QTY_NO_VALUE);
        }

        void resetDisplayQty ()
        {
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
        }

        double getDisplayLowQty () const
        {
            return mDisplayLowQty / 10000.0;
        }

        bool setDisplayLowQty (double v)
        {
            mDisplayLowQty = v * 10000.0;
            return ((DISPLAY_LOW_QTY_MIN <= v && v <= DISPLAY_LOW_QTY_MAX) || mDisplayLowQty == DISPLAY_LOW_QTY_NO_VALUE);
        }

        bool isDisplayLowQtyValid () const
        {
            return (mDisplayLowQty != DISPLAY_LOW_QTY_NO_VALUE);
        }

        void resetDisplayLowQty ()
        {
            mDisplayLowQty = DISPLAY_LOW_QTY_NO_VALUE;
        }

        double getDisplayHighQty () const
        {
            return mDisplayHighQty / 10000.0;
        }

        bool setDisplayHighQty (double v)
        {
            mDisplayHighQty = v * 10000.0;
            return ((DISPLAY_HIGH_QTY_MIN <= v && v <= DISPLAY_HIGH_QTY_MAX) || mDisplayHighQty == DISPLAY_HIGH_QTY_NO_VALUE);
        }

        bool isDisplayHighQtyValid () const
        {
            return (mDisplayHighQty != DISPLAY_HIGH_QTY_NO_VALUE);
        }

        void resetDisplayHighQty ()
        {
            mDisplayHighQty = DISPLAY_HIGH_QTY_NO_VALUE;
        }

        double getStopPx () const
        {
            return mStopPx / 100000000.0;
        }

        bool setStopPx (double v)
        {
            mStopPx = v * 100000000.0;
            return ((STOP_PX_MIN <= v && v <= STOP_PX_MAX) || mStopPx == STOP_PX_NO_VALUE);
        }

        bool isStopPxValid () const
        {
            return (mStopPx != STOP_PX_NO_VALUE);
        }

        void resetStopPx ()
        {
            mStopPx = STOP_PX_NO_VALUE;
        }

        double getVolumeDiscoveryPrice () const
        {
            return mVolumeDiscoveryPrice / 100000000.0;
        }

        bool setVolumeDiscoveryPrice (double v)
        {
            mVolumeDiscoveryPrice = v * 100000000.0;
            return ((VOLUME_DISCOVERY_PRICE_MIN <= v && v <= VOLUME_DISCOVERY_PRICE_MAX) || mVolumeDiscoveryPrice == VOLUME_DISCOVERY_PRICE_NO_VALUE);
        }

        bool isVolumeDiscoveryPriceValid () const
        {
            return (mVolumeDiscoveryPrice != VOLUME_DISCOVERY_PRICE_NO_VALUE);
        }

        void resetVolumeDiscoveryPrice ()
        {
            mVolumeDiscoveryPrice = VOLUME_DISCOVERY_PRICE_NO_VALUE;
        }

        double getPegOffsetValueAbs () const
        {
            return mPegOffsetValueAbs / 100000000.0;
        }

        bool setPegOffsetValueAbs (double v)
        {
            mPegOffsetValueAbs = v * 100000000.0;
            return ((PEG_OFFSET_VALUE_ABS_MIN <= v && v <= PEG_OFFSET_VALUE_ABS_MAX) || mPegOffsetValueAbs == PEG_OFFSET_VALUE_ABS_NO_VALUE);
        }

        bool isPegOffsetValueAbsValid () const
        {
            return (mPegOffsetValueAbs != PEG_OFFSET_VALUE_ABS_NO_VALUE);
        }

        void resetPegOffsetValueAbs ()
        {
            mPegOffsetValueAbs = PEG_OFFSET_VALUE_ABS_NO_VALUE;
        }

        double getPegOffsetValuePct () const
        {
            return mPegOffsetValuePct / 10000.0;
        }

        bool setPegOffsetValuePct (double v)
        {
            mPegOffsetValuePct = v * 10000.0;
            return ((PEG_OFFSET_VALUE_PCT_MIN <= v && v <= PEG_OFFSET_VALUE_PCT_MAX) || mPegOffsetValuePct == PEG_OFFSET_VALUE_PCT_NO_VALUE);
        }

        bool isPegOffsetValuePctValid () const
        {
            return (mPegOffsetValuePct != PEG_OFFSET_VALUE_PCT_NO_VALUE);
        }

        void resetPegOffsetValuePct ()
        {
            mPegOffsetValuePct = PEG_OFFSET_VALUE_PCT_NO_VALUE;
        }

        uint64_t getPartyIDClientID () const
        {
            return mPartyIDClientID;
        }

        bool setPartyIDClientID (uint64_t v)
        {
            mPartyIDClientID = v;
            return ((PARTY_IDCLIENT_ID_MIN <= mPartyIDClientID && mPartyIDClientID <= PARTY_IDCLIENT_ID_MAX) || mPartyIDClientID == PARTY_IDCLIENT_ID_NO_VALUE);
        }

        bool isPartyIDClientIDValid () const
        {
            return (mPartyIDClientID != PARTY_IDCLIENT_ID_NO_VALUE);
        }

        void resetPartyIDClientID ()
        {
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
        }

        uint64_t getPartyIdInvestmentDecisionMaker () const
        {
            return mPartyIdInvestmentDecisionMaker;
        }

        bool setPartyIdInvestmentDecisionMaker (uint64_t v)
        {
            mPartyIdInvestmentDecisionMaker = v;
            return ((PARTY_ID_INVESTMENT_DECISION_MAKER_MIN <= mPartyIdInvestmentDecisionMaker && mPartyIdInvestmentDecisionMaker <= PARTY_ID_INVESTMENT_DECISION_MAKER_MAX) || mPartyIdInvestmentDecisionMaker == PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        bool isPartyIdInvestmentDecisionMakerValid () const
        {
            return (mPartyIdInvestmentDecisionMaker != PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        void resetPartyIdInvestmentDecisionMaker ()
        {
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
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

        int32_t getExpireDate () const
        {
            return mExpireDate;
        }

        bool setExpireDate (int32_t v)
        {
            mExpireDate = v;
            return ((EXPIRE_DATE_MIN <= mExpireDate && mExpireDate <= EXPIRE_DATE_MAX) || mExpireDate == EXPIRE_DATE_NO_VALUE);
        }

        bool isExpireDateValid () const
        {
            return (mExpireDate != EXPIRE_DATE_NO_VALUE);
        }

        void resetExpireDate ()
        {
            mExpireDate = EXPIRE_DATE_NO_VALUE;
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

        uint32_t getMatchInstCrossID () const
        {
            return mMatchInstCrossID;
        }

        bool setMatchInstCrossID (uint32_t v)
        {
            mMatchInstCrossID = v;
            return ((MATCH_INST_CROSS_ID_MIN <= mMatchInstCrossID && mMatchInstCrossID <= MATCH_INST_CROSS_ID_MAX) || mMatchInstCrossID == MATCH_INST_CROSS_ID_NO_VALUE);
        }

        bool isMatchInstCrossIDValid () const
        {
            return (mMatchInstCrossID != MATCH_INST_CROSS_ID_NO_VALUE);
        }

        void resetMatchInstCrossID ()
        {
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
        }

        uint32_t getTargetPartyIDSessionID () const
        {
            return mTargetPartyIDSessionID;
        }

        bool setTargetPartyIDSessionID (uint32_t v)
        {
            mTargetPartyIDSessionID = v;
            return ((TARGET_PARTY_IDSESSION_ID_MIN <= mTargetPartyIDSessionID && mTargetPartyIDSessionID <= TARGET_PARTY_IDSESSION_ID_MAX) || mTargetPartyIDSessionID == TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isTargetPartyIDSessionIDValid () const
        {
            return (mTargetPartyIDSessionID != TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetTargetPartyIDSessionID ()
        {
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }

        int8_t getApplSeqIndicator () const
        {
            return mApplSeqIndicator;
        }

        bool setApplSeqIndicator (int8_t v)
        {
            mApplSeqIndicator = v;
            return ((APPL_SEQ_INDICATOR_MIN <= mApplSeqIndicator && mApplSeqIndicator <= APPL_SEQ_INDICATOR_MAX) || mApplSeqIndicator == APPL_SEQ_INDICATOR_NO_VALUE);
        }

        bool isApplSeqIndicatorValid () const
        {
            return (mApplSeqIndicator != APPL_SEQ_INDICATOR_NO_VALUE);
        }

        void resetApplSeqIndicator ()
        {
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
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

        int8_t getPriceValidityCheckType () const
        {
            return mPriceValidityCheckType;
        }

        bool setPriceValidityCheckType (int8_t v)
        {
            mPriceValidityCheckType = v;
            return ((PRICE_VALIDITY_CHECK_TYPE_MIN <= mPriceValidityCheckType && mPriceValidityCheckType <= PRICE_VALIDITY_CHECK_TYPE_MAX) || mPriceValidityCheckType == PRICE_VALIDITY_CHECK_TYPE_NO_VALUE);
        }

        bool isPriceValidityCheckTypeValid () const
        {
            return (mPriceValidityCheckType != PRICE_VALIDITY_CHECK_TYPE_NO_VALUE);
        }

        void resetPriceValidityCheckType ()
        {
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
        }

        int8_t getValueCheckTypeValue () const
        {
            return mValueCheckTypeValue;
        }

        bool setValueCheckTypeValue (int8_t v)
        {
            mValueCheckTypeValue = v;
            return ((VALUE_CHECK_TYPE_VALUE_MIN <= mValueCheckTypeValue && mValueCheckTypeValue <= VALUE_CHECK_TYPE_VALUE_MAX) || mValueCheckTypeValue == VALUE_CHECK_TYPE_VALUE_NO_VALUE);
        }

        bool isValueCheckTypeValueValid () const
        {
            return (mValueCheckTypeValue != VALUE_CHECK_TYPE_VALUE_NO_VALUE);
        }

        void resetValueCheckTypeValue ()
        {
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        }

        int8_t getValueCheckTypeQuantity () const
        {
            return mValueCheckTypeQuantity;
        }

        bool setValueCheckTypeQuantity (int8_t v)
        {
            mValueCheckTypeQuantity = v;
            return ((VALUE_CHECK_TYPE_QUANTITY_MIN <= mValueCheckTypeQuantity && mValueCheckTypeQuantity <= VALUE_CHECK_TYPE_QUANTITY_MAX) || mValueCheckTypeQuantity == VALUE_CHECK_TYPE_QUANTITY_NO_VALUE);
        }

        bool isValueCheckTypeQuantityValid () const
        {
            return (mValueCheckTypeQuantity != VALUE_CHECK_TYPE_QUANTITY_NO_VALUE);
        }

        void resetValueCheckTypeQuantity ()
        {
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
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

        int8_t getTimeInForce () const
        {
            return mTimeInForce;
        }

        bool setTimeInForce (int8_t v)
        {
            mTimeInForce = v;
            return ((TIME_IN_FORCE_MIN <= mTimeInForce && mTimeInForce <= TIME_IN_FORCE_MAX) || mTimeInForce == TIME_IN_FORCE_NO_VALUE);
        }

        bool isTimeInForceValid () const
        {
            return (mTimeInForce != TIME_IN_FORCE_NO_VALUE);
        }

        void resetTimeInForce ()
        {
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
        }

        int8_t getExecInst () const
        {
            return mExecInst;
        }

        bool setExecInst (int8_t v)
        {
            mExecInst = v;
            return ((EXEC_INST_MIN <= mExecInst && mExecInst <= EXEC_INST_MAX) || mExecInst == EXEC_INST_NO_VALUE);
        }

        bool isExecInstValid () const
        {
            return (mExecInst != EXEC_INST_NO_VALUE);
        }

        void resetExecInst ()
        {
            mExecInst = EXEC_INST_NO_VALUE;
        }

        int8_t getTradingSessionSubID () const
        {
            return mTradingSessionSubID;
        }

        bool setTradingSessionSubID (int8_t v)
        {
            mTradingSessionSubID = v;
            return ((TRADING_SESSION_SUB_ID_MIN <= mTradingSessionSubID && mTradingSessionSubID <= TRADING_SESSION_SUB_ID_MAX) || mTradingSessionSubID == TRADING_SESSION_SUB_ID_NO_VALUE);
        }

        bool isTradingSessionSubIDValid () const
        {
            return (mTradingSessionSubID != TRADING_SESSION_SUB_ID_NO_VALUE);
        }

        void resetTradingSessionSubID ()
        {
            mTradingSessionSubID = TRADING_SESSION_SUB_ID_NO_VALUE;
        }

        int8_t getStopPxIndicator () const
        {
            return mStopPxIndicator;
        }

        bool setStopPxIndicator (int8_t v)
        {
            mStopPxIndicator = v;
            return ((STOP_PX_INDICATOR_MIN <= mStopPxIndicator && mStopPxIndicator <= STOP_PX_INDICATOR_MAX) || mStopPxIndicator == STOP_PX_INDICATOR_NO_VALUE);
        }

        bool isStopPxIndicatorValid () const
        {
            return (mStopPxIndicator != STOP_PX_INDICATOR_NO_VALUE);
        }

        void resetStopPxIndicator ()
        {
            mStopPxIndicator = STOP_PX_INDICATOR_NO_VALUE;
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

        int8_t getExDestinationType () const
        {
            return mExDestinationType;
        }

        bool setExDestinationType (int8_t v)
        {
            mExDestinationType = v;
            return ((EX_DESTINATION_TYPE_MIN <= mExDestinationType && mExDestinationType <= EX_DESTINATION_TYPE_MAX) || mExDestinationType == EX_DESTINATION_TYPE_NO_VALUE);
        }

        bool isExDestinationTypeValid () const
        {
            return (mExDestinationType != EX_DESTINATION_TYPE_NO_VALUE);
        }

        void resetExDestinationType ()
        {
            mExDestinationType = EX_DESTINATION_TYPE_NO_VALUE;
        }

        int8_t getPartyIdInvestmentDecisionMakerQualifier () const
        {
            return mPartyIdInvestmentDecisionMakerQualifier;
        }

        bool setPartyIdInvestmentDecisionMakerQualifier (int8_t v)
        {
            mPartyIdInvestmentDecisionMakerQualifier = v;
            return ((PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN <= mPartyIdInvestmentDecisionMakerQualifier && mPartyIdInvestmentDecisionMakerQualifier <= PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX) || mPartyIdInvestmentDecisionMakerQualifier == PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        bool isPartyIdInvestmentDecisionMakerQualifierValid () const
        {
            return (mPartyIdInvestmentDecisionMakerQualifier != PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        void resetPartyIdInvestmentDecisionMakerQualifier ()
        {
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
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

        int8_t getOwnershipIndicator () const
        {
            return mOwnershipIndicator;
        }

        bool setOwnershipIndicator (int8_t v)
        {
            mOwnershipIndicator = v;
            return ((OWNERSHIP_INDICATOR_MIN <= mOwnershipIndicator && mOwnershipIndicator <= OWNERSHIP_INDICATOR_MAX) || mOwnershipIndicator == OWNERSHIP_INDICATOR_NO_VALUE);
        }

        bool isOwnershipIndicatorValid () const
        {
            return (mOwnershipIndicator != OWNERSHIP_INDICATOR_NO_VALUE);
        }

        void resetOwnershipIndicator ()
        {
            mOwnershipIndicator = OWNERSHIP_INDICATOR_NO_VALUE;
        }

        string getFreeText1 () const
        {
            return string (mFreeText1, FREE_TEXT1_MAX_LENGTH);
        }

        bool setFreeText1 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT1_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText1[i] = v[i];
            memset (&mFreeText1[size], '\0', FREE_TEXT1_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT2_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText2[i] = v[i];
            memset (&mFreeText2[size], '\0', FREE_TEXT2_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText4[i] = v[i];
            memset (&mFreeText4[size], '\0', FREE_TEXT4_MAX_LENGTH-size);
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

        string getFIXClOrdID () const
        {
            return string (mFIXClOrdID, FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool setFIXClOrdID (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) FIXCL_ORD_ID_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFIXClOrdID[i] = v[i];
            memset (&mFIXClOrdID[size], '\0', FIXCL_ORD_ID_MAX_LENGTH-size);
            return (v.size () <= FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool isFIXClOrdIDValid () const
        {
            return (memcmp (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID)) != 0);
        }

        void resetFIXClOrdID ()
        {
            memcpy (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad4[i] = v[i];
            memset (&mPad4[size], '\0', PAD4_MAX_LENGTH-size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mPrice)
                + sizeof (mOrderQty)
                + sizeof (mDisplayQty)
                + sizeof (mDisplayLowQty)
                + sizeof (mDisplayHighQty)
                + sizeof (mStopPx)
                + sizeof (mVolumeDiscoveryPrice)
                + sizeof (mPegOffsetValueAbs)
                + sizeof (mPegOffsetValuePct)
                + sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mExpireDate)
                + sizeof (mMarketSegmentID)
                + sizeof (mMatchInstCrossID)
                + sizeof (mTargetPartyIDSessionID)
                + sizeof (mApplSeqIndicator)
                + sizeof (mSide)
                + sizeof (mOrdType)
                + sizeof (mPriceValidityCheckType)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mValueCheckTypeQuantity)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mTimeInForce)
                + sizeof (mExecInst)
                + sizeof (mTradingSessionSubID)
                + sizeof (mStopPxIndicator)
                + sizeof (mTradingCapacity)
                + sizeof (mExDestinationType)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mOwnershipIndicator)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mFIXClOrdID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDisplayLowQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDisplayHighQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mStopPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mVolumeDiscoveryPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPegOffsetValueAbs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPegOffsetValuePct, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExpireDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradingSessionSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mStopPxIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExDestinationType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOwnershipIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDisplayLowQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDisplayHighQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mStopPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mVolumeDiscoveryPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPegOffsetValueAbs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPegOffsetValuePct, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExpireDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradingSessionSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mStopPxIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExDestinationType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOwnershipIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ModifyOrderSingleRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[DisplayQty=" << getDisplayQty () << "],"
                << "[DisplayLowQty=" << getDisplayLowQty () << "],"
                << "[DisplayHighQty=" << getDisplayHighQty () << "],"
                << "[StopPx=" << getStopPx () << "],"
                << "[VolumeDiscoveryPrice=" << getVolumeDiscoveryPrice () << "],"
                << "[PegOffsetValueAbs=" << getPegOffsetValueAbs () << "],"
                << "[PegOffsetValuePct=" << getPegOffsetValuePct () << "],"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[ExpireDate=" << getExpireDate () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[MatchInstCrossID=" << getMatchInstCrossID () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "],"
                << "[ApplSeqIndicator=" << getApplSeqIndicator () << "],"
                << "[Side=" << getSide () << "],"
                << "[OrdType=" << getOrdType () << "],"
                << "[PriceValidityCheckType=" << getPriceValidityCheckType () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[TimeInForce=" << getTimeInForce () << "],"
                << "[ExecInst=" << getExecInst () << "],"
                << "[TradingSessionSubID=" << getTradingSessionSubID () << "],"
                << "[StopPxIndicator=" << getStopPxIndicator () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[ExDestinationType=" << getExDestinationType () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[OwnershipIndicator=" << getOwnershipIndicator () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint64_t xetraModifyOrderSingleRequestPacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleRequestPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleRequestPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleRequestPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleRequestPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleRequestPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleRequestPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleRequestPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleRequestPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraModifyOrderSingleRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraModifyOrderSingleRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraModifyOrderSingleRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::PRICE_MIN = -92233720368.54775807;
const double xetraModifyOrderSingleRequestPacket::PRICE_MAX = 92233720368.54775807;
const int64_t xetraModifyOrderSingleRequestPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderSingleRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderSingleRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::DISPLAY_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderSingleRequestPacket::DISPLAY_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderSingleRequestPacket::DISPLAY_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::DISPLAY_LOW_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderSingleRequestPacket::DISPLAY_LOW_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderSingleRequestPacket::DISPLAY_LOW_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::DISPLAY_HIGH_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderSingleRequestPacket::DISPLAY_HIGH_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderSingleRequestPacket::DISPLAY_HIGH_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::STOP_PX_MIN = -92233720368.54775807;
const double xetraModifyOrderSingleRequestPacket::STOP_PX_MAX = 92233720368.54775807;
const int64_t xetraModifyOrderSingleRequestPacket::STOP_PX_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::VOLUME_DISCOVERY_PRICE_MIN = -92233720368.54775807;
const double xetraModifyOrderSingleRequestPacket::VOLUME_DISCOVERY_PRICE_MAX = 92233720368.54775807;
const int64_t xetraModifyOrderSingleRequestPacket::VOLUME_DISCOVERY_PRICE_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::PEG_OFFSET_VALUE_ABS_MIN = -92233720368.54775807;
const double xetraModifyOrderSingleRequestPacket::PEG_OFFSET_VALUE_ABS_MAX = 92233720368.54775807;
const int64_t xetraModifyOrderSingleRequestPacket::PEG_OFFSET_VALUE_ABS_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleRequestPacket::PEG_OFFSET_VALUE_PCT_MIN = -922337203685477.5807;
const double xetraModifyOrderSingleRequestPacket::PEG_OFFSET_VALUE_PCT_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderSingleRequestPacket::PEG_OFFSET_VALUE_PCT_NO_VALUE = 0x8000000000000000;
const uint64_t xetraModifyOrderSingleRequestPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleRequestPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleRequestPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraModifyOrderSingleRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraModifyOrderSingleRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraModifyOrderSingleRequestPacket::EXPIRE_DATE_MIN = 0;
const int32_t xetraModifyOrderSingleRequestPacket::EXPIRE_DATE_MAX = 99991231;
const int32_t xetraModifyOrderSingleRequestPacket::EXPIRE_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraModifyOrderSingleRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraModifyOrderSingleRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraModifyOrderSingleRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraModifyOrderSingleRequestPacket::MATCH_INST_CROSS_ID_MIN = 0;
const uint32_t xetraModifyOrderSingleRequestPacket::MATCH_INST_CROSS_ID_MAX = 4294967294;
const uint32_t xetraModifyOrderSingleRequestPacket::MATCH_INST_CROSS_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraModifyOrderSingleRequestPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraModifyOrderSingleRequestPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraModifyOrderSingleRequestPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraModifyOrderSingleRequestPacket::APPL_SEQ_INDICATOR_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::APPL_SEQ_INDICATOR_MAX = 1;
const int8_t xetraModifyOrderSingleRequestPacket::APPL_SEQ_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::SIDE_MIN = 1;
const int8_t xetraModifyOrderSingleRequestPacket::SIDE_MAX = 2;
const int8_t xetraModifyOrderSingleRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::ORD_TYPE_MIN = 1;
const int8_t xetraModifyOrderSingleRequestPacket::ORD_TYPE_MAX = 4;
const int8_t xetraModifyOrderSingleRequestPacket::ORD_TYPE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MAX = 2;
const int8_t xetraModifyOrderSingleRequestPacket::PRICE_VALIDITY_CHECK_TYPE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t xetraModifyOrderSingleRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t xetraModifyOrderSingleRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraModifyOrderSingleRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::TIME_IN_FORCE_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::TIME_IN_FORCE_MAX = 6;
const int8_t xetraModifyOrderSingleRequestPacket::TIME_IN_FORCE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::EXEC_INST_MIN = 1;
const int8_t xetraModifyOrderSingleRequestPacket::EXEC_INST_MAX = 6;
const int8_t xetraModifyOrderSingleRequestPacket::EXEC_INST_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::TRADING_SESSION_SUB_ID_MIN = 1;
const int8_t xetraModifyOrderSingleRequestPacket::TRADING_SESSION_SUB_ID_MAX = 8;
const int8_t xetraModifyOrderSingleRequestPacket::TRADING_SESSION_SUB_ID_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::STOP_PX_INDICATOR_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::STOP_PX_INDICATOR_MAX = 1;
const int8_t xetraModifyOrderSingleRequestPacket::STOP_PX_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraModifyOrderSingleRequestPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraModifyOrderSingleRequestPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::EX_DESTINATION_TYPE_MIN = 3;
const int8_t xetraModifyOrderSingleRequestPacket::EX_DESTINATION_TYPE_MAX = 3;
const int8_t xetraModifyOrderSingleRequestPacket::EX_DESTINATION_TYPE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraModifyOrderSingleRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraModifyOrderSingleRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraModifyOrderSingleRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraModifyOrderSingleRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleRequestPacket::OWNERSHIP_INDICATOR_MIN = 0;
const int8_t xetraModifyOrderSingleRequestPacket::OWNERSHIP_INDICATOR_MAX = 1;
const int8_t xetraModifyOrderSingleRequestPacket::OWNERSHIP_INDICATOR_NO_VALUE = 0xFF;
const char xetraModifyOrderSingleRequestPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderSingleRequestPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraModifyOrderSingleRequestPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderSingleRequestPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraModifyOrderSingleRequestPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderSingleRequestPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraModifyOrderSingleRequestPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderSingleRequestPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const char xetraModifyOrderSingleRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderSingleRequestPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_MODIFYORDERSINGLEREQUEST_PACKET_H
