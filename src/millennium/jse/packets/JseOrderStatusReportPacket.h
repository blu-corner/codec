/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_ORDERSTATUSREPORT_PACKET_H
#define JSE_ORDERSTATUSREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseOrderStatusReport
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteMsgID[10];
        char mQuoteReqID[10];
        uint8_t mQuoteStatus;
        int32_t mRejectCode;
        int32_t mOrderBook;
        char mMarketMakers[60];
        char mRFQID[10];
        char mExpireTime[17];
        char mBidID[12];
        char mOfferID[12];
        uint8_t mTradeSubType;

        JseOrderStatusReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseOrderStatusReport) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'c';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteMsgID, '\0', 10);
            memset (mQuoteReqID, '\0', 10);
            mQuoteStatus = 0;
            mRejectCode = 0;
            mOrderBook = 0;
            memset (mMarketMakers, '\0', 60);
            memset (mRFQID, '\0', 10);
            memset (mExpireTime, '\0', 17);
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
            mTradeSubType = 0;
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

        bool setOrderBook (int32_t v)
        {
            mOrderBook = v;
            return true;
        }

        int32_t getOrderBook ()
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

        bool setExpireTime (const string& v)
        {
            return setString (mExpireTime, v, 17);
        }

        string getExpireTime ()
        {
            return getString (mExpireTime, 17);
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

        bool setTradeSubType (uint8_t v)
        {
            mTradeSubType = v;
            return true;
        }

        uint8_t getTradeSubType ()
        {
            return mTradeSubType;
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderStatusReport::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteMsgID=" << getQuoteMsgID () << "],"
               << "[QuoteReqID=" << getQuoteReqID () << "],"
               << "[QuoteStatus=" << unsigned(getQuoteStatus ()) << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[OrderBook=" << getOrderBook () << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[ExpireTime=" << getExpireTime () << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "],"
               << "[TradeSubType=" << unsigned(getTradeSubType ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
