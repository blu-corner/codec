/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_MASSQUOTEREQUEST_PACKET_H
#define XETRA_MASSQUOTEREQUEST_PACKET_H

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

class xetraMassQuoteRequestPacket
{
    public:
        // no value constants
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t MATCH_INST_CROSS_ID_MIN;
        static const uint32_t MATCH_INST_CROSS_ID_MAX;
        static const uint32_t MATCH_INST_CROSS_ID_NO_VALUE;
        static const int16_t ENRICHMENT_RULE_ID_MIN;
        static const int16_t ENRICHMENT_RULE_ID_MAX;
        static const int16_t ENRICHMENT_RULE_ID_NO_VALUE;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MIN;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MAX;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MIN;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MAX;
        static const int8_t VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MIN;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MAX;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
        static const int8_t QUOTE_SIZE_TYPE_MIN;
        static const int8_t QUOTE_SIZE_TYPE_MAX;
        static const int8_t QUOTE_SIZE_TYPE_NO_VALUE;
        static const int8_t QUOTE_TYPE_MIN;
        static const int8_t QUOTE_TYPE_MAX;
        static const int8_t QUOTE_TYPE_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t NO_QUOTE_ENTRIES_MIN;
        static const int8_t NO_QUOTE_ENTRIES_MAX;
        static const int8_t NO_QUOTE_ENTRIES_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;
        static const size_t QUOTE_ENTRY_GRP_MIN;
        static const size_t QUOTE_ENTRY_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint64_t mQuoteID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int32_t mMarketSegmentID;
        uint32_t mMatchInstCrossID;
        int16_t mEnrichmentRuleID;
        int8_t mPriceValidityCheckType;
        int8_t mValueCheckTypeValue;
        int8_t mValueCheckTypeQuantity;
        int8_t mQuoteSizeType;
        int8_t mQuoteType;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mNoQuoteEntries;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        char mPad5[5];
        vector<xetraQuoteEntryGrpCompPacket> mQuoteEntryGrp;

        // constructor
        xetraMassQuoteRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10405;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
            mEnrichmentRuleID = ENRICHMENT_RULE_ID_NO_VALUE;
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
            mQuoteSizeType = QUOTE_SIZE_TYPE_NO_VALUE;
            mQuoteType = QUOTE_TYPE_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mNoQuoteEntries = NO_QUOTE_ENTRIES_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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

        int8_t getQuoteSizeType () const
        {
            return mQuoteSizeType;
        }

        bool setQuoteSizeType (int8_t v)
        {
            mQuoteSizeType = v;
            return ((QUOTE_SIZE_TYPE_MIN <= mQuoteSizeType && mQuoteSizeType <= QUOTE_SIZE_TYPE_MAX) || mQuoteSizeType == QUOTE_SIZE_TYPE_NO_VALUE);
        }

        bool isQuoteSizeTypeValid () const
        {
            return (mQuoteSizeType != QUOTE_SIZE_TYPE_NO_VALUE);
        }

        void resetQuoteSizeType ()
        {
            mQuoteSizeType = QUOTE_SIZE_TYPE_NO_VALUE;
        }

        int8_t getQuoteType () const
        {
            return mQuoteType;
        }

        bool setQuoteType (int8_t v)
        {
            mQuoteType = v;
            return ((QUOTE_TYPE_MIN <= mQuoteType && mQuoteType <= QUOTE_TYPE_MAX) || mQuoteType == QUOTE_TYPE_NO_VALUE);
        }

        bool isQuoteTypeValid () const
        {
            return (mQuoteType != QUOTE_TYPE_NO_VALUE);
        }

