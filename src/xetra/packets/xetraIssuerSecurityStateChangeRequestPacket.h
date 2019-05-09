/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_ISSUERSECURITYSTATECHANGEREQUEST_PACKET_H
#define XETRA_ISSUERSECURITYSTATECHANGEREQUEST_PACKET_H

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

class xetraIssuerSecurityStateChangeRequestPacket
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
        static const int8_t NO_EVENTS_MIN;
        static const int8_t NO_EVENTS_MAX;
        static const int8_t NO_EVENTS_NO_VALUE;
        static const int8_t SECURITY_STATUS_MIN;
        static const int8_t SECURITY_STATUS_MAX;
        static const int8_t SECURITY_STATUS_NO_VALUE;
        static const int8_t SOLD_OUT_INDICATOR_MIN;
        static const int8_t SOLD_OUT_INDICATOR_MAX;
        static const int8_t SOLD_OUT_INDICATOR_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t SECURITY_STATUS_EVENT_GRP_MIN;
        static const size_t SECURITY_STATUS_EVENT_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        uint64_t mTransactTime;
        int32_t mMarketSegmentID;
        int8_t mNoEvents;
        int8_t mSecurityStatus;
        int8_t mSoldOutIndicator;
        char mPad1[1];
        vector<xetraSecurityStatusEventGrpCompPacket> mSecurityStatusEventGrp;

        // constructor
        xetraIssuerSecurityStateChangeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10314;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoEvents = NO_EVENTS_NO_VALUE;
            mSecurityStatus = SECURITY_STATUS_NO_VALUE;
            mSoldOutIndicator = SOLD_OUT_INDICATOR_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        int8_t getNoEvents () const
        {
            return mNoEvents;
        }

        bool setNoEvents (int8_t v)
        {
            mNoEvents = v;
            return ((NO_EVENTS_MIN <= mNoEvents && mNoEvents <= NO_EVENTS_MAX) || mNoEvents == NO_EVENTS_NO_VALUE);
        }

        bool isNoEventsValid () const
        {
            return (mNoEvents != NO_EVENTS_NO_VALUE);
        }

        void resetNoEvents ()
        {
            mNoEvents = NO_EVENTS_NO_VALUE;
        }

        int8_t getSecurityStatus () const
        {
            return mSecurityStatus;
        }

        bool setSecurityStatus (int8_t v)
        {
            mSecurityStatus = v;
            return ((SECURITY_STATUS_MIN <= mSecurityStatus && mSecurityStatus <= SECURITY_STATUS_MAX) || mSecurityStatus == SECURITY_STATUS_NO_VALUE);
        }

        bool isSecurityStatusValid () const
        {
            return (mSecurityStatus != SECURITY_STATUS_NO_VALUE);
        }

        void resetSecurityStatus ()
        {
            mSecurityStatus = SECURITY_STATUS_NO_VALUE;
        }

        int8_t getSoldOutIndicator () const
        {
            return mSoldOutIndicator;
        }

        bool setSoldOutIndicator (int8_t v)
        {
            mSoldOutIndicator = v;
            return ((SOLD_OUT_INDICATOR_MIN <= mSoldOutIndicator && mSoldOutIndicator <= SOLD_OUT_INDICATOR_MAX) || mSoldOutIndicator == SOLD_OUT_INDICATOR_NO_VALUE);
        }

        bool isSoldOutIndicatorValid () const
        {
            return (mSoldOutIndicator != SOLD_OUT_INDICATOR_NO_VALUE);
        }

        void resetSoldOutIndicator ()
        {
            mSoldOutIndicator = SOLD_OUT_INDICATOR_NO_VALUE;
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

        const vector<xetraSecurityStatusEventGrpCompPacket>& getSecurityStatusEventGrp () const
        {
            return mSecurityStatusEventGrp;
        }

        bool setSecurityStatusEventGrp (const vector<xetraSecurityStatusEventGrpCompPacket>& v)
        {
            mSecurityStatusEventGrp = v;
            mNoEvents = v.size ();
            return (SECURITY_STATUS_EVENT_GRP_MIN <= v.size () && v.size () <= SECURITY_STATUS_EVENT_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mTransactTime)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoEvents)
                + sizeof (mSecurityStatus)
                + sizeof (mSoldOutIndicator)
                + sizeof (mPad1)
                + xetra::getRawSize (mSecurityStatusEventGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoEvents = mSecurityStatusEventGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSoldOutIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSecurityStatusEventGrp.size (); i++)
            {
                state = mSecurityStatusEventGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSoldOutIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSecurityStatusEventGrp.resize (mNoEvents);
            for (vector<xetraSecurityStatusEventGrpCompPacket>::iterator it = mSecurityStatusEventGrp.begin (); it != mSecurityStatusEventGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "IssuerSecurityStateChangeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoEvents=" << getNoEvents () << "],"
                << "[SecurityStatus=" << getSecurityStatus () << "],"
                << "[SoldOutIndicator=" << getSoldOutIndicator () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[SecurityStatusEventGrp=" << xetra::toString (getSecurityStatusEventGrp ()) << "]";
            return sss.str();
        }
};

const int64_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraIssuerSecurityStateChangeRequestPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraIssuerSecurityStateChangeRequestPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraIssuerSecurityStateChangeRequestPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraIssuerSecurityStateChangeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraIssuerSecurityStateChangeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraIssuerSecurityStateChangeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::NO_EVENTS_MIN = 0;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::NO_EVENTS_MAX = 2;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::NO_EVENTS_NO_VALUE = 0xFF;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_STATUS_MIN = 6;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_STATUS_MAX = 12;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_STATUS_NO_VALUE = 0xFF;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::SOLD_OUT_INDICATOR_MIN = 0;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::SOLD_OUT_INDICATOR_MAX = 1;
const int8_t xetraIssuerSecurityStateChangeRequestPacket::SOLD_OUT_INDICATOR_NO_VALUE = 0xFF;
const char xetraIssuerSecurityStateChangeRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraIssuerSecurityStateChangeRequestPacket::PAD1_MAX_LENGTH = 1;
const size_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_STATUS_EVENT_GRP_MIN = 0;
const size_t xetraIssuerSecurityStateChangeRequestPacket::SECURITY_STATUS_EVENT_GRP_MAX = 2;


} // namespace neueda

#endif // XETRA_ISSUERSECURITYSTATECHANGEREQUEST_PACKET_H
