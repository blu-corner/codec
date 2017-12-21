/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_NEWORDER_PACKET_H
#define LSE_NEWORDER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseNewOrder
{
    public:
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
        uint8_t mSide;
        int32_t mOrderQty;
        int32_t mDisplayQty;
        int64_t mLimitPrice;
        uint8_t mCapacity;
        uint8_t mAutoCancel;
        uint8_t mOrderSubType;
        uint8_t mAnonymity;
        int64_t mStopPrice;
        uint8_t mPassiveOnlyOrder;
        uint32_t mClientID;
        uint32_t mInvestmentDecisionMaker;
        char mReservedField;
        int32_t mMinimumQuantity;
        uint32_t mExecutingTrader;

        LseNewOrder ()
        {
            memset (mClientOrderID, '\0', 20);
            memset (mTraderID, '\0', 11);
            memset (mAccount, '\0', 10);
            mClearingAccount = 1;
            mInstrumentID = 0;
            mFXMiFIDFlags = 0;
            mPartyRoleQualifiers = 0;
            mOrderType = 2;
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
            mStopPrice = 0;
            mPassiveOnlyOrder = 0;
            mClientID = 0;
            mInvestmentDecisionMaker = 0;
            mMinimumQuantity = 0;
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

        bool setSide (uint8_t v)
        {
            mSide = v;
            return true;
        }

        uint8_t getSide ()
        {
            return mSide;
        }

        bool setOrderQty (int32_t v)
        {
            mOrderQty = v;
            return true;
        }

        int32_t getOrderQty ()
        {
            return mOrderQty;
        }

        bool setDisplayQty (int32_t v)
        {
            mDisplayQty = v;
            return true;
        }

        int32_t getDisplayQty ()
        {
            return mDisplayQty;
        }

        bool setLimitPrice (double p)
        {
            mLimitPrice = p * 100000000;
            return true;
        }

        double getLimitPrice ()
        {
            return ((double)mLimitPrice / 100000000);
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

        bool setStopPrice (double p)
        {
            mStopPrice = p * 100000000;
            return true;
        }

        double getStopPrice ()
        {
            return ((double)mStopPrice / 100000000);
        }

        bool setPassiveOnlyOrder (uint8_t v)
        {
            mPassiveOnlyOrder = v;
            return true;
        }

        uint8_t getPassiveOnlyOrder ()
        {
            return mPassiveOnlyOrder;
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

        bool setReservedField (char v)
        {
            mReservedField = v;
            return true;
        }

        char getReservedField ()
        {
            return mReservedField;
        }

        bool setMinimumQuantity (int32_t v)
        {
            mMinimumQuantity = v;
            return true;
        }

        int32_t getMinimumQuantity ()
        {
            return mMinimumQuantity;
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
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderQty=" << getOrderQty () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[AutoCancel=" << unsigned(getAutoCancel ()) << "],"
               << "[OrderSubType=" << unsigned(getOrderSubType ()) << "],"
               << "[Anonymity=" << unsigned(getAnonymity ()) << "],"
               << "[StopPrice=" << getStopPrice () << "],"
               << "[PassiveOnlyOrder=" << unsigned(getPassiveOnlyOrder ()) << "],"
               << "[ClientID=" << getClientID () << "],"
               << "[InvestmentDecisionMaker=" << getInvestmentDecisionMaker () << "],"
               << "[ReservedField=" << getReservedField () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[ExecutingTrader=" << getExecutingTrader () << "]";
            return ss.str ();
        }
});

}

#endif
