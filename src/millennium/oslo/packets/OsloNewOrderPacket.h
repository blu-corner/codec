/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_NEWORDER_PACKET_H
#define OSLO_NEWORDER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloNewOrder
{
    public:
        OsloHeader mHeader;

        char mClientOrderID[20];
        char mTraderID[11];
        char mAccount[10];
        int8_t mClearingAccount;
        int32_t mInstrumentID;
        int8_t mReservedField1;
        int8_t mReservedField2;
        int8_t mOrderType;
        int8_t mTIF;
        uint32_t mExpireDateTime;
        int8_t mSide;
        uint64_t mOrderQty;
        uint64_t mDisplayQty;
        int64_t mLimitPrice;
        int8_t mCapacity;
        int8_t mAutoCancel;
        int8_t mOrderSubType;
        int8_t mPassiveOnlyOrder;
        int8_t mTargetBook;
        int8_t mExecInstruction;
        int32_t mMinimumQuantity;
        int8_t mPegPriceType;
        char mReservedField3[12];
        uint32_t mClientID;
        uint32_t mInvestmentDecisionMaker;
        uint32_t mExecutingTrader;
        uint8_t mFXMiFIDFlags;
        uint8_t mPartyRoleQualifiers;

        OsloNewOrder ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloNewOrder) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'D';

            memset (mClientOrderID, '\0', 20);
            memset (mTraderID, '\0', 11);
            memset (mAccount, '\0', 10);
            mClearingAccount = 1;
            mInstrumentID = 0;
            mReservedField1 = 0;
            mReservedField2 = 0;
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
            mPassiveOnlyOrder = 0;
            mTargetBook = 0;
            mExecInstruction = 0;
            mMinimumQuantity = 0;
            mPegPriceType = 0;
            memset (mReservedField3, '\0', 12);
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

        bool setAccount (const string& v)
        {
            return setString (mAccount, v, 10);
        }

        string getAccount ()
        {
            return getString (mAccount, 10);
        }

        bool setClearingAccount (int8_t v)
        {
            mClearingAccount = v;
            return true;
        }

        int8_t getClearingAccount ()
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

        bool setReservedField1 (int8_t v)
        {
            mReservedField1 = v;
            return true;
        }

        int8_t getReservedField1 ()
        {
            return mReservedField1;
        }

        bool setReservedField2 (int8_t v)
        {
            mReservedField2 = v;
            return true;
        }

        int8_t getReservedField2 ()
        {
            return mReservedField2;
        }

        bool setOrderType (int8_t v)
        {
            mOrderType = v;
            return true;
        }

        int8_t getOrderType ()
        {
            return mOrderType;
        }

        bool setTIF (int8_t v)
        {
            mTIF = v;
            return true;
        }

        int8_t getTIF ()
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

        bool setLimitPrice (double p)
        {
            mLimitPrice = p * 100000000;
            return true;
        }

        double getLimitPrice ()
        {
            return ((double)mLimitPrice / 100000000);
        }

        bool setCapacity (int8_t v)
        {
            mCapacity = v;
            return true;
        }

        int8_t getCapacity ()
        {
            return mCapacity;
        }

        bool setAutoCancel (int8_t v)
        {
            mAutoCancel = v;
            return true;
        }

        int8_t getAutoCancel ()
        {
            return mAutoCancel;
        }

        bool setOrderSubType (int8_t v)
        {
            mOrderSubType = v;
            return true;
        }

        int8_t getOrderSubType ()
        {
            return mOrderSubType;
        }

        bool setPassiveOnlyOrder (int8_t v)
        {
            mPassiveOnlyOrder = v;
            return true;
        }

        int8_t getPassiveOnlyOrder ()
        {
            return mPassiveOnlyOrder;
        }

        bool setTargetBook (int8_t v)
        {
            mTargetBook = v;
            return true;
        }

        int8_t getTargetBook ()
        {
            return mTargetBook;
        }

        bool setExecInstruction (int8_t v)
        {
            mExecInstruction = v;
            return true;
        }

        int8_t getExecInstruction ()
        {
            return mExecInstruction;
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

        bool setPegPriceType (int8_t v)
        {
            mPegPriceType = v;
            return true;
        }

        int8_t getPegPriceType ()
        {
            return mPegPriceType;
        }

        bool setReservedField3 (const string& v)
        {
            return setString (mReservedField3, v, 12);
        }

        string getReservedField3 ()
        {
            return getString (mReservedField3, 12);
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
            ss << "NewOrder::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[TraderID=" << getTraderID () << "],"
               << "[Account=" << getAccount () << "],"
               << "[ClearingAccount=" << getClearingAccount () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[OrderType=" << getOrderType () << "],"
               << "[TIF=" << getTIF () << "],"
               << "[ExpireDateTime=" << getExpireDateTime () << "],"
               << "[Side=" << getSide () << "],"
               << "[OrderQty=" << getOrderQty () << "],"
               << "[DisplayQty=" << getDisplayQty () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[Capacity=" << getCapacity () << "],"
               << "[AutoCancel=" << getAutoCancel () << "],"
               << "[OrderSubType=" << getOrderSubType () << "],"
               << "[PassiveOnlyOrder=" << getPassiveOnlyOrder () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ExecInstruction=" << getExecInstruction () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[PegPriceType=" << getPegPriceType () << "],"
               << "[ReservedField3=" << getReservedField3 () << "],"
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
