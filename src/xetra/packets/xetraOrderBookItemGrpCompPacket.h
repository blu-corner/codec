/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_ORDERBOOKITEMGRPCOMP_PACKET_H
#define XETRA_ORDERBOOKITEMGRPCOMP_PACKET_H

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

class xetraOrderBookItemGrpCompPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double BEST_BID_PX_MIN;
        static const double BEST_BID_PX_MAX;
        static const int64_t BEST_BID_PX_NO_VALUE;
        static const double BEST_BID_SIZE_MIN;
        static const double BEST_BID_SIZE_MAX;
        static const int64_t BEST_BID_SIZE_NO_VALUE;
        static const double BEST_OFFER_PX_MIN;
        static const double BEST_OFFER_PX_MAX;
        static const int64_t BEST_OFFER_PX_NO_VALUE;
        static const double BEST_OFFER_SIZE_MIN;
        static const double BEST_OFFER_SIZE_MAX;
        static const int64_t BEST_OFFER_SIZE_NO_VALUE;
        static const int8_t MDBOOK_TYPE_MIN;
        static const int8_t MDBOOK_TYPE_MAX;
        static const int8_t MDBOOK_TYPE_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        int64_t mSecurityID;
        int64_t mBestBidPx;
        int64_t mBestBidSize;
        int64_t mBestOfferPx;
        int64_t mBestOfferSize;
        int8_t mMDBookType;
        char mPad7[7];

        // constructor
        xetraOrderBookItemGrpCompPacket ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBestBidPx = BEST_BID_PX_NO_VALUE;
            mBestBidSize = BEST_BID_SIZE_NO_VALUE;
            mBestOfferPx = BEST_OFFER_PX_NO_VALUE;
            mBestOfferSize = BEST_OFFER_SIZE_NO_VALUE;
            mMDBookType = MDBOOK_TYPE_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        double getBestBidPx () const
        {
            return mBestBidPx / 100000000.0;
        }

        bool setBestBidPx (double v)
        {
            mBestBidPx = v * 100000000.0;
            return ((BEST_BID_PX_MIN <= v && v <= BEST_BID_PX_MAX) || mBestBidPx == BEST_BID_PX_NO_VALUE);
        }

        bool isBestBidPxValid () const
        {
            return (mBestBidPx != BEST_BID_PX_NO_VALUE);
        }

        void resetBestBidPx ()
        {
            mBestBidPx = BEST_BID_PX_NO_VALUE;
        }

        double getBestBidSize () const
        {
            return mBestBidSize / 10000.0;
        }

        bool setBestBidSize (double v)
        {
            mBestBidSize = v * 10000.0;
            return ((BEST_BID_SIZE_MIN <= v && v <= BEST_BID_SIZE_MAX) || mBestBidSize == BEST_BID_SIZE_NO_VALUE);
        }

        bool isBestBidSizeValid () const
        {
            return (mBestBidSize != BEST_BID_SIZE_NO_VALUE);
        }

        void resetBestBidSize ()
        {
            mBestBidSize = BEST_BID_SIZE_NO_VALUE;
        }

        double getBestOfferPx () const
        {
            return mBestOfferPx / 100000000.0;
        }

        bool setBestOfferPx (double v)
        {
            mBestOfferPx = v * 100000000.0;
            return ((BEST_OFFER_PX_MIN <= v && v <= BEST_OFFER_PX_MAX) || mBestOfferPx == BEST_OFFER_PX_NO_VALUE);
        }

        bool isBestOfferPxValid () const
        {
            return (mBestOfferPx != BEST_OFFER_PX_NO_VALUE);
        }

        void resetBestOfferPx ()
        {
            mBestOfferPx = BEST_OFFER_PX_NO_VALUE;
        }

        double getBestOfferSize () const
        {
            return mBestOfferSize / 10000.0;
        }

        bool setBestOfferSize (double v)
        {
            mBestOfferSize = v * 10000.0;
            return ((BEST_OFFER_SIZE_MIN <= v && v <= BEST_OFFER_SIZE_MAX) || mBestOfferSize == BEST_OFFER_SIZE_NO_VALUE);
        }

        bool isBestOfferSizeValid () const
        {
            return (mBestOfferSize != BEST_OFFER_SIZE_NO_VALUE);
        }

        void resetBestOfferSize ()
        {
            mBestOfferSize = BEST_OFFER_SIZE_NO_VALUE;
        }

        int8_t getMDBookType () const
        {
            return mMDBookType;
        }

        bool setMDBookType (int8_t v)
        {
            mMDBookType = v;
            return ((MDBOOK_TYPE_MIN <= mMDBookType && mMDBookType <= MDBOOK_TYPE_MAX) || mMDBookType == MDBOOK_TYPE_NO_VALUE);
        }

        bool isMDBookTypeValid () const
        {
            return (mMDBookType != MDBOOK_TYPE_NO_VALUE);
        }

        void resetMDBookType ()
        {
            mMDBookType = MDBOOK_TYPE_NO_VALUE;
        }

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad7[i] = v[i];
            memset (&mPad7[size], '\0', PAD7_MAX_LENGTH-size);
            return (v.size () <= PAD7_MAX_LENGTH);
        }

        bool isPad7Valid () const
        {
            return (memcmp (mPad7, PAD7_NO_VALUE, sizeof (mPad7)) != 0);
        }

        void resetPad7 ()
        {
            memcpy (mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSecurityID)
                + sizeof (mBestBidPx)
                + sizeof (mBestBidSize)
                + sizeof (mBestOfferPx)
                + sizeof (mBestOfferSize)
                + sizeof (mMDBookType)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBestBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBestBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBestOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBestOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMDBookType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBestBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBestBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBestOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBestOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMDBookType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "OrderBookItemGrpComp::"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BestBidPx=" << getBestBidPx () << "],"
                << "[BestBidSize=" << getBestBidSize () << "],"
                << "[BestOfferPx=" << getBestOfferPx () << "],"
                << "[BestOfferSize=" << getBestOfferSize () << "],"
                << "[MDBookType=" << getMDBookType () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int64_t xetraOrderBookItemGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraOrderBookItemGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraOrderBookItemGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraOrderBookItemGrpCompPacket::BEST_BID_PX_MIN = -92233720368.54775807;
const double xetraOrderBookItemGrpCompPacket::BEST_BID_PX_MAX = 92233720368.54775807;
const int64_t xetraOrderBookItemGrpCompPacket::BEST_BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraOrderBookItemGrpCompPacket::BEST_BID_SIZE_MIN = -922337203685477.5807;
const double xetraOrderBookItemGrpCompPacket::BEST_BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraOrderBookItemGrpCompPacket::BEST_BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraOrderBookItemGrpCompPacket::BEST_OFFER_PX_MIN = -92233720368.54775807;
const double xetraOrderBookItemGrpCompPacket::BEST_OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraOrderBookItemGrpCompPacket::BEST_OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraOrderBookItemGrpCompPacket::BEST_OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraOrderBookItemGrpCompPacket::BEST_OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraOrderBookItemGrpCompPacket::BEST_OFFER_SIZE_NO_VALUE = 0x8000000000000000;
const int8_t xetraOrderBookItemGrpCompPacket::MDBOOK_TYPE_MIN = 1;
const int8_t xetraOrderBookItemGrpCompPacket::MDBOOK_TYPE_MAX = 2;
const int8_t xetraOrderBookItemGrpCompPacket::MDBOOK_TYPE_NO_VALUE = 0xFF;
const char xetraOrderBookItemGrpCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraOrderBookItemGrpCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_ORDERBOOKITEMGRPCOMP_PACKET_H
