/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_SRQSQUOTEENTRYGRPCOMP_PACKET_H
#define XETRA_SRQSQUOTEENTRYGRPCOMP_PACKET_H

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

class xetraSRQSQuoteEntryGrpCompPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint64_t SECONDARY_QUOTE_ID_MIN;
        static const uint64_t SECONDARY_QUOTE_ID_MAX;
        static const uint64_t SECONDARY_QUOTE_ID_NO_VALUE;
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
        static const uint32_t PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const int8_t QUOTING_STATUS_MIN;
        static const int8_t QUOTING_STATUS_MAX;
        static const int8_t QUOTING_STATUS_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        uint64_t mTransactTime;
        uint64_t mQuoteID;
        uint64_t mSecondaryQuoteID;
        int64_t mBidPx;
        int64_t mBidSize;
        int64_t mOfferPx;
        int64_t mOfferSize;
        uint32_t mPartyIDExecutingTrader;
        int8_t mQuotingStatus;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mPartyEnteringTrader[6];
        char mPad2[2];

        // constructor
        xetraSRQSQuoteEntryGrpCompPacket ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mSecondaryQuoteID = SECONDARY_QUOTE_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mBidSize = BID_SIZE_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOfferSize = OFFER_SIZE_NO_VALUE;
            mPartyIDExecutingTrader = PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mQuotingStatus = QUOTING_STATUS_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        // getters & setters
        uint64_t getTransactTime () const
        {
            return mTransactTime;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return ((TRANSACT_TIME_MIN <= mTransactTime && mTransactTime <= TRANSACT_TIME_MAX) || mTransactTime == TRANSACT_TIME_NO_VALUE);
        }

        bool isTransactTimeValid () const
        {
            return (mTransactTime != TRANSACT_TIME_NO_VALUE);
        }

        void resetTransactTime ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
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

        uint64_t getSecondaryQuoteID () const
        {
            return mSecondaryQuoteID;
        }

        bool setSecondaryQuoteID (uint64_t v)
        {
            mSecondaryQuoteID = v;
            return ((SECONDARY_QUOTE_ID_MIN <= mSecondaryQuoteID && mSecondaryQuoteID <= SECONDARY_QUOTE_ID_MAX) || mSecondaryQuoteID == SECONDARY_QUOTE_ID_NO_VALUE);
        }

        bool isSecondaryQuoteIDValid () const
        {
            return (mSecondaryQuoteID != SECONDARY_QUOTE_ID_NO_VALUE);
        }

        void resetSecondaryQuoteID ()
        {
            mSecondaryQuoteID = SECONDARY_QUOTE_ID_NO_VALUE;
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

        uint32_t getPartyIDExecutingTrader () const
        {
            return mPartyIDExecutingTrader;
        }

        bool setPartyIDExecutingTrader (uint32_t v)
        {
            mPartyIDExecutingTrader = v;
            return ((PARTY_IDEXECUTING_TRADER_MIN <= mPartyIDExecutingTrader && mPartyIDExecutingTrader <= PARTY_IDEXECUTING_TRADER_MAX) || mPartyIDExecutingTrader == PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isPartyIDExecutingTraderValid () const
        {
            return (mPartyIDExecutingTrader != PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetPartyIDExecutingTrader ()
        {
            mPartyIDExecutingTrader = PARTY_IDEXECUTING_TRADER_NO_VALUE;
        }

        int8_t getQuotingStatus () const
        {
            return mQuotingStatus;
        }

        bool setQuotingStatus (int8_t v)
        {
            mQuotingStatus = v;
            return ((QUOTING_STATUS_MIN <= mQuotingStatus && mQuotingStatus <= QUOTING_STATUS_MAX) || mQuotingStatus == QUOTING_STATUS_NO_VALUE);
        }

        bool isQuotingStatusValid () const
        {
            return (mQuotingStatus != QUOTING_STATUS_NO_VALUE);
        }

        void resetQuotingStatus ()
        {
            mQuotingStatus = QUOTING_STATUS_NO_VALUE;
        }

        string getPartyExecutingFirm () const
        {
            return string (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setPartyExecutingFirm (const string& v)
        {
            memset (mPartyExecutingFirm, '\0', sizeof (mPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isPartyExecutingFirmValid () const
        {
            return (memcmp (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm)) != 0);
        }

        void resetPartyExecutingFirm ()
        {
            memcpy (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
        }

        string getPartyExecutingTrader () const
        {
            return string (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setPartyExecutingTrader (const string& v)
        {
            memset (mPartyExecutingTrader, '\0', sizeof (mPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isPartyExecutingTraderValid () const
        {
            return (memcmp (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader)) != 0);
        }

        void resetPartyExecutingTrader ()
        {
            memcpy (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
        }

        string getPartyEnteringTrader () const
        {
            return string (mPartyEnteringTrader, PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool setPartyEnteringTrader (const string& v)
        {
            memset (mPartyEnteringTrader, '\0', sizeof (mPartyEnteringTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_ENTERING_TRADER_MAX_LENGTH);
            strncpy (mPartyEnteringTrader, v.c_str (), size);
            return (v.size () <= PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool isPartyEnteringTraderValid () const
        {
            return (memcmp (mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader)) != 0);
        }

        void resetPartyEnteringTrader ()
        {
            memcpy (mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mTransactTime)
                + sizeof (mQuoteID)
                + sizeof (mSecondaryQuoteID)
                + sizeof (mBidPx)
                + sizeof (mBidSize)
                + sizeof (mOfferPx)
                + sizeof (mOfferSize)
                + sizeof (mPartyIDExecutingTrader)
                + sizeof (mQuotingStatus)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecondaryQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuotingStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecondaryQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuotingStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SRQSQuoteEntryGrpComp::"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[SecondaryQuoteID=" << getSecondaryQuoteID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[BidSize=" << getBidSize () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OfferSize=" << getOfferSize () << "],"
                << "[PartyIDExecutingTrader=" << getPartyIDExecutingTrader () << "],"
                << "[QuotingStatus=" << getQuotingStatus () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint64_t xetraSRQSQuoteEntryGrpCompPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::SECONDARY_QUOTE_ID_MIN = 0UL;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::SECONDARY_QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraSRQSQuoteEntryGrpCompPacket::SECONDARY_QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraSRQSQuoteEntryGrpCompPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraSRQSQuoteEntryGrpCompPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraSRQSQuoteEntryGrpCompPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraSRQSQuoteEntryGrpCompPacket::BID_SIZE_MIN = -922337203685477.5807;
const double xetraSRQSQuoteEntryGrpCompPacket::BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraSRQSQuoteEntryGrpCompPacket::BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraSRQSQuoteEntryGrpCompPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraSRQSQuoteEntryGrpCompPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraSRQSQuoteEntryGrpCompPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraSRQSQuoteEntryGrpCompPacket::OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraSRQSQuoteEntryGrpCompPacket::OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraSRQSQuoteEntryGrpCompPacket::OFFER_SIZE_NO_VALUE = 0x8000000000000000;
const uint32_t xetraSRQSQuoteEntryGrpCompPacket::PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t xetraSRQSQuoteEntryGrpCompPacket::PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t xetraSRQSQuoteEntryGrpCompPacket::PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraSRQSQuoteEntryGrpCompPacket::QUOTING_STATUS_MIN = 0;
const int8_t xetraSRQSQuoteEntryGrpCompPacket::QUOTING_STATUS_MAX = 4;
const int8_t xetraSRQSQuoteEntryGrpCompPacket::QUOTING_STATUS_NO_VALUE = 0xFF;
const char xetraSRQSQuoteEntryGrpCompPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSRQSQuoteEntryGrpCompPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraSRQSQuoteEntryGrpCompPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSRQSQuoteEntryGrpCompPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraSRQSQuoteEntryGrpCompPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSRQSQuoteEntryGrpCompPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char xetraSRQSQuoteEntryGrpCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraSRQSQuoteEntryGrpCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_SRQSQUOTEENTRYGRPCOMP_PACKET_H
