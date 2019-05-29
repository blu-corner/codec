/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_INSTRUMENTEVENTGRPCOMP_PACKET_H
#define EUREX_INSTRUMENTEVENTGRPCOMP_PACKET_H

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

class eurexInstrumentEventGrpCompPacket
{
    public:
        // no value constants
        static const int32_t EVENT_DATE_MIN;
        static const int32_t EVENT_DATE_MAX;
        static const int32_t EVENT_DATE_NO_VALUE;
        static const int8_t EVENT_TYPE_MIN;
        static const int8_t EVENT_TYPE_MAX;
        static const int8_t EVENT_TYPE_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        int32_t mEventDate;
        int8_t mEventType;
        char mPad3[3];

        // constructor
        eurexInstrumentEventGrpCompPacket ()
        {
            mEventDate = EVENT_DATE_NO_VALUE;
            mEventType = EVENT_TYPE_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
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
            size_t result = sizeof (mEventDate)
                + sizeof (mEventType)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mEventDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mEventDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InstrumentEventGrpComp::"
                << "[EventDate=" << getEventDate () << "],"
                << "[EventType=" << getEventType () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int32_t eurexInstrumentEventGrpCompPacket::EVENT_DATE_MIN = 0;
const int32_t eurexInstrumentEventGrpCompPacket::EVENT_DATE_MAX = 99991231;
const int32_t eurexInstrumentEventGrpCompPacket::EVENT_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexInstrumentEventGrpCompPacket::EVENT_TYPE_MIN = 8;
const int8_t eurexInstrumentEventGrpCompPacket::EVENT_TYPE_MAX = 100;
const int8_t eurexInstrumentEventGrpCompPacket::EVENT_TYPE_NO_VALUE = 0xFF;
const char eurexInstrumentEventGrpCompPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexInstrumentEventGrpCompPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // EUREX_INSTRUMENTEVENTGRPCOMP_PACKET_H
