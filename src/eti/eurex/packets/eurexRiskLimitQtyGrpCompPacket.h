/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_RISKLIMITQTYGRPCOMP_PACKET_H
#define EUREX_RISKLIMITQTYGRPCOMP_PACKET_H

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

class eurexRiskLimitQtyGrpCompPacket
{
    public:
        // no value constants
        static const double RISK_LIMIT_QTY_MIN;
        static const double RISK_LIMIT_QTY_MAX;
        static const int64_t RISK_LIMIT_QTY_NO_VALUE;
        static const int8_t RISK_LIMIT_TYPE_MIN;
        static const int8_t RISK_LIMIT_TYPE_MAX;
        static const int8_t RISK_LIMIT_TYPE_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        int64_t mRiskLimitQty;
        int8_t mRiskLimitType;
        char mPad7[7];

        // constructor
        eurexRiskLimitQtyGrpCompPacket ()
        {
            mRiskLimitQty = RISK_LIMIT_QTY_NO_VALUE;
            mRiskLimitType = RISK_LIMIT_TYPE_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
        double getRiskLimitQty () const
        {
            return mRiskLimitQty / 10000.0;
        }

        bool setRiskLimitQty (double v)
        {
            mRiskLimitQty = v * 10000.0;
            return ((RISK_LIMIT_QTY_MIN <= v && v <= RISK_LIMIT_QTY_MAX) || mRiskLimitQty == RISK_LIMIT_QTY_NO_VALUE);
        }

        bool isRiskLimitQtyValid () const
        {
            return (mRiskLimitQty != RISK_LIMIT_QTY_NO_VALUE);
        }

        void resetRiskLimitQty ()
        {
            mRiskLimitQty = RISK_LIMIT_QTY_NO_VALUE;
        }

        int8_t getRiskLimitType () const
        {
            return mRiskLimitType;
        }

        bool setRiskLimitType (int8_t v)
        {
            mRiskLimitType = v;
            return ((RISK_LIMIT_TYPE_MIN <= mRiskLimitType && mRiskLimitType <= RISK_LIMIT_TYPE_MAX) || mRiskLimitType == RISK_LIMIT_TYPE_NO_VALUE);
        }

        bool isRiskLimitTypeValid () const
        {
            return (mRiskLimitType != RISK_LIMIT_TYPE_NO_VALUE);
        }

        void resetRiskLimitType ()
        {
            mRiskLimitType = RISK_LIMIT_TYPE_NO_VALUE;
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
            size_t result = sizeof (mRiskLimitQty)
                + sizeof (mRiskLimitType)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mRiskLimitQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRiskLimitType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mRiskLimitQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRiskLimitType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RiskLimitQtyGrpComp::"
                << "[RiskLimitQty=" << getRiskLimitQty () << "],"
                << "[RiskLimitType=" << getRiskLimitType () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const double eurexRiskLimitQtyGrpCompPacket::RISK_LIMIT_QTY_MIN = -922337203685477.5807;
const double eurexRiskLimitQtyGrpCompPacket::RISK_LIMIT_QTY_MAX = 922337203685477.5807;
const int64_t eurexRiskLimitQtyGrpCompPacket::RISK_LIMIT_QTY_NO_VALUE = 0x8000000000000000;
const int8_t eurexRiskLimitQtyGrpCompPacket::RISK_LIMIT_TYPE_MIN = 4;
const int8_t eurexRiskLimitQtyGrpCompPacket::RISK_LIMIT_TYPE_MAX = 5;
const int8_t eurexRiskLimitQtyGrpCompPacket::RISK_LIMIT_TYPE_NO_VALUE = 0xFF;
const char eurexRiskLimitQtyGrpCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexRiskLimitQtyGrpCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_RISKLIMITQTYGRPCOMP_PACKET_H
