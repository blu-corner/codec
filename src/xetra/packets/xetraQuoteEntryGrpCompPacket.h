/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_QUOTEENTRYGRPCOMP_PACKET_H
#define XETRA_QUOTEENTRYGRPCOMP_PACKET_H

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

class xetraQuoteEntryGrpCompPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double BID_SIZE_MIN;
        static const double BID_SIZE_MAX;
        static const int64_t BID_SIZE_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double OFFER_SIZE_MIN;
        static const double OFFER_SIZE_MAX;
        static const int64_t OFFER_SIZE_NO_VALUE;

        // fields (use with care)
        int64_t mSecurityID;
        int64_t mBidPx;
        int64_t mBidSize;
        int64_t mOfferPx;
        int64_t mOfferSize;

        // constructor
        xetraQuoteEntryGrpCompPacket ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mBidSize = BID_SIZE_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOfferSize = OFFER_SIZE_NO_VALUE;
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

        double getBidPx () const
        {
            return mBidPx / 100000000.0;
        }

        bool setBidPx (double v)
        {
            mBidPx = v * 100000000.0;
            return ((BID_PX_MIN <= v && v <= BID_PX_MAX) || mBidPx == BID_PX_NO_VALUE);
        }

        bool isBidPxValid () const
        {
            return (mBidPx != BID_PX_NO_VALUE);
        }

        void resetBidPx ()
        {
            mBidPx = BID_PX_NO_VALUE;
        }

        double getBidSize () const
        {
            return mBidSize / 10000.0;
        }

        bool setBidSize (double v)
        {
            mBidSize = v * 10000.0;
            return ((BID_SIZE_MIN <= v && v <= BID_SIZE_MAX) || mBidSize == BID_SIZE_NO_VALUE);
        }

        bool isBidSizeValid () const
        {
            return (mBidSize != BID_SIZE_NO_VALUE);
        }

        void resetBidSize ()
        {
            mBidSize = BID_SIZE_NO_VALUE;
        }

        double getOfferPx () const
        {
            return mOfferPx / 100000000.0;
        }

        bool setOfferPx (double v)
        {
            mOfferPx = v * 100000000.0;
            return ((OFFER_PX_MIN <= v && v <= OFFER_PX_MAX) || mOfferPx == OFFER_PX_NO_VALUE);
        }

        bool isOfferPxValid () const
        {
            return (mOfferPx != OFFER_PX_NO_VALUE);
        }

        void resetOfferPx ()
        {
            mOfferPx = OFFER_PX_NO_VALUE;
        }

        double getOfferSize () const
        {
            return mOfferSize / 10000.0;
        }

        bool setOfferSize (double v)
        {
            mOfferSize = v * 10000.0;
            return ((OFFER_SIZE_MIN <= v && v <= OFFER_SIZE_MAX) || mOfferSize == OFFER_SIZE_NO_VALUE);
        }

        bool isOfferSizeValid () const
        {
            return (mOfferSize != OFFER_SIZE_NO_VALUE);
        }

        void resetOfferSize ()
        {
            mOfferSize = OFFER_SIZE_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSecurityID)
                + sizeof (mBidPx)
                + sizeof (mBidSize)
                + sizeof (mOfferPx)
                + sizeof (mOfferSize);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "QuoteEntryGrpComp::"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[BidSize=" << getBidSize () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OfferSize=" << getOfferSize () << "]";
            return sss.str();
        }
};

const int64_t xetraQuoteEntryGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraQuoteEntryGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraQuoteEntryGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEntryGrpCompPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraQuoteEntryGrpCompPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraQuoteEntryGrpCompPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEntryGrpCompPacket::BID_SIZE_MIN = -922337203685477.5807;
const double xetraQuoteEntryGrpCompPacket::BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraQuoteEntryGrpCompPacket::BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEntryGrpCompPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraQuoteEntryGrpCompPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraQuoteEntryGrpCompPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraQuoteEntryGrpCompPacket::OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraQuoteEntryGrpCompPacket::OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraQuoteEntryGrpCompPacket::OFFER_SIZE_NO_VALUE = 0x8000000000000000;


} // namespace neueda

#endif // XETRA_QUOTEENTRYGRPCOMP_PACKET_H
