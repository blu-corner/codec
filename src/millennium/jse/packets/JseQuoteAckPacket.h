/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_QUOTEACK_PACKET_H
#define JSE_QUOTEACK_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseQuoteAck
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteMsgID[10];
        char mRFQID[10];
        char mBidID[12];
        char mOfferID[12];
        uint8_t mQuoteAckStatus;
        int32_t mRejectCode;
        uint8_t mOrderBook;

        JseQuoteAck ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseQuoteAck) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'e';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteMsgID, '\0', 10);
            memset (mRFQID, '\0', 10);
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
            mQuoteAckStatus = 0;
            mRejectCode = 0;
            mOrderBook = 0;
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
            return setString (mQuoteMsgID, v, 10);
        }

        string getQuoteMsgID ()
        {
            return getString (mQuoteMsgID, 10);
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
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

        bool setQuoteAckStatus (uint8_t v)
        {
            mQuoteAckStatus = v;
            return true;
        }

        uint8_t getQuoteAckStatus ()
        {
            return mQuoteAckStatus;
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

        string toString ()
        {
            stringstream ss;
            ss << "QuoteAck::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteMsgID=" << getQuoteMsgID () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "],"
               << "[QuoteAckStatus=" << unsigned(getQuoteAckStatus ()) << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
