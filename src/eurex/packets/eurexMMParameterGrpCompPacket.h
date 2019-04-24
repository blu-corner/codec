/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_MMPARAMETERGRPCOMP_PACKET_H
#define EUREX_MMPARAMETERGRPCOMP_PACKET_H

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

class eurexMMParameterGrpCompPacket
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
        static const int32_t PCT_COUNT_MIN;
        static const int32_t PCT_COUNT_MAX;
        static const int32_t PCT_COUNT_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;

        // fields (use with care)
        int64_t mExposureDuration;
        int64_t mCumQty;
        int64_t mDelta;
        int64_t mVega;
        int32_t mPctCount;
        uint32_t mTargetPartyIDSessionID;

        // constructor
        eurexMMParameterGrpCompPacket ()
        {
            mExposureDuration = EXPOSURE_DURATION_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mDelta = DELTA_NO_VALUE;
            mVega = VEGA_NO_VALUE;
            mPctCount = PCT_COUNT_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }

        // getters & setters
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mExposureDuration)
                + sizeof (mCumQty)
                + sizeof (mDelta)
                + sizeof (mVega)
                + sizeof (mPctCount)
                + sizeof (mTargetPartyIDSessionID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mExposureDuration, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mDelta, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mVega, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPctCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mExposureDuration, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mDelta, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mVega, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPctCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "MMParameterGrpComp::"
                << "[ExposureDuration=" << getExposureDuration () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[Delta=" << getDelta () << "],"
                << "[Vega=" << getVega () << "],"
                << "[PctCount=" << getPctCount () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "]";
            return sss.str();
        }
};

const int64_t eurexMMParameterGrpCompPacket::EXPOSURE_DURATION_MIN = -9223372036854775807L;
const int64_t eurexMMParameterGrpCompPacket::EXPOSURE_DURATION_MAX = 9223372036854775807L;
const int64_t eurexMMParameterGrpCompPacket::EXPOSURE_DURATION_NO_VALUE = 0x8000000000000000;
const double eurexMMParameterGrpCompPacket::CUM_QTY_MIN = -922337203685477.5807;
const double eurexMMParameterGrpCompPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t eurexMMParameterGrpCompPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double eurexMMParameterGrpCompPacket::DELTA_MIN = -922337203685477.5807;
const double eurexMMParameterGrpCompPacket::DELTA_MAX = 922337203685477.5807;
const int64_t eurexMMParameterGrpCompPacket::DELTA_NO_VALUE = 0x8000000000000000;
const double eurexMMParameterGrpCompPacket::VEGA_MIN = -922337203685477.5807;
const double eurexMMParameterGrpCompPacket::VEGA_MAX = 922337203685477.5807;
const int64_t eurexMMParameterGrpCompPacket::VEGA_NO_VALUE = 0x8000000000000000;
const int32_t eurexMMParameterGrpCompPacket::PCT_COUNT_MIN = -2147483647;
const int32_t eurexMMParameterGrpCompPacket::PCT_COUNT_MAX = 2147483647;
const int32_t eurexMMParameterGrpCompPacket::PCT_COUNT_NO_VALUE = 0x80000000;
const uint32_t eurexMMParameterGrpCompPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t eurexMMParameterGrpCompPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t eurexMMParameterGrpCompPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;


} // namespace neueda

#endif // EUREX_MMPARAMETERGRPCOMP_PACKET_H
