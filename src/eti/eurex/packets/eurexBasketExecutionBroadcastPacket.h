/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_BASKETEXECUTIONBROADCAST_PACKET_H
#define EUREX_BASKETEXECUTIONBROADCAST_PACKET_H

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

class eurexBasketExecutionBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
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
        static const int8_t NO_INSTRMT_MATCH_SIDES_MIN;
        static const int8_t NO_INSTRMT_MATCH_SIDES_MAX;
        static const int8_t NO_INSTRMT_MATCH_SIDES_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const char BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;
        static const size_t BASKET_EXEC_GRP_MIN;
        static const size_t BASKET_EXEC_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mBasketTrdMatchID;
        uint64_t mTransactTime;
        uint32_t mBasketExecID;
        int32_t mMarketSegmentID;
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mNoInstrmtMatchSides;
        char mMessageEventSource[1];
        char mBasketSideTradeReportID[20];
        char mPad7[7];
        vector<eurexBasketExecGrpCompPacket> mBasketExecGrp;

        // constructor
        eurexBasketExecutionBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10628;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mNoInstrmtMatchSides = NO_INSTRMT_MATCH_SIDES_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            memcpy(mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        int8_t getNoInstrmtMatchSides () const
        {
            return mNoInstrmtMatchSides;
        }

        bool setNoInstrmtMatchSides (int8_t v)
        {
            mNoInstrmtMatchSides = v;
            return ((NO_INSTRMT_MATCH_SIDES_MIN <= mNoInstrmtMatchSides && mNoInstrmtMatchSides <= NO_INSTRMT_MATCH_SIDES_MAX) || mNoInstrmtMatchSides == NO_INSTRMT_MATCH_SIDES_NO_VALUE);
        }

        bool isNoInstrmtMatchSidesValid () const
        {
            return (mNoInstrmtMatchSides != NO_INSTRMT_MATCH_SIDES_NO_VALUE);
        }

        void resetNoInstrmtMatchSides ()
        {
            mNoInstrmtMatchSides = NO_INSTRMT_MATCH_SIDES_NO_VALUE;
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

        const vector<eurexBasketExecGrpCompPacket>& getBasketExecGrp () const
        {
            return mBasketExecGrp;
        }

        bool setBasketExecGrp (const vector<eurexBasketExecGrpCompPacket>& v)
        {
            mBasketExecGrp = v;
            mNoInstrmtMatchSides = v.size ();
            return (BASKET_EXEC_GRP_MIN <= v.size () && v.size () <= BASKET_EXEC_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mBasketTrdMatchID)
                + sizeof (mTransactTime)
                + sizeof (mBasketExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mNoInstrmtMatchSides)
                + sizeof (mMessageEventSource)
                + sizeof (mBasketSideTradeReportID)
                + sizeof (mPad7)
                + eti::getRawSize (mBasketExecGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoInstrmtMatchSides = mBasketExecGrp.size ();
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
            state = eti::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoInstrmtMatchSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mBasketExecGrp.size (); i++)
            {
                state = mBasketExecGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = eti::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoInstrmtMatchSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mBasketExecGrp.resize (mNoInstrmtMatchSides);
            for (vector<eurexBasketExecGrpCompPacket>::iterator it = mBasketExecGrp.begin (); it != mBasketExecGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketExecutionBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[NoInstrmtMatchSides=" << getNoInstrmtMatchSides () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[BasketSideTradeReportID=" << getBasketSideTradeReportID () << "],"
                << "[Pad7=" << getPad7 () << "],"
                << "[BasketExecGrp=" << eti::toString (getBasketExecGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexBasketExecutionBroadcastPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexBasketExecutionBroadcastPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexBasketExecutionBroadcastPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexBasketExecutionBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexBasketExecutionBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexBasketExecutionBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexBasketExecutionBroadcastPacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexBasketExecutionBroadcastPacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexBasketExecutionBroadcastPacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexBasketExecutionBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexBasketExecutionBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexBasketExecutionBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexBasketExecutionBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t eurexBasketExecutionBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexBasketExecutionBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexBasketExecutionBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexBasketExecutionBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexBasketExecutionBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexBasketExecutionBroadcastPacket::NO_INSTRMT_MATCH_SIDES_MIN = 1;
const int8_t eurexBasketExecutionBroadcastPacket::NO_INSTRMT_MATCH_SIDES_MAX = 99;
const int8_t eurexBasketExecutionBroadcastPacket::NO_INSTRMT_MATCH_SIDES_NO_VALUE = 0xFF;
const char eurexBasketExecutionBroadcastPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t eurexBasketExecutionBroadcastPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const char eurexBasketExecutionBroadcastPacket::BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketExecutionBroadcastPacket::BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexBasketExecutionBroadcastPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketExecutionBroadcastPacket::PAD7_MAX_LENGTH = 7;
const size_t eurexBasketExecutionBroadcastPacket::BASKET_EXEC_GRP_MIN = 1;
const size_t eurexBasketExecutionBroadcastPacket::BASKET_EXEC_GRP_MAX = 99;


} // namespace neueda

#endif // EUREX_BASKETEXECUTIONBROADCAST_PACKET_H
