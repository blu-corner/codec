/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_BASKETEXECGRPCOMP_PACKET_H
#define EUREX_BASKETEXECGRPCOMP_PACKET_H

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

class eurexBasketExecGrpCompPacket
{
    public:
        // no value constants
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const int32_t SIDE_MARKET_SEGMENT_ID_MIN;
        static const int32_t SIDE_MARKET_SEGMENT_ID_MAX;
        static const int32_t SIDE_MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t ALLOC_ID_MIN;
        static const uint32_t ALLOC_ID_MAX;
        static const uint32_t ALLOC_ID_NO_VALUE;
        static const int16_t SIDE_TRD_SUB_TYP_MIN;
        static const int16_t SIDE_TRD_SUB_TYP_MAX;
        static const int16_t SIDE_TRD_SUB_TYP_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        uint32_t mPackageID;
        int32_t mSideMarketSegmentID;
        uint32_t mAllocID;
        int16_t mSideTrdSubTyp;
        char mPad2[2];

        // constructor
        eurexBasketExecGrpCompPacket ()
        {
            mPackageID = PACKAGE_ID_NO_VALUE;
            mSideMarketSegmentID = SIDE_MARKET_SEGMENT_ID_NO_VALUE;
            mAllocID = ALLOC_ID_NO_VALUE;
            mSideTrdSubTyp = SIDE_TRD_SUB_TYP_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        uint32_t getPackageID () const
        {
            return mPackageID;
        }

        bool setPackageID (uint32_t v)
        {
            mPackageID = v;
            return ((PACKAGE_ID_MIN <= mPackageID && mPackageID <= PACKAGE_ID_MAX) || mPackageID == PACKAGE_ID_NO_VALUE);
        }

        bool isPackageIDValid () const
        {
            return (mPackageID != PACKAGE_ID_NO_VALUE);
        }

        void resetPackageID ()
        {
            mPackageID = PACKAGE_ID_NO_VALUE;
        }

        int32_t getSideMarketSegmentID () const
        {
            return mSideMarketSegmentID;
        }

        bool setSideMarketSegmentID (int32_t v)
        {
            mSideMarketSegmentID = v;
            return ((SIDE_MARKET_SEGMENT_ID_MIN <= mSideMarketSegmentID && mSideMarketSegmentID <= SIDE_MARKET_SEGMENT_ID_MAX) || mSideMarketSegmentID == SIDE_MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isSideMarketSegmentIDValid () const
        {
            return (mSideMarketSegmentID != SIDE_MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetSideMarketSegmentID ()
        {
            mSideMarketSegmentID = SIDE_MARKET_SEGMENT_ID_NO_VALUE;
        }

        uint32_t getAllocID () const
        {
            return mAllocID;
        }

        bool setAllocID (uint32_t v)
        {
            mAllocID = v;
            return ((ALLOC_ID_MIN <= mAllocID && mAllocID <= ALLOC_ID_MAX) || mAllocID == ALLOC_ID_NO_VALUE);
        }

        bool isAllocIDValid () const
        {
            return (mAllocID != ALLOC_ID_NO_VALUE);
        }

        void resetAllocID ()
        {
            mAllocID = ALLOC_ID_NO_VALUE;
        }

        int16_t getSideTrdSubTyp () const
        {
            return mSideTrdSubTyp;
        }

        bool setSideTrdSubTyp (int16_t v)
        {
            mSideTrdSubTyp = v;
            return ((SIDE_TRD_SUB_TYP_MIN <= mSideTrdSubTyp && mSideTrdSubTyp <= SIDE_TRD_SUB_TYP_MAX) || mSideTrdSubTyp == SIDE_TRD_SUB_TYP_NO_VALUE);
        }

        bool isSideTrdSubTypValid () const
        {
            return (mSideTrdSubTyp != SIDE_TRD_SUB_TYP_NO_VALUE);
        }

        void resetSideTrdSubTyp ()
        {
            mSideTrdSubTyp = SIDE_TRD_SUB_TYP_NO_VALUE;
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mPackageID)
                + sizeof (mSideMarketSegmentID)
                + sizeof (mAllocID)
                + sizeof (mSideTrdSubTyp)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideTrdSubTyp, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideTrdSubTyp, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketExecGrpComp::"
                << "[PackageID=" << getPackageID () << "],"
                << "[SideMarketSegmentID=" << getSideMarketSegmentID () << "],"
                << "[AllocID=" << getAllocID () << "],"
                << "[SideTrdSubTyp=" << getSideTrdSubTyp () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint32_t eurexBasketExecGrpCompPacket::PACKAGE_ID_MIN = 0;
const uint32_t eurexBasketExecGrpCompPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t eurexBasketExecGrpCompPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexBasketExecGrpCompPacket::SIDE_MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexBasketExecGrpCompPacket::SIDE_MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexBasketExecGrpCompPacket::SIDE_MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexBasketExecGrpCompPacket::ALLOC_ID_MIN = 0;
const uint32_t eurexBasketExecGrpCompPacket::ALLOC_ID_MAX = 4294967294;
const uint32_t eurexBasketExecGrpCompPacket::ALLOC_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexBasketExecGrpCompPacket::SIDE_TRD_SUB_TYP_MIN = 2001;
const int16_t eurexBasketExecGrpCompPacket::SIDE_TRD_SUB_TYP_MAX = 2004;
const int16_t eurexBasketExecGrpCompPacket::SIDE_TRD_SUB_TYP_NO_VALUE = 0xFFFF;
const char eurexBasketExecGrpCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexBasketExecGrpCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // EUREX_BASKETEXECGRPCOMP_PACKET_H
