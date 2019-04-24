/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_SIDECROSSLEGGRPCOMP_PACKET_H
#define EUREX_SIDECROSSLEGGRPCOMP_PACKET_H

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

class eurexSideCrossLegGrpCompPacket
{
    public:
        // no value constants
        static const int8_t LEG_INPUT_SOURCE_MIN;
        static const int8_t LEG_INPUT_SOURCE_MAX;
        static const int8_t LEG_INPUT_SOURCE_NO_VALUE;
        static const char LEG_POSITION_EFFECT_NO_VALUE[1];
        static const size_t LEG_POSITION_EFFECT_MAX_LENGTH;
        static const char LEG_ACCOUNT_NO_VALUE[2];
        static const size_t LEG_ACCOUNT_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        int8_t mLegInputSource;
        char mLegPositionEffect[1];
        char mLegAccount[2];
        char mPad4[4];

        // constructor
        eurexSideCrossLegGrpCompPacket ()
        {
            mLegInputSource = LEG_INPUT_SOURCE_NO_VALUE;
            memcpy(mLegPositionEffect, LEG_POSITION_EFFECT_NO_VALUE, sizeof (mLegPositionEffect));
            memcpy(mLegAccount, LEG_ACCOUNT_NO_VALUE, sizeof (mLegAccount));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        int8_t getLegInputSource () const
        {
            return mLegInputSource;
        }

        bool setLegInputSource (int8_t v)
        {
            mLegInputSource = v;
            return ((LEG_INPUT_SOURCE_MIN <= mLegInputSource && mLegInputSource <= LEG_INPUT_SOURCE_MAX) || mLegInputSource == LEG_INPUT_SOURCE_NO_VALUE);
        }

        bool isLegInputSourceValid () const
        {
            return (mLegInputSource != LEG_INPUT_SOURCE_NO_VALUE);
        }

        void resetLegInputSource ()
        {
            mLegInputSource = LEG_INPUT_SOURCE_NO_VALUE;
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
            size_t result = sizeof (mLegInputSource)
                + sizeof (mLegPositionEffect)
                + sizeof (mLegAccount)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mLegInputSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLegAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mLegInputSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLegAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SideCrossLegGrpComp::"
                << "[LegInputSource=" << getLegInputSource () << "],"
                << "[LegPositionEffect=" << getLegPositionEffect () << "],"
                << "[LegAccount=" << getLegAccount () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const int8_t eurexSideCrossLegGrpCompPacket::LEG_INPUT_SOURCE_MIN = 1;
const int8_t eurexSideCrossLegGrpCompPacket::LEG_INPUT_SOURCE_MAX = 2;
const int8_t eurexSideCrossLegGrpCompPacket::LEG_INPUT_SOURCE_NO_VALUE = 0xFF;
const char eurexSideCrossLegGrpCompPacket::LEG_POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexSideCrossLegGrpCompPacket::LEG_POSITION_EFFECT_MAX_LENGTH = 1;
const char eurexSideCrossLegGrpCompPacket::LEG_ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexSideCrossLegGrpCompPacket::LEG_ACCOUNT_MAX_LENGTH = 2;
const char eurexSideCrossLegGrpCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexSideCrossLegGrpCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_SIDECROSSLEGGRPCOMP_PACKET_H
