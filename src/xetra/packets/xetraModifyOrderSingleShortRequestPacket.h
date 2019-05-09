/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_MODIFYORDERSINGLESHORTREQUEST_PACKET_H
#define XETRA_MODIFYORDERSINGLESHORTREQUEST_PACKET_H

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

class xetraModifyOrderSingleShortRequestPacket
{
    public:
        // no value constants
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
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const uint32_t MATCH_INST_CROSS_ID_MIN;
        static const uint32_t MATCH_INST_CROSS_ID_MAX;
        static const uint32_t MATCH_INST_CROSS_ID_NO_VALUE;
        static const int16_t ENRICHMENT_RULE_ID_MIN;
        static const int16_t ENRICHMENT_RULE_ID_MAX;
        static const int16_t ENRICHMENT_RULE_ID_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
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
        static const int8_t APPL_SEQ_INDICATOR_MIN;
        static const int8_t APPL_SEQ_INDICATOR_MAX;
        static const int8_t APPL_SEQ_INDICATOR_NO_VALUE;
        static const int8_t EXEC_INST_MIN;
        static const int8_t EXEC_INST_MAX;
        static const int8_t EXEC_INST_NO_VALUE;
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
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        int64_t mPrice;
        int64_t mOrderQty;
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        uint32_t mMatchInstCrossID;
        int16_t mEnrichmentRuleID;
        int8_t mSide;
        int8_t mPriceValidityCheckType;
        int8_t mValueCheckTypeValue;
        int8_t mValueCheckTypeQuantity;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mTimeInForce;
        int8_t mApplSeqIndicator;
        int8_t mExecInst;
        int8_t mTradingCapacity;
        int8_t mExDestinationType;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        char mPad6[6];

        // constructor
        xetraModifyOrderSingleShortRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10126;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
            mExecInst = EXEC_INST_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mExDestinationType = EX_DESTINATION_TYPE_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
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

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mPrice)
                + sizeof (mOrderQty)
                + sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMatchInstCrossID)
                + sizeof (mEnrichmentRuleID)
                + sizeof (mSide)
                + sizeof (mPriceValidityCheckType)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mValueCheckTypeQuantity)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mTimeInForce)
                + sizeof (mApplSeqIndicator)
                + sizeof (mExecInst)
                + sizeof (mTradingCapacity)
                + sizeof (mExDestinationType)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mPad6);
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
            state = xetra::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
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
            state = xetra::serialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExDestinationType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad6, buf, len, used);
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
            state = xetra::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
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
            state = xetra::deserialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExDestinationType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ModifyOrderSingleShortRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MatchInstCrossID=" << getMatchInstCrossID () << "],"
                << "[EnrichmentRuleID=" << getEnrichmentRuleID () << "],"
                << "[Side=" << getSide () << "],"
                << "[PriceValidityCheckType=" << getPriceValidityCheckType () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[TimeInForce=" << getTimeInForce () << "],"
                << "[ApplSeqIndicator=" << getApplSeqIndicator () << "],"
                << "[ExecInst=" << getExecInst () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[ExDestinationType=" << getExDestinationType () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t xetraModifyOrderSingleShortRequestPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleShortRequestPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraModifyOrderSingleShortRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraModifyOrderSingleShortRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraModifyOrderSingleShortRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleShortRequestPacket::PRICE_MIN = -92233720368.54775807;
const double xetraModifyOrderSingleShortRequestPacket::PRICE_MAX = 92233720368.54775807;
const int64_t xetraModifyOrderSingleShortRequestPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderSingleShortRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderSingleShortRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderSingleShortRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraModifyOrderSingleShortRequestPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderSingleShortRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderSingleShortRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraModifyOrderSingleShortRequestPacket::MATCH_INST_CROSS_ID_MIN = 0;
const uint32_t xetraModifyOrderSingleShortRequestPacket::MATCH_INST_CROSS_ID_MAX = 4294967294;
const uint32_t xetraModifyOrderSingleShortRequestPacket::MATCH_INST_CROSS_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraModifyOrderSingleShortRequestPacket::ENRICHMENT_RULE_ID_MIN = 1;
const int16_t xetraModifyOrderSingleShortRequestPacket::ENRICHMENT_RULE_ID_MAX = 10000;
const int16_t xetraModifyOrderSingleShortRequestPacket::ENRICHMENT_RULE_ID_NO_VALUE = 0xFFFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::SIDE_MIN = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::SIDE_MAX = 2;
const int8_t xetraModifyOrderSingleShortRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MIN = 0;
const int8_t xetraModifyOrderSingleShortRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MAX = 2;
const int8_t xetraModifyOrderSingleShortRequestPacket::PRICE_VALIDITY_CHECK_TYPE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t xetraModifyOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t xetraModifyOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraModifyOrderSingleShortRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::TIME_IN_FORCE_MIN = 0;
const int8_t xetraModifyOrderSingleShortRequestPacket::TIME_IN_FORCE_MAX = 6;
const int8_t xetraModifyOrderSingleShortRequestPacket::TIME_IN_FORCE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::APPL_SEQ_INDICATOR_MIN = 0;
const int8_t xetraModifyOrderSingleShortRequestPacket::APPL_SEQ_INDICATOR_MAX = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::APPL_SEQ_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::EXEC_INST_MIN = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::EXEC_INST_MAX = 6;
const int8_t xetraModifyOrderSingleShortRequestPacket::EXEC_INST_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraModifyOrderSingleShortRequestPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraModifyOrderSingleShortRequestPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::EX_DESTINATION_TYPE_MIN = 3;
const int8_t xetraModifyOrderSingleShortRequestPacket::EX_DESTINATION_TYPE_MAX = 3;
const int8_t xetraModifyOrderSingleShortRequestPacket::EX_DESTINATION_TYPE_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraModifyOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraModifyOrderSingleShortRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderSingleShortRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraModifyOrderSingleShortRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraModifyOrderSingleShortRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const char xetraModifyOrderSingleShortRequestPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderSingleShortRequestPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_MODIFYORDERSINGLESHORTREQUEST_PACKET_H
