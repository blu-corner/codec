/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_NEWORDERCROSS_PACKET_H
#define JSE_NEWORDERCROSS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseNewOrderCross
{
    public:
        JseHeader mHeader;

        char mCrossID[20];
        uint8_t mCrossType;
        char mBuySideClientOrderID[20];
        uint8_t mBuySideCapacity;
        char mBuySideTraderMnemonic[17];
        char mBuySideAccount[10];
        char mSellSideClientOrderID[20];
        uint8_t mSellSideCapacity;
        char mSellSideTraderMnemonic[17];
        char mSellSideAccount[10];
        int32_t mSecurityID;
        uint8_t mOrderType;
        uint8_t mTimeInForce;
        int64_t mLimitPrice;
        int32_t mOrderQuantity;

        JseNewOrderCross ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseNewOrderCross) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'C';

            memset (mCrossID, '\0', 20);
            mCrossType = 0;
            memset (mBuySideClientOrderID, '\0', 20);
            mBuySideCapacity = 0;
            memset (mBuySideTraderMnemonic, '\0', 17);
            memset (mBuySideAccount, '\0', 10);
            memset (mSellSideClientOrderID, '\0', 20);
            mSellSideCapacity = 0;
            memset (mSellSideTraderMnemonic, '\0', 17);
            memset (mSellSideAccount, '\0', 10);
            mSecurityID = 0;
            mOrderType = 0;
            mTimeInForce = 0;
            mLimitPrice = 0;
            mOrderQuantity = 0;
        }

        bool setCrossID (const string& v)
        {
            return setString (mCrossID, v, 20);
        }

        string getCrossID ()
        {
            return getString (mCrossID, 20);
        }

        bool setCrossType (uint8_t v)
        {
            mCrossType = v;
            return true;
        }

        uint8_t getCrossType ()
        {
            return mCrossType;
        }

        bool setBuySideClientOrderID (const string& v)
        {
            return setString (mBuySideClientOrderID, v, 20);
        }

        string getBuySideClientOrderID ()
        {
            return getString (mBuySideClientOrderID, 20);
        }

        bool setBuySideCapacity (uint8_t v)
        {
            mBuySideCapacity = v;
            return true;
        }

        uint8_t getBuySideCapacity ()
        {
            return mBuySideCapacity;
        }

        bool setBuySideTraderMnemonic (const string& v)
        {
            return setString (mBuySideTraderMnemonic, v, 17);
        }

        string getBuySideTraderMnemonic ()
        {
            return getString (mBuySideTraderMnemonic, 17);
        }

        bool setBuySideAccount (const string& v)
        {
            return setString (mBuySideAccount, v, 10);
        }

        string getBuySideAccount ()
        {
            return getString (mBuySideAccount, 10);
        }

        bool setSellSideClientOrderID (const string& v)
        {
            return setString (mSellSideClientOrderID, v, 20);
        }

        string getSellSideClientOrderID ()
        {
            return getString (mSellSideClientOrderID, 20);
        }

        bool setSellSideCapacity (uint8_t v)
        {
            mSellSideCapacity = v;
            return true;
        }

        uint8_t getSellSideCapacity ()
        {
            return mSellSideCapacity;
        }

        bool setSellSideTraderMnemonic (const string& v)
        {
            return setString (mSellSideTraderMnemonic, v, 17);
        }

        string getSellSideTraderMnemonic ()
        {
            return getString (mSellSideTraderMnemonic, 17);
        }

        bool setSellSideAccount (const string& v)
        {
            return setString (mSellSideAccount, v, 10);
        }

        string getSellSideAccount ()
        {
            return getString (mSellSideAccount, 10);
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

        bool setLimitPrice (int64_t v)
        {
            mLimitPrice = v;
            return true;
        }

        int64_t getLimitPrice ()
        {
            return mLimitPrice;
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

        string toString ()
        {
            stringstream ss;
            ss << "NewOrderCross::"
               << "[CrossID=" << getCrossID () << "],"
               << "[CrossType=" << unsigned(getCrossType ()) << "],"
               << "[BuySideClientOrderID=" << getBuySideClientOrderID () << "],"
               << "[BuySideCapacity=" << unsigned(getBuySideCapacity ()) << "],"
               << "[BuySideTraderMnemonic=" << getBuySideTraderMnemonic () << "],"
               << "[BuySideAccount=" << getBuySideAccount () << "],"
               << "[SellSideClientOrderID=" << getSellSideClientOrderID () << "],"
               << "[SellSideCapacity=" << unsigned(getSellSideCapacity ()) << "],"
               << "[SellSideTraderMnemonic=" << getSellSideTraderMnemonic () << "],"
               << "[SellSideAccount=" << getSellSideAccount () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[OrderType=" << unsigned(getOrderType ()) << "],"
               << "[TimeInForce=" << unsigned(getTimeInForce ()) << "],"
               << "[LimitPrice=" << getLimitPrice () << "],"
               << "[OrderQuantity=" << getOrderQuantity () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
