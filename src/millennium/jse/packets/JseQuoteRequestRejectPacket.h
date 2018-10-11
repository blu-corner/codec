/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_QUOTEREQUESTREJECT_PACKET_H
#define JSE_QUOTEREQUESTREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseQuoteRequestReject
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteReqID[10];
        int32_t mRejectCode;
        int32_t mOrderBook;
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        uint8_t mSide;
        int32_t mOrderQuantity;
        char mMarketMakers[60];
        char mRFQID[10];

        JseQuoteRequestReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseQuoteRequestReject) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'b';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteReqID, '\0', 10);
            mRejectCode = 0;
            mOrderBook = 0;
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            mSide = 0;
            mOrderQuantity = 0;
            memset (mMarketMakers, '\0', 60);
            memset (mRFQID, '\0', 10);
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

        bool setQuoteReqID (const string& v)
        {
            return setString (mQuoteReqID, v, 10);
        }

        string getQuoteReqID ()
        {
            return getString (mQuoteReqID, 10);
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

        string toString ()
        {
            stringstream ss;
            ss << "QuoteRequestReject::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteReqID=" << getQuoteReqID () << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[OrderBook=" << getOrderBook () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[RFQID=" << getRFQID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
