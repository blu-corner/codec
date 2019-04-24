/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_DELETEBASKETTRADEREQUEST_PACKET_H
#define EUREX_DELETEBASKETTRADEREQUEST_PACKET_H

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

class eurexDeleteBasketTradeRequestPacket
{
    public:
        // no value constants
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
        static const uint32_t BASKET_EXEC_ID_MIN;
        static const uint32_t BASKET_EXEC_ID_MAX;
        static const uint32_t BASKET_EXEC_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        uint64_t mBasketTrdMatchID;
        uint32_t mBasketExecID;
        int32_t mMarketSegmentID;
        int16_t mTrdType;
        int8_t mTradeReportType;
        char mTradeReportID[20];
        char mPad1[1];

        // constructor
        eurexDeleteBasketTradeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10622;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        uint32_t getBasketExecID () const
        {
            return mBasketExecID;
        }

        bool setBasketExecID (uint32_t v)
        {
            mBasketExecID = v;
            return ((BASKET_EXEC_ID_MIN <= mBasketExecID && mBasketExecID <= BASKET_EXEC_ID_MAX) || mBasketExecID == BASKET_EXEC_ID_NO_VALUE);
        }

        bool isBasketExecIDValid () const
        {
            return (mBasketExecID != BASKET_EXEC_ID_NO_VALUE);
        }

        void resetBasketExecID ()
        {
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
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

        string getTradeReportID () const
        {
            return string (mTradeReportID, TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setTradeReportID (const string& v)
        {
            memset (mTradeReportID, '\0', sizeof (mTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mTradeReportID, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isTradeReportIDValid () const
        {
            return (memcmp (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID)) != 0);
        }

        void resetTradeReportID ()
        {
            memcpy (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mBasketTrdMatchID)
                + sizeof (mBasketExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mTradeReportID)
                + sizeof (mPad1);
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
            state = eurex::serialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad1, buf, len, used);
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
            state = eurex::deserialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "DeleteBasketTradeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const uint64_t eurexDeleteBasketTradeRequestPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexDeleteBasketTradeRequestPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteBasketTradeRequestPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexDeleteBasketTradeRequestPacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexDeleteBasketTradeRequestPacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexDeleteBasketTradeRequestPacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexDeleteBasketTradeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexDeleteBasketTradeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexDeleteBasketTradeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexDeleteBasketTradeRequestPacket::TRD_TYPE_MIN = 1;
const int16_t eurexDeleteBasketTradeRequestPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexDeleteBasketTradeRequestPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexDeleteBasketTradeRequestPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexDeleteBasketTradeRequestPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexDeleteBasketTradeRequestPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const char eurexDeleteBasketTradeRequestPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexDeleteBasketTradeRequestPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexDeleteBasketTradeRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexDeleteBasketTradeRequestPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // EUREX_DELETEBASKETTRADEREQUEST_PACKET_H
