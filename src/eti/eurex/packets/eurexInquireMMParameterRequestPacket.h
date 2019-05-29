/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_INQUIREMMPARAMETERREQUEST_PACKET_H
#define EUREX_INQUIREMMPARAMETERREQUEST_PACKET_H

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

class eurexInquireMMParameterRequestPacket
{
    public:
        // no value constants
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int32_t mMarketSegmentID;
        uint32_t mTargetPartyIDSessionID;

        // constructor
        eurexInquireMMParameterRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10305;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
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

        uint32_t getTargetPartyIDSessionID () const
        {
            return mTargetPartyIDSessionID;
        }

        bool setTargetPartyIDSessionID (uint32_t v)
        {
            mTargetPartyIDSessionID = v;
            return ((TARGET_PARTY_IDSESSION_ID_MIN <= mTargetPartyIDSessionID && mTargetPartyIDSessionID <= TARGET_PARTY_IDSESSION_ID_MAX) || mTargetPartyIDSessionID == TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isTargetPartyIDSessionIDValid () const
        {
            return (mTargetPartyIDSessionID != TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetTargetPartyIDSessionID ()
        {
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mMarketSegmentID)
                + sizeof (mTargetPartyIDSessionID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "InquireMMParameterRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "]";
            return sss.str();
        }
};

const int32_t eurexInquireMMParameterRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexInquireMMParameterRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexInquireMMParameterRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexInquireMMParameterRequestPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t eurexInquireMMParameterRequestPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t eurexInquireMMParameterRequestPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;


} // namespace neueda

#endif // EUREX_INQUIREMMPARAMETERREQUEST_PACKET_H
