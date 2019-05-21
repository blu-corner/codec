/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_QUOTEEXECUTIONREPORT_PACKET_H
#define EUREX_QUOTEEXECUTIONREPORT_PACKET_H

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

class eurexQuoteExecutionReportPacket
{
    public:
        // no value constants
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t NO_LEG_EXECS_MIN;
        static const int16_t NO_LEG_EXECS_MAX;
        static const int16_t NO_LEG_EXECS_NO_VALUE;
        static const int8_t NO_QUOTE_EVENTS_MIN;
        static const int8_t NO_QUOTE_EVENTS_MAX;
        static const int8_t NO_QUOTE_EVENTS_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t QUOTE_EVENT_GRP_MIN;
        static const size_t QUOTE_EVENT_GRP_MAX;
        static const size_t QUOTE_LEG_EXEC_GRP_MIN;
        static const size_t QUOTE_LEG_EXEC_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mExecID;
        int32_t mMarketSegmentID;
        int16_t mNoLegExecs;
        int8_t mNoQuoteEvents;
        char mPad1[1];
        vector<eurexQuoteEventGrpCompPacket> mQuoteEventGrp;
        vector<eurexQuoteLegExecGrpCompPacket> mQuoteLegExecGrp;

        // constructor
        eurexQuoteExecutionReportPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10407;
            mExecID = EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoLegExecs = NO_LEG_EXECS_NO_VALUE;
            mNoQuoteEvents = NO_QUOTE_EVENTS_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const eurexRBCHeaderMECompPacket& v)
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

        int16_t getNoLegExecs () const
        {
            return mNoLegExecs;
        }

        bool setNoLegExecs (int16_t v)
        {
            mNoLegExecs = v;
            return ((NO_LEG_EXECS_MIN <= mNoLegExecs && mNoLegExecs <= NO_LEG_EXECS_MAX) || mNoLegExecs == NO_LEG_EXECS_NO_VALUE);
        }

        bool isNoLegExecsValid () const
        {
            return (mNoLegExecs != NO_LEG_EXECS_NO_VALUE);
        }

        void resetNoLegExecs ()
        {
            mNoLegExecs = NO_LEG_EXECS_NO_VALUE;
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

        const vector<eurexQuoteEventGrpCompPacket>& getQuoteEventGrp () const
        {
            return mQuoteEventGrp;
        }

        bool setQuoteEventGrp (const vector<eurexQuoteEventGrpCompPacket>& v)
        {
            mQuoteEventGrp = v;
            mNoQuoteEvents = v.size ();
            return (QUOTE_EVENT_GRP_MIN <= v.size () && v.size () <= QUOTE_EVENT_GRP_MAX);
        }

        const vector<eurexQuoteLegExecGrpCompPacket>& getQuoteLegExecGrp () const
        {
            return mQuoteLegExecGrp;
        }

        bool setQuoteLegExecGrp (const vector<eurexQuoteLegExecGrpCompPacket>& v)
        {
            mQuoteLegExecGrp = v;
            mNoLegExecs = v.size ();
            return (QUOTE_LEG_EXEC_GRP_MIN <= v.size () && v.size () <= QUOTE_LEG_EXEC_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoLegExecs)
                + sizeof (mNoQuoteEvents)
                + sizeof (mPad1)
                + eti::getRawSize (mQuoteEventGrp)
                + eti::getRawSize (mQuoteLegExecGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoQuoteEvents = mQuoteEventGrp.size ();
            mNoLegExecs = mQuoteLegExecGrp.size ();
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
            state = eti::serialize (mNoLegExecs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoQuoteEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mQuoteEventGrp.size (); i++)
            {
                state = mQuoteEventGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mQuoteLegExecGrp.size (); i++)
            {
                state = mQuoteLegExecGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mNoLegExecs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoQuoteEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mQuoteEventGrp.resize (mNoQuoteEvents);
            for (vector<eurexQuoteEventGrpCompPacket>::iterator it = mQuoteEventGrp.begin (); it != mQuoteEventGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mQuoteLegExecGrp.resize (mNoLegExecs);
            for (vector<eurexQuoteLegExecGrpCompPacket>::iterator it = mQuoteLegExecGrp.begin (); it != mQuoteLegExecGrp.end (); ++it)
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
                << "[NoLegExecs=" << getNoLegExecs () << "],"
                << "[NoQuoteEvents=" << getNoQuoteEvents () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[QuoteEventGrp=" << eti::toString (getQuoteEventGrp ()) << "],"
                << "[QuoteLegExecGrp=" << eti::toString (getQuoteLegExecGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexQuoteExecutionReportPacket::EXEC_ID_MIN = 0UL;
const uint64_t eurexQuoteExecutionReportPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t eurexQuoteExecutionReportPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexQuoteExecutionReportPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexQuoteExecutionReportPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexQuoteExecutionReportPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexQuoteExecutionReportPacket::NO_LEG_EXECS_MIN = 0;
const int16_t eurexQuoteExecutionReportPacket::NO_LEG_EXECS_MAX = 600;
const int16_t eurexQuoteExecutionReportPacket::NO_LEG_EXECS_NO_VALUE = 0xFFFF;
const int8_t eurexQuoteExecutionReportPacket::NO_QUOTE_EVENTS_MIN = 1;
const int8_t eurexQuoteExecutionReportPacket::NO_QUOTE_EVENTS_MAX = 100;
const int8_t eurexQuoteExecutionReportPacket::NO_QUOTE_EVENTS_NO_VALUE = 0xFF;
const char eurexQuoteExecutionReportPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexQuoteExecutionReportPacket::PAD1_MAX_LENGTH = 1;
const size_t eurexQuoteExecutionReportPacket::QUOTE_EVENT_GRP_MIN = 1;
const size_t eurexQuoteExecutionReportPacket::QUOTE_EVENT_GRP_MAX = 100;
const size_t eurexQuoteExecutionReportPacket::QUOTE_LEG_EXEC_GRP_MIN = 0;
const size_t eurexQuoteExecutionReportPacket::QUOTE_LEG_EXEC_GRP_MAX = 600;


} // namespace neueda

#endif // EUREX_QUOTEEXECUTIONREPORT_PACKET_H
