/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_BESTQUOTEEXECUTIONREPORT_PACKET_H
#define XETRA_BESTQUOTEEXECUTIONREPORT_PACKET_H

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

class xetraBESTQuoteExecutionReportPacket
{
    public:
        // no value constants
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const uint64_t QUOTE_MSG_ID_MIN;
        static const uint64_t QUOTE_MSG_ID_MAX;
        static const uint64_t QUOTE_MSG_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double QUOTE_EVENT_PX_MIN;
        static const double QUOTE_EVENT_PX_MAX;
        static const int64_t QUOTE_EVENT_PX_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t QUOTE_EVENT_MATCH_ID_MIN;
        static const uint32_t QUOTE_EVENT_MATCH_ID_MAX;
        static const uint32_t QUOTE_EVENT_MATCH_ID_NO_VALUE;
        static const int32_t QUOTE_EVENT_EXEC_ID_MIN;
        static const int32_t QUOTE_EVENT_EXEC_ID_MAX;
        static const int32_t QUOTE_EVENT_EXEC_ID_NO_VALUE;
        static const int32_t QUOTE_EVENT_QTY_MIN;
        static const int32_t QUOTE_EVENT_QTY_MAX;
        static const int32_t QUOTE_EVENT_QTY_NO_VALUE;
        static const uint32_t RESERVED_SIZE_MIN;
        static const uint32_t RESERVED_SIZE_MAX;
        static const uint32_t RESERVED_SIZE_NO_VALUE;
        static const int8_t QUOTE_EVENT_TYPE_MIN;
        static const int8_t QUOTE_EVENT_TYPE_MAX;
        static const int8_t QUOTE_EVENT_TYPE_NO_VALUE;
        static const int8_t QUOTE_EVENT_SIDE_MIN;
        static const int8_t QUOTE_EVENT_SIDE_MAX;
        static const int8_t QUOTE_EVENT_SIDE_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mExecID;
        uint64_t mQuoteMsgID;
        int64_t mSecurityID;
        int64_t mQuoteEventPx;
        int32_t mMarketSegmentID;
        uint32_t mQuoteEventMatchID;
        int32_t mQuoteEventExecID;
        int32_t mQuoteEventQty;
        uint32_t mReservedSize;
        int8_t mQuoteEventType;
        int8_t mQuoteEventSide;
        char mPad2[2];

