/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_QUOTERESPONSE_PACKET_H
#define JSE_QUOTERESPONSE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseQuoteResponse
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteMsgID[10];
        char mRFQID[10];
        uint8_t mQuoteRespType;
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        uint8_t mSide;
        int32_t mOrderQuantity;
        int64_t mCoverPrice;
        uint8_t mOrderBook;
        char mBidID[12];
        char mOfferID[12];
        int64_t mRate;
        int64_t mAllinPrice;

        JseQuoteResponse ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseQuoteResponse) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'f';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteMsgID, '\0', 10);
            memset (mRFQID, '\0', 10);
            mQuoteRespType = 0;
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            mSide = 0;
            mOrderQuantity = 0;
            mCoverPrice = 0;
            mOrderBook = 0;
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
            mRate = 0;
            mAllinPrice = 0;
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

        bool setQuoteRespType (uint8_t v)
        {
            mQuoteRespType = v;
            return true;
        }

        uint8_t getQuoteRespType ()
        {
            return mQuoteRespType;
        }

        bool setSecurityID (int32_t v)
        {
            mSecurityID = v;
            return true;
        }

        int32_t getSecurityID ()
        {
            return mSecurityID;
        }

        bool setTraderMnemonic (const string& v)
        {
            return setString (mTraderMnemonic, v, 17);
        }

        string getTraderMnemonic ()
        {
            return getString (mTraderMnemonic, 17);
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

        bool setOrderQuantity (int32_t v)
        {
            mOrderQuantity = v;
            return true;
        }

        int32_t getOrderQuantity ()
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

        bool setRate (int64_t v)
        {
            mRate = v;
            return true;
        }

        int64_t getRate ()
        {
            return mRate;
        }

        bool setAllinPrice (int64_t v)
        {
            mAllinPrice = v;
            return true;
        }

        int64_t getAllinPrice ()
        {
            return mAllinPrice;
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
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[CoverPrice=" << getCoverPrice () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "],"
               << "[Rate=" << getRate () << "],"
               << "[AllinPrice=" << getAllinPrice () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
