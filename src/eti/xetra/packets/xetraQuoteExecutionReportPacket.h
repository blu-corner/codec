/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_QUOTEEXECUTIONREPORT_PACKET_H
#define XETRA_QUOTEEXECUTIONREPORT_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraQuoteExecutionReportPacket
{
    public:
        // no value constants
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t NO_QUOTE_EVENTS_MIN;
        static const int8_t NO_QUOTE_EVENTS_MAX;
        static const int8_t NO_QUOTE_EVENTS_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t QUOTE_EVENT_GRP_MIN;
        static const size_t QUOTE_EVENT_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mExecID;
        int32_t mMarketSegmentID;
        int8_t mNoQuoteEvents;
        char mPad3[3];
        vector<xetraQuoteEventGrpCompPacket> mQuoteEventGrp;

        // constructor
        xetraQuoteExecutionReportPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10407;
            mExecID = EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoQuoteEvents = NO_QUOTE_EVENTS_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        int8_t getNoQuoteEvents () const
        {
            return mNoQuoteEvents;
        }

        bool setNoQuoteEvents (int8_t v)
        {
            mNoQuoteEvents = v;
            return ((NO_QUOTE_EVENTS_MIN <= mNoQuoteEvents && mNoQuoteEvents <= NO_QUOTE_EVENTS_MAX) || mNoQuoteEvents == NO_QUOTE_EVENTS_NO_VALUE);
        }

        bool isNoQuoteEventsValid () const
        {
            return (mNoQuoteEvents != NO_QUOTE_EVENTS_NO_VALUE);
        }

        void resetNoQuoteEvents ()
        {
            mNoQuoteEvents = NO_QUOTE_EVENTS_NO_VALUE;
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        const vector<xetraQuoteEventGrpCompPacket>& getQuoteEventGrp () const
        {
            return mQuoteEventGrp;
        }

        bool setQuoteEventGrp (const vector<xetraQuoteEventGrpCompPacket>& v)
        {
            mQuoteEventGrp = v;
            mNoQuoteEvents = v.size ();
            return (QUOTE_EVENT_GRP_MIN <= v.size () && v.size () <= QUOTE_EVENT_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoQuoteEvents)
                + sizeof (mPad3)
                + eti::getRawSize (mQuoteEventGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoQuoteEvents = mQuoteEventGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoQuoteEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mQuoteEventGrp.size (); i++)
            {
                state = mQuoteEventGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = eti::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoQuoteEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mQuoteEventGrp.resize (mNoQuoteEvents);
            for (vector<xetraQuoteEventGrpCompPacket>::iterator it = mQuoteEventGrp.begin (); it != mQuoteEventGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "QuoteExecutionReport::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoQuoteEvents=" << getNoQuoteEvents () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[QuoteEventGrp=" << eti::toString (getQuoteEventGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraQuoteExecutionReportPacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraQuoteExecutionReportPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraQuoteExecutionReportPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraQuoteExecutionReportPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraQuoteExecutionReportPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraQuoteExecutionReportPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t xetraQuoteExecutionReportPacket::NO_QUOTE_EVENTS_MIN = 1;
const int8_t xetraQuoteExecutionReportPacket::NO_QUOTE_EVENTS_MAX = 100;
const int8_t xetraQuoteExecutionReportPacket::NO_QUOTE_EVENTS_NO_VALUE = 0xFF;
const char xetraQuoteExecutionReportPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraQuoteExecutionReportPacket::PAD3_MAX_LENGTH = 3;
const size_t xetraQuoteExecutionReportPacket::QUOTE_EVENT_GRP_MIN = 1;
const size_t xetraQuoteExecutionReportPacket::QUOTE_EVENT_GRP_MAX = 100;


} // namespace neueda

#endif // XETRA_QUOTEEXECUTIONREPORT_PACKET_H
