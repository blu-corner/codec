/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_RFQQUOTE_PACKET_H
#define BORSAITALIANA_RFQQUOTE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaRFQQuote
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteMsgID[20];
        char mRFQID[10];
        int32_t mInstrumentID;
        int64_t mBidPrice;
        uint64_t mBidQuantity;
        int64_t mOfferPrice;
        uint64_t mOfferQuantity;
        uint8_t mAutoCancel;
        char mMarketMakers[11];
        char mMarketMakerFirm[11];
        char mBidID[12];
        char mOfferID[12];
        uint8_t mCapacity;
        uint8_t mClearingAccount;
        uint32_t mClientID;
        uint32_t mInvestmentDecisionMaker;
        uint32_t mExecutingTrader;
        uint8_t mFXMiFIDFlags;
        uint8_t mPartyRoleQualifiers;

        BorsaItalianaRFQQuote ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaRFQQuote) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'd';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteMsgID, '\0', 20);
            memset (mRFQID, '\0', 10);
            mInstrumentID = 0;
            mBidPrice = 0;
            mBidQuantity = 0;
            mOfferPrice = 0;
            mOfferQuantity = 0;
            mAutoCancel = 0;
            memset (mMarketMakers, '\0', 11);
            memset (mMarketMakerFirm, '\0', 11);
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
            mCapacity = 0;
            mClearingAccount = 0;
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

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
        }

        bool setBidPrice (int64_t v)
        {
            mBidPrice = v;
            return true;
        }

        int64_t getBidPrice ()
        {
            return mBidPrice;
        }

        bool setBidQuantity (uint64_t v)
        {
            mBidQuantity = v;
            return true;
        }

        uint64_t getBidQuantity ()
        {
            return mBidQuantity;
        }

        bool setOfferPrice (int64_t v)
        {
            mOfferPrice = v;
            return true;
        }

        int64_t getOfferPrice ()
        {
            return mOfferPrice;
        }

        bool setOfferQuantity (uint64_t v)
        {
            mOfferQuantity = v;
            return true;
        }

        uint64_t getOfferQuantity ()
        {
            return mOfferQuantity;
        }

        bool setAutoCancel (uint8_t v)
        {
            mAutoCancel = v;
            return true;
        }

        uint8_t getAutoCancel ()
        {
            return mAutoCancel;
        }

        bool setMarketMakers (const string& v)
        {
            return setString (mMarketMakers, v, 11);
        }

        string getMarketMakers ()
        {
            return getString (mMarketMakers, 11);
        }

        bool setMarketMakerFirm (const string& v)
        {
            return setString (mMarketMakerFirm, v, 11);
        }

        string getMarketMakerFirm ()
        {
            return getString (mMarketMakerFirm, 11);
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
            ss << "RFQQuote::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteMsgID=" << getQuoteMsgID () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[BidPrice=" << getBidPrice () << "],"
               << "[BidQuantity=" << getBidQuantity () << "],"
               << "[OfferPrice=" << getOfferPrice () << "],"
               << "[OfferQuantity=" << getOfferQuantity () << "],"
               << "[AutoCancel=" << unsigned(getAutoCancel ()) << "],"
               << "[MarketMakers=" << getMarketMakers () << "],"
               << "[MarketMakerFirm=" << getMarketMakerFirm () << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[ClearingAccount=" << unsigned(getClearingAccount ()) << "],"
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
