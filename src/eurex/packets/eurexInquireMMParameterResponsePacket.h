/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_INQUIREMMPARAMETERRESPONSE_PACKET_H
#define EUREX_INQUIREMMPARAMETERRESPONSE_PACKET_H

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

class eurexInquireMMParameterResponsePacket
{
    public:
        // no value constants
        static const uint64_t MMPARAMETER_REPORT_ID_MIN;
        static const uint64_t MMPARAMETER_REPORT_ID_MAX;
        static const uint64_t MMPARAMETER_REPORT_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t NO_MMPARAMETERS_MIN;
        static const int8_t NO_MMPARAMETERS_MAX;
        static const int8_t NO_MMPARAMETERS_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t MMPARAMETER_GRP_MIN;
        static const size_t MMPARAMETER_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mMMParameterReportID;
        int32_t mMarketSegmentID;
        int8_t mNoMMParameters;
        char mPad3[3];
        vector<eurexMMParameterGrpCompPacket> mMMParameterGrp;

        // constructor
        eurexInquireMMParameterResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10306;
            mMMParameterReportID = MMPARAMETER_REPORT_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoMMParameters = NO_MMPARAMETERS_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        const eurexNRResponseHeaderMECompPacket& getNRResponseHeaderME () const
        {
            return mNRResponseHeaderME;
        }

        bool setNRResponseHeaderME (const eurexNRResponseHeaderMECompPacket& v)
        {
            mNRResponseHeaderME = v;
            return true;
        }

        uint64_t getMMParameterReportID () const
        {
            return mMMParameterReportID;
        }

        bool setMMParameterReportID (uint64_t v)
        {
            mMMParameterReportID = v;
            return ((MMPARAMETER_REPORT_ID_MIN <= mMMParameterReportID && mMMParameterReportID <= MMPARAMETER_REPORT_ID_MAX) || mMMParameterReportID == MMPARAMETER_REPORT_ID_NO_VALUE);
        }

        bool isMMParameterReportIDValid () const
        {
            return (mMMParameterReportID != MMPARAMETER_REPORT_ID_NO_VALUE);
        }

        void resetMMParameterReportID ()
        {
            mMMParameterReportID = MMPARAMETER_REPORT_ID_NO_VALUE;
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

        int8_t getNoMMParameters () const
        {
            return mNoMMParameters;
        }

        bool setNoMMParameters (int8_t v)
        {
            mNoMMParameters = v;
            return ((NO_MMPARAMETERS_MIN <= mNoMMParameters && mNoMMParameters <= NO_MMPARAMETERS_MAX) || mNoMMParameters == NO_MMPARAMETERS_NO_VALUE);
        }

        bool isNoMMParametersValid () const
        {
            return (mNoMMParameters != NO_MMPARAMETERS_NO_VALUE);
        }

        void resetNoMMParameters ()
        {
            mNoMMParameters = NO_MMPARAMETERS_NO_VALUE;
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

        const vector<eurexMMParameterGrpCompPacket>& getMMParameterGrp () const
        {
            return mMMParameterGrp;
        }

        bool setMMParameterGrp (const vector<eurexMMParameterGrpCompPacket>& v)
        {
            mMMParameterGrp = v;
            mNoMMParameters = v.size ();
            return (MMPARAMETER_GRP_MIN <= v.size () && v.size () <= MMPARAMETER_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mMMParameterReportID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoMMParameters)
                + sizeof (mPad3)
                + eurex::getRawSize (mMMParameterGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoMMParameters = mMMParameterGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMMParameterReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoMMParameters, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mMMParameterGrp.size (); i++)
            {
                state = mMMParameterGrp[i].serialize (buf, len, used);
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
            state = mNRResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMMParameterReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoMMParameters, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMMParameterGrp.resize (mNoMMParameters);
            for (vector<eurexMMParameterGrpCompPacket>::iterator it = mMMParameterGrp.begin (); it != mMMParameterGrp.end (); ++it)
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
            sss << "InquireMMParameterResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[MMParameterReportID=" << getMMParameterReportID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoMMParameters=" << getNoMMParameters () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[MMParameterGrp=" << eurex::toString (getMMParameterGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexInquireMMParameterResponsePacket::MMPARAMETER_REPORT_ID_MIN = 0UL;
const uint64_t eurexInquireMMParameterResponsePacket::MMPARAMETER_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexInquireMMParameterResponsePacket::MMPARAMETER_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexInquireMMParameterResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexInquireMMParameterResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexInquireMMParameterResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexInquireMMParameterResponsePacket::NO_MMPARAMETERS_MIN = 0;
const int8_t eurexInquireMMParameterResponsePacket::NO_MMPARAMETERS_MAX = 9;
const int8_t eurexInquireMMParameterResponsePacket::NO_MMPARAMETERS_NO_VALUE = 0xFF;
const char eurexInquireMMParameterResponsePacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexInquireMMParameterResponsePacket::PAD3_MAX_LENGTH = 3;
const size_t eurexInquireMMParameterResponsePacket::MMPARAMETER_GRP_MIN = 0;
const size_t eurexInquireMMParameterResponsePacket::MMPARAMETER_GRP_MAX = 9;


} // namespace neueda

#endif // EUREX_INQUIREMMPARAMETERRESPONSE_PACKET_H
