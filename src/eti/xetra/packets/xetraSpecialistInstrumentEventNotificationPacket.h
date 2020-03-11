/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_SPECIALISTINSTRUMENTEVENTNOTIFICATION_PACKET_H
#define XETRA_SPECIALISTINSTRUMENTEVENTNOTIFICATION_PACKET_H

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

class xetraSpecialistInstrumentEventNotificationPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t EVENT_TYPE_MIN;
        static const int8_t EVENT_TYPE_MAX;
        static const int8_t EVENT_TYPE_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        int64_t mSecurityID;
        uint64_t mTransactTime;
        int32_t mMarketSegmentID;
        int8_t mEventType;
        char mPad3[3];

        // constructor
        xetraSpecialistInstrumentEventNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10319;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mEventType = EVENT_TYPE_NO_VALUE;
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

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
            return true;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mTransactTime)
                + sizeof (mMarketSegmentID)
                + sizeof (mEventType)
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
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
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
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SpecialistInstrumentEventNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[EventType=" << getEventType () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int64_t xetraSpecialistInstrumentEventNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraSpecialistInstrumentEventNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraSpecialistInstrumentEventNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraSpecialistInstrumentEventNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraSpecialistInstrumentEventNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraSpecialistInstrumentEventNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraSpecialistInstrumentEventNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraSpecialistInstrumentEventNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraSpecialistInstrumentEventNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t xetraSpecialistInstrumentEventNotificationPacket::EVENT_TYPE_MIN = 8;
const int8_t xetraSpecialistInstrumentEventNotificationPacket::EVENT_TYPE_MAX = 113;
const int8_t xetraSpecialistInstrumentEventNotificationPacket::EVENT_TYPE_NO_VALUE = 0xFF;
const char xetraSpecialistInstrumentEventNotificationPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraSpecialistInstrumentEventNotificationPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_SPECIALISTINSTRUMENTEVENTNOTIFICATION_PACKET_H
