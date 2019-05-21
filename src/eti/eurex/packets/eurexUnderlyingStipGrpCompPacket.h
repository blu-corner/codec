/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_UNDERLYINGSTIPGRPCOMP_PACKET_H
#define EUREX_UNDERLYINGSTIPGRPCOMP_PACKET_H

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

class eurexUnderlyingStipGrpCompPacket
{
    public:
        // no value constants
        static const char UNDERLYING_STIP_VALUE_NO_VALUE[32];
        static const size_t UNDERLYING_STIP_VALUE_MAX_LENGTH;
        static const char UNDERLYING_STIP_TYPE_NO_VALUE[7];
        static const size_t UNDERLYING_STIP_TYPE_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        char mUnderlyingStipValue[32];
        char mUnderlyingStipType[7];
        char mPad1[1];

        // constructor
        eurexUnderlyingStipGrpCompPacket ()
        {
            memcpy(mUnderlyingStipValue, UNDERLYING_STIP_VALUE_NO_VALUE, sizeof (mUnderlyingStipValue));
            memcpy(mUnderlyingStipType, UNDERLYING_STIP_TYPE_NO_VALUE, sizeof (mUnderlyingStipType));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }

        // getters & setters
        string getUnderlyingStipValue () const
        {
            return string (mUnderlyingStipValue, UNDERLYING_STIP_VALUE_MAX_LENGTH);
        }

        bool setUnderlyingStipValue (const string& v)
        {
            memset (mUnderlyingStipValue, '\0', sizeof (mUnderlyingStipValue));
            size_t size = min ((size_t) v.size (), (size_t) UNDERLYING_STIP_VALUE_MAX_LENGTH);
            strncpy (mUnderlyingStipValue, v.c_str (), size);
            return (v.size () <= UNDERLYING_STIP_VALUE_MAX_LENGTH);
        }

        bool isUnderlyingStipValueValid () const
        {
            return (memcmp (mUnderlyingStipValue, UNDERLYING_STIP_VALUE_NO_VALUE, sizeof (mUnderlyingStipValue)) != 0);
        }

        void resetUnderlyingStipValue ()
        {
            memcpy (mUnderlyingStipValue, UNDERLYING_STIP_VALUE_NO_VALUE, sizeof (mUnderlyingStipValue));
        }

        string getUnderlyingStipType () const
        {
            return string (mUnderlyingStipType, UNDERLYING_STIP_TYPE_MAX_LENGTH);
        }

        bool setUnderlyingStipType (const string& v)
        {
            memset (mUnderlyingStipType, '\0', sizeof (mUnderlyingStipType));
            size_t size = min ((size_t) v.size (), (size_t) UNDERLYING_STIP_TYPE_MAX_LENGTH);
            strncpy (mUnderlyingStipType, v.c_str (), size);
            return (v.size () <= UNDERLYING_STIP_TYPE_MAX_LENGTH);
        }

        bool isUnderlyingStipTypeValid () const
        {
            return (memcmp (mUnderlyingStipType, UNDERLYING_STIP_TYPE_NO_VALUE, sizeof (mUnderlyingStipType)) != 0);
        }

        void resetUnderlyingStipType ()
        {
            memcpy (mUnderlyingStipType, UNDERLYING_STIP_TYPE_NO_VALUE, sizeof (mUnderlyingStipType));
        }

        string getPad1 () const
        {
            return string (mPad1, PAD1_MAX_LENGTH);
        }

        bool setPad1 (const string& v)
        {
            memset (mPad1, '\0', sizeof (mPad1));
            size_t size = min ((size_t) v.size (), (size_t) PAD1_MAX_LENGTH);
            strncpy (mPad1, v.c_str (), size);
            return (v.size () <= PAD1_MAX_LENGTH);
        }

        bool isPad1Valid () const
        {
            return (memcmp (mPad1, PAD1_NO_VALUE, sizeof (mPad1)) != 0);
        }

        void resetPad1 ()
        {
            memcpy (mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mUnderlyingStipValue)
                + sizeof (mUnderlyingStipType)
                + sizeof (mPad1);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mUnderlyingStipValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingStipType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mUnderlyingStipValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingStipType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "UnderlyingStipGrpComp::"
                << "[UnderlyingStipValue=" << getUnderlyingStipValue () << "],"
                << "[UnderlyingStipType=" << getUnderlyingStipType () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const char eurexUnderlyingStipGrpCompPacket::UNDERLYING_STIP_VALUE_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUnderlyingStipGrpCompPacket::UNDERLYING_STIP_VALUE_MAX_LENGTH = 32;
const char eurexUnderlyingStipGrpCompPacket::UNDERLYING_STIP_TYPE_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUnderlyingStipGrpCompPacket::UNDERLYING_STIP_TYPE_MAX_LENGTH = 7;
const char eurexUnderlyingStipGrpCompPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexUnderlyingStipGrpCompPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // EUREX_UNDERLYINGSTIPGRPCOMP_PACKET_H
