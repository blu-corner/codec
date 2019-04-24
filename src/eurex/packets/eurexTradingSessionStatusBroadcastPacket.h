/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_TRADINGSESSIONSTATUSBROADCAST_PACKET_H
#define EUREX_TRADINGSESSIONSTATUSBROADCAST_PACKET_H

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

class eurexTradingSessionStatusBroadcastPacket
{
    public:
        // no value constants
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t TRADE_DATE_MIN;
        static const int32_t TRADE_DATE_MAX;
        static const int32_t TRADE_DATE_NO_VALUE;
        static const int8_t TRAD_SES_EVENT_MIN;
        static const int8_t TRAD_SES_EVENT_MAX;
        static const int8_t TRAD_SES_EVENT_NO_VALUE;
        static const char REF_APPL_LAST_MSG_ID_NO_VALUE[16];
        static const size_t REF_APPL_LAST_MSG_ID_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderMECompPacket mRBCHeaderME;
        int32_t mMarketSegmentID;
        int32_t mTradeDate;
        int8_t mTradSesEvent;
        char mRefApplLastMsgID[16];
        char mPad7[7];

        // constructor
        eurexTradingSessionStatusBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10307;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTradeDate = TRADE_DATE_NO_VALUE;
            mTradSesEvent = TRAD_SES_EVENT_NO_VALUE;
            memcpy(mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID));
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

        const eurexRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const eurexRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
            return true;
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

        int32_t getTradeDate () const
        {
            return mTradeDate;
        }

        bool setTradeDate (int32_t v)
        {
            mTradeDate = v;
            return ((TRADE_DATE_MIN <= mTradeDate && mTradeDate <= TRADE_DATE_MAX) || mTradeDate == TRADE_DATE_NO_VALUE);
        }

        bool isTradeDateValid () const
        {
            return (mTradeDate != TRADE_DATE_NO_VALUE);
        }

        void resetTradeDate ()
        {
            mTradeDate = TRADE_DATE_NO_VALUE;
        }

        int8_t getTradSesEvent () const
        {
            return mTradSesEvent;
        }

        bool setTradSesEvent (int8_t v)
        {
            mTradSesEvent = v;
            return ((TRAD_SES_EVENT_MIN <= mTradSesEvent && mTradSesEvent <= TRAD_SES_EVENT_MAX) || mTradSesEvent == TRAD_SES_EVENT_NO_VALUE);
        }

        bool isTradSesEventValid () const
        {
            return (mTradSesEvent != TRAD_SES_EVENT_NO_VALUE);
        }

        void resetTradSesEvent ()
        {
            mTradSesEvent = TRAD_SES_EVENT_NO_VALUE;
        }

        string getRefApplLastMsgID () const
        {
            return string (mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_MAX_LENGTH);
        }

        bool setRefApplLastMsgID (const string& v)
        {
            memset (mRefApplLastMsgID, '\0', sizeof (mRefApplLastMsgID));
            size_t size = min ((size_t) v.size (), (size_t) REF_APPL_LAST_MSG_ID_MAX_LENGTH);
            strncpy (mRefApplLastMsgID, v.c_str (), size);
            return (v.size () <= REF_APPL_LAST_MSG_ID_MAX_LENGTH);
        }

        bool isRefApplLastMsgIDValid () const
        {
            return (memcmp (mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID)) != 0);
        }

        void resetRefApplLastMsgID ()
        {
            memcpy (mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID));
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mMarketSegmentID)
                + sizeof (mTradeDate)
                + sizeof (mTradSesEvent)
                + sizeof (mRefApplLastMsgID)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradSesEvent, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRefApplLastMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradSesEvent, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRefApplLastMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TradingSessionStatusBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TradeDate=" << getTradeDate () << "],"
                << "[TradSesEvent=" << getTradSesEvent () << "],"
                << "[RefApplLastMsgID=" << getRefApplLastMsgID () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int32_t eurexTradingSessionStatusBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexTradingSessionStatusBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexTradingSessionStatusBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexTradingSessionStatusBroadcastPacket::TRADE_DATE_MIN = 0;
const int32_t eurexTradingSessionStatusBroadcastPacket::TRADE_DATE_MAX = 99991231;
const int32_t eurexTradingSessionStatusBroadcastPacket::TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_MIN = 100;
const int8_t eurexTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_MAX = 105;
const int8_t eurexTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_NO_VALUE = 0xFF;
const char eurexTradingSessionStatusBroadcastPacket::REF_APPL_LAST_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradingSessionStatusBroadcastPacket::REF_APPL_LAST_MSG_ID_MAX_LENGTH = 16;
const char eurexTradingSessionStatusBroadcastPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTradingSessionStatusBroadcastPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_TRADINGSESSIONSTATUSBROADCAST_PACKET_H
