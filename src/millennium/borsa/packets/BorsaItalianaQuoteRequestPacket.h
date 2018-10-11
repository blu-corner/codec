/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_QUOTEREQUEST_PACKET_H
#define BORSAITALIANA_QUOTEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaQuoteRequest
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteReqID[10];
        uint8_t mOrderBook;
        uint8_t mPrivateQuote;
        int32_t mInstrumentID;
        int8_t mSide;
        uint64_t mOrderQuantity;
        uint32_t mExpireTime;
        char mMarketMakers[60];
        char mContraTrader[11];
        char mContraFirm[11];
        char mRFQID[10];
        uint32_t mClientID;
        uint32_t mInvestmentDecisionMaker;
        uint32_t mExecutingTrader;
        uint8_t mFXMiFIDFlags;
        uint8_t mPartyRoleQualifiers;

        BorsaItalianaQuoteRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaQuoteRequest) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'a';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteReqID, '\0', 10);
            mOrderBook = 0;
            mPrivateQuote = 0;
            mInstrumentID = 0;
            mSide = 0;
            mOrderQuantity = 0;
            mExpireTime = 0;
            memset (mMarketMakers, '\0', 60);
            memset (mContraTrader, '\0', 11);
            memset (mContraFirm, '\0', 11);
            memset (mRFQID, '\0', 10);
            mClientID = 0;
            mInvestmentDecisionMaker = 0;
            mExecutingTrader = 0;
            mFXMiFIDFlags = 0;
            mPartyRoleQualifiers = 0;
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

        bool setExpireTime (uint32_t v)
        {
            mExpireTime = v;
            return true;
        }

        uint32_t getExpireTime ()
        {
            return mExpireTime;
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

        bool setClientID (uint32_t v)
        {
            mClientID = v;
            return true;
        }

        uint32_t getClientID ()
        {
            return mClientID;
        }

        bool setInvestmentDecisionMaker (uint32_t v)
        {
            mInvestmentDecisionMaker = v;
            return true;
        }

        uint32_t getInvestmentDecisionMaker ()
        {
            return mInvestmentDecisionMaker;
        }

        bool setExecutingTrader (uint32_t v)
        {
            mExecutingTrader = v;
            return true;
        }

        uint32_t getExecutingTrader ()
        {
            return mExecutingTrader;
        }

        bool setFXMiFIDFlags (uint8_t v)
        {
            mFXMiFIDFlags = v;
            return true;
        }

        uint8_t getFXMiFIDFlags ()
        {
            return mFXMiFIDFlags;
        }

        bool setPartyRoleQualifiers (uint8_t v)
        {
            mPartyRoleQualifiers = v;
            return true;
        }

        uint8_t getPartyRoleQualifiers ()
        {
            return mPartyRoleQualifiers;
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
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[Side=" << getSide () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[ExpireTime=" << getExpireTime () << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[ContraTrader=" << getContraTrader () << "],"
               << "[ContraFirm=" << getContraFirm () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[ClientID=" << getClientID () << "],"
               << "[InvestmentDecisionMaker=" << getInvestmentDecisionMaker () << "],"
               << "[ExecutingTrader=" << getExecutingTrader () << "],"
               << "[FXMiFIDFlags=" << unsigned(getFXMiFIDFlags ()) << "],"
               << "[PartyRoleQualifiers=" << unsigned(getPartyRoleQualifiers ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
