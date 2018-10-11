/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_QUOTEREQUESTREJECT_PACKET_H
#define BORSAITALIANA_QUOTEREQUESTREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaQuoteRequestReject
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteReqID[10];
        int32_t mRejectCode;
        uint8_t mOrderBook;
        int32_t mInstrumentID;
        int8_t mSide;
        uint64_t mOrderQuantity;
        char mMarketMakers[60];
        char mContraTrader[11];
        char mRFQID[10];

        BorsaItalianaQuoteRequestReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaQuoteRequestReject) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'b';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteReqID, '\0', 10);
            mRejectCode = 0;
            mOrderBook = 0;
            mInstrumentID = 0;
            mSide = 0;
            mOrderQuantity = 0;
            memset (mMarketMakers, '\0', 60);
            memset (mContraTrader, '\0', 11);
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

        bool setOrderBook (uint8_t v)
        {
            mOrderBook = v;
            return true;
        }

        uint8_t getOrderBook ()
        {
            return mOrderBook;
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

        bool setSide (int8_t v)
        {
            mSide = v;
            return true;
        }

        int8_t getSide ()
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

        bool setMarketMakers (const string& v)
        {
            return setString (mMarketMakers, v, 60);
        }

        string getMarketMakers ()
        {
            return getString (mMarketMakers, 60);
        }

        bool setContraTrader (const string& v)
        {
            return setString (mContraTrader, v, 11);
        }

        string getContraTrader ()
        {
            return getString (mContraTrader, 11);
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
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[Side=" << getSide () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[ContraTrader=" << getContraTrader () << "],"
               << "[RFQID=" << getRFQID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
