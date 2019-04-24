/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_INQUIREPRETRADERISKLIMITSREQUEST_PACKET_H
#define EUREX_INQUIREPRETRADERISKLIMITSREQUEST_PACKET_H

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

class eurexInquirePreTradeRiskLimitsRequestPacket
{
    public:
        // no value constants
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t RISK_LIMIT_PLATFORM_MIN;
        static const int8_t RISK_LIMIT_PLATFORM_MAX;
        static const int8_t RISK_LIMIT_PLATFORM_NO_VALUE;
        static const char PARTY_EXECUTING_UNIT_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_UNIT_MAX_LENGTH;
        static const char RISK_LIMIT_GROUP_NO_VALUE[3];
        static const size_t RISK_LIMIT_GROUP_MAX_LENGTH;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int32_t mMarketSegmentID;
        int8_t mRiskLimitPlatform;
        char mPartyExecutingUnit[5];
        char mRiskLimitGroup[3];
        char mPad3[3];

        // constructor
        eurexInquirePreTradeRiskLimitsRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10311;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mRiskLimitPlatform = RISK_LIMIT_PLATFORM_NO_VALUE;
            memcpy(mPartyExecutingUnit, PARTY_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyExecutingUnit));
            memcpy(mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup));
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
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

        int8_t getRiskLimitPlatform () const
        {
            return mRiskLimitPlatform;
        }

        bool setRiskLimitPlatform (int8_t v)
        {
            mRiskLimitPlatform = v;
            return ((RISK_LIMIT_PLATFORM_MIN <= mRiskLimitPlatform && mRiskLimitPlatform <= RISK_LIMIT_PLATFORM_MAX) || mRiskLimitPlatform == RISK_LIMIT_PLATFORM_NO_VALUE);
        }

        bool isRiskLimitPlatformValid () const
        {
            return (mRiskLimitPlatform != RISK_LIMIT_PLATFORM_NO_VALUE);
        }

        void resetRiskLimitPlatform ()
        {
            mRiskLimitPlatform = RISK_LIMIT_PLATFORM_NO_VALUE;
        }

        string getPartyExecutingUnit () const
        {
            return string (mPartyExecutingUnit, PARTY_EXECUTING_UNIT_MAX_LENGTH);
        }

        bool setPartyExecutingUnit (const string& v)
        {
            memset (mPartyExecutingUnit, '\0', sizeof (mPartyExecutingUnit));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_UNIT_MAX_LENGTH);
            strncpy (mPartyExecutingUnit, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_UNIT_MAX_LENGTH);
        }

        bool isPartyExecutingUnitValid () const
        {
            return (memcmp (mPartyExecutingUnit, PARTY_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyExecutingUnit)) != 0);
        }

        void resetPartyExecutingUnit ()
        {
            memcpy (mPartyExecutingUnit, PARTY_EXECUTING_UNIT_NO_VALUE, sizeof (mPartyExecutingUnit));
        }

        string getRiskLimitGroup () const
        {
            return string (mRiskLimitGroup, RISK_LIMIT_GROUP_MAX_LENGTH);
        }

        bool setRiskLimitGroup (const string& v)
        {
            memset (mRiskLimitGroup, '\0', sizeof (mRiskLimitGroup));
            size_t size = min ((size_t) v.size (), (size_t) RISK_LIMIT_GROUP_MAX_LENGTH);
            strncpy (mRiskLimitGroup, v.c_str (), size);
            return (v.size () <= RISK_LIMIT_GROUP_MAX_LENGTH);
        }

        bool isRiskLimitGroupValid () const
        {
            return (memcmp (mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup)) != 0);
        }

        void resetRiskLimitGroup ()
        {
            memcpy (mRiskLimitGroup, RISK_LIMIT_GROUP_NO_VALUE, sizeof (mRiskLimitGroup));
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
                + sizeof (mMarketSegmentID)
                + sizeof (mRiskLimitPlatform)
                + sizeof (mPartyExecutingUnit)
                + sizeof (mRiskLimitGroup)
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
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRiskLimitPlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRiskLimitGroup, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad3, buf, len, used);
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
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRiskLimitPlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRiskLimitGroup, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InquirePreTradeRiskLimitsRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[RiskLimitPlatform=" << getRiskLimitPlatform () << "],"
                << "[PartyExecutingUnit=" << getPartyExecutingUnit () << "],"
                << "[RiskLimitGroup=" << getRiskLimitGroup () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int32_t eurexInquirePreTradeRiskLimitsRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexInquirePreTradeRiskLimitsRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexInquirePreTradeRiskLimitsRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexInquirePreTradeRiskLimitsRequestPacket::RISK_LIMIT_PLATFORM_MIN = 0;
const int8_t eurexInquirePreTradeRiskLimitsRequestPacket::RISK_LIMIT_PLATFORM_MAX = 1;
const int8_t eurexInquirePreTradeRiskLimitsRequestPacket::RISK_LIMIT_PLATFORM_NO_VALUE = 0xFF;
const char eurexInquirePreTradeRiskLimitsRequestPacket::PARTY_EXECUTING_UNIT_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexInquirePreTradeRiskLimitsRequestPacket::PARTY_EXECUTING_UNIT_MAX_LENGTH = 5;
const char eurexInquirePreTradeRiskLimitsRequestPacket::RISK_LIMIT_GROUP_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexInquirePreTradeRiskLimitsRequestPacket::RISK_LIMIT_GROUP_MAX_LENGTH = 3;
const char eurexInquirePreTradeRiskLimitsRequestPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexInquirePreTradeRiskLimitsRequestPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // EUREX_INQUIREPRETRADERISKLIMITSREQUEST_PACKET_H
