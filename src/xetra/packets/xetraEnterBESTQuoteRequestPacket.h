/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_ENTERBESTQUOTEREQUEST_PACKET_H
#define XETRA_ENTERBESTQUOTEREQUEST_PACKET_H

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

class xetraEnterBESTQuoteRequestPacket
{
    public:
        // no value constants
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double BID_SIZE_MIN;
        static const double BID_SIZE_MAX;
        static const int64_t BID_SIZE_NO_VALUE;
        static const double RESERVED_BID_SIZE_MIN;
        static const double RESERVED_BID_SIZE_MAX;
        static const int64_t RESERVED_BID_SIZE_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double OFFER_SIZE_MIN;
        static const double OFFER_SIZE_MAX;
        static const int64_t OFFER_SIZE_NO_VALUE;
        static const double RESERVED_OFFER_SIZE_MIN;
        static const double RESERVED_OFFER_SIZE_MAX;
        static const int64_t RESERVED_OFFER_SIZE_NO_VALUE;
        static const double PEG_OFFSET_VALUE_BID_PX_MIN;
        static const double PEG_OFFSET_VALUE_BID_PX_MAX;
        static const int64_t PEG_OFFSET_VALUE_BID_PX_NO_VALUE;
        static const double PEG_OFFSET_VALUE_OFFER_PX_MIN;
        static const double PEG_OFFSET_VALUE_OFFER_PX_MAX;
        static const int64_t PEG_OFFSET_VALUE_OFFER_PX_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t ENRICHMENT_RULE_ID_MIN;
        static const int16_t ENRICHMENT_RULE_ID_MAX;
        static const int16_t ENRICHMENT_RULE_ID_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MIN;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MAX;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
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
        uint64_t mQuoteID;
        int64_t mSecurityID;
        int64_t mBidPx;
        int64_t mBidSize;
        int64_t mReservedBidSize;
        int64_t mOfferPx;
        int64_t mOfferSize;
        int64_t mReservedOfferSize;
        int64_t mPegOffsetValueBidPx;
        int64_t mPegOffsetValueOfferPx;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int32_t mMarketSegmentID;
        int16_t mEnrichmentRuleID;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mValueCheckTypeQuantity;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        char mPad6[6];

        // constructor
        xetraEnterBESTQuoteRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10412;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mBidSize = BID_SIZE_NO_VALUE;
            mReservedBidSize = RESERVED_BID_SIZE_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOfferSize = OFFER_SIZE_NO_VALUE;
            mReservedOfferSize = RESERVED_OFFER_SIZE_NO_VALUE;
            mPegOffsetValueBidPx = PEG_OFFSET_VALUE_BID_PX_NO_VALUE;
            mPegOffsetValueOfferPx = PEG_OFFSET_VALUE_OFFER_PX_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
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

        uint64_t getQuoteID () const
        {
            return mQuoteID;
        }

        bool setQuoteID (uint64_t v)
        {
            mQuoteID = v;
            return ((QUOTE_ID_MIN <= mQuoteID && mQuoteID <= QUOTE_ID_MAX) || mQuoteID == QUOTE_ID_NO_VALUE);
        }

        bool isQuoteIDValid () const
        {
            return (mQuoteID != QUOTE_ID_NO_VALUE);
        }

