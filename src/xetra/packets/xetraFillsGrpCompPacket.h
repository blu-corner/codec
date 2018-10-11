/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_FILLSGRPCOMP_PACKET_H
#define XETRA_FILLSGRPCOMP_PACKET_H

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

class xetraFillsGrpCompPacket
{
    public:
        // no value constants
        static const double FILL_PX_MIN;
        static const double FILL_PX_MAX;
        static const int64_t FILL_PX_NO_VALUE;
        static const int32_t FILL_QTY_MIN;
        static const int32_t FILL_QTY_MAX;
        static const int32_t FILL_QTY_NO_VALUE;
        static const uint32_t FILL_MATCH_ID_MIN;
        static const uint32_t FILL_MATCH_ID_MAX;
        static const uint32_t FILL_MATCH_ID_NO_VALUE;
        static const int32_t FILL_EXEC_ID_MIN;
        static const int32_t FILL_EXEC_ID_MAX;
        static const int32_t FILL_EXEC_ID_NO_VALUE;
        static const int8_t FILL_LIQUIDITY_IND_MIN;
        static const int8_t FILL_LIQUIDITY_IND_MAX;
        static const int8_t FILL_LIQUIDITY_IND_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        int64_t mFillPx;
        int32_t mFillQty;
        uint32_t mFillMatchID;
        int32_t mFillExecID;
        int8_t mFillLiquidityInd;
        char mPad3[3];

        // constructor
        xetraFillsGrpCompPacket ()
        {
            mFillPx = FILL_PX_NO_VALUE;
            mFillQty = FILL_QTY_NO_VALUE;
            mFillMatchID = FILL_MATCH_ID_NO_VALUE;
            mFillExecID = FILL_EXEC_ID_NO_VALUE;
            mFillLiquidityInd = FILL_LIQUIDITY_IND_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        int32_t getFillQty () const
        {
            return mFillQty;
        }

        bool setFillQty (int32_t v)
        {
            mFillQty = v;
            return ((FILL_QTY_MIN <= mFillQty && mFillQty <= FILL_QTY_MAX) || mFillQty == FILL_QTY_NO_VALUE);
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

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad3[i] = v[i];
            memset (&mPad3[size], '\0', PAD3_MAX_LENGTH-size);
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
            size_t result = sizeof (mFillPx)
                + sizeof (mFillQty)
                + sizeof (mFillMatchID)
                + sizeof (mFillExecID)
                + sizeof (mFillLiquidityInd)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mFillPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFillQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFillMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFillExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFillLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mFillPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFillQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFillMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFillExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFillLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
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
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const double xetraFillsGrpCompPacket::FILL_PX_MIN = -92233720368.54775807;
const double xetraFillsGrpCompPacket::FILL_PX_MAX = 92233720368.54775807;
const int64_t xetraFillsGrpCompPacket::FILL_PX_NO_VALUE = 0x8000000000000000;
const int32_t xetraFillsGrpCompPacket::FILL_QTY_MIN = -2147483647;
const int32_t xetraFillsGrpCompPacket::FILL_QTY_MAX = 2147483647;
const int32_t xetraFillsGrpCompPacket::FILL_QTY_NO_VALUE = 0x80000000;
const uint32_t xetraFillsGrpCompPacket::FILL_MATCH_ID_MIN = 0;
const uint32_t xetraFillsGrpCompPacket::FILL_MATCH_ID_MAX = 4294967294;
const uint32_t xetraFillsGrpCompPacket::FILL_MATCH_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraFillsGrpCompPacket::FILL_EXEC_ID_MIN = -2147483647;
const int32_t xetraFillsGrpCompPacket::FILL_EXEC_ID_MAX = 2147483647;
const int32_t xetraFillsGrpCompPacket::FILL_EXEC_ID_NO_VALUE = 0x80000000;
const int8_t xetraFillsGrpCompPacket::FILL_LIQUIDITY_IND_MIN = 1;
const int8_t xetraFillsGrpCompPacket::FILL_LIQUIDITY_IND_MAX = 7;
const int8_t xetraFillsGrpCompPacket::FILL_LIQUIDITY_IND_NO_VALUE = 0xFF;
const char xetraFillsGrpCompPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraFillsGrpCompPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_FILLSGRPCOMP_PACKET_H
