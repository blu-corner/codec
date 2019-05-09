/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_BESTQUOTERESPONSE_PACKET_H
#define XETRA_BESTQUOTERESPONSE_PACKET_H

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

class xetraBESTQuoteResponsePacket
{
    public:
        // no value constants
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint64_t QUOTE_RESPONSE_ID_MIN;
        static const uint64_t QUOTE_RESPONSE_ID_MAX;
        static const uint64_t QUOTE_RESPONSE_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double BID_CXL_SIZE_MIN;
        static const double BID_CXL_SIZE_MAX;
        static const int64_t BID_CXL_SIZE_NO_VALUE;
        static const double OFFER_CXL_SIZE_MIN;
        static const double OFFER_CXL_SIZE_MAX;
        static const int64_t OFFER_CXL_SIZE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mQuoteID;
        uint64_t mQuoteResponseID;
        int64_t mSecurityID;
        int64_t mBidCxlSize;
        int64_t mOfferCxlSize;
        int32_t mMarketSegmentID;
        char mPad4[4];

        // constructor
        xetraBESTQuoteResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10413;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mQuoteResponseID = QUOTE_RESPONSE_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidCxlSize = BID_CXL_SIZE_NO_VALUE;
            mOfferCxlSize = OFFER_CXL_SIZE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        const xetraNRResponseHeaderMECompPacket& getNRResponseHeaderME () const
        {
            return mNRResponseHeaderME;
        }

        bool setNRResponseHeaderME (const xetraNRResponseHeaderMECompPacket& v)
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

        double getBidCxlSize () const
        {
            return mBidCxlSize / 10000.0;
        }

        bool setBidCxlSize (double v)
        {
            mBidCxlSize = v * 10000.0;
            return ((BID_CXL_SIZE_MIN <= v && v <= BID_CXL_SIZE_MAX) || mBidCxlSize == BID_CXL_SIZE_NO_VALUE);
        }

        bool isBidCxlSizeValid () const
        {
            return (mBidCxlSize != BID_CXL_SIZE_NO_VALUE);
        }

        void resetBidCxlSize ()
        {
            mBidCxlSize = BID_CXL_SIZE_NO_VALUE;
        }

        double getOfferCxlSize () const
        {
            return mOfferCxlSize / 10000.0;
        }

        bool setOfferCxlSize (double v)
        {
            mOfferCxlSize = v * 10000.0;
            return ((OFFER_CXL_SIZE_MIN <= v && v <= OFFER_CXL_SIZE_MAX) || mOfferCxlSize == OFFER_CXL_SIZE_NO_VALUE);
        }

        bool isOfferCxlSizeValid () const
        {
            return (mOfferCxlSize != OFFER_CXL_SIZE_NO_VALUE);
        }

        void resetOfferCxlSize ()
        {
            mOfferCxlSize = OFFER_CXL_SIZE_NO_VALUE;
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mQuoteID)
                + sizeof (mQuoteResponseID)
                + sizeof (mSecurityID)
                + sizeof (mBidCxlSize)
                + sizeof (mOfferCxlSize)
                + sizeof (mMarketSegmentID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
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
            state = xetra::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteResponseID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BESTQuoteResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[QuoteResponseID=" << getQuoteResponseID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidCxlSize=" << getBidCxlSize () << "],"
                << "[OfferCxlSize=" << getOfferCxlSize () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint64_t xetraBESTQuoteResponsePacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraBESTQuoteResponsePacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraBESTQuoteResponsePacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraBESTQuoteResponsePacket::QUOTE_RESPONSE_ID_MIN = 0UL;
const uint64_t xetraBESTQuoteResponsePacket::QUOTE_RESPONSE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraBESTQuoteResponsePacket::QUOTE_RESPONSE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraBESTQuoteResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraBESTQuoteResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraBESTQuoteResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraBESTQuoteResponsePacket::BID_CXL_SIZE_MIN = -922337203685477.5807;
const double xetraBESTQuoteResponsePacket::BID_CXL_SIZE_MAX = 922337203685477.5807;
const int64_t xetraBESTQuoteResponsePacket::BID_CXL_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraBESTQuoteResponsePacket::OFFER_CXL_SIZE_MIN = -922337203685477.5807;
const double xetraBESTQuoteResponsePacket::OFFER_CXL_SIZE_MAX = 922337203685477.5807;
const int64_t xetraBESTQuoteResponsePacket::OFFER_CXL_SIZE_NO_VALUE = 0x8000000000000000;
const int32_t xetraBESTQuoteResponsePacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraBESTQuoteResponsePacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraBESTQuoteResponsePacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const char xetraBESTQuoteResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraBESTQuoteResponsePacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_BESTQUOTERESPONSE_PACKET_H
