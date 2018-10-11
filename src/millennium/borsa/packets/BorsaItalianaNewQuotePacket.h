/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_NEWQUOTE_PACKET_H
#define BORSAITALIANA_NEWQUOTE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaNewQuote
{
    public:
        BorsaItalianaHeader mHeader;

        char mClientOrderID[20];
        char mTraderID[11];
        uint8_t mClearingAccount;
        int32_t mInstrumentID;
        int64_t mBidPrice;
        uint64_t mBidSize;
        int64_t mAskPrice;
        uint64_t mAskSize;
        uint8_t mCapacity;
        uint8_t mAutoCancel;
        char mReservedField1[10];
        uint8_t mTIF;
        uint8_t mAnonymity;
        uint32_t mClientID;
        uint32_t mInvestmentDecisionMaker;
        uint32_t mExecutingTrader;
        uint8_t mFXMiFIDFlags;
        uint8_t mPartyRoleQualifiers;

        BorsaItalianaNewQuote ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaNewQuote) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'S';

            memset (mClientOrderID, '\0', 20);
            memset (mTraderID, '\0', 11);
            mClearingAccount = 1;
            mInstrumentID = 0;
            mBidPrice = 0;
            mBidSize = 0;
            mAskPrice = 0;
            mAskSize = 0;
            mCapacity = 1;
            mAutoCancel = 1;
            memset (mReservedField1, '\0', 10);
            mTIF = 0;
            mAnonymity = 0;
            mClientID = 0;
            mInvestmentDecisionMaker = 0;
            mExecutingTrader = 0;
            mFXMiFIDFlags = 0;
            mPartyRoleQualifiers = 0;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setTraderID (const string& v)
        {
            return setString (mTraderID, v, 11);
        }

        string getTraderID ()
        {
            return getString (mTraderID, 11);
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

        bool setBidSize (uint64_t v)
        {
            mBidSize = v;
            return true;
        }

        uint64_t getBidSize ()
        {
            return mBidSize;
        }

        bool setAskPrice (int64_t v)
        {
            mAskPrice = v;
            return true;
        }

        int64_t getAskPrice ()
        {
            return mAskPrice;
        }

        bool setAskSize (uint64_t v)
        {
            mAskSize = v;
            return true;
        }

        uint64_t getAskSize ()
        {
            return mAskSize;
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

        bool setAutoCancel (uint8_t v)
        {
            mAutoCancel = v;
            return true;
        }

        uint8_t getAutoCancel ()
        {
            return mAutoCancel;
        }

        bool setReservedField1 (const string& v)
        {
            return setString (mReservedField1, v, 10);
        }

        string getReservedField1 ()
        {
            return getString (mReservedField1, 10);
        }

        bool setTIF (uint8_t v)
        {
            mTIF = v;
            return true;
        }

        uint8_t getTIF ()
        {
            return mTIF;
        }

        bool setAnonymity (uint8_t v)
        {
            mAnonymity = v;
            return true;
        }

        uint8_t getAnonymity ()
        {
            return mAnonymity;
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
            ss << "NewQuote::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[TraderID=" << getTraderID () << "],"
               << "[ClearingAccount=" << unsigned(getClearingAccount ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[BidPrice=" << getBidPrice () << "],"
               << "[BidSize=" << getBidSize () << "],"
               << "[AskPrice=" << getAskPrice () << "],"
               << "[AskSize=" << getAskSize () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[AutoCancel=" << unsigned(getAutoCancel ()) << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[TIF=" << unsigned(getTIF ()) << "],"
               << "[Anonymity=" << unsigned(getAnonymity ()) << "],"
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
