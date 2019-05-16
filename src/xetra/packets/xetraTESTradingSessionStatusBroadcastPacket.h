/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_TESTRADINGSESSIONSTATUSBROADCAST_PACKET_H
#define XETRA_TESTRADINGSESSIONSTATUSBROADCAST_PACKET_H

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

class xetraTESTradingSessionStatusBroadcastPacket
{
    public:
        // no value constants
        static const int32_t TRADE_DATE_MIN;
        static const int32_t TRADE_DATE_MAX;
        static const int32_t TRADE_DATE_NO_VALUE;
        static const int8_t TRAD_SES_EVENT_MIN;
        static const int8_t TRAD_SES_EVENT_MAX;
        static const int8_t TRAD_SES_EVENT_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        int32_t mTradeDate;
        int8_t mTradSesEvent;
        char mPad3[3];

        // constructor
        xetraTESTradingSessionStatusBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10615;
            mTradeDate = TRADE_DATE_NO_VALUE;
            mTradSesEvent = TRAD_SES_EVENT_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const xetraRBCHeaderCompPacket& v)
        {
            mRBCHeader = v;
            return true;
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

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTradeDate)
                + sizeof (mTradSesEvent)
                + sizeof (mPad3);
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
            state = xetra::serialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradSesEvent, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
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
            state = xetra::deserialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradSesEvent, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TESTradingSessionStatusBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TradeDate=" << getTradeDate () << "],"
                << "[TradSesEvent=" << getTradSesEvent () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int32_t xetraTESTradingSessionStatusBroadcastPacket::TRADE_DATE_MIN = 0;
const int32_t xetraTESTradingSessionStatusBroadcastPacket::TRADE_DATE_MAX = 99991231;
const int32_t xetraTESTradingSessionStatusBroadcastPacket::TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraTESTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_MIN = 100;
const int8_t xetraTESTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_MAX = 105;
const int8_t xetraTESTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_NO_VALUE = 0xFF;
const char xetraTESTradingSessionStatusBroadcastPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTESTradingSessionStatusBroadcastPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_TESTRADINGSESSIONSTATUSBROADCAST_PACKET_H