        // constructor
        xetraBESTQuoteExecutionReportPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10414;
            mExecID = EXEC_ID_NO_VALUE;
            mQuoteMsgID = QUOTE_MSG_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mQuoteEventPx = QUOTE_EVENT_PX_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mQuoteEventMatchID = QUOTE_EVENT_MATCH_ID_NO_VALUE;
            mQuoteEventExecID = QUOTE_EVENT_EXEC_ID_NO_VALUE;
            mQuoteEventQty = QUOTE_EVENT_QTY_NO_VALUE;
            mReservedSize = RESERVED_SIZE_NO_VALUE;
            mQuoteEventType = QUOTE_EVENT_TYPE_NO_VALUE;
            mQuoteEventSide = QUOTE_EVENT_SIDE_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
            return true;
        }

        uint64_t getExecID () const
        {
            return mExecID;
        }

        bool setExecID (uint64_t v)
        {
            mExecID = v;
            return ((EXEC_ID_MIN <= mExecID && mExecID <= EXEC_ID_MAX) || mExecID == EXEC_ID_NO_VALUE);
        }

        bool isExecIDValid () const
        {
            return (mExecID != EXEC_ID_NO_VALUE);
        }

        void resetExecID ()
        {
            mExecID = EXEC_ID_NO_VALUE;
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

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
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

        int32_t getQuoteEventQty () const
        {
            return mQuoteEventQty;
        }

        bool setQuoteEventQty (int32_t v)
        {
            mQuoteEventQty = v;
            return ((QUOTE_EVENT_QTY_MIN <= mQuoteEventQty && mQuoteEventQty <= QUOTE_EVENT_QTY_MAX) || mQuoteEventQty == QUOTE_EVENT_QTY_NO_VALUE);
        }

        bool isQuoteEventQtyValid () const
        {
            return (mQuoteEventQty != QUOTE_EVENT_QTY_NO_VALUE);
        }

        void resetQuoteEventQty ()
        {
            mQuoteEventQty = QUOTE_EVENT_QTY_NO_VALUE;
        }

        uint32_t getReservedSize () const
        {
            return mReservedSize;
        }

        bool setReservedSize (uint32_t v)
        {
            mReservedSize = v;
            return ((RESERVED_SIZE_MIN <= mReservedSize && mReservedSize <= RESERVED_SIZE_MAX) || mReservedSize == RESERVED_SIZE_NO_VALUE);
        }

        bool isReservedSizeValid () const
        {
            return (mReservedSize != RESERVED_SIZE_NO_VALUE);
        }

        void resetReservedSize ()
        {
            mReservedSize = RESERVED_SIZE_NO_VALUE;
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

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad2[i] = v[i];
            memset (&mPad2[size], '\0', PAD2_MAX_LENGTH-size);
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mExecID)
                + sizeof (mQuoteMsgID)
                + sizeof (mSecurityID)
                + sizeof (mQuoteEventPx)
                + sizeof (mMarketSegmentID)
                + sizeof (mQuoteEventMatchID)
                + sizeof (mQuoteEventExecID)
                + sizeof (mQuoteEventQty)
                + sizeof (mReservedSize)
                + sizeof (mQuoteEventType)
                + sizeof (mQuoteEventSide)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mReservedSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mReservedSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BESTQuoteExecutionReport::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[QuoteMsgID=" << getQuoteMsgID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[QuoteEventPx=" << getQuoteEventPx () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[QuoteEventMatchID=" << getQuoteEventMatchID () << "],"
                << "[QuoteEventExecID=" << getQuoteEventExecID () << "],"
                << "[QuoteEventQty=" << getQuoteEventQty () << "],"
                << "[ReservedSize=" << getReservedSize () << "],"
                << "[QuoteEventType=" << getQuoteEventType () << "],"
                << "[QuoteEventSide=" << getQuoteEventSide () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint64_t xetraBESTQuoteExecutionReportPacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraBESTQuoteExecutionReportPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraBESTQuoteExecutionReportPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraBESTQuoteExecutionReportPacket::QUOTE_MSG_ID_MIN = 0UL;
const uint64_t xetraBESTQuoteExecutionReportPacket::QUOTE_MSG_ID_MAX = 18446744073709551614UL;
const uint64_t xetraBESTQuoteExecutionReportPacket::QUOTE_MSG_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraBESTQuoteExecutionReportPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraBESTQuoteExecutionReportPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraBESTQuoteExecutionReportPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_PX_MIN = -92233720368.54775807;
const double xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_PX_MAX = 92233720368.54775807;
const int64_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_PX_NO_VALUE = 0x8000000000000000;
const int32_t xetraBESTQuoteExecutionReportPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraBESTQuoteExecutionReportPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraBESTQuoteExecutionReportPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_MATCH_ID_MIN = 0;
const uint32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_MATCH_ID_MAX = 4294967294;
const uint32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_MATCH_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_EXEC_ID_MIN = -2147483647;
const int32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_EXEC_ID_MAX = 2147483647;
const int32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_EXEC_ID_NO_VALUE = 0x80000000;
const int32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_QTY_MIN = -2147483647;
const int32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_QTY_MAX = 2147483647;
const int32_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_QTY_NO_VALUE = 0x80000000;
const uint32_t xetraBESTQuoteExecutionReportPacket::RESERVED_SIZE_MIN = 0;
const uint32_t xetraBESTQuoteExecutionReportPacket::RESERVED_SIZE_MAX = 4294967294;
const uint32_t xetraBESTQuoteExecutionReportPacket::RESERVED_SIZE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_TYPE_MIN = 0;
const int8_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_TYPE_MAX = 5;
const int8_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_TYPE_NO_VALUE = 0xFF;
const int8_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_SIDE_MIN = 1;
const int8_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_SIDE_MAX = 2;
const int8_t xetraBESTQuoteExecutionReportPacket::QUOTE_EVENT_SIDE_NO_VALUE = 0xFF;
const char xetraBESTQuoteExecutionReportPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraBESTQuoteExecutionReportPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_BESTQUOTEEXECUTIONREPORT_PACKET_H
