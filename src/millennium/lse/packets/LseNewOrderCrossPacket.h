/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_NEWORDERCROSS_PACKET_H
#define LSE_NEWORDERCROSS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseNewOrderCross
{
    public:
        LseHeader mHeader;

        char mCrossID[20];
        uint8_t mCrossType;
        char mBuySideClOrdID[20];
        uint8_t mBuySideOrderCapacity;
        int8_t mBuySideClearingAccount;
        uint64_t mBuySideOrderQuantity;
        char mBuySideFirmID[11];
        uint8_t mBuySidePartyRole;
        char mSellSideClOrdID[20];
        uint8_t mSellSideOrderCapacity;
        int8_t mSellSideClearingAccount;
        uint64_t mSellSideOrderQuantity;
        char mSellSideFirmID[11];
        uint8_t mSellSidePartyRole;
        int32_t mInstrumentID;
        int64_t mPrice;
        uint8_t mOrderType;
        uint8_t mTIF;

        LseNewOrderCross ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseNewOrderCross) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'C';

            memset (mCrossID, '\0', 20);
            mCrossType = 0;
            memset (mBuySideClOrdID, '\0', 20);
            mBuySideOrderCapacity = 0;
            mBuySideClearingAccount = 0;
            mBuySideOrderQuantity = 0;
            memset (mBuySideFirmID, '\0', 11);
            mBuySidePartyRole = 0;
            memset (mSellSideClOrdID, '\0', 20);
            mSellSideOrderCapacity = 0;
            mSellSideClearingAccount = 0;
            mSellSideOrderQuantity = 0;
            memset (mSellSideFirmID, '\0', 11);
            mSellSidePartyRole = 0;
            mInstrumentID = 0;
            mPrice = 0;
            mOrderType = 0;
            mTIF = 0;
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

        bool setBuySideClOrdID (const string& v)
        {
            return setString (mBuySideClOrdID, v, 20);
        }

        string getBuySideClOrdID ()
        {
            return getString (mBuySideClOrdID, 20);
        }

        bool setBuySideOrderCapacity (uint8_t v)
        {
            mBuySideOrderCapacity = v;
            return true;
        }

        uint8_t getBuySideOrderCapacity ()
        {
            return mBuySideOrderCapacity;
        }

        bool setBuySideClearingAccount (int8_t v)
        {
            mBuySideClearingAccount = v;
            return true;
        }

        int8_t getBuySideClearingAccount ()
        {
            return mBuySideClearingAccount;
        }

        bool setBuySideOrderQuantity (uint64_t v)
        {
            mBuySideOrderQuantity = v;
            return true;
        }

        uint64_t getBuySideOrderQuantity ()
        {
            return mBuySideOrderQuantity;
        }

        bool setBuySideFirmID (const string& v)
        {
            return setString (mBuySideFirmID, v, 11);
        }

        string getBuySideFirmID ()
        {
            return getString (mBuySideFirmID, 11);
        }

        bool setBuySidePartyRole (uint8_t v)
        {
            mBuySidePartyRole = v;
            return true;
        }

        uint8_t getBuySidePartyRole ()
        {
            return mBuySidePartyRole;
        }

        bool setSellSideClOrdID (const string& v)
        {
            return setString (mSellSideClOrdID, v, 20);
        }

        string getSellSideClOrdID ()
        {
            return getString (mSellSideClOrdID, 20);
        }

        bool setSellSideOrderCapacity (uint8_t v)
        {
            mSellSideOrderCapacity = v;
            return true;
        }

        uint8_t getSellSideOrderCapacity ()
        {
            return mSellSideOrderCapacity;
        }

        bool setSellSideClearingAccount (int8_t v)
        {
            mSellSideClearingAccount = v;
            return true;
        }

        int8_t getSellSideClearingAccount ()
        {
            return mSellSideClearingAccount;
        }

        bool setSellSideOrderQuantity (uint64_t v)
        {
            mSellSideOrderQuantity = v;
            return true;
        }

        uint64_t getSellSideOrderQuantity ()
        {
            return mSellSideOrderQuantity;
        }

        bool setSellSideFirmID (const string& v)
        {
            return setString (mSellSideFirmID, v, 11);
        }

        string getSellSideFirmID ()
        {
            return getString (mSellSideFirmID, 11);
        }

        bool setSellSidePartyRole (uint8_t v)
        {
            mSellSidePartyRole = v;
            return true;
        }

        uint8_t getSellSidePartyRole ()
        {
            return mSellSidePartyRole;
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

        bool setPrice (double p)
        {
            mPrice = p * 100000000;
            return true;
        }

        double getPrice ()
        {
            return ((double)mPrice / 100000000);
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

        string toString ()
        {
            stringstream ss;
            ss << "NewOrderCross::"
               << "[CrossID=" << getCrossID () << "],"
               << "[CrossType=" << unsigned(getCrossType ()) << "],"
               << "[BuySideClOrdID=" << getBuySideClOrdID () << "],"
               << "[BuySideOrderCapacity=" << unsigned(getBuySideOrderCapacity ()) << "],"
               << "[BuySideClearingAccount=" << getBuySideClearingAccount () << "],"
               << "[BuySideOrderQuantity=" << getBuySideOrderQuantity () << "],"
               << "[BuySideFirmID=" << getBuySideFirmID () << "],"
               << "[BuySidePartyRole=" << unsigned(getBuySidePartyRole ()) << "],"
               << "[SellSideClOrdID=" << getSellSideClOrdID () << "],"
               << "[SellSideOrderCapacity=" << unsigned(getSellSideOrderCapacity ()) << "],"
               << "[SellSideClearingAccount=" << getSellSideClearingAccount () << "],"
               << "[SellSideOrderQuantity=" << getSellSideOrderQuantity () << "],"
               << "[SellSideFirmID=" << getSellSideFirmID () << "],"
               << "[SellSidePartyRole=" << unsigned(getSellSidePartyRole ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[Price=" << getPrice () << "],"
               << "[OrderType=" << unsigned(getOrderType ()) << "],"
               << "[TIF=" << unsigned(getTIF ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
