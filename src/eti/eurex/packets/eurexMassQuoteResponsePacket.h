/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_MASSQUOTERESPONSE_PACKET_H
#define EUREX_MASSQUOTERESPONSE_PACKET_H

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

class eurexMassQuoteResponsePacket
{
    public:
        // no value constants
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint64_t QUOTE_RESPONSE_ID_MIN;
        static const uint64_t QUOTE_RESPONSE_ID_MAX;
        static const uint64_t QUOTE_RESPONSE_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t NO_QUOTE_ENTRIES_MIN;
        static const int8_t NO_QUOTE_ENTRIES_MAX;
        static const int8_t NO_QUOTE_ENTRIES_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t QUOTE_ENTRY_ACK_GRP_MIN;
        static const size_t QUOTE_ENTRY_ACK_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mQuoteID;
        uint64_t mQuoteResponseID;
        int32_t mMarketSegmentID;
        int8_t mNoQuoteEntries;
        char mPad3[3];
        vector<eurexQuoteEntryAckGrpCompPacket> mQuoteEntryAckGrp;

        // constructor
        eurexMassQuoteResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10406;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mQuoteResponseID = QUOTE_RESPONSE_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNoQuoteEntries = NO_QUOTE_ENTRIES_NO_VALUE;
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

        uint64_t getQuoteID () const
        {
            return mQuoteID;
        }

        bool setQuoteID (uint64_t v)
        {
            mQuoteID = v;
            return ((QUOTE_ID_MIN <= mQuoteID && mQuoteID <= QUOTE_ID_MAX) || mQuoteID == QUOTE_ID_NO_VALUE);
        }

        bool isQuoteIDValid () const
        {
            return (mQuoteID != QUOTE_ID_NO_VALUE);
        }

        void resetQuoteID ()
        {
            mQuoteID = QUOTE_ID_NO_VALUE;
        }

        uint64_t getQuoteResponseID () const
        {
            return mQuoteResponseID;
        }

        bool setQuoteResponseID (uint64_t v)
        {
            mQuoteResponseID = v;
            return ((QUOTE_RESPONSE_ID_MIN <= mQuoteResponseID && mQuoteResponseID <= QUOTE_RESPONSE_ID_MAX) || mQuoteResponseID == QUOTE_RESPONSE_ID_NO_VALUE);
        }

        bool isQuoteResponseIDValid () const
        {
            return (mQuoteResponseID != QUOTE_RESPONSE_ID_NO_VALUE);
        }

        void resetQuoteResponseID ()
        {
            mQuoteResponseID = QUOTE_RESPONSE_ID_NO_VALUE;
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

        int8_t getNoQuoteEntries () const
        {
            return mNoQuoteEntries;
        }

        bool setNoQuoteEntries (int8_t v)
        {
            mNoQuoteEntries = v;
            return ((NO_QUOTE_ENTRIES_MIN <= mNoQuoteEntries && mNoQuoteEntries <= NO_QUOTE_ENTRIES_MAX) || mNoQuoteEntries == NO_QUOTE_ENTRIES_NO_VALUE);
        }

        bool isNoQuoteEntriesValid () const
        {
            return (mNoQuoteEntries != NO_QUOTE_ENTRIES_NO_VALUE);
        }

        void resetNoQuoteEntries ()
        {
            mNoQuoteEntries = NO_QUOTE_ENTRIES_NO_VALUE;
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

        const vector<eurexQuoteEntryAckGrpCompPacket>& getQuoteEntryAckGrp () const
        {
            return mQuoteEntryAckGrp;
        }

        bool setQuoteEntryAckGrp (const vector<eurexQuoteEntryAckGrpCompPacket>& v)
        {
            mQuoteEntryAckGrp = v;
            mNoQuoteEntries = v.size ();
            return (QUOTE_ENTRY_ACK_GRP_MIN <= v.size () && v.size () <= QUOTE_ENTRY_ACK_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mQuoteID)
                + sizeof (mQuoteResponseID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNoQuoteEntries)
                + sizeof (mPad3)
                + eti::getRawSize (mQuoteEntryAckGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoQuoteEntries = mQuoteEntryAckGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoQuoteEntries, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mQuoteEntryAckGrp.size (); i++)
            {
                state = mQuoteEntryAckGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoQuoteEntries, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mQuoteEntryAckGrp.resize (mNoQuoteEntries);
            for (vector<eurexQuoteEntryAckGrpCompPacket>::iterator it = mQuoteEntryAckGrp.begin (); it != mQuoteEntryAckGrp.end (); ++it)
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
            sss << "MassQuoteResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[QuoteResponseID=" << getQuoteResponseID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NoQuoteEntries=" << getNoQuoteEntries () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[QuoteEntryAckGrp=" << eti::toString (getQuoteEntryAckGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexMassQuoteResponsePacket::QUOTE_ID_MIN = 0UL;
const uint64_t eurexMassQuoteResponsePacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t eurexMassQuoteResponsePacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexMassQuoteResponsePacket::QUOTE_RESPONSE_ID_MIN = 0UL;
const uint64_t eurexMassQuoteResponsePacket::QUOTE_RESPONSE_ID_MAX = 18446744073709551614UL;
const uint64_t eurexMassQuoteResponsePacket::QUOTE_RESPONSE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexMassQuoteResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexMassQuoteResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexMassQuoteResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexMassQuoteResponsePacket::NO_QUOTE_ENTRIES_MIN = 0;
const int8_t eurexMassQuoteResponsePacket::NO_QUOTE_ENTRIES_MAX = 100;
const int8_t eurexMassQuoteResponsePacket::NO_QUOTE_ENTRIES_NO_VALUE = 0xFF;
const char eurexMassQuoteResponsePacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexMassQuoteResponsePacket::PAD3_MAX_LENGTH = 3;
const size_t eurexMassQuoteResponsePacket::QUOTE_ENTRY_ACK_GRP_MIN = 0;
const size_t eurexMassQuoteResponsePacket::QUOTE_ENTRY_ACK_GRP_MAX = 100;


} // namespace neueda

#endif // EUREX_MASSQUOTERESPONSE_PACKET_H
