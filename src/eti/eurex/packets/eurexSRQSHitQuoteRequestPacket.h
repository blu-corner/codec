/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_SRQSHITQUOTEREQUEST_PACKET_H
#define EUREX_SRQSHITQUOTEREQUEST_PACKET_H

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

class eurexSRQSHitQuoteRequestPacket
{
    public:
        // no value constants
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const uint64_t VALID_UNTIL_TIME_MIN;
        static const uint64_t VALID_UNTIL_TIME_MAX;
        static const uint64_t VALID_UNTIL_TIME_NO_VALUE;
        static const double UNDERLYING_QTY_MIN;
        static const double UNDERLYING_QTY_MAX;
        static const int64_t UNDERLYING_QTY_NO_VALUE;
        static const double UNDERLYING_PRICE_STIP_VALUE_MIN;
        static const double UNDERLYING_PRICE_STIP_VALUE_MAX;
        static const int64_t UNDERLYING_PRICE_STIP_VALUE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MIN;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MAX;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FIRM_TRADE_ID_NO_VALUE[20];
        static const size_t FIRM_TRADE_ID_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        uint64_t mQuoteID;
        int64_t mOrderQty;
        uint64_t mValidUntilTime;
        int64_t mUnderlyingQty;
        int64_t mUnderlyingPriceStipValue;
        int32_t mMarketSegmentID;
        uint32_t mNegotiationID;
        int8_t mSide;
        int8_t mValueCheckTypeQuantity;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mFirmTradeID[20];
        char mFreeText1[12];
        char mFreeText5[132];
        char mPad7[7];

        // constructor
        eurexSRQSHitQuoteRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10704;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mValidUntilTime = VALID_UNTIL_TIME_NO_VALUE;
            mUnderlyingQty = UNDERLYING_QTY_NO_VALUE;
            mUnderlyingPriceStipValue = UNDERLYING_PRICE_STIP_VALUE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        uint64_t getValidUntilTime () const
        {
            return mValidUntilTime;
        }

        bool setValidUntilTime (uint64_t v)
        {
            mValidUntilTime = v;
            return ((VALID_UNTIL_TIME_MIN <= mValidUntilTime && mValidUntilTime <= VALID_UNTIL_TIME_MAX) || mValidUntilTime == VALID_UNTIL_TIME_NO_VALUE);
        }

        bool isValidUntilTimeValid () const
        {
            return (mValidUntilTime != VALID_UNTIL_TIME_NO_VALUE);
        }

        void resetValidUntilTime ()
        {
            mValidUntilTime = VALID_UNTIL_TIME_NO_VALUE;
        }

        double getUnderlyingQty () const
        {
            return mUnderlyingQty / 10000.0;
        }

        bool setUnderlyingQty (double v)
        {
            mUnderlyingQty = v * 10000.0;
            return ((UNDERLYING_QTY_MIN <= v && v <= UNDERLYING_QTY_MAX) || mUnderlyingQty == UNDERLYING_QTY_NO_VALUE);
        }

        bool isUnderlyingQtyValid () const
        {
            return (mUnderlyingQty != UNDERLYING_QTY_NO_VALUE);
        }

        void resetUnderlyingQty ()
        {
            mUnderlyingQty = UNDERLYING_QTY_NO_VALUE;
        }

        double getUnderlyingPriceStipValue () const
        {
            return mUnderlyingPriceStipValue / 100000000.0;
        }

        bool setUnderlyingPriceStipValue (double v)
        {
            mUnderlyingPriceStipValue = v * 100000000.0;
            return ((UNDERLYING_PRICE_STIP_VALUE_MIN <= v && v <= UNDERLYING_PRICE_STIP_VALUE_MAX) || mUnderlyingPriceStipValue == UNDERLYING_PRICE_STIP_VALUE_NO_VALUE);
        }

        bool isUnderlyingPriceStipValueValid () const
        {
            return (mUnderlyingPriceStipValue != UNDERLYING_PRICE_STIP_VALUE_NO_VALUE);
        }

        void resetUnderlyingPriceStipValue ()
        {
            mUnderlyingPriceStipValue = UNDERLYING_PRICE_STIP_VALUE_NO_VALUE;
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

        string getFirmTradeID () const
        {
            return string (mFirmTradeID, FIRM_TRADE_ID_MAX_LENGTH);
        }

        bool setFirmTradeID (const string& v)
        {
            memset (mFirmTradeID, '\0', sizeof (mFirmTradeID));
            size_t size = min ((size_t) v.size (), (size_t) FIRM_TRADE_ID_MAX_LENGTH);
            strncpy (mFirmTradeID, v.c_str (), size);
            return (v.size () <= FIRM_TRADE_ID_MAX_LENGTH);
        }

        bool isFirmTradeIDValid () const
        {
            return (memcmp (mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID)) != 0);
        }

