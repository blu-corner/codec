/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_SRQSRELATEDTRADEIDGRPCOMP_PACKET_H
#define EUREX_SRQSRELATEDTRADEIDGRPCOMP_PACKET_H

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

class eurexSRQSRelatedTradeIDGrpCompPacket
{
    public:
        // no value constants
        static const uint32_t SRQSRELATED_TRADE_ID_MIN;
        static const uint32_t SRQSRELATED_TRADE_ID_MAX;
        static const uint32_t SRQSRELATED_TRADE_ID_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        uint32_t mSRQSRelatedTradeID;
        char mPad4[4];

        // constructor
        eurexSRQSRelatedTradeIDGrpCompPacket ()
        {
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        uint32_t getSRQSRelatedTradeID () const
        {
            return mSRQSRelatedTradeID;
        }

        bool setSRQSRelatedTradeID (uint32_t v)
        {
            mSRQSRelatedTradeID = v;
            return ((SRQSRELATED_TRADE_ID_MIN <= mSRQSRelatedTradeID && mSRQSRelatedTradeID <= SRQSRELATED_TRADE_ID_MAX) || mSRQSRelatedTradeID == SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        bool isSRQSRelatedTradeIDValid () const
        {
            return (mSRQSRelatedTradeID != SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        void resetSRQSRelatedTradeID ()
        {
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
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
            size_t result = sizeof (mSRQSRelatedTradeID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SRQSRelatedTradeIDGrpComp::"
                << "[SRQSRelatedTradeID=" << getSRQSRelatedTradeID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint32_t eurexSRQSRelatedTradeIDGrpCompPacket::SRQSRELATED_TRADE_ID_MIN = 0;
const uint32_t eurexSRQSRelatedTradeIDGrpCompPacket::SRQSRELATED_TRADE_ID_MAX = 4294967294;
const uint32_t eurexSRQSRelatedTradeIDGrpCompPacket::SRQSRELATED_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const char eurexSRQSRelatedTradeIDGrpCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSRelatedTradeIDGrpCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_SRQSRELATEDTRADEIDGRPCOMP_PACKET_H
