/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_SECURITYSTATUSEVENTGRPCOMP_PACKET_H
#define XETRA_SECURITYSTATUSEVENTGRPCOMP_PACKET_H

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

class xetraSecurityStatusEventGrpCompPacket
{
    public:
        // no value constants
        static const double EVENT_PX_MIN;
        static const double EVENT_PX_MAX;
        static const int64_t EVENT_PX_NO_VALUE;
        static const int32_t EVENT_DATE_MIN;
        static const int32_t EVENT_DATE_MAX;
        static const int32_t EVENT_DATE_NO_VALUE;
        static const int8_t EVENT_TYPE_MIN;
        static const int8_t EVENT_TYPE_MAX;
        static const int8_t EVENT_TYPE_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        int64_t mEventPx;
        int32_t mEventDate;
        int8_t mEventType;
        char mPad3[3];

        // constructor
        xetraSecurityStatusEventGrpCompPacket ()
        {
            mEventPx = EVENT_PX_NO_VALUE;
            mEventDate = EVENT_DATE_NO_VALUE;
            mEventType = EVENT_TYPE_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        double getEventPx () const
        {
            return mEventPx / 100000000.0;
        }

        bool setEventPx (double v)
        {
            mEventPx = v * 100000000.0;
            return ((EVENT_PX_MIN <= v && v <= EVENT_PX_MAX) || mEventPx == EVENT_PX_NO_VALUE);
        }

        bool isEventPxValid () const
        {
            return (mEventPx != EVENT_PX_NO_VALUE);
        }

        void resetEventPx ()
        {
            mEventPx = EVENT_PX_NO_VALUE;
        }

        int32_t getEventDate () const
        {
            return mEventDate;
        }

        bool setEventDate (int32_t v)
        {
            mEventDate = v;
            return ((EVENT_DATE_MIN <= mEventDate && mEventDate <= EVENT_DATE_MAX) || mEventDate == EVENT_DATE_NO_VALUE);
        }

        bool isEventDateValid () const
        {
            return (mEventDate != EVENT_DATE_NO_VALUE);
        }

        void resetEventDate ()
        {
            mEventDate = EVENT_DATE_NO_VALUE;
        }

        int8_t getEventType () const
        {
            return mEventType;
        }

        bool setEventType (int8_t v)
        {
            mEventType = v;
            return ((EVENT_TYPE_MIN <= mEventType && mEventType <= EVENT_TYPE_MAX) || mEventType == EVENT_TYPE_NO_VALUE);
        }

        bool isEventTypeValid () const
        {
            return (mEventType != EVENT_TYPE_NO_VALUE);
        }

        void resetEventType ()
        {
            mEventType = EVENT_TYPE_NO_VALUE;
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
            size_t result = sizeof (mEventPx)
                + sizeof (mEventDate)
                + sizeof (mEventType)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mEventPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mEventDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mEventPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mEventDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SecurityStatusEventGrpComp::"
                << "[EventPx=" << getEventPx () << "],"
                << "[EventDate=" << getEventDate () << "],"
                << "[EventType=" << getEventType () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const double xetraSecurityStatusEventGrpCompPacket::EVENT_PX_MIN = -92233720368.54775807;
const double xetraSecurityStatusEventGrpCompPacket::EVENT_PX_MAX = 92233720368.54775807;
const int64_t xetraSecurityStatusEventGrpCompPacket::EVENT_PX_NO_VALUE = 0x8000000000000000;
const int32_t xetraSecurityStatusEventGrpCompPacket::EVENT_DATE_MIN = 0;
const int32_t xetraSecurityStatusEventGrpCompPacket::EVENT_DATE_MAX = 99991231;
const int32_t xetraSecurityStatusEventGrpCompPacket::EVENT_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraSecurityStatusEventGrpCompPacket::EVENT_TYPE_MIN = 8;
const int8_t xetraSecurityStatusEventGrpCompPacket::EVENT_TYPE_MAX = 100;
const int8_t xetraSecurityStatusEventGrpCompPacket::EVENT_TYPE_NO_VALUE = 0xFF;
const char xetraSecurityStatusEventGrpCompPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraSecurityStatusEventGrpCompPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_SECURITYSTATUSEVENTGRPCOMP_PACKET_H
