/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_NEWORDERSINGLESHORTREQUEST_PACKET_H
#define EUREX_NEWORDERSINGLESHORTREQUEST_PACKET_H

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

class eurexNewOrderSingleShortRequestPacket
{
    public:
        // no value constants
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const uint32_t SIMPLE_SECURITY_ID_MIN;
        static const uint32_t SIMPLE_SECURITY_ID_MAX;
        static const uint32_t SIMPLE_SECURITY_ID_NO_VALUE;
        static const uint32_t MATCH_INST_CROSS_ID_MIN;
        static const uint32_t MATCH_INST_CROSS_ID_MAX;
        static const uint32_t MATCH_INST_CROSS_ID_NO_VALUE;
        static const int16_t ENRICHMENT_RULE_ID_MIN;
        static const int16_t ENRICHMENT_RULE_ID_MAX;
        static const int16_t ENRICHMENT_RULE_ID_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t APPL_SEQ_INDICATOR_MIN;
        static const int8_t APPL_SEQ_INDICATOR_MAX;
        static const int8_t APPL_SEQ_INDICATOR_NO_VALUE;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MIN;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MAX;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MIN;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MAX;
        static const int8_t VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t TIME_IN_FORCE_MIN;
        static const int8_t TIME_IN_FORCE_MAX;
        static const int8_t TIME_IN_FORCE_NO_VALUE;
        static const int8_t EXEC_INST_MIN;
        static const int8_t EXEC_INST_MAX;
        static const int8_t EXEC_INST_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mPrice;
        int64_t mOrderQty;
        uint64_t mClOrdID;
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        uint32_t mSimpleSecurityID;
        uint32_t mMatchInstCrossID;
        int16_t mEnrichmentRuleID;
        int8_t mSide;
        int8_t mApplSeqIndicator;
        int8_t mPriceValidityCheckType;
        int8_t mValueCheckTypeValue;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mTimeInForce;
        int8_t mExecInst;
        int8_t mTradingCapacity;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        char mPad4[4];

        // constructor
        eurexNewOrderSingleShortRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10125;
            mPrice = PRICE_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mSimpleSecurityID = SIMPLE_SECURITY_ID_NO_VALUE;
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
            mExecInst = EXEC_INST_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
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

        uint32_t getSimpleSecurityID () const
        {
            return mSimpleSecurityID;
        }

        bool setSimpleSecurityID (uint32_t v)
        {
            mSimpleSecurityID = v;
            return ((SIMPLE_SECURITY_ID_MIN <= mSimpleSecurityID && mSimpleSecurityID <= SIMPLE_SECURITY_ID_MAX) || mSimpleSecurityID == SIMPLE_SECURITY_ID_NO_VALUE);
        }

        bool isSimpleSecurityIDValid () const
        {
            return (mSimpleSecurityID != SIMPLE_SECURITY_ID_NO_VALUE);
        }

