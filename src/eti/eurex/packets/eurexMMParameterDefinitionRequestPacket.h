/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_MMPARAMETERDEFINITIONREQUEST_PACKET_H
#define EUREX_MMPARAMETERDEFINITIONREQUEST_PACKET_H

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

class eurexMMParameterDefinitionRequestPacket
{
    public:
        // no value constants
        static const int64_t EXPOSURE_DURATION_MIN;
        static const int64_t EXPOSURE_DURATION_MAX;
        static const int64_t EXPOSURE_DURATION_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const double DELTA_MIN;
        static const double DELTA_MAX;
        static const int64_t DELTA_NO_VALUE;
        static const double VEGA_MIN;
        static const double VEGA_MAX;
        static const int64_t VEGA_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        static const int32_t PCT_COUNT_MIN;
        static const int32_t PCT_COUNT_MAX;
        static const int32_t PCT_COUNT_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mExposureDuration;
        int64_t mCumQty;
        int64_t mDelta;
        int64_t mVega;
        int32_t mMarketSegmentID;
        uint32_t mTargetPartyIDSessionID;
        int32_t mPctCount;
        char mPad4[4];

        // constructor
        eurexMMParameterDefinitionRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10303;
            mExposureDuration = EXPOSURE_DURATION_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mDelta = DELTA_NO_VALUE;
            mVega = VEGA_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
            mPctCount = PCT_COUNT_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        int64_t getExposureDuration () const
        {
            return mExposureDuration;
        }

        bool setExposureDuration (int64_t v)
        {
            mExposureDuration = v;
            return ((EXPOSURE_DURATION_MIN <= mExposureDuration && mExposureDuration <= EXPOSURE_DURATION_MAX) || mExposureDuration == EXPOSURE_DURATION_NO_VALUE);
        }

        bool isExposureDurationValid () const
        {
            return (mExposureDuration != EXPOSURE_DURATION_NO_VALUE);
        }

        void resetExposureDuration ()
        {
            mExposureDuration = EXPOSURE_DURATION_NO_VALUE;
        }

        double getCumQty () const
        {
            return mCumQty / 10000.0;
        }

        bool setCumQty (double v)
        {
            mCumQty = v * 10000.0;
            return ((CUM_QTY_MIN <= v && v <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
        }

        double getDelta () const
        {
            return mDelta / 10000.0;
        }

        bool setDelta (double v)
        {
            mDelta = v * 10000.0;
            return ((DELTA_MIN <= v && v <= DELTA_MAX) || mDelta == DELTA_NO_VALUE);
        }

        bool isDeltaValid () const
        {
            return (mDelta != DELTA_NO_VALUE);
        }

        void resetDelta ()
        {
            mDelta = DELTA_NO_VALUE;
        }

        double getVega () const
        {
            return mVega / 10000.0;
        }

        bool setVega (double v)
        {
            mVega = v * 10000.0;
            return ((VEGA_MIN <= v && v <= VEGA_MAX) || mVega == VEGA_NO_VALUE);
        }

        bool isVegaValid () const
        {
            return (mVega != VEGA_NO_VALUE);
        }

        void resetVega ()
        {
            mVega = VEGA_NO_VALUE;
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

        uint32_t getTargetPartyIDSessionID () const
        {
            return mTargetPartyIDSessionID;
        }

        bool setTargetPartyIDSessionID (uint32_t v)
        {
            mTargetPartyIDSessionID = v;
            return ((TARGET_PARTY_IDSESSION_ID_MIN <= mTargetPartyIDSessionID && mTargetPartyIDSessionID <= TARGET_PARTY_IDSESSION_ID_MAX) || mTargetPartyIDSessionID == TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isTargetPartyIDSessionIDValid () const
        {
            return (mTargetPartyIDSessionID != TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetTargetPartyIDSessionID ()
        {
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }

        int32_t getPctCount () const
        {
            return mPctCount;
        }

        bool setPctCount (int32_t v)
        {
            mPctCount = v;
            return ((PCT_COUNT_MIN <= mPctCount && mPctCount <= PCT_COUNT_MAX) || mPctCount == PCT_COUNT_NO_VALUE);
        }

        bool isPctCountValid () const
        {
            return (mPctCount != PCT_COUNT_NO_VALUE);
        }

        void resetPctCount ()
        {
            mPctCount = PCT_COUNT_NO_VALUE;
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mExposureDuration)
                + sizeof (mCumQty)
                + sizeof (mDelta)
                + sizeof (mVega)
                + sizeof (mMarketSegmentID)
                + sizeof (mTargetPartyIDSessionID)
                + sizeof (mPctCount)
                + sizeof (mPad4);
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
            state = eti::serialize (mExposureDuration, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDelta, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVega, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPctCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
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
            state = eti::deserialize (mExposureDuration, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDelta, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVega, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPctCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "MMParameterDefinitionRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[ExposureDuration=" << getExposureDuration () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[Delta=" << getDelta () << "],"
                << "[Vega=" << getVega () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "],"
                << "[PctCount=" << getPctCount () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const int64_t eurexMMParameterDefinitionRequestPacket::EXPOSURE_DURATION_MIN = -9223372036854775807L;
const int64_t eurexMMParameterDefinitionRequestPacket::EXPOSURE_DURATION_MAX = 9223372036854775807L;
const int64_t eurexMMParameterDefinitionRequestPacket::EXPOSURE_DURATION_NO_VALUE = 0x8000000000000000;
const double eurexMMParameterDefinitionRequestPacket::CUM_QTY_MIN = -922337203685477.5807;
const double eurexMMParameterDefinitionRequestPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t eurexMMParameterDefinitionRequestPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double eurexMMParameterDefinitionRequestPacket::DELTA_MIN = -922337203685477.5807;
const double eurexMMParameterDefinitionRequestPacket::DELTA_MAX = 922337203685477.5807;
const int64_t eurexMMParameterDefinitionRequestPacket::DELTA_NO_VALUE = 0x8000000000000000;
const double eurexMMParameterDefinitionRequestPacket::VEGA_MIN = -922337203685477.5807;
const double eurexMMParameterDefinitionRequestPacket::VEGA_MAX = 922337203685477.5807;
const int64_t eurexMMParameterDefinitionRequestPacket::VEGA_NO_VALUE = 0x8000000000000000;
const int32_t eurexMMParameterDefinitionRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexMMParameterDefinitionRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexMMParameterDefinitionRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexMMParameterDefinitionRequestPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t eurexMMParameterDefinitionRequestPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t eurexMMParameterDefinitionRequestPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexMMParameterDefinitionRequestPacket::PCT_COUNT_MIN = -2147483647;
const int32_t eurexMMParameterDefinitionRequestPacket::PCT_COUNT_MAX = 2147483647;
const int32_t eurexMMParameterDefinitionRequestPacket::PCT_COUNT_NO_VALUE = 0x80000000;
const char eurexMMParameterDefinitionRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexMMParameterDefinitionRequestPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_MMPARAMETERDEFINITIONREQUEST_PACKET_H
