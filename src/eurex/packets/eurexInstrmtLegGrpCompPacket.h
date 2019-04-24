/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_INSTRMTLEGGRPCOMP_PACKET_H
#define EUREX_INSTRMTLEGGRPCOMP_PACKET_H

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

class eurexInstrmtLegGrpCompPacket
{
    public:
        // no value constants
        static const int64_t LEG_SECURITY_ID_MIN;
        static const int64_t LEG_SECURITY_ID_MAX;
        static const int64_t LEG_SECURITY_ID_NO_VALUE;
        static const double LEG_PRICE_MIN;
        static const double LEG_PRICE_MAX;
        static const int64_t LEG_PRICE_NO_VALUE;
        static const int32_t LEG_SYMBOL_MIN;
        static const int32_t LEG_SYMBOL_MAX;
        static const int32_t LEG_SYMBOL_NO_VALUE;
        static const int32_t LEG_RATIO_QTY_MIN;
        static const int32_t LEG_RATIO_QTY_MAX;
        static const int32_t LEG_RATIO_QTY_NO_VALUE;
        static const int8_t LEG_SIDE_MIN;
        static const int8_t LEG_SIDE_MAX;
        static const int8_t LEG_SIDE_NO_VALUE;
        static const int8_t LEG_SECURITY_TYPE_MIN;
        static const int8_t LEG_SECURITY_TYPE_MAX;
        static const int8_t LEG_SECURITY_TYPE_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        int64_t mLegSecurityID;
        int64_t mLegPrice;
        int32_t mLegSymbol;
        int32_t mLegRatioQty;
        int8_t mLegSide;
        int8_t mLegSecurityType;
        char mPad6[6];