        void resetSimpleSecurityID ()
        {
            mSimpleSecurityID = SIMPLE_SECURITY_ID_NO_VALUE;
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

        int16_t getEnrichmentRuleID () const
        {
            return mEnrichmentRuleID;
        }

        bool setEnrichmentRuleID (int16_t v)
        {
            mEnrichmentRuleID = v;
            return ((ENRICHMENT_RULE_ID_MIN <= mEnrichmentRuleID && mEnrichmentRuleID <= ENRICHMENT_RULE_ID_MAX) || mEnrichmentRuleID == ENRICHMENT_RULE_ID_NO_VALUE);
        }

        bool isEnrichmentRuleIDValid () const
        {
            return (mEnrichmentRuleID != ENRICHMENT_RULE_ID_NO_VALUE);
        }

        void resetEnrichmentRuleID ()
        {
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
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

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
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
                + sizeof (mPrice)
                + sizeof (mOrderQty)
                + sizeof (mClOrdID)
                + sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mSimpleSecurityID)
                + sizeof (mMatchInstCrossID)
                + sizeof (mEnrichmentRuleID)
                + sizeof (mSide)
                + sizeof (mApplSeqIndicator)
                + sizeof (mPriceValidityCheckType)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mTimeInForce)
                + sizeof (mExecInst)
                + sizeof (mTradingCapacity)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mExecutingTraderQualifier)
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
            state = eti::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSimpleSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
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
            state = eti::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSimpleSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NewOrderSingleShortRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[Price=" << getPrice () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[SimpleSecurityID=" << getSimpleSecurityID () << "],"
                << "[MatchInstCrossID=" << getMatchInstCrossID () << "],"
                << "[EnrichmentRuleID=" << getEnrichmentRuleID () << "],"
                << "[Side=" << getSide () << "],"
                << "[ApplSeqIndicator=" << getApplSeqIndicator () << "],"
                << "[PriceValidityCheckType=" << getPriceValidityCheckType () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[TimeInForce=" << getTimeInForce () << "],"
                << "[ExecInst=" << getExecInst () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const double eurexNewOrderSingleShortRequestPacket::PRICE_MIN = -92233720368.54775807;
const double eurexNewOrderSingleShortRequestPacket::PRICE_MAX = 92233720368.54775807;
const int64_t eurexNewOrderSingleShortRequestPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double eurexNewOrderSingleShortRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexNewOrderSingleShortRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexNewOrderSingleShortRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexNewOrderSingleShortRequestPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderSingleShortRequestPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderSingleShortRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderSingleShortRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexNewOrderSingleShortRequestPacket::SIMPLE_SECURITY_ID_MIN = 0;
const uint32_t eurexNewOrderSingleShortRequestPacket::SIMPLE_SECURITY_ID_MAX = 4294967294;
const uint32_t eurexNewOrderSingleShortRequestPacket::SIMPLE_SECURITY_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexNewOrderSingleShortRequestPacket::MATCH_INST_CROSS_ID_MIN = 0;
const uint32_t eurexNewOrderSingleShortRequestPacket::MATCH_INST_CROSS_ID_MAX = 4294967294;
const uint32_t eurexNewOrderSingleShortRequestPacket::MATCH_INST_CROSS_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexNewOrderSingleShortRequestPacket::ENRICHMENT_RULE_ID_MIN = 1;
const int16_t eurexNewOrderSingleShortRequestPacket::ENRICHMENT_RULE_ID_MAX = 10000;
const int16_t eurexNewOrderSingleShortRequestPacket::ENRICHMENT_RULE_ID_NO_VALUE = 0xFFFF;
const int8_t eurexNewOrderSingleShortRequestPacket::SIDE_MIN = 1;
const int8_t eurexNewOrderSingleShortRequestPacket::SIDE_MAX = 2;
const int8_t eurexNewOrderSingleShortRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::APPL_SEQ_INDICATOR_MIN = 0;
const int8_t eurexNewOrderSingleShortRequestPacket::APPL_SEQ_INDICATOR_MAX = 1;
const int8_t eurexNewOrderSingleShortRequestPacket::APPL_SEQ_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MIN = 0;
const int8_t eurexNewOrderSingleShortRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MAX = 2;
const int8_t eurexNewOrderSingleShortRequestPacket::PRICE_VALIDITY_CHECK_TYPE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t eurexNewOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t eurexNewOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t eurexNewOrderSingleShortRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t eurexNewOrderSingleShortRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::TIME_IN_FORCE_MIN = 0;
const int8_t eurexNewOrderSingleShortRequestPacket::TIME_IN_FORCE_MAX = 6;
const int8_t eurexNewOrderSingleShortRequestPacket::TIME_IN_FORCE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::EXEC_INST_MIN = 1;
const int8_t eurexNewOrderSingleShortRequestPacket::EXEC_INST_MAX = 6;
const int8_t eurexNewOrderSingleShortRequestPacket::EXEC_INST_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexNewOrderSingleShortRequestPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexNewOrderSingleShortRequestPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t eurexNewOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t eurexNewOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t eurexNewOrderSingleShortRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t eurexNewOrderSingleShortRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t eurexNewOrderSingleShortRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const char eurexNewOrderSingleShortRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderSingleShortRequestPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_NEWORDERSINGLESHORTREQUEST_PACKET_H