        void resetQuoteType ()
        {
            mQuoteType = QUOTE_TYPE_NO_VALUE;
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

        int8_t getNoQuoteEntries () const
        {
            return mNoQuoteEntries;
        }

        bool setNoQuoteEntries (int8_t v)
        {
            mNoQuoteEntries = v;
            return ((NO_QUOTE_ENTRIES_MIN <= mNoQuoteEntries && mNoQuoteEntries <= NO_QUOTE_ENTRIES_MAX) || mNoQuoteEntries == NO_QUOTE_ENTRIES_NO_VALUE);
        }

        bool isNoQuoteEntriesValid () const
        {
            return (mNoQuoteEntries != NO_QUOTE_ENTRIES_NO_VALUE);
        }

        void resetNoQuoteEntries ()
        {
            mNoQuoteEntries = NO_QUOTE_ENTRIES_NO_VALUE;
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

        string getPad5 () const
        {
            return string (mPad5, PAD5_MAX_LENGTH);
        }

        bool setPad5 (const string& v)
        {
            memset (mPad5, '\0', sizeof (mPad5));
            size_t size = min ((size_t) v.size (), (size_t) PAD5_MAX_LENGTH);
            strncpy (mPad5, v.c_str (), size);
            return (v.size () <= PAD5_MAX_LENGTH);
        }

        bool isPad5Valid () const
        {
            return (memcmp (mPad5, PAD5_NO_VALUE, sizeof (mPad5)) != 0);
        }

        void resetPad5 ()
        {
            memcpy (mPad5, PAD5_NO_VALUE, sizeof (mPad5));
        }

        const vector<xetraQuoteEntryGrpCompPacket>& getQuoteEntryGrp () const
        {
            return mQuoteEntryGrp;
        }

        bool setQuoteEntryGrp (const vector<xetraQuoteEntryGrpCompPacket>& v)
        {
            mQuoteEntryGrp = v;
            mNoQuoteEntries = v.size ();
            return (QUOTE_ENTRY_GRP_MIN <= v.size () && v.size () <= QUOTE_ENTRY_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mQuoteID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMarketSegmentID)
                + sizeof (mMatchInstCrossID)
                + sizeof (mEnrichmentRuleID)
                + sizeof (mPriceValidityCheckType)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mValueCheckTypeQuantity)
                + sizeof (mQuoteSizeType)
                + sizeof (mQuoteType)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mNoQuoteEntries)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mPad5)
                + xetra::getRawSize (mQuoteEntryGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoQuoteEntries = mQuoteEntryGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteSizeType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoQuoteEntries, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mQuoteEntryGrp.size (); i++)
            {
                state = mQuoteEntryGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = xetra::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mEnrichmentRuleID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteSizeType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoQuoteEntries, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mQuoteEntryGrp.resize (mNoQuoteEntries);
            for (vector<xetraQuoteEntryGrpCompPacket>::iterator it = mQuoteEntryGrp.begin (); it != mQuoteEntryGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "MassQuoteRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[MatchInstCrossID=" << getMatchInstCrossID () << "],"
                << "[EnrichmentRuleID=" << getEnrichmentRuleID () << "],"
                << "[PriceValidityCheckType=" << getPriceValidityCheckType () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[QuoteSizeType=" << getQuoteSizeType () << "],"
                << "[QuoteType=" << getQuoteType () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[NoQuoteEntries=" << getNoQuoteEntries () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[Pad5=" << getPad5 () << "],"
                << "[QuoteEntryGrp=" << xetra::toString (getQuoteEntryGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraMassQuoteRequestPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraMassQuoteRequestPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraMassQuoteRequestPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraMassQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraMassQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraMassQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraMassQuoteRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraMassQuoteRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraMassQuoteRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraMassQuoteRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraMassQuoteRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraMassQuoteRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraMassQuoteRequestPacket::MATCH_INST_CROSS_ID_MIN = 0;
const uint32_t xetraMassQuoteRequestPacket::MATCH_INST_CROSS_ID_MAX = 4294967294;
const uint32_t xetraMassQuoteRequestPacket::MATCH_INST_CROSS_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraMassQuoteRequestPacket::ENRICHMENT_RULE_ID_MIN = 1;
const int16_t xetraMassQuoteRequestPacket::ENRICHMENT_RULE_ID_MAX = 10000;
const int16_t xetraMassQuoteRequestPacket::ENRICHMENT_RULE_ID_NO_VALUE = 0xFFFF;
const int8_t xetraMassQuoteRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MIN = 0;
const int8_t xetraMassQuoteRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MAX = 2;
const int8_t xetraMassQuoteRequestPacket::PRICE_VALIDITY_CHECK_TYPE_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t xetraMassQuoteRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t xetraMassQuoteRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t xetraMassQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t xetraMassQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::QUOTE_SIZE_TYPE_MIN = 1;
const int8_t xetraMassQuoteRequestPacket::QUOTE_SIZE_TYPE_MAX = 2;
const int8_t xetraMassQuoteRequestPacket::QUOTE_SIZE_TYPE_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::QUOTE_TYPE_MIN = 0;
const int8_t xetraMassQuoteRequestPacket::QUOTE_TYPE_MAX = 102;
const int8_t xetraMassQuoteRequestPacket::QUOTE_TYPE_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraMassQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraMassQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::NO_QUOTE_ENTRIES_MIN = 0;
const int8_t xetraMassQuoteRequestPacket::NO_QUOTE_ENTRIES_MAX = 100;
const int8_t xetraMassQuoteRequestPacket::NO_QUOTE_ENTRIES_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraMassQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraMassQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraMassQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraMassQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraMassQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const char xetraMassQuoteRequestPacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraMassQuoteRequestPacket::PAD5_MAX_LENGTH = 5;
const size_t xetraMassQuoteRequestPacket::QUOTE_ENTRY_GRP_MIN = 0;
const size_t xetraMassQuoteRequestPacket::QUOTE_ENTRY_GRP_MAX = 100;


} // namespace neueda

#endif // XETRA_MASSQUOTEREQUEST_PACKET_H
