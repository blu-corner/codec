/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_SPECIALISTSECURITYSTATECHANGEREQUEST_PACKET_H
#define XETRA_SPECIALISTSECURITYSTATECHANGEREQUEST_PACKET_H

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

class xetraSpecialistSecurityStateChangeRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t EVENT_TYPE_MIN;
        static const int8_t EVENT_TYPE_MAX;
        static const int8_t EVENT_TYPE_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int32_t mMarketSegmentID;
        int8_t mEventType;
        char mPad3[3];

        // constructor
        xetraSpecialistSecurityStateChangeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10317;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mEventType = EVENT_TYPE_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mMarketSegmentID)
                + sizeof (mEventType)
                + sizeof (mPad3);
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
            state = eti::serialize (mSecurityID, buf, len, used);
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
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SpecialistSecurityStateChangeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[EventType=" << getEventType () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int64_t xetraSpecialistSecurityStateChangeRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraSpecialistSecurityStateChangeRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraSpecialistSecurityStateChangeRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const int32_t xetraSpecialistSecurityStateChangeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraSpecialistSecurityStateChangeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraSpecialistSecurityStateChangeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t xetraSpecialistSecurityStateChangeRequestPacket::EVENT_TYPE_MIN = 8;
const int8_t xetraSpecialistSecurityStateChangeRequestPacket::EVENT_TYPE_MAX = 113;
const int8_t xetraSpecialistSecurityStateChangeRequestPacket::EVENT_TYPE_NO_VALUE = 0xFF;
const char xetraSpecialistSecurityStateChangeRequestPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraSpecialistSecurityStateChangeRequestPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_SPECIALISTSECURITYSTATECHANGEREQUEST_PACKET_H