        // constructor
        eurexInstrmtLegGrpCompPacket ()
        {
            mLegSecurityID = LEG_SECURITY_ID_NO_VALUE;
            mLegPrice = LEG_PRICE_NO_VALUE;
            mLegSymbol = LEG_SYMBOL_NO_VALUE;
            mLegRatioQty = LEG_RATIO_QTY_NO_VALUE;
            mLegSide = LEG_SIDE_NO_VALUE;
            mLegSecurityType = LEG_SECURITY_TYPE_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        int64_t getLegSecurityID () const
        {
            return mLegSecurityID;
        }

        bool setLegSecurityID (int64_t v)
        {
            mLegSecurityID = v;
            return ((LEG_SECURITY_ID_MIN <= mLegSecurityID && mLegSecurityID <= LEG_SECURITY_ID_MAX) || mLegSecurityID == LEG_SECURITY_ID_NO_VALUE);
        }

        bool isLegSecurityIDValid () const
        {
            return (mLegSecurityID != LEG_SECURITY_ID_NO_VALUE);
        }

        void resetLegSecurityID ()
        {
            mLegSecurityID = LEG_SECURITY_ID_NO_VALUE;
        }

        double getLegPrice () const
        {
            return mLegPrice / 100000000.0;
        }

        bool setLegPrice (double v)
        {
            mLegPrice = v * 100000000.0;
            return ((LEG_PRICE_MIN <= v && v <= LEG_PRICE_MAX) || mLegPrice == LEG_PRICE_NO_VALUE);
        }

        bool isLegPriceValid () const
        {
            return (mLegPrice != LEG_PRICE_NO_VALUE);
        }

        void resetLegPrice ()
        {
            mLegPrice = LEG_PRICE_NO_VALUE;
        }

        int32_t getLegSymbol () const
        {
            return mLegSymbol;
        }

        bool setLegSymbol (int32_t v)
        {
            mLegSymbol = v;
            return ((LEG_SYMBOL_MIN <= mLegSymbol && mLegSymbol <= LEG_SYMBOL_MAX) || mLegSymbol == LEG_SYMBOL_NO_VALUE);
        }

        bool isLegSymbolValid () const
        {
            return (mLegSymbol != LEG_SYMBOL_NO_VALUE);
        }

        void resetLegSymbol ()
        {
            mLegSymbol = LEG_SYMBOL_NO_VALUE;
        }

        int32_t getLegRatioQty () const
        {
            return mLegRatioQty;
        }

        bool setLegRatioQty (int32_t v)
        {
            mLegRatioQty = v;
            return ((LEG_RATIO_QTY_MIN <= mLegRatioQty && mLegRatioQty <= LEG_RATIO_QTY_MAX) || mLegRatioQty == LEG_RATIO_QTY_NO_VALUE);
        }

        bool isLegRatioQtyValid () const
        {
            return (mLegRatioQty != LEG_RATIO_QTY_NO_VALUE);
        }

        void resetLegRatioQty ()
        {
            mLegRatioQty = LEG_RATIO_QTY_NO_VALUE;
        }

        int8_t getLegSide () const
        {
            return mLegSide;
        }

        bool setLegSide (int8_t v)
        {
            mLegSide = v;
            return ((LEG_SIDE_MIN <= mLegSide && mLegSide <= LEG_SIDE_MAX) || mLegSide == LEG_SIDE_NO_VALUE);
        }

        bool isLegSideValid () const
        {
            return (mLegSide != LEG_SIDE_NO_VALUE);
        }

        void resetLegSide ()
        {
            mLegSide = LEG_SIDE_NO_VALUE;
        }

        int8_t getLegSecurityType () const
        {
            return mLegSecurityType;
        }

        bool setLegSecurityType (int8_t v)
        {
            mLegSecurityType = v;
            return ((LEG_SECURITY_TYPE_MIN <= mLegSecurityType && mLegSecurityType <= LEG_SECURITY_TYPE_MAX) || mLegSecurityType == LEG_SECURITY_TYPE_NO_VALUE);
        }

        bool isLegSecurityTypeValid () const
        {
            return (mLegSecurityType != LEG_SECURITY_TYPE_NO_VALUE);
        }

        void resetLegSecurityType ()
        {
            mLegSecurityType = LEG_SECURITY_TYPE_NO_VALUE;
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mLegSecurityID)
                + sizeof (mLegPrice)
                + sizeof (mLegSymbol)
                + sizeof (mLegRatioQty)
                + sizeof (mLegSide)
                + sizeof (mLegSecurityType)
                + sizeof (mPad6);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mLegSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegRatioQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegSecurityType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mLegSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegSymbol, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegRatioQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegSecurityType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InstrmtLegGrpComp::"
                << "[LegSecurityID=" << getLegSecurityID () << "],"
                << "[LegPrice=" << getLegPrice () << "],"
                << "[LegSymbol=" << getLegSymbol () << "],"
                << "[LegRatioQty=" << getLegRatioQty () << "],"
                << "[LegSide=" << getLegSide () << "],"
                << "[LegSecurityType=" << getLegSecurityType () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const int64_t eurexInstrmtLegGrpCompPacket::LEG_SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexInstrmtLegGrpCompPacket::LEG_SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexInstrmtLegGrpCompPacket::LEG_SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexInstrmtLegGrpCompPacket::LEG_PRICE_MIN = -92233720368.54775807;
const double eurexInstrmtLegGrpCompPacket::LEG_PRICE_MAX = 92233720368.54775807;
const int64_t eurexInstrmtLegGrpCompPacket::LEG_PRICE_NO_VALUE = 0x8000000000000000;
const int32_t eurexInstrmtLegGrpCompPacket::LEG_SYMBOL_MIN = -2147483647;
const int32_t eurexInstrmtLegGrpCompPacket::LEG_SYMBOL_MAX = 2147483647;
const int32_t eurexInstrmtLegGrpCompPacket::LEG_SYMBOL_NO_VALUE = 0x80000000;
const int32_t eurexInstrmtLegGrpCompPacket::LEG_RATIO_QTY_MIN = 1;
const int32_t eurexInstrmtLegGrpCompPacket::LEG_RATIO_QTY_MAX = 2147483647;
const int32_t eurexInstrmtLegGrpCompPacket::LEG_RATIO_QTY_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexInstrmtLegGrpCompPacket::LEG_SIDE_MIN = 1;
const int8_t eurexInstrmtLegGrpCompPacket::LEG_SIDE_MAX = 2;
const int8_t eurexInstrmtLegGrpCompPacket::LEG_SIDE_NO_VALUE = 0xFF;
const int8_t eurexInstrmtLegGrpCompPacket::LEG_SECURITY_TYPE_MIN = 1;
const int8_t eurexInstrmtLegGrpCompPacket::LEG_SECURITY_TYPE_MAX = 2;
const int8_t eurexInstrmtLegGrpCompPacket::LEG_SECURITY_TYPE_NO_VALUE = 0xFF;
const char eurexInstrmtLegGrpCompPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexInstrmtLegGrpCompPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // EUREX_INSTRMTLEGGRPCOMP_PACKET_H
