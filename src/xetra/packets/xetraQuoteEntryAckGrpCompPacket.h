/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_QUOTEENTRYACKGRPCOMP_PACKET_H
#define XETRA_QUOTEENTRYACKGRPCOMP_PACKET_H

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

class xetraQuoteEntryAckGrpCompPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const int32_t BID_CXL_SIZE_MIN;
        static const int32_t BID_CXL_SIZE_MAX;
        static const int32_t BID_CXL_SIZE_NO_VALUE;
        static const int32_t OFFER_CXL_SIZE_MIN;
        static const int32_t OFFER_CXL_SIZE_MAX;
        static const int32_t OFFER_CXL_SIZE_NO_VALUE;
        static const int32_t QUOTE_ENTRY_REJECT_REASON_MIN;
        static const int32_t QUOTE_ENTRY_REJECT_REASON_MAX;
        static const int32_t QUOTE_ENTRY_REJECT_REASON_NO_VALUE;
        static const int8_t QUOTE_ENTRY_STATUS_MIN;
        static const int8_t QUOTE_ENTRY_STATUS_MAX;
        static const int8_t QUOTE_ENTRY_STATUS_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        int64_t mSecurityID;
        int32_t mBidCxlSize;
        int32_t mOfferCxlSize;
        int32_t mQuoteEntryRejectReason;
        int8_t mQuoteEntryStatus;
        char mPad3[3];

        // constructor
        xetraQuoteEntryAckGrpCompPacket ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidCxlSize = BID_CXL_SIZE_NO_VALUE;
            mOfferCxlSize = OFFER_CXL_SIZE_NO_VALUE;
            mQuoteEntryRejectReason = QUOTE_ENTRY_REJECT_REASON_NO_VALUE;
            mQuoteEntryStatus = QUOTE_ENTRY_STATUS_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        int32_t getBidCxlSize () const
        {
            return mBidCxlSize;
        }

        bool setBidCxlSize (int32_t v)
        {
            mBidCxlSize = v;
            return ((BID_CXL_SIZE_MIN <= mBidCxlSize && mBidCxlSize <= BID_CXL_SIZE_MAX) || mBidCxlSize == BID_CXL_SIZE_NO_VALUE);
        }

        bool isBidCxlSizeValid () const
        {
            return (mBidCxlSize != BID_CXL_SIZE_NO_VALUE);
        }

        void resetBidCxlSize ()
        {
            mBidCxlSize = BID_CXL_SIZE_NO_VALUE;
        }

        int32_t getOfferCxlSize () const
        {
            return mOfferCxlSize;
        }

        bool setOfferCxlSize (int32_t v)
        {
            mOfferCxlSize = v;
            return ((OFFER_CXL_SIZE_MIN <= mOfferCxlSize && mOfferCxlSize <= OFFER_CXL_SIZE_MAX) || mOfferCxlSize == OFFER_CXL_SIZE_NO_VALUE);
        }

        bool isOfferCxlSizeValid () const
        {
            return (mOfferCxlSize != OFFER_CXL_SIZE_NO_VALUE);
        }

        void resetOfferCxlSize ()
        {
            mOfferCxlSize = OFFER_CXL_SIZE_NO_VALUE;
        }

        int32_t getQuoteEntryRejectReason () const
        {
            return mQuoteEntryRejectReason;
        }

        bool setQuoteEntryRejectReason (int32_t v)
        {
            mQuoteEntryRejectReason = v;
            return ((QUOTE_ENTRY_REJECT_REASON_MIN <= mQuoteEntryRejectReason && mQuoteEntryRejectReason <= QUOTE_ENTRY_REJECT_REASON_MAX) || mQuoteEntryRejectReason == QUOTE_ENTRY_REJECT_REASON_NO_VALUE);
        }

        bool isQuoteEntryRejectReasonValid () const
        {
            return (mQuoteEntryRejectReason != QUOTE_ENTRY_REJECT_REASON_NO_VALUE);
        }

        void resetQuoteEntryRejectReason ()
        {
            mQuoteEntryRejectReason = QUOTE_ENTRY_REJECT_REASON_NO_VALUE;
        }

        int8_t getQuoteEntryStatus () const
        {
            return mQuoteEntryStatus;
        }

        bool setQuoteEntryStatus (int8_t v)
        {
            mQuoteEntryStatus = v;
            return ((QUOTE_ENTRY_STATUS_MIN <= mQuoteEntryStatus && mQuoteEntryStatus <= QUOTE_ENTRY_STATUS_MAX) || mQuoteEntryStatus == QUOTE_ENTRY_STATUS_NO_VALUE);
        }

        bool isQuoteEntryStatusValid () const
        {
            return (mQuoteEntryStatus != QUOTE_ENTRY_STATUS_NO_VALUE);
        }

        void resetQuoteEntryStatus ()
        {
            mQuoteEntryStatus = QUOTE_ENTRY_STATUS_NO_VALUE;
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad3[i] = v[i];
            memset (&mPad3[size], '\0', PAD3_MAX_LENGTH-size);
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSecurityID)
                + sizeof (mBidCxlSize)
                + sizeof (mOfferCxlSize)
                + sizeof (mQuoteEntryRejectReason)
                + sizeof (mQuoteEntryStatus)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEntryRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEntryStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferCxlSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEntryRejectReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEntryStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "QuoteEntryAckGrpComp::"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidCxlSize=" << getBidCxlSize () << "],"
                << "[OfferCxlSize=" << getOfferCxlSize () << "],"
                << "[QuoteEntryRejectReason=" << getQuoteEntryRejectReason () << "],"
                << "[QuoteEntryStatus=" << getQuoteEntryStatus () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const int64_t xetraQuoteEntryAckGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraQuoteEntryAckGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraQuoteEntryAckGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const int32_t xetraQuoteEntryAckGrpCompPacket::BID_CXL_SIZE_MIN = -2147483647;
const int32_t xetraQuoteEntryAckGrpCompPacket::BID_CXL_SIZE_MAX = 2147483647;
const int32_t xetraQuoteEntryAckGrpCompPacket::BID_CXL_SIZE_NO_VALUE = 0x80000000;
const int32_t xetraQuoteEntryAckGrpCompPacket::OFFER_CXL_SIZE_MIN = -2147483647;
const int32_t xetraQuoteEntryAckGrpCompPacket::OFFER_CXL_SIZE_MAX = 2147483647;
const int32_t xetraQuoteEntryAckGrpCompPacket::OFFER_CXL_SIZE_NO_VALUE = 0x80000000;
const int32_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_REJECT_REASON_MIN = 0;
const int32_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_REJECT_REASON_MAX = 65535;
const int32_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_REJECT_REASON_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_STATUS_MIN = 0;
const int8_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_STATUS_MAX = 100;
const int8_t xetraQuoteEntryAckGrpCompPacket::QUOTE_ENTRY_STATUS_NO_VALUE = 0xFF;
const char xetraQuoteEntryAckGrpCompPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraQuoteEntryAckGrpCompPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_QUOTEENTRYACKGRPCOMP_PACKET_H
