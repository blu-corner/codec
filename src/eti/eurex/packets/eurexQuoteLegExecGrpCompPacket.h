/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_QUOTELEGEXECGRPCOMP_PACKET_H
#define EUREX_QUOTELEGEXECGRPCOMP_PACKET_H

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

class eurexQuoteLegExecGrpCompPacket
{
    public:
        // no value constants
        static const int64_t LEG_SECURITY_ID_MIN;
        static const int64_t LEG_SECURITY_ID_MAX;
        static const int64_t LEG_SECURITY_ID_NO_VALUE;
        static const double LEG_LAST_PX_MIN;
        static const double LEG_LAST_PX_MAX;
        static const int64_t LEG_LAST_PX_NO_VALUE;
        static const double LEG_LAST_QTY_MIN;
        static const double LEG_LAST_QTY_MAX;
        static const int64_t LEG_LAST_QTY_NO_VALUE;
        static const int32_t LEG_EXEC_ID_MIN;
        static const int32_t LEG_EXEC_ID_MAX;
        static const int32_t LEG_EXEC_ID_NO_VALUE;
        static const int8_t LEG_SIDE_MIN;
        static const int8_t LEG_SIDE_MAX;
        static const int8_t LEG_SIDE_NO_VALUE;
        static const int8_t NO_QUOTE_EVENTS_INDEX_MIN;
        static const int8_t NO_QUOTE_EVENTS_INDEX_MAX;
        static const int8_t NO_QUOTE_EVENTS_INDEX_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        int64_t mLegSecurityID;
        int64_t mLegLastPx;
        int64_t mLegLastQty;
        int32_t mLegExecID;
        int8_t mLegSide;
        int8_t mNoQuoteEventsIndex;
        char mPad2[2];

