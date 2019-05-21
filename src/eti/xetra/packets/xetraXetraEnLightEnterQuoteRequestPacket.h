/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_XETRAENLIGHTENTERQUOTEREQUEST_PACKET_H
#define XETRA_XETRAENLIGHTENTERQUOTEREQUEST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraXetraEnLightEnterQuoteRequestPacket
{
    public:
        // no value constants
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double BID_SIZE_MIN;
        static const double BID_SIZE_MAX;
        static const int64_t BID_SIZE_NO_VALUE;
        static const double OFFER_SIZE_MIN;
        static const double OFFER_SIZE_MAX;
        static const int64_t OFFER_SIZE_NO_VALUE;
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MIN;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MAX;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MIN;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MAX;
        static const int8_t VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mBidSize;
        int64_t mOfferSize;
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int32_t mMarketSegmentID;
        uint32_t mNegotiationID;
        int8_t mValueCheckTypeQuantity;
        int8_t mValueCheckTypeValue;
        int8_t mTradingCapacity;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mExecutingTraderQualifier;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mPad7[7];

        // constructor
        xetraXetraEnLightEnterQuoteRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10802;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mBidSize = BID_SIZE_NO_VALUE;
            mOfferSize = OFFER_SIZE_NO_VALUE;
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        string getPartyExecutingFirm () const
        {
            return string (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setPartyExecutingFirm (const string& v)
        {
            memset (mPartyExecutingFirm, '\0', sizeof (mPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isPartyExecutingFirmValid () const
        {
            return (memcmp (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm)) != 0);
        }

        void resetPartyExecutingFirm ()
        {
            memcpy (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
        }

        string getPartyExecutingTrader () const
        {
            return string (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setPartyExecutingTrader (const string& v)
        {
            memset (mPartyExecutingTrader, '\0', sizeof (mPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isPartyExecutingTraderValid () const
        {
            return (memcmp (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader)) != 0);
        }

        void resetPartyExecutingTrader ()
        {
            memcpy (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
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

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            memset (mPad7, '\0', sizeof (mPad7));
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            strncpy (mPad7, v.c_str (), size);
            return (v.size () <= PAD7_MAX_LENGTH);
        }

        bool isPad7Valid () const
        {
            return (memcmp (mPad7, PAD7_NO_VALUE, sizeof (mPad7)) != 0);
        }

        void resetPad7 ()
        {
            memcpy (mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mBidSize)
                + sizeof (mOfferSize)
                + sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mValueCheckTypeQuantity)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mTradingCapacity)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mPad7);
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
            state = eti::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
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
            state = eti::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "XetraEnLightEnterQuoteRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[BidSize=" << getBidSize () << "],"
                << "[OfferSize=" << getOfferSize () << "],"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const double xetraXetraEnLightEnterQuoteRequestPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightEnterQuoteRequestPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightEnterQuoteRequestPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightEnterQuoteRequestPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightEnterQuoteRequestPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightEnterQuoteRequestPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightEnterQuoteRequestPacket::BID_SIZE_MIN = -922337203685477.5807;
const double xetraXetraEnLightEnterQuoteRequestPacket::BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightEnterQuoteRequestPacket::BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightEnterQuoteRequestPacket::OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraXetraEnLightEnterQuoteRequestPacket::OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightEnterQuoteRequestPacket::OFFER_SIZE_NO_VALUE = 0x8000000000000000;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightEnterQuoteRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraXetraEnLightEnterQuoteRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraXetraEnLightEnterQuoteRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraXetraEnLightEnterQuoteRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraXetraEnLightEnterQuoteRequestPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightEnterQuoteRequestPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightEnterQuoteRequestPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const char xetraXetraEnLightEnterQuoteRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightEnterQuoteRequestPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightEnterQuoteRequestPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightEnterQuoteRequestPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightEnterQuoteRequestPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraXetraEnLightEnterQuoteRequestPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightEnterQuoteRequestPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraXetraEnLightEnterQuoteRequestPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightEnterQuoteRequestPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraXetraEnLightEnterQuoteRequestPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightEnterQuoteRequestPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTENTERQUOTEREQUEST_PACKET_H
