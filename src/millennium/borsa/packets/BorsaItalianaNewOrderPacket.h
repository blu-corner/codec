/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_NEWORDER_PACKET_H
#define BORSAITALIANA_NEWORDER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaNewOrder
{
    public:
        BorsaItalianaHeader mHeader;

        char mClientOrderID[20];
        char mTraderID[11];
        char mAccount[10];
        uint8_t mClearingAccount;
        int32_t mInstrumentID;
        uint8_t mFXMiFIDFlags;
        uint8_t mPartyRoleQualifiers;
        uint8_t mOrderType;
        uint8_t mTIF;
        uint32_t mExpireDateTime;
        int8_t mSide;
        uint64_t mOrderQty;
        uint64_t mDisplayQty;
        int64_t mLimitPrice;
        uint8_t mCapacity;
        uint8_t mAutoCancel;
        uint8_t mOrderSubType;
        uint8_t mAnonymity;
        int64_t mStoppedPrice;
        uint64_t mReservedField1;
        char mReservedField2[2];
        uint8_t mOrderSource;
        uint32_t mClientID;
        uint32_t mInvestmentDecisionMaker;
        uint32_t mExecutingTrader;

        BorsaItalianaNewOrder ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaNewOrder) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'D';

            memset (mClientOrderID, '\0', 20);
            memset (mTraderID, '\0', 11);
            memset (mAccount, '\0', 10);
            mClearingAccount = 1;
            mInstrumentID = 0;
            mFXMiFIDFlags = 0;
            mPartyRoleQualifiers = 0;
            mOrderType = 0;
            mTIF = 0;
            mExpireDateTime = 0;
            mSide = 1;
            mOrderQty = 0;
            mDisplayQty = 0;
            mLimitPrice = 0;
            mCapacity = 1;
            mAutoCancel = 1;
            mOrderSubType = 0;
            mAnonymity = 0;
            mStoppedPrice = 0;
            mReservedField1 = 0;
            memset (mReservedField2, '\0', 2);
            mOrderSource = 0;
            mClientID = 0;
            mInvestmentDecisionMaker = 0;
            mExecutingTrader = 0;
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

        bool setAccount (const string& v)
        {
            return setString (mAccount, v, 10);
        }

        string getAccount ()
        {
            return getString (mAccount, 10);
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

        bool setOrderType (uint8_t v)
        {
            mOrderType = v;
            return true;
        }

        uint8_t getOrderType ()
        {
            return mOrderType;
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

        bool setExpireDateTime (uint32_t v)
        {
            mExpireDateTime = v;
            return true;
        }

        uint32_t getExpireDateTime ()
        {
            return mExpireDateTime;
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

        bool setOrderQty (uint64_t v)
        {
            mOrderQty = v;
            return true;
        }

        uint64_t getOrderQty ()
        {
            return mOrderQty;
        }

        bool setDisplayQty (uint64_t v)
        {
            mDisplayQty = v;
            return true;
        }

        uint64_t getDisplayQty ()
        {
            return mDisplayQty;
        }

        bool setLimitPrice (int64_t v)
        {
            mLimitPrice = v;
            return true;
        }

        int64_t getLimitPrice ()
        {
            return mLimitPrice;
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

        bool setOrderSubType (uint8_t v)
        {
            mOrderSubType = v;
            return true;
        }

        uint8_t getOrderSubType ()
        {
            return mOrderSubType;
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

        bool setStoppedPrice (int64_t v)
        {
            mStoppedPrice = v;
            return true;
        }

        int64_t getStoppedPrice ()
        {
            return mStoppedPrice;
        }

        bool setReservedField1 (uint64_t v)
        {
            mReservedField1 = v;
            return true;
        }

        uint64_t getReservedField1 ()
        {
            return mReservedField1;
        }

        bool setReservedField2 (const string& v)
        {
            return setString (mReservedField2, v, 2);
        }

        string getReservedField2 ()
        {
            return getString (mReservedField2, 2);
        }

        bool setOrderSource (uint8_t v)
        {
            mOrderSource = v;
            return true;
        }

        uint8_t getOrderSource ()
        {
            return mOrderSource;
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

        string toString ()
        {
            stringstream ss;
            ss << "NewOrder::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[TraderID=" << getTraderID () << "],"
               << "[Account=" << getAccount () << "],"
               << "[ClearingAccount=" << unsigned(getClearingAccount ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[FXMiFIDFlags=" << unsigned(getFXMiFIDFlags ()) << "],"
               << "[PartyRoleQualifiers=" << unsigned(getPartyRoleQualifiers ()) << "],"
               << "[OrderType=" << unsigned(getOrderType ()) << "],"
               << "[TIF=" << unsigned(getTIF ()) << "],"
               << "[ExpireDateTime=" << getExpireDateTime () << "],"
               << "[Side=" << getSide () << "],"
               << "[OrderQty=" << getOrderQty () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[AutoCancel=" << unsigned(getAutoCancel ()) << "],"
               << "[OrderSubType=" << unsigned(getOrderSubType ()) << "],"
               << "[Anonymity=" << unsigned(getAnonymity ()) << "],"
               << "[StoppedPrice=" << getStoppedPrice () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[OrderSource=" << unsigned(getOrderSource ()) << "],"
               << "[ClientID=" << getClientID () << "],"
               << "[InvestmentDecisionMaker=" << getInvestmentDecisionMaker () << "],"
               << "[ExecutingTrader=" << getExecutingTrader () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
