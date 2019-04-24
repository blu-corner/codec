/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_INSTRUMENTATTRIBUTEGRPCOMP_PACKET_H
#define EUREX_INSTRUMENTATTRIBUTEGRPCOMP_PACKET_H

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

class eurexInstrumentAttributeGrpCompPacket
{
    public:
        // no value constants
        static const int8_t INSTR_ATTRIB_TYPE_MIN;
        static const int8_t INSTR_ATTRIB_TYPE_MAX;
        static const int8_t INSTR_ATTRIB_TYPE_NO_VALUE;
        static const char INSTR_ATTRIB_VALUE_NO_VALUE[32];
        static const size_t INSTR_ATTRIB_VALUE_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        int8_t mInstrAttribType;
        char mInstrAttribValue[32];
        char mPad7[7];

        // constructor
        eurexInstrumentAttributeGrpCompPacket ()
        {
            mInstrAttribType = INSTR_ATTRIB_TYPE_NO_VALUE;
            memcpy(mInstrAttribValue, INSTR_ATTRIB_VALUE_NO_VALUE, sizeof (mInstrAttribValue));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
        int8_t getInstrAttribType () const
        {
            return mInstrAttribType;
        }

        bool setInstrAttribType (int8_t v)
        {
            mInstrAttribType = v;
            return ((INSTR_ATTRIB_TYPE_MIN <= mInstrAttribType && mInstrAttribType <= INSTR_ATTRIB_TYPE_MAX) || mInstrAttribType == INSTR_ATTRIB_TYPE_NO_VALUE);
        }

        bool isInstrAttribTypeValid () const
        {
            return (mInstrAttribType != INSTR_ATTRIB_TYPE_NO_VALUE);
        }

        void resetInstrAttribType ()
        {
            mInstrAttribType = INSTR_ATTRIB_TYPE_NO_VALUE;
        }

        string getInstrAttribValue () const
        {
            return string (mInstrAttribValue, INSTR_ATTRIB_VALUE_MAX_LENGTH);
        }

        bool setInstrAttribValue (const string& v)
        {
            memset (mInstrAttribValue, '\0', sizeof (mInstrAttribValue));
            size_t size = min ((size_t) v.size (), (size_t) INSTR_ATTRIB_VALUE_MAX_LENGTH);
            strncpy (mInstrAttribValue, v.c_str (), size);
            return (v.size () <= INSTR_ATTRIB_VALUE_MAX_LENGTH);
        }

        bool isInstrAttribValueValid () const
        {
            return (memcmp (mInstrAttribValue, INSTR_ATTRIB_VALUE_NO_VALUE, sizeof (mInstrAttribValue)) != 0);
        }

        void resetInstrAttribValue ()
        {
            memcpy (mInstrAttribValue, INSTR_ATTRIB_VALUE_NO_VALUE, sizeof (mInstrAttribValue));
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
            size_t result = sizeof (mInstrAttribType)
                + sizeof (mInstrAttribValue)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mInstrAttribType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mInstrAttribValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mInstrAttribType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mInstrAttribValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InstrumentAttributeGrpComp::"
                << "[InstrAttribType=" << getInstrAttribType () << "],"
                << "[InstrAttribValue=" << getInstrAttribValue () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int8_t eurexInstrumentAttributeGrpCompPacket::INSTR_ATTRIB_TYPE_MIN = 5;
const int8_t eurexInstrumentAttributeGrpCompPacket::INSTR_ATTRIB_TYPE_MAX = 104;
const int8_t eurexInstrumentAttributeGrpCompPacket::INSTR_ATTRIB_TYPE_NO_VALUE = 0xFF;
const char eurexInstrumentAttributeGrpCompPacket::INSTR_ATTRIB_VALUE_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexInstrumentAttributeGrpCompPacket::INSTR_ATTRIB_VALUE_MAX_LENGTH = 32;
const char eurexInstrumentAttributeGrpCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexInstrumentAttributeGrpCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_INSTRUMENTATTRIBUTEGRPCOMP_PACKET_H