        void resetQuoteID ()
        {
            mQuoteID = QUOTE_ID_NO_VALUE;
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

        double getBidPx () const
        {
            return mBidPx / 100000000.0;
        }

        bool setBidPx (double v)
        {
            mBidPx = v * 100000000.0;
            return ((BID_PX_MIN <= v && v <= BID_PX_MAX) || mBidPx == BID_PX_NO_VALUE);
        }

        bool isBidPxValid () const
        {
            return (mBidPx != BID_PX_NO_VALUE);
        }

        void resetBidPx ()
        {
            mBidPx = BID_PX_NO_VALUE;
        }

        double getBidSize () const
        {
            return mBidSize / 10000.0;
        }

        bool setBidSize (double v)
        {
            mBidSize = v * 10000.0;
            return ((BID_SIZE_MIN <= v && v <= BID_SIZE_MAX) || mBidSize == BID_SIZE_NO_VALUE);
        }

        bool isBidSizeValid () const
        {
            return (mBidSize != BID_SIZE_NO_VALUE);
        }

        void resetBidSize ()
        {
            mBidSize = BID_SIZE_NO_VALUE;
        }

        double getReservedBidSize () const
        {
            return mReservedBidSize / 10000.0;
        }

        bool setReservedBidSize (double v)
        {
            mReservedBidSize = v * 10000.0;
            return ((RESERVED_BID_SIZE_MIN <= v && v <= RESERVED_BID_SIZE_MAX) || mReservedBidSize == RESERVED_BID_SIZE_NO_VALUE);
        }

        bool isReservedBidSizeValid () const
        {
            return (mReservedBidSize != RESERVED_BID_SIZE_NO_VALUE);
        }

        void resetReservedBidSize ()
        {
            mReservedBidSize = RESERVED_BID_SIZE_NO_VALUE;
        }

        double getOfferPx () const
        {
            return mOfferPx / 100000000.0;
        }

        bool setOfferPx (double v)
        {
            mOfferPx = v * 100000000.0;
            return ((OFFER_PX_MIN <= v && v <= OFFER_PX_MAX) || mOfferPx == OFFER_PX_NO_VALUE);
        }

        bool isOfferPxValid () const
        {
            return (mOfferPx != OFFER_PX_NO_VALUE);
        }

        void resetOfferPx ()
        {
            mOfferPx = OFFER_PX_NO_VALUE;
        }

        double getOfferSize () const
        {
            return mOfferSize / 10000.0;
        }

        bool setOfferSize (double v)
        {
            mOfferSize = v * 10000.0;
            return ((OFFER_SIZE_MIN <= v && v <= OFFER_SIZE_MAX) || mOfferSize == OFFER_SIZE_NO_VALUE);
        }

        bool isOfferSizeValid () const
        {
            return (mOfferSize != OFFER_SIZE_NO_VALUE);
        }

        void resetOfferSize ()
        {
            mOfferSize = OFFER_SIZE_NO_VALUE;
        }

        double getReservedOfferSize () const
        {
            return mReservedOfferSize / 10000.0;
        }

        bool setReservedOfferSize (double v)
        {
            mReservedOfferSize = v * 10000.0;
            return ((RESERVED_OFFER_SIZE_MIN <= v && v <= RESERVED_OFFER_SIZE_MAX) || mReservedOfferSize == RESERVED_OFFER_SIZE_NO_VALUE);
        }

        bool isReservedOfferSizeValid () const
        {
            return (mReservedOfferSize != RESERVED_OFFER_SIZE_NO_VALUE);
        }

        void resetReservedOfferSize ()
        {
            mReservedOfferSize = RESERVED_OFFER_SIZE_NO_VALUE;
        }

        double getPegOffsetValueBidPx () const
        {
            return mPegOffsetValueBidPx / 100000000.0;
        }

        bool setPegOffsetValueBidPx (double v)
        {
            mPegOffsetValueBidPx = v * 100000000.0;
            return ((PEG_OFFSET_VALUE_BID_PX_MIN <= v && v <= PEG_OFFSET_VALUE_BID_PX_MAX) || mPegOffsetValueBidPx == PEG_OFFSET_VALUE_BID_PX_NO_VALUE);
        }

        bool isPegOffsetValueBidPxValid () const
        {
            return (mPegOffsetValueBidPx != PEG_OFFSET_VALUE_BID_PX_NO_VALUE);
        }

        void resetPegOffsetValueBidPx ()
        {
            mPegOffsetValueBidPx = PEG_OFFSET_VALUE_BID_PX_NO_VALUE;
        }

        double getPegOffsetValueOfferPx () const
        {
            return mPegOffsetValueOfferPx / 100000000.0;
        }

        bool setPegOffsetValueOfferPx (double v)
        {
            mPegOffsetValueOfferPx = v * 100000000.0;
            return ((PEG_OFFSET_VALUE_OFFER_PX_MIN <= v && v <= PEG_OFFSET_VALUE_OFFER_PX_MAX) || mPegOffsetValueOfferPx == PEG_OFFSET_VALUE_OFFER_PX_NO_VALUE);
        }

        bool isPegOffsetValueOfferPxValid () const
        {
            return (mPegOffsetValueOfferPx != PEG_OFFSET_VALUE_OFFER_PX_NO_VALUE);
        }

        void resetPegOffsetValueOfferPx ()
        {
            mPegOffsetValueOfferPx = PEG_OFFSET_VALUE_OFFER_PX_NO_VALUE;
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
                + sizeof (mQuoteID)
                + sizeof (mSecurityID)
                + sizeof (mBidPx)
                + sizeof (mBidSize)
                + sizeof (mReservedBidSize)
                + sizeof (mOfferPx)
                + sizeof (mOfferSize)
                + sizeof (mReservedOfferSize)
                + sizeof (mPegOffsetValueBidPx)
                + sizeof (mPegOffsetValueOfferPx)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMarketSegmentID)
                + sizeof (mEnrichmentRuleID)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mValueCheckTypeQuantity)
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
            state = xetra::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mReservedBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mReservedOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPegOffsetValueBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPegOffsetValueOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mValueCheckTypeQuantity, buf, len, used);
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
            state = xetra::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mReservedBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mReservedOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPegOffsetValueBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPegOffsetValueOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mValueCheckTypeQuantity, buf, len, used);
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
            sss << "EnterBESTQuoteRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[BidSize=" << getBidSize () << "],"
                << "[ReservedBidSize=" << getReservedBidSize () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OfferSize=" << getOfferSize () << "],"
                << "[ReservedOfferSize=" << getReservedOfferSize () << "],"
                << "[PegOffsetValueBidPx=" << getPegOffsetValueBidPx () << "],"
                << "[PegOffsetValueOfferPx=" << getPegOffsetValueOfferPx () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[EnrichmentRuleID=" << getEnrichmentRuleID () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t xetraEnterBESTQuoteRequestPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraEnterBESTQuoteRequestPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraEnterBESTQuoteRequestPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraEnterBESTQuoteRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraEnterBESTQuoteRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraEnterBESTQuoteRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraEnterBESTQuoteRequestPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraEnterBESTQuoteRequestPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::BID_SIZE_MIN = -922337203685477.5807;
const double xetraEnterBESTQuoteRequestPacket::BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraEnterBESTQuoteRequestPacket::BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::RESERVED_BID_SIZE_MIN = -922337203685477.5807;
const double xetraEnterBESTQuoteRequestPacket::RESERVED_BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraEnterBESTQuoteRequestPacket::RESERVED_BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraEnterBESTQuoteRequestPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraEnterBESTQuoteRequestPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraEnterBESTQuoteRequestPacket::OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraEnterBESTQuoteRequestPacket::OFFER_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::RESERVED_OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraEnterBESTQuoteRequestPacket::RESERVED_OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraEnterBESTQuoteRequestPacket::RESERVED_OFFER_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::PEG_OFFSET_VALUE_BID_PX_MIN = -92233720368.54775807;
const double xetraEnterBESTQuoteRequestPacket::PEG_OFFSET_VALUE_BID_PX_MAX = 92233720368.54775807;
const int64_t xetraEnterBESTQuoteRequestPacket::PEG_OFFSET_VALUE_BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraEnterBESTQuoteRequestPacket::PEG_OFFSET_VALUE_OFFER_PX_MIN = -92233720368.54775807;
const double xetraEnterBESTQuoteRequestPacket::PEG_OFFSET_VALUE_OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraEnterBESTQuoteRequestPacket::PEG_OFFSET_VALUE_OFFER_PX_NO_VALUE = 0x8000000000000000;
const uint64_t xetraEnterBESTQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraEnterBESTQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraEnterBESTQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraEnterBESTQuoteRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraEnterBESTQuoteRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraEnterBESTQuoteRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraEnterBESTQuoteRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraEnterBESTQuoteRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraEnterBESTQuoteRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t xetraEnterBESTQuoteRequestPacket::ENRICHMENT_RULE_ID_MIN = 1;
const int16_t xetraEnterBESTQuoteRequestPacket::ENRICHMENT_RULE_ID_MAX = 10000;
const int16_t xetraEnterBESTQuoteRequestPacket::ENRICHMENT_RULE_ID_NO_VALUE = 0xFFFF;
const int8_t xetraEnterBESTQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraEnterBESTQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraEnterBESTQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraEnterBESTQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t xetraEnterBESTQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t xetraEnterBESTQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const int8_t xetraEnterBESTQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraEnterBESTQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraEnterBESTQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraEnterBESTQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraEnterBESTQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraEnterBESTQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const char xetraEnterBESTQuoteRequestPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraEnterBESTQuoteRequestPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_ENTERBESTQUOTEREQUEST_PACKET_H
