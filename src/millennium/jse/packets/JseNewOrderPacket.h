/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_NEWORDER_PACKET_H
#define JSE_NEWORDER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseNewOrder
{
    public:
        JseHeader mHeader;

        char mClientOrderID[20];
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        char mAccount[10];
        uint8_t mOrderType;
        uint8_t mTimeInForce;
        char mExpireTime[17];
        uint8_t mSide;
        int32_t mOrderQuantity;
        int32_t mDisplayQuantity;
        int32_t mMinimumQuantity;
        int64_t mLimitPrice;
        int64_t mStopPrice;
        uint8_t mCapacity;
        uint8_t mCancelonDisconnect;
        uint8_t mOrderBook;
        int8_t mExecutionInstruction;
        uint8_t mOrderSubType;

        JseNewOrder ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseNewOrder) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'D';

            memset (mClientOrderID, '\0', 20);
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            memset (mAccount, '\0', 10);
            mOrderType = 0;
            mTimeInForce = 0;
            memset (mExpireTime, '\0', 17);
            mSide = 0;
            mOrderQuantity = 0;
            mDisplayQuantity = 0;
            mMinimumQuantity = 0;
            mLimitPrice = 0;
            mStopPrice = 0;
            mCapacity = 0;
            mCancelonDisconnect = 0;
            mOrderBook = 0;
            mExecutionInstruction = 0;
            mOrderSubType = 0;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
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

        bool setOrderType (uint8_t v)
        {
            mOrderType = v;
            return true;
        }

        uint8_t getOrderType ()
        {
            return mOrderType;
        }

        bool setTimeInForce (uint8_t v)
        {
            mTimeInForce = v;
            return true;
        }

        uint8_t getTimeInForce ()
        {
            return mTimeInForce;
        }

        bool setExpireTime (const string& v)
        {
            return setString (mExpireTime, v, 17);
        }

        string getExpireTime ()
        {
            return getString (mExpireTime, 17);
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

        bool setDisplayQuantity (int32_t v)
        {
            mDisplayQuantity = v;
            return true;
        }

        int32_t getDisplayQuantity ()
        {
            return mDisplayQuantity;
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

        bool setLimitPrice (int64_t v)
        {
            mLimitPrice = v;
            return true;
        }

        int64_t getLimitPrice ()
        {
            return mLimitPrice;
        }

        bool setStopPrice (int64_t v)
        {
            mStopPrice = v;
            return true;
        }

        int64_t getStopPrice ()
        {
            return mStopPrice;
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

        bool setCancelonDisconnect (uint8_t v)
        {
            mCancelonDisconnect = v;
            return true;
        }

        uint8_t getCancelonDisconnect ()
        {
            return mCancelonDisconnect;
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

        bool setExecutionInstruction (int8_t v)
        {
            mExecutionInstruction = v;
            return true;
        }

        int8_t getExecutionInstruction ()
        {
            return mExecutionInstruction;
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

        string toString ()
        {
            stringstream ss;
            ss << "NewOrder::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Account=" << getAccount () << "],"
               << "[OrderType=" << unsigned(getOrderType ()) << "],"
               << "[TimeInForce=" << unsigned(getTimeInForce ()) << "],"
               << "[ExpireTime=" << getExpireTime () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "],"
               << "[DisplayQuantity=" << getDisplayQuantity () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[StopPrice=" << getStopPrice () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[CancelonDisconnect=" << unsigned(getCancelonDisconnect ()) << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[ExecutionInstruction=" << getExecutionInstruction () << "],"
               << "[OrderSubType=" << unsigned(getOrderSubType ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
