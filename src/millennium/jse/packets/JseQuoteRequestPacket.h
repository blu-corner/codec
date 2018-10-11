/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_QUOTEREQUEST_PACKET_H
#define JSE_QUOTEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseQuoteRequest
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteReqID[10];
        uint8_t mOrderBook;
        uint8_t mPrivateQuote;
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        char mAccount[10];
        uint8_t mSide;
        int32_t mOrderQuantity;
        char mExpireTime[17];
        char mMarketMakers[60];
        char mContraFirm[11];
        char mRFQID[10];
        uint8_t mTradeSubType;
        uint32_t mStartDate;
        uint32_t mEndDate;
        char mClientInformation[30];

        JseQuoteRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseQuoteRequest) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'a';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteReqID, '\0', 10);
            mOrderBook = 0;
            mPrivateQuote = 0;
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            memset (mAccount, '\0', 10);
            mSide = 0;
            mOrderQuantity = 0;
            memset (mExpireTime, '\0', 17);
            memset (mMarketMakers, '\0', 60);
            memset (mContraFirm, '\0', 11);
            memset (mRFQID, '\0', 10);
            mTradeSubType = 0;
            mStartDate = 0;
            mEndDate = 0;
            memset (mClientInformation, '\0', 30);
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

        bool setOrderBook (uint8_t v)
        {
            mOrderBook = v;
            return true;
        }

        uint8_t getOrderBook ()
        {
            return mOrderBook;
        }

        bool setPrivateQuote (uint8_t v)
        {
            mPrivateQuote = v;
            return true;
        }

        uint8_t getPrivateQuote ()
        {
            return mPrivateQuote;
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

        bool setAccount (const string& v)
        {
            return setString (mAccount, v, 10);
        }

        string getAccount ()
        {
            return getString (mAccount, 10);
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

        bool setExpireTime (const string& v)
        {
            return setString (mExpireTime, v, 17);
        }

        string getExpireTime ()
        {
            return getString (mExpireTime, 17);
        }

        bool setMarketMakers (const string& v)
        {
            return setString (mMarketMakers, v, 60);
        }

        string getMarketMakers ()
        {
            return getString (mMarketMakers, 60);
        }

        bool setContraFirm (const string& v)
        {
            return setString (mContraFirm, v, 11);
        }

        string getContraFirm ()
        {
            return getString (mContraFirm, 11);
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
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

        bool setStartDate (uint32_t v)
        {
            mStartDate = v;
            return true;
        }

        uint32_t getStartDate ()
        {
            return mStartDate;
        }

        bool setEndDate (uint32_t v)
        {
            mEndDate = v;
            return true;
        }

        uint32_t getEndDate ()
        {
            return mEndDate;
        }

        bool setClientInformation (const string& v)
        {
            return setString (mClientInformation, v, 30);
        }

        string getClientInformation ()
        {
            return getString (mClientInformation, 30);
        }

        string toString ()
        {
            stringstream ss;
            ss << "QuoteRequest::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteReqID=" << getQuoteReqID () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[PrivateQuote=" << unsigned(getPrivateQuote ()) << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Account=" << getAccount () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[ExpireTime=" << getExpireTime () << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[ContraFirm=" << getContraFirm () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[TradeSubType=" << unsigned(getTradeSubType ()) << "],"
               << "[StartDate=" << getStartDate () << "],"
               << "[EndDate=" << getEndDate () << "],"
               << "[ClientInformation=" << getClientInformation () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