        // constructor
        eurexQuoteLegExecGrpCompPacket ()
        {
            mLegSecurityID = LEG_SECURITY_ID_NO_VALUE;
            mLegLastPx = LEG_LAST_PX_NO_VALUE;
            mLegLastQty = LEG_LAST_QTY_NO_VALUE;
            mLegExecID = LEG_EXEC_ID_NO_VALUE;
            mLegSide = LEG_SIDE_NO_VALUE;
            mNoQuoteEventsIndex = NO_QUOTE_EVENTS_INDEX_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        double getLegLastPx () const
        {
            return mLegLastPx / 100000000.0;
        }

        bool setLegLastPx (double v)
        {
            mLegLastPx = v * 100000000.0;
            return ((LEG_LAST_PX_MIN <= v && v <= LEG_LAST_PX_MAX) || mLegLastPx == LEG_LAST_PX_NO_VALUE);
        }

        bool isLegLastPxValid () const
        {
            return (mLegLastPx != LEG_LAST_PX_NO_VALUE);
        }

        void resetLegLastPx ()
        {
            mLegLastPx = LEG_LAST_PX_NO_VALUE;
        }

        double getLegLastQty () const
        {
            return mLegLastQty / 10000.0;
        }

        bool setLegLastQty (double v)
        {
            mLegLastQty = v * 10000.0;
            return ((LEG_LAST_QTY_MIN <= v && v <= LEG_LAST_QTY_MAX) || mLegLastQty == LEG_LAST_QTY_NO_VALUE);
        }

        bool isLegLastQtyValid () const
        {
            return (mLegLastQty != LEG_LAST_QTY_NO_VALUE);
        }

        void resetLegLastQty ()
        {
            mLegLastQty = LEG_LAST_QTY_NO_VALUE;
        }

        int32_t getLegExecID () const
        {
            return mLegExecID;
        }

        bool setLegExecID (int32_t v)
        {
            mLegExecID = v;
            return ((LEG_EXEC_ID_MIN <= mLegExecID && mLegExecID <= LEG_EXEC_ID_MAX) || mLegExecID == LEG_EXEC_ID_NO_VALUE);
        }

        bool isLegExecIDValid () const
        {
            return (mLegExecID != LEG_EXEC_ID_NO_VALUE);
        }

        void resetLegExecID ()
        {
            mLegExecID = LEG_EXEC_ID_NO_VALUE;
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

        int8_t getNoQuoteEventsIndex () const
        {
            return mNoQuoteEventsIndex;
        }

        bool setNoQuoteEventsIndex (int8_t v)
        {
            mNoQuoteEventsIndex = v;
            return ((NO_QUOTE_EVENTS_INDEX_MIN <= mNoQuoteEventsIndex && mNoQuoteEventsIndex <= NO_QUOTE_EVENTS_INDEX_MAX) || mNoQuoteEventsIndex == NO_QUOTE_EVENTS_INDEX_NO_VALUE);
        }

        bool isNoQuoteEventsIndexValid () const
        {
            return (mNoQuoteEventsIndex != NO_QUOTE_EVENTS_INDEX_NO_VALUE);
        }

        void resetNoQuoteEventsIndex ()
        {
            mNoQuoteEventsIndex = NO_QUOTE_EVENTS_INDEX_NO_VALUE;
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mLegSecurityID)
                + sizeof (mLegLastPx)
                + sizeof (mLegLastQty)
                + sizeof (mLegExecID)
                + sizeof (mLegSide)
                + sizeof (mNoQuoteEventsIndex)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mLegSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLegLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLegLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLegExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLegSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoQuoteEventsIndex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mLegSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLegLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLegLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLegExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLegSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoQuoteEventsIndex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "QuoteLegExecGrpComp::"
                << "[LegSecurityID=" << getLegSecurityID () << "],"
                << "[LegLastPx=" << getLegLastPx () << "],"
                << "[LegLastQty=" << getLegLastQty () << "],"
                << "[LegExecID=" << getLegExecID () << "],"
                << "[LegSide=" << getLegSide () << "],"
                << "[NoQuoteEventsIndex=" << getNoQuoteEventsIndex () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const int64_t eurexQuoteLegExecGrpCompPacket::LEG_SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexQuoteLegExecGrpCompPacket::LEG_SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexQuoteLegExecGrpCompPacket::LEG_SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexQuoteLegExecGrpCompPacket::LEG_LAST_PX_MIN = -92233720368.54775807;
const double eurexQuoteLegExecGrpCompPacket::LEG_LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexQuoteLegExecGrpCompPacket::LEG_LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexQuoteLegExecGrpCompPacket::LEG_LAST_QTY_MIN = -922337203685477.5807;
const double eurexQuoteLegExecGrpCompPacket::LEG_LAST_QTY_MAX = 922337203685477.5807;
const int64_t eurexQuoteLegExecGrpCompPacket::LEG_LAST_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexQuoteLegExecGrpCompPacket::LEG_EXEC_ID_MIN = -2147483647;
const int32_t eurexQuoteLegExecGrpCompPacket::LEG_EXEC_ID_MAX = 2147483647;
const int32_t eurexQuoteLegExecGrpCompPacket::LEG_EXEC_ID_NO_VALUE = 0x80000000;
const int8_t eurexQuoteLegExecGrpCompPacket::LEG_SIDE_MIN = 1;
const int8_t eurexQuoteLegExecGrpCompPacket::LEG_SIDE_MAX = 2;
const int8_t eurexQuoteLegExecGrpCompPacket::LEG_SIDE_NO_VALUE = 0xFF;
const int8_t eurexQuoteLegExecGrpCompPacket::NO_QUOTE_EVENTS_INDEX_MIN = 1;
const int8_t eurexQuoteLegExecGrpCompPacket::NO_QUOTE_EVENTS_INDEX_MAX = 100;
const int8_t eurexQuoteLegExecGrpCompPacket::NO_QUOTE_EVENTS_INDEX_NO_VALUE = 0xFF;
const char eurexQuoteLegExecGrpCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexQuoteLegExecGrpCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // EUREX_QUOTELEGEXECGRPCOMP_PACKET_H
