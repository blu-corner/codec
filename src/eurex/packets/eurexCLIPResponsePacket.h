/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_CLIPRESPONSE_PACKET_H
#define EUREX_CLIPRESPONSE_PACKET_H

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

class eurexCLIPResponsePacket
{
    public:
        // no value constants
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t NO_SIDES_MIN;
        static const int8_t NO_SIDES_MAX;
        static const int8_t NO_SIDES_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const int32_t CROSS_REQUEST_ID_MIN;
        static const int32_t CROSS_REQUEST_ID_MAX;
        static const int32_t CROSS_REQUEST_ID_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t CROSS_REQUEST_ACK_SIDE_GRP_MIN;
        static const size_t CROSS_REQUEST_ACK_SIDE_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mExecID;
        int64_t mSecurityID;
        int32_t mMarketSegmentID;
        int8_t mNoSides;
        char mPad3[3];
        int32_t mCrossRequestID;
        char mPad4[4];
        vector<eurexCrossRequestAckSideGrpCompPacket> mCrossRequestAckSideGrp;

        // constructor
        eurexCLIPResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10133;
            mExecID = EXEC_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoSides = NO_SIDES_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
            mCrossRequestID = CROSS_REQUEST_ID_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        int8_t getNoSides () const
        {
            return mNoSides;
        }

        bool setNoSides (int8_t v)
        {
            mNoSides = v;
            return ((NO_SIDES_MIN <= mNoSides && mNoSides <= NO_SIDES_MAX) || mNoSides == NO_SIDES_NO_VALUE);
        }

        bool isNoSidesValid () const
        {
            return (mNoSides != NO_SIDES_NO_VALUE);
        }

        void resetNoSides ()
        {
            mNoSides = NO_SIDES_NO_VALUE;
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

        int32_t getCrossRequestID () const
        {
            return mCrossRequestID;
        }

        bool setCrossRequestID (int32_t v)
        {
            mCrossRequestID = v;
            return ((CROSS_REQUEST_ID_MIN <= mCrossRequestID && mCrossRequestID <= CROSS_REQUEST_ID_MAX) || mCrossRequestID == CROSS_REQUEST_ID_NO_VALUE);
        }

        bool isCrossRequestIDValid () const
        {
            return (mCrossRequestID != CROSS_REQUEST_ID_NO_VALUE);
        }

        void resetCrossRequestID ()
        {
            mCrossRequestID = CROSS_REQUEST_ID_NO_VALUE;
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

        const vector<eurexCrossRequestAckSideGrpCompPacket>& getCrossRequestAckSideGrp () const
        {
            return mCrossRequestAckSideGrp;
        }

        bool setCrossRequestAckSideGrp (const vector<eurexCrossRequestAckSideGrpCompPacket>& v)
        {
            mCrossRequestAckSideGrp = v;
            mNoSides = v.size ();
            return (CROSS_REQUEST_ACK_SIDE_GRP_MIN <= v.size () && v.size () <= CROSS_REQUEST_ACK_SIDE_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mExecID)
                + sizeof (mSecurityID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoSides)
                + sizeof (mPad3)
                + sizeof (mCrossRequestID)
                + sizeof (mPad4)
                + eurex::getRawSize (mCrossRequestAckSideGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSides = mCrossRequestAckSideGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mCrossRequestID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mCrossRequestAckSideGrp.size (); i++)
            {
                state = mCrossRequestAckSideGrp[i].serialize (buf, len, used);
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
            state = eurex::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mCrossRequestID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mCrossRequestAckSideGrp.resize (mNoSides);
            for (vector<eurexCrossRequestAckSideGrpCompPacket>::iterator it = mCrossRequestAckSideGrp.begin (); it != mCrossRequestAckSideGrp.end (); ++it)
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
            sss << "CLIPResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoSides=" << getNoSides () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[CrossRequestID=" << getCrossRequestID () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[CrossRequestAckSideGrp=" << eurex::toString (getCrossRequestAckSideGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexCLIPResponsePacket::EXEC_ID_MIN = 0UL;
const uint64_t eurexCLIPResponsePacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t eurexCLIPResponsePacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexCLIPResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexCLIPResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexCLIPResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const int32_t eurexCLIPResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexCLIPResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexCLIPResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexCLIPResponsePacket::NO_SIDES_MIN = 1;
const int8_t eurexCLIPResponsePacket::NO_SIDES_MAX = 2;
const int8_t eurexCLIPResponsePacket::NO_SIDES_NO_VALUE = 0xFF;
const char eurexCLIPResponsePacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexCLIPResponsePacket::PAD3_MAX_LENGTH = 3;
const int32_t eurexCLIPResponsePacket::CROSS_REQUEST_ID_MIN = -2147483647;
const int32_t eurexCLIPResponsePacket::CROSS_REQUEST_ID_MAX = 2147483647;
const int32_t eurexCLIPResponsePacket::CROSS_REQUEST_ID_NO_VALUE = 0x80000000;
const char eurexCLIPResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexCLIPResponsePacket::PAD4_MAX_LENGTH = 4;
const size_t eurexCLIPResponsePacket::CROSS_REQUEST_ACK_SIDE_GRP_MIN = 1;
const size_t eurexCLIPResponsePacket::CROSS_REQUEST_ACK_SIDE_GRP_MAX = 2;


} // namespace neueda

#endif // EUREX_CLIPRESPONSE_PACKET_H