        void resetFirmTradeID ()
        {
            memcpy (mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
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

        string getFreeText5 () const
        {
            return string (mFreeText5, FREE_TEXT5_MAX_LENGTH);
        }

        bool setFreeText5 (const string& v)
        {
            memset (mFreeText5, '\0', sizeof (mFreeText5));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT5_MAX_LENGTH);
            strncpy (mFreeText5, v.c_str (), size);
            return (v.size () <= FREE_TEXT5_MAX_LENGTH);
        }

        bool isFreeText5Valid () const
        {
            return (memcmp (mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5)) != 0);
        }

        void resetFreeText5 ()
        {
            memcpy (mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
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
                + sizeof (mQuoteID)
                + sizeof (mOrderQty)
                + sizeof (mValidUntilTime)
                + sizeof (mUnderlyingQty)
                + sizeof (mUnderlyingPriceStipValue)
                + sizeof (mMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mSide)
                + sizeof (mValueCheckTypeQuantity)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mFirmTradeID)
                + sizeof (mFreeText1)
                + sizeof (mFreeText5)
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
            state = eti::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValidUntilTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingPriceStipValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFirmTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
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
            state = eti::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValidUntilTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingPriceStipValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFirmTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
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
            sss << "SRQSHitQuoteRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[ValidUntilTime=" << getValidUntilTime () << "],"
                << "[UnderlyingQty=" << getUnderlyingQty () << "],"
                << "[UnderlyingPriceStipValue=" << getUnderlyingPriceStipValue () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[Side=" << getSide () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[FirmTradeID=" << getFirmTradeID () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const uint64_t eurexSRQSHitQuoteRequestPacket::QUOTE_ID_MIN = 0UL;
const uint64_t eurexSRQSHitQuoteRequestPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t eurexSRQSHitQuoteRequestPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexSRQSHitQuoteRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexSRQSHitQuoteRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSHitQuoteRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexSRQSHitQuoteRequestPacket::VALID_UNTIL_TIME_MIN = 0UL;
const uint64_t eurexSRQSHitQuoteRequestPacket::VALID_UNTIL_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexSRQSHitQuoteRequestPacket::VALID_UNTIL_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexSRQSHitQuoteRequestPacket::UNDERLYING_QTY_MIN = -922337203685477.5807;
const double eurexSRQSHitQuoteRequestPacket::UNDERLYING_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSHitQuoteRequestPacket::UNDERLYING_QTY_NO_VALUE = 0x8000000000000000;
const double eurexSRQSHitQuoteRequestPacket::UNDERLYING_PRICE_STIP_VALUE_MIN = -92233720368.54775807;
const double eurexSRQSHitQuoteRequestPacket::UNDERLYING_PRICE_STIP_VALUE_MAX = 92233720368.54775807;
const int64_t eurexSRQSHitQuoteRequestPacket::UNDERLYING_PRICE_STIP_VALUE_NO_VALUE = 0x8000000000000000;
const int32_t eurexSRQSHitQuoteRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexSRQSHitQuoteRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexSRQSHitQuoteRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexSRQSHitQuoteRequestPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexSRQSHitQuoteRequestPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexSRQSHitQuoteRequestPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexSRQSHitQuoteRequestPacket::SIDE_MIN = 1;
const int8_t eurexSRQSHitQuoteRequestPacket::SIDE_MAX = 2;
const int8_t eurexSRQSHitQuoteRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexSRQSHitQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t eurexSRQSHitQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t eurexSRQSHitQuoteRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const char eurexSRQSHitQuoteRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSHitQuoteRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSHitQuoteRequestPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSHitQuoteRequestPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSHitQuoteRequestPacket::FIRM_TRADE_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSHitQuoteRequestPacket::FIRM_TRADE_ID_MAX_LENGTH = 20;
const char eurexSRQSHitQuoteRequestPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSHitQuoteRequestPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexSRQSHitQuoteRequestPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSHitQuoteRequestPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char eurexSRQSHitQuoteRequestPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSHitQuoteRequestPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_SRQSHITQUOTEREQUEST_PACKET_H
