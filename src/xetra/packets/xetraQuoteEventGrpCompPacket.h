/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_QUOTEEVENTGRPCOMP_PACKET_H
#define XETRA_QUOTEEVENTGRPCOMP_PACKET_H

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

class xetraQuoteEventGrpCompPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double QUOTE_EVENT_PX_MIN;
        static const double QUOTE_EVENT_PX_MAX;
        static const int64_t QUOTE_EVENT_PX_NO_VALUE;
        static const double QUOTE_EVENT_QTY_MIN;
        static const double QUOTE_EVENT_QTY_MAX;
        static const int64_t QUOTE_EVENT_QTY_NO_VALUE;
        static const uint64_t QUOTE_MSG_ID_MIN;
        static const uint64_t QUOTE_MSG_ID_MAX;
        static const uint64_t QUOTE_MSG_ID_NO_VALUE;
        static const uint32_t QUOTE_EVENT_MATCH_ID_MIN;
        static const uint32_t QUOTE_EVENT_MATCH_ID_MAX;
        static const uint32_t QUOTE_EVENT_MATCH_ID_NO_VALUE;
        static const int32_t QUOTE_EVENT_EXEC_ID_MIN;
        static const int32_t QUOTE_EVENT_EXEC_ID_MAX;
        static const int32_t QUOTE_EVENT_EXEC_ID_NO_VALUE;
        static const int8_t QUOTE_EVENT_TYPE_MIN;
        static const int8_t QUOTE_EVENT_TYPE_MAX;
        static const int8_t QUOTE_EVENT_TYPE_NO_VALUE;
        static const int8_t QUOTE_EVENT_SIDE_MIN;
        static const int8_t QUOTE_EVENT_SIDE_MAX;
        static const int8_t QUOTE_EVENT_SIDE_NO_VALUE;
        static const int8_t QUOTE_EVENT_LIQUIDITY_IND_MIN;
        static const int8_t QUOTE_EVENT_LIQUIDITY_IND_MAX;
        static const int8_t QUOTE_EVENT_LIQUIDITY_IND_NO_VALUE;
        static const int8_t QUOTE_EVENT_REASON_MIN;
        static const int8_t QUOTE_EVENT_REASON_MAX;
        static const int8_t QUOTE_EVENT_REASON_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        int64_t mSecurityID;
        int64_t mQuoteEventPx;
        int64_t mQuoteEventQty;
        uint64_t mQuoteMsgID;
        uint32_t mQuoteEventMatchID;
        int32_t mQuoteEventExecID;
        int8_t mQuoteEventType;
        int8_t mQuoteEventSide;
        int8_t mQuoteEventLiquidityInd;
        int8_t mQuoteEventReason;
        char mPad4[4];

        // constructor
        xetraQuoteEventGrpCompPacket ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
            mQuoteEventPx = QUOTE_EVENT_PX_NO_VALUE;
            mQuoteEventQty = QUOTE_EVENT_QTY_NO_VALUE;
            mQuoteMsgID = QUOTE_MSG_ID_NO_VALUE;
            mQuoteEventMatchID = QUOTE_EVENT_MATCH_ID_NO_VALUE;
            mQuoteEventExecID = QUOTE_EVENT_EXEC_ID_NO_VALUE;
            mQuoteEventType = QUOTE_EVENT_TYPE_NO_VALUE;
            mQuoteEventSide = QUOTE_EVENT_SIDE_NO_VALUE;
            mQuoteEventLiquidityInd = QUOTE_EVENT_LIQUIDITY_IND_NO_VALUE;
            mQuoteEventReason = QUOTE_EVENT_REASON_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
        }

        double getQuoteEventPx () const
        {
            return mQuoteEventPx / 100000000.0;
        }

        bool setQuoteEventPx (double v)
        {
            mQuoteEventPx = v * 100000000.0;
            return ((QUOTE_EVENT_PX_MIN <= v && v <= QUOTE_EVENT_PX_MAX) || mQuoteEventPx == QUOTE_EVENT_PX_NO_VALUE);
        }

        bool isQuoteEventPxValid () const
        {
            return (mQuoteEventPx != QUOTE_EVENT_PX_NO_VALUE);
        }

        void resetQuoteEventPx ()
        {
            mQuoteEventPx = QUOTE_EVENT_PX_NO_VALUE;
        }

        double getQuoteEventQty () const
        {
            return mQuoteEventQty / 10000.0;
        }

        bool setQuoteEventQty (double v)
        {
            mQuoteEventQty = v * 10000.0;
            return ((QUOTE_EVENT_QTY_MIN <= v && v <= QUOTE_EVENT_QTY_MAX) || mQuoteEventQty == QUOTE_EVENT_QTY_NO_VALUE);
        }

        bool isQuoteEventQtyValid () const
        {
            return (mQuoteEventQty != QUOTE_EVENT_QTY_NO_VALUE);
        }

        void resetQuoteEventQty ()
        {
            mQuoteEventQty = QUOTE_EVENT_QTY_NO_VALUE;
        }

        uint64_t getQuoteMsgID () const
        {
            return mQuoteMsgID;
        }

        bool setQuoteMsgID (uint64_t v)
        {
            mQuoteMsgID = v;
            return ((QUOTE_MSG_ID_MIN <= mQuoteMsgID && mQuoteMsgID <= QUOTE_MSG_ID_MAX) || mQuoteMsgID == QUOTE_MSG_ID_NO_VALUE);
        }

        bool isQuoteMsgIDValid () const
        {
            return (mQuoteMsgID != QUOTE_MSG_ID_NO_VALUE);
        }

        void resetQuoteMsgID ()
        {
            mQuoteMsgID = QUOTE_MSG_ID_NO_VALUE;
        }

        uint32_t getQuoteEventMatchID () const
        {
            return mQuoteEventMatchID;
        }

        bool setQuoteEventMatchID (uint32_t v)
        {
            mQuoteEventMatchID = v;
            return ((QUOTE_EVENT_MATCH_ID_MIN <= mQuoteEventMatchID && mQuoteEventMatchID <= QUOTE_EVENT_MATCH_ID_MAX) || mQuoteEventMatchID == QUOTE_EVENT_MATCH_ID_NO_VALUE);
        }

        bool isQuoteEventMatchIDValid () const
        {
            return (mQuoteEventMatchID != QUOTE_EVENT_MATCH_ID_NO_VALUE);
        }

        void resetQuoteEventMatchID ()
        {
            mQuoteEventMatchID = QUOTE_EVENT_MATCH_ID_NO_VALUE;
        }

        int32_t getQuoteEventExecID () const
        {
            return mQuoteEventExecID;
        }

        bool setQuoteEventExecID (int32_t v)
        {
            mQuoteEventExecID = v;
            return ((QUOTE_EVENT_EXEC_ID_MIN <= mQuoteEventExecID && mQuoteEventExecID <= QUOTE_EVENT_EXEC_ID_MAX) || mQuoteEventExecID == QUOTE_EVENT_EXEC_ID_NO_VALUE);
        }

        bool isQuoteEventExecIDValid () const
        {
            return (mQuoteEventExecID != QUOTE_EVENT_EXEC_ID_NO_VALUE);
        }

        void resetQuoteEventExecID ()
        {
            mQuoteEventExecID = QUOTE_EVENT_EXEC_ID_NO_VALUE;
        }

        int8_t getQuoteEventType () const
        {
            return mQuoteEventType;
        }

        bool setQuoteEventType (int8_t v)
        {
            mQuoteEventType = v;
            return ((QUOTE_EVENT_TYPE_MIN <= mQuoteEventType && mQuoteEventType <= QUOTE_EVENT_TYPE_MAX) || mQuoteEventType == QUOTE_EVENT_TYPE_NO_VALUE);
        }

        bool isQuoteEventTypeValid () const
        {
            return (mQuoteEventType != QUOTE_EVENT_TYPE_NO_VALUE);
        }

        void resetQuoteEventType ()
        {
            mQuoteEventType = QUOTE_EVENT_TYPE_NO_VALUE;
        }

        int8_t getQuoteEventSide () const
        {
            return mQuoteEventSide;
        }

        bool setQuoteEventSide (int8_t v)
        {
            mQuoteEventSide = v;
            return ((QUOTE_EVENT_SIDE_MIN <= mQuoteEventSide && mQuoteEventSide <= QUOTE_EVENT_SIDE_MAX) || mQuoteEventSide == QUOTE_EVENT_SIDE_NO_VALUE);
        }

        bool isQuoteEventSideValid () const
        {
            return (mQuoteEventSide != QUOTE_EVENT_SIDE_NO_VALUE);
        }

        void resetQuoteEventSide ()
        {
            mQuoteEventSide = QUOTE_EVENT_SIDE_NO_VALUE;
        }

        int8_t getQuoteEventLiquidityInd () const
        {
            return mQuoteEventLiquidityInd;
        }

        bool setQuoteEventLiquidityInd (int8_t v)
        {
            mQuoteEventLiquidityInd = v;
            return ((QUOTE_EVENT_LIQUIDITY_IND_MIN <= mQuoteEventLiquidityInd && mQuoteEventLiquidityInd <= QUOTE_EVENT_LIQUIDITY_IND_MAX) || mQuoteEventLiquidityInd == QUOTE_EVENT_LIQUIDITY_IND_NO_VALUE);
        }

        bool isQuoteEventLiquidityIndValid () const
        {
            return (mQuoteEventLiquidityInd != QUOTE_EVENT_LIQUIDITY_IND_NO_VALUE);
        }

        void resetQuoteEventLiquidityInd ()
        {
            mQuoteEventLiquidityInd = QUOTE_EVENT_LIQUIDITY_IND_NO_VALUE;
        }

        int8_t getQuoteEventReason () const
        {
            return mQuoteEventReason;
        }

        bool setQuoteEventReason (int8_t v)
        {
            mQuoteEventReason = v;
            return ((QUOTE_EVENT_REASON_MIN <= mQuoteEventReason && mQuoteEventReason <= QUOTE_EVENT_REASON_MAX) || mQuoteEventReason == QUOTE_EVENT_REASON_NO_VALUE);
        }

        bool isQuoteEventReasonValid () const
        {
            return (mQuoteEventReason != QUOTE_EVENT_REASON_NO_VALUE);
        }

        void resetQuoteEventReason ()
        {
            mQuoteEventReason = QUOTE_EVENT_REASON_NO_VALUE;
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad4[i] = v[i];
            memset (&mPad4[size], '\0', PAD4_MAX_LENGTH-size);
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
            size_t result = sizeof (mSecurityID)
                + sizeof (mQuoteEventPx)
                + sizeof (mQuoteEventQty)
                + sizeof (mQuoteMsgID)
                + sizeof (mQuoteEventMatchID)
                + sizeof (mQuoteEventExecID)
                + sizeof (mQuoteEventType)
                + sizeof (mQuoteEventSide)
                + sizeof (mQuoteEventLiquidityInd)
                + sizeof (mQuoteEventReason)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "QuoteEventGrpComp::"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[QuoteEventPx=" << getQuoteEventPx () << "],"
                << "[QuoteEventQty=" << getQuoteEventQty () << "],"
                << "[QuoteMsgID=" << getQuoteMsgID () << "],"
                << "[QuoteEventMatchID=" << getQuoteEventMatchID () << "],"
                << "[QuoteEventExecID=" << getQuoteEventExecID () << "],"
                << "[QuoteEventType=" << getQuoteEventType () << "],"
                << "[QuoteEventSide=" << getQuoteEventSide () << "],"
                << "[QuoteEventLiquidityInd=" << getQuoteEventLiquidityInd () << "],"
                << "[QuoteEventReason=" << getQuoteEventReason () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const int64_t xetraQuoteEventGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraQuoteEventGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraQuoteEventGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEventGrpCompPacket::QUOTE_EVENT_PX_MIN = -92233720368.54775807;
const double xetraQuoteEventGrpCompPacket::QUOTE_EVENT_PX_MAX = 92233720368.54775807;
const int64_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_PX_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEventGrpCompPacket::QUOTE_EVENT_QTY_MIN = -922337203685477.5807;
const double xetraQuoteEventGrpCompPacket::QUOTE_EVENT_QTY_MAX = 922337203685477.5807;
const int64_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraQuoteEventGrpCompPacket::QUOTE_MSG_ID_MIN = 0UL;
const uint64_t xetraQuoteEventGrpCompPacket::QUOTE_MSG_ID_MAX = 18446744073709551614UL;
const uint64_t xetraQuoteEventGrpCompPacket::QUOTE_MSG_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_MATCH_ID_MIN = 0;
const uint32_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_MATCH_ID_MAX = 4294967294;
const uint32_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_MATCH_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_EXEC_ID_MIN = -2147483647;
const int32_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_EXEC_ID_MAX = 2147483647;
const int32_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_EXEC_ID_NO_VALUE = 0x80000000;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_TYPE_MIN = 0;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_TYPE_MAX = 5;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_TYPE_NO_VALUE = 0xFF;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_SIDE_MIN = 1;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_SIDE_MAX = 2;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_SIDE_NO_VALUE = 0xFF;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_LIQUIDITY_IND_MIN = 1;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_LIQUIDITY_IND_MAX = 4;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_LIQUIDITY_IND_NO_VALUE = 0xFF;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_REASON_MIN = 14;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_REASON_MAX = 18;
const int8_t xetraQuoteEventGrpCompPacket::QUOTE_EVENT_REASON_NO_VALUE = 0xFF;
const char xetraQuoteEventGrpCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraQuoteEventGrpCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_QUOTEEVENTGRPCOMP_PACKET_H
