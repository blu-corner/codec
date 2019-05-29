/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_BASKETDELETEBROADCAST_PACKET_H
#define EUREX_BASKETDELETEBROADCAST_PACKET_H

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

class eurexBasketDeleteBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t BASKET_EXEC_ID_MIN;
        static const uint32_t BASKET_EXEC_ID_MAX;
        static const uint32_t BASKET_EXEC_ID_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t DELETE_REASON_MIN;
        static const int8_t DELETE_REASON_MAX;
        static const int8_t DELETE_REASON_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const char BASKET_TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t BASKET_TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mBasketTrdMatchID;
        uint64_t mTransactTime;
        int32_t mMarketSegmentID;
        uint32_t mBasketExecID;
        int16_t mTrdType;
        int8_t mDeleteReason;
        char mMessageEventSource[1];
        char mBasketTradeReportText[20];
        char mTradeReportID[20];
        char mBasketSideTradeReportID[20];

        // constructor
        eurexBasketDeleteBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10626;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mDeleteReason = DELETE_REASON_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            memcpy(mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
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

        int8_t getDeleteReason () const
        {
            return mDeleteReason;
        }

        bool setDeleteReason (int8_t v)
        {
            mDeleteReason = v;
            return ((DELETE_REASON_MIN <= mDeleteReason && mDeleteReason <= DELETE_REASON_MAX) || mDeleteReason == DELETE_REASON_NO_VALUE);
        }

        bool isDeleteReasonValid () const
        {
            return (mDeleteReason != DELETE_REASON_NO_VALUE);
        }

        void resetDeleteReason ()
        {
            mDeleteReason = DELETE_REASON_NO_VALUE;
        }

        string getMessageEventSource () const
        {
            return string (mMessageEventSource, MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool setMessageEventSource (const string& v)
        {
            memset (mMessageEventSource, '\0', sizeof (mMessageEventSource));
            size_t size = min ((size_t) v.size (), (size_t) MESSAGE_EVENT_SOURCE_MAX_LENGTH);
            strncpy (mMessageEventSource, v.c_str (), size);
            return (v.size () <= MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool isMessageEventSourceValid () const
        {
            return (memcmp (mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource)) != 0);
        }

        void resetMessageEventSource ()
        {
            memcpy (mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
        }

        string getBasketTradeReportText () const
        {
            return string (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setBasketTradeReportText (const string& v)
        {
            memset (mBasketTradeReportText, '\0', sizeof (mBasketTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mBasketTradeReportText, v.c_str (), size);
            return (v.size () <= BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isBasketTradeReportTextValid () const
        {
            return (memcmp (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText)) != 0);
        }

        void resetBasketTradeReportText ()
        {
            memcpy (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mBasketTrdMatchID)
                + sizeof (mTransactTime)
                + sizeof (mMarketSegmentID)
                + sizeof (mBasketExecID)
                + sizeof (mTrdType)
                + sizeof (mDeleteReason)
                + sizeof (mMessageEventSource)
                + sizeof (mBasketTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mBasketSideTradeReportID);
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
            state = eti::serialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDeleteReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketSideTradeReportID, buf, len, used);
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
            state = eti::deserialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDeleteReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketDeleteBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[DeleteReason=" << getDeleteReason () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[BasketTradeReportText=" << getBasketTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[BasketSideTradeReportID=" << getBasketSideTradeReportID () << "]";
            return sss.str();
        }
};

const uint64_t eurexBasketDeleteBroadcastPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexBasketDeleteBroadcastPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexBasketDeleteBroadcastPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexBasketDeleteBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexBasketDeleteBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexBasketDeleteBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexBasketDeleteBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexBasketDeleteBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexBasketDeleteBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexBasketDeleteBroadcastPacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexBasketDeleteBroadcastPacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexBasketDeleteBroadcastPacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexBasketDeleteBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t eurexBasketDeleteBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexBasketDeleteBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexBasketDeleteBroadcastPacket::DELETE_REASON_MIN = 100;
const int8_t eurexBasketDeleteBroadcastPacket::DELETE_REASON_MAX = 107;
const int8_t eurexBasketDeleteBroadcastPacket::DELETE_REASON_NO_VALUE = 0xFF;
const char eurexBasketDeleteBroadcastPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t eurexBasketDeleteBroadcastPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const char eurexBasketDeleteBroadcastPacket::BASKET_TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketDeleteBroadcastPacket::BASKET_TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexBasketDeleteBroadcastPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketDeleteBroadcastPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexBasketDeleteBroadcastPacket::BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketDeleteBroadcastPacket::BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH = 20;


} // namespace neueda

#endif // EUREX_BASKETDELETEBROADCAST_PACKET_H
