/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_QUOTESTATUSREPORT_PACKET_H
#define BORSAITALIANA_QUOTESTATUSREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaQuoteStatusReport
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mReservedforfutureuse1[20];
        char mQuoteReqID[10];
        uint8_t mQuoteStatus;
        int32_t mRejectCode;
        uint8_t mOrderBook;
        char mMarketMakers[60];
        char mRFQID[10];
        uint32_t mExpireTime;
        char mBidID[12];
        char mOfferID[12];

        BorsaItalianaQuoteStatusReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaQuoteStatusReport) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'c';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mReservedforfutureuse1, '\0', 20);
            memset (mQuoteReqID, '\0', 10);
            mQuoteStatus = 0;
            mRejectCode = 0;
            mOrderBook = 0;
            memset (mMarketMakers, '\0', 60);
            memset (mRFQID, '\0', 10);
            mExpireTime = 0;
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
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

        bool setReservedforfutureuse1 (const string& v)
        {
            return setString (mReservedforfutureuse1, v, 20);
        }

        string getReservedforfutureuse1 ()
        {
            return getString (mReservedforfutureuse1, 20);
        }

        bool setQuoteReqID (const string& v)
        {
            return setString (mQuoteReqID, v, 10);
        }

        string getQuoteReqID ()
        {
            return getString (mQuoteReqID, 10);
        }

        bool setQuoteStatus (uint8_t v)
        {
            mQuoteStatus = v;
            return true;
        }

        uint8_t getQuoteStatus ()
        {
            return mQuoteStatus;
        }

        bool setRejectCode (int32_t v)
        {
            mRejectCode = v;
            return true;
        }

        int32_t getRejectCode ()
        {
            return mRejectCode;
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

        bool setMarketMakers (const string& v)
        {
            return setString (mMarketMakers, v, 60);
        }

        string getMarketMakers ()
        {
            return getString (mMarketMakers, 60);
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
        }

        bool setExpireTime (uint32_t v)
        {
            mExpireTime = v;
            return true;
        }

        uint32_t getExpireTime ()
        {
            return mExpireTime;
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

        string toString ()
        {
            stringstream ss;
            ss << "QuoteStatusReport::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[Reservedforfutureuse1=" << getReservedforfutureuse1 () << "],"
               << "[QuoteReqID=" << getQuoteReqID () << "],"
               << "[QuoteStatus=" << unsigned(getQuoteStatus ()) << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[ExpireTime=" << getExpireTime () << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
