/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_TMTRADINGSESSIONSTATUSBROADCAST_PACKET_H
#define XETRA_TMTRADINGSESSIONSTATUSBROADCAST_PACKET_H

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

class xetraTMTradingSessionStatusBroadcastPacket
{
    public:
        // no value constants
        static const int8_t TRAD_SES_EVENT_MIN;
        static const int8_t TRAD_SES_EVENT_MAX;
        static const int8_t TRAD_SES_EVENT_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        int8_t mTradSesEvent;
        char mPad7[7];

        // constructor
        xetraTMTradingSessionStatusBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10501;
            mTradSesEvent = TRAD_SES_EVENT_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad7[i] = v[i];
            memset (&mPad7[size], '\0', PAD7_MAX_LENGTH-size);
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
                + mRBCHeader.getRawSize()
                + sizeof (mTradSesEvent)
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
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradSesEvent, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad7, buf, len, used);
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
            state = xetra::deserialize (mTradSesEvent, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TMTradingSessionStatusBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TradSesEvent=" << getTradSesEvent () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int8_t xetraTMTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_MIN = 100;
const int8_t xetraTMTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_MAX = 105;
const int8_t xetraTMTradingSessionStatusBroadcastPacket::TRAD_SES_EVENT_NO_VALUE = 0xFF;
const char xetraTMTradingSessionStatusBroadcastPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTMTradingSessionStatusBroadcastPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_TMTRADINGSESSIONSTATUSBROADCAST_PACKET_H
