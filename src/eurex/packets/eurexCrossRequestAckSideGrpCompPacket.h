/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_CROSSREQUESTACKSIDEGRPCOMP_PACKET_H
#define EUREX_CROSSREQUESTACKSIDEGRPCOMP_PACKET_H

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

class eurexCrossRequestAckSideGrpCompPacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const int8_t INPUT_SOURCE_MIN;
        static const int8_t INPUT_SOURCE_MAX;
        static const int8_t INPUT_SOURCE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        uint64_t mOrderID;
        int8_t mInputSource;
        int8_t mSide;
        char mPad6[6];

        // constructor
        eurexCrossRequestAckSideGrpCompPacket ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
            mInputSource = INPUT_SOURCE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        uint64_t getOrderID () const
        {
            return mOrderID;
        }

        bool setOrderID (uint64_t v)
        {
            mOrderID = v;
            return ((ORDER_ID_MIN <= mOrderID && mOrderID <= ORDER_ID_MAX) || mOrderID == ORDER_ID_NO_VALUE);
        }

        bool isOrderIDValid () const
        {
            return (mOrderID != ORDER_ID_NO_VALUE);
        }

        void resetOrderID ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
        }

        int8_t getInputSource () const
        {
            return mInputSource;
        }

        bool setInputSource (int8_t v)
        {
            mInputSource = v;
            return ((INPUT_SOURCE_MIN <= mInputSource && mInputSource <= INPUT_SOURCE_MAX) || mInputSource == INPUT_SOURCE_NO_VALUE);
        }

        bool isInputSourceValid () const
        {
            return (mInputSource != INPUT_SOURCE_NO_VALUE);
        }

        void resetInputSource ()
        {
            mInputSource = INPUT_SOURCE_NO_VALUE;
        }

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
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
            size_t result = sizeof (mOrderID)
                + sizeof (mInputSource)
                + sizeof (mSide)
                + sizeof (mPad6);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mInputSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mInputSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "CrossRequestAckSideGrpComp::"
                << "[OrderID=" << getOrderID () << "],"
                << "[InputSource=" << getInputSource () << "],"
                << "[Side=" << getSide () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t eurexCrossRequestAckSideGrpCompPacket::ORDER_ID_MIN = 0UL;
const uint64_t eurexCrossRequestAckSideGrpCompPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexCrossRequestAckSideGrpCompPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int8_t eurexCrossRequestAckSideGrpCompPacket::INPUT_SOURCE_MIN = 1;
const int8_t eurexCrossRequestAckSideGrpCompPacket::INPUT_SOURCE_MAX = 2;
const int8_t eurexCrossRequestAckSideGrpCompPacket::INPUT_SOURCE_NO_VALUE = 0xFF;
const int8_t eurexCrossRequestAckSideGrpCompPacket::SIDE_MIN = 1;
const int8_t eurexCrossRequestAckSideGrpCompPacket::SIDE_MAX = 2;
const int8_t eurexCrossRequestAckSideGrpCompPacket::SIDE_NO_VALUE = 0xFF;
const char eurexCrossRequestAckSideGrpCompPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestAckSideGrpCompPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // EUREX_CROSSREQUESTACKSIDEGRPCOMP_PACKET_H
