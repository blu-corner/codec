/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_FILLSGRPCOMP_PACKET_H
#define XETRA_FILLSGRPCOMP_PACKET_H

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

class xetraFillsGrpCompPacket
{
    public:
        // no value constants
        static const double FILL_PX_MIN;
        static const double FILL_PX_MAX;
        static const int64_t FILL_PX_NO_VALUE;
        static const double FILL_QTY_MIN;
        static const double FILL_QTY_MAX;
        static const int64_t FILL_QTY_NO_VALUE;
        static const uint32_t FILL_MATCH_ID_MIN;
        static const uint32_t FILL_MATCH_ID_MAX;
        static const uint32_t FILL_MATCH_ID_NO_VALUE;
        static const int32_t FILL_EXEC_ID_MIN;
        static const int32_t FILL_EXEC_ID_MAX;
        static const int32_t FILL_EXEC_ID_NO_VALUE;
        static const int8_t FILL_LIQUIDITY_IND_MIN;
        static const int8_t FILL_LIQUIDITY_IND_MAX;
        static const int8_t FILL_LIQUIDITY_IND_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        int64_t mFillPx;
        int64_t mFillQty;
        uint32_t mFillMatchID;
        int32_t mFillExecID;
        int8_t mFillLiquidityInd;
        char mPad7[7];

        // constructor
        xetraFillsGrpCompPacket ()
        {
            mFillPx = FILL_PX_NO_VALUE;
            mFillQty = FILL_QTY_NO_VALUE;
            mFillMatchID = FILL_MATCH_ID_NO_VALUE;
            mFillExecID = FILL_EXEC_ID_NO_VALUE;
            mFillLiquidityInd = FILL_LIQUIDITY_IND_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
        double getFillPx () const
        {
            return mFillPx / 100000000.0;
        }

        bool setFillPx (double v)
        {
            mFillPx = v * 100000000.0;
            return ((FILL_PX_MIN <= v && v <= FILL_PX_MAX) || mFillPx == FILL_PX_NO_VALUE);
        }

        bool isFillPxValid () const
        {
            return (mFillPx != FILL_PX_NO_VALUE);
        }

        void resetFillPx ()
        {
            mFillPx = FILL_PX_NO_VALUE;
        }

        double getFillQty () const
        {
            return mFillQty / 10000.0;
        }

        bool setFillQty (double v)
        {
            mFillQty = v * 10000.0;
            return ((FILL_QTY_MIN <= v && v <= FILL_QTY_MAX) || mFillQty == FILL_QTY_NO_VALUE);
        }

        bool isFillQtyValid () const
        {
            return (mFillQty != FILL_QTY_NO_VALUE);
        }

        void resetFillQty ()
        {
            mFillQty = FILL_QTY_NO_VALUE;
        }

        uint32_t getFillMatchID () const
        {
            return mFillMatchID;
        }

        bool setFillMatchID (uint32_t v)
        {
            mFillMatchID = v;
            return ((FILL_MATCH_ID_MIN <= mFillMatchID && mFillMatchID <= FILL_MATCH_ID_MAX) || mFillMatchID == FILL_MATCH_ID_NO_VALUE);
        }

        bool isFillMatchIDValid () const
        {
            return (mFillMatchID != FILL_MATCH_ID_NO_VALUE);
        }

        void resetFillMatchID ()
        {
            mFillMatchID = FILL_MATCH_ID_NO_VALUE;
        }

        int32_t getFillExecID () const
        {
            return mFillExecID;
        }

        bool setFillExecID (int32_t v)
        {
            mFillExecID = v;
            return ((FILL_EXEC_ID_MIN <= mFillExecID && mFillExecID <= FILL_EXEC_ID_MAX) || mFillExecID == FILL_EXEC_ID_NO_VALUE);
        }

        bool isFillExecIDValid () const
        {
            return (mFillExecID != FILL_EXEC_ID_NO_VALUE);
        }

        void resetFillExecID ()
        {
            mFillExecID = FILL_EXEC_ID_NO_VALUE;
        }

        int8_t getFillLiquidityInd () const
        {
            return mFillLiquidityInd;
        }

        bool setFillLiquidityInd (int8_t v)
        {
            mFillLiquidityInd = v;
            return ((FILL_LIQUIDITY_IND_MIN <= mFillLiquidityInd && mFillLiquidityInd <= FILL_LIQUIDITY_IND_MAX) || mFillLiquidityInd == FILL_LIQUIDITY_IND_NO_VALUE);
        }

        bool isFillLiquidityIndValid () const
        {
            return (mFillLiquidityInd != FILL_LIQUIDITY_IND_NO_VALUE);
        }

        void resetFillLiquidityInd ()
        {
            mFillLiquidityInd = FILL_LIQUIDITY_IND_NO_VALUE;
        }

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            memset (mPad7, '\0', sizeof (mPad7));
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            strncpy (mPad7, v.c_str (), size);
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
            size_t result = sizeof (mFillPx)
                + sizeof (mFillQty)
                + sizeof (mFillMatchID)
                + sizeof (mFillExecID)
                + sizeof (mFillLiquidityInd)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mFillPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFillQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFillMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFillExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFillLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mFillPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFillQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFillMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFillExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFillLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "FillsGrpComp::"
                << "[FillPx=" << getFillPx () << "],"
                << "[FillQty=" << getFillQty () << "],"
                << "[FillMatchID=" << getFillMatchID () << "],"
                << "[FillExecID=" << getFillExecID () << "],"
                << "[FillLiquidityInd=" << getFillLiquidityInd () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const double xetraFillsGrpCompPacket::FILL_PX_MIN = -92233720368.54775807;
const double xetraFillsGrpCompPacket::FILL_PX_MAX = 92233720368.54775807;
const int64_t xetraFillsGrpCompPacket::FILL_PX_NO_VALUE = 0x8000000000000000;
const double xetraFillsGrpCompPacket::FILL_QTY_MIN = -922337203685477.5807;
const double xetraFillsGrpCompPacket::FILL_QTY_MAX = 922337203685477.5807;
const int64_t xetraFillsGrpCompPacket::FILL_QTY_NO_VALUE = 0x8000000000000000;
const uint32_t xetraFillsGrpCompPacket::FILL_MATCH_ID_MIN = 0;
const uint32_t xetraFillsGrpCompPacket::FILL_MATCH_ID_MAX = 4294967294;
const uint32_t xetraFillsGrpCompPacket::FILL_MATCH_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraFillsGrpCompPacket::FILL_EXEC_ID_MIN = -2147483647;
const int32_t xetraFillsGrpCompPacket::FILL_EXEC_ID_MAX = 2147483647;
const int32_t xetraFillsGrpCompPacket::FILL_EXEC_ID_NO_VALUE = 0x80000000;
const int8_t xetraFillsGrpCompPacket::FILL_LIQUIDITY_IND_MIN = 1;
const int8_t xetraFillsGrpCompPacket::FILL_LIQUIDITY_IND_MAX = 7;
const int8_t xetraFillsGrpCompPacket::FILL_LIQUIDITY_IND_NO_VALUE = 0xFF;
const char xetraFillsGrpCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraFillsGrpCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_FILLSGRPCOMP_PACKET_H
