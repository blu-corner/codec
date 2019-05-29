/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_LEGORDGRPCOMP_PACKET_H
#define EUREX_LEGORDGRPCOMP_PACKET_H

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

class eurexLegOrdGrpCompPacket
{
    public:
        // no value constants
        static const char LEG_ACCOUNT_NO_VALUE[2];
        static const size_t LEG_ACCOUNT_MAX_LENGTH;
        static const char LEG_POSITION_EFFECT_NO_VALUE[1];
        static const size_t LEG_POSITION_EFFECT_MAX_LENGTH;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;

        // fields (use with care)
        char mLegAccount[2];
        char mLegPositionEffect[1];
        char mPad5[5];

        // constructor
        eurexLegOrdGrpCompPacket ()
        {
            memcpy(mLegAccount, LEG_ACCOUNT_NO_VALUE, sizeof (mLegAccount));
            memcpy(mLegPositionEffect, LEG_POSITION_EFFECT_NO_VALUE, sizeof (mLegPositionEffect));
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
        }

        // getters & setters
        string getLegAccount () const
        {
            return string (mLegAccount, LEG_ACCOUNT_MAX_LENGTH);
        }

        bool setLegAccount (const string& v)
        {
            memset (mLegAccount, '\0', sizeof (mLegAccount));
            size_t size = min ((size_t) v.size (), (size_t) LEG_ACCOUNT_MAX_LENGTH);
            strncpy (mLegAccount, v.c_str (), size);
            return (v.size () <= LEG_ACCOUNT_MAX_LENGTH);
        }

        bool isLegAccountValid () const
        {
            return (memcmp (mLegAccount, LEG_ACCOUNT_NO_VALUE, sizeof (mLegAccount)) != 0);
        }

        void resetLegAccount ()
        {
            memcpy (mLegAccount, LEG_ACCOUNT_NO_VALUE, sizeof (mLegAccount));
        }

        string getLegPositionEffect () const
        {
            return string (mLegPositionEffect, LEG_POSITION_EFFECT_MAX_LENGTH);
        }

        bool setLegPositionEffect (const string& v)
        {
            memset (mLegPositionEffect, '\0', sizeof (mLegPositionEffect));
            size_t size = min ((size_t) v.size (), (size_t) LEG_POSITION_EFFECT_MAX_LENGTH);
            strncpy (mLegPositionEffect, v.c_str (), size);
            return (v.size () <= LEG_POSITION_EFFECT_MAX_LENGTH);
        }

        bool isLegPositionEffectValid () const
        {
            return (memcmp (mLegPositionEffect, LEG_POSITION_EFFECT_NO_VALUE, sizeof (mLegPositionEffect)) != 0);
        }

        void resetLegPositionEffect ()
        {
            memcpy (mLegPositionEffect, LEG_POSITION_EFFECT_NO_VALUE, sizeof (mLegPositionEffect));
        }

        string getPad5 () const
        {
            return string (mPad5, PAD5_MAX_LENGTH);
        }

        bool setPad5 (const string& v)
        {
            memset (mPad5, '\0', sizeof (mPad5));
            size_t size = min ((size_t) v.size (), (size_t) PAD5_MAX_LENGTH);
            strncpy (mPad5, v.c_str (), size);
            return (v.size () <= PAD5_MAX_LENGTH);
        }

        bool isPad5Valid () const
        {
            return (memcmp (mPad5, PAD5_NO_VALUE, sizeof (mPad5)) != 0);
        }

        void resetPad5 ()
        {
            memcpy (mPad5, PAD5_NO_VALUE, sizeof (mPad5));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mLegAccount)
                + sizeof (mLegPositionEffect)
                + sizeof (mPad5);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mLegAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLegPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mLegAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLegPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "LegOrdGrpComp::"
                << "[LegAccount=" << getLegAccount () << "],"
                << "[LegPositionEffect=" << getLegPositionEffect () << "],"
                << "[Pad5=" << getPad5 () << "]";
            return sss.str();
        }
};

const char eurexLegOrdGrpCompPacket::LEG_ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexLegOrdGrpCompPacket::LEG_ACCOUNT_MAX_LENGTH = 2;
const char eurexLegOrdGrpCompPacket::LEG_POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexLegOrdGrpCompPacket::LEG_POSITION_EFFECT_MAX_LENGTH = 1;
const char eurexLegOrdGrpCompPacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexLegOrdGrpCompPacket::PAD5_MAX_LENGTH = 5;


} // namespace neueda

#endif // EUREX_LEGORDGRPCOMP_PACKET_H
