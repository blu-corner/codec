/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_QUOTERESPONSE_PACKET_H
#define BORSAITALIANA_QUOTERESPONSE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaQuoteResponse
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteMsgID[20];
        char mRFQID[10];
        uint8_t mQuoteRespType;
        int32_t mInstrumentID;
        uint8_t mSide;
        uint64_t mOrderQuantity;
        int64_t mCoverPrice;
        uint8_t mOrderBook;
        char mBidID[12];
        char mOfferID[12];
        uint8_t mCapacity;
        uint8_t mClearingAccount;

        BorsaItalianaQuoteResponse ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaQuoteResponse) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'f';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteMsgID, '\0', 20);
            memset (mRFQID, '\0', 10);
            mQuoteRespType = 0;
            mInstrumentID = 0;
            mSide = 0;
            mOrderQuantity = 0;
            mCoverPrice = 0;
            mOrderBook = 0;
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
            mCapacity = 0;
            mClearingAccount = 0;
        }

        bool setPartitionID (uint8_t v)
        {
            mPartitionID = v;
            return true;
        }

        uint8_t getPartitionID ()
        {
            return mPartitionID;
        }

        bool setSequenceNumber (int32_t v)
        {
            mSequenceNumber = v;
            return true;
        }

        int32_t getSequenceNumber ()
        {
            return mSequenceNumber;
        }

        bool setQuoteMsgID (const string& v)
        {
            return setString (mQuoteMsgID, v, 20);
        }

        string getQuoteMsgID ()
        {
            return getString (mQuoteMsgID, 20);
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
        }

        bool setQuoteRespType (uint8_t v)
        {
            mQuoteRespType = v;
            return true;
        }

        uint8_t getQuoteRespType ()
        {
            return mQuoteRespType;
        }

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
        }

        bool setSide (uint8_t v)
        {
            mSide = v;
            return true;
        }

        uint8_t getSide ()
        {
            return mSide;
        }

        bool setOrderQuantity (uint64_t v)
        {
            mOrderQuantity = v;
            return true;
        }

        uint64_t getOrderQuantity ()
        {
            return mOrderQuantity;
        }

        bool setCoverPrice (int64_t v)
        {
            mCoverPrice = v;
            return true;
        }

        int64_t getCoverPrice ()
        {
            return mCoverPrice;
        }

        bool setOrderBook (uint8_t v)
        {
            mOrderBook = v;
            return true;
        }

        uint8_t getOrderBook ()
        {
            return mOrderBook;
        }

        bool setBidID (const string& v)
        {
            return setString (mBidID, v, 12);
        }

        string getBidID ()
        {
            return getString (mBidID, 12);
        }

        bool setOfferID (const string& v)
        {
            return setString (mOfferID, v, 12);
        }

        string getOfferID ()
        {
            return getString (mOfferID, 12);
        }

        bool setCapacity (uint8_t v)
        {
            mCapacity = v;
            return true;
        }

        uint8_t getCapacity ()
        {
            return mCapacity;
        }

        bool setClearingAccount (uint8_t v)
        {
            mClearingAccount = v;
            return true;
        }

        uint8_t getClearingAccount ()
        {
            return mClearingAccount;
        }

        string toString ()
        {
            stringstream ss;
            ss << "QuoteResponse::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteMsgID=" << getQuoteMsgID () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[QuoteRespType=" << unsigned(getQuoteRespType ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[CoverPrice=" << getCoverPrice () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[ClearingAccount=" << unsigned(getClearingAccount ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
