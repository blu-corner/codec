/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_NEWORDERCROSSMESSAGE_PACKET_H
#define BORSAITALIANA_NEWORDERCROSSMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaNewOrderCrossMessage
{
    public:
        BorsaItalianaHeader mHeader;

        char mCrossID[20];
        uint8_t mCrossType;
        char mBuySideCIOrdID[20];
        uint8_t mBuySideOrderCapacity;
        uint8_t mBuySideClearingAccount;
        uint64_t mBuySideOrderQuantity;
        char mBuySideFirmID[11];
        uint8_t mBuySidePartyRole;
        uint8_t mBuyFXMiFIDFlags;
        uint32_t mBuyClientID;
        uint32_t mBuyInvestmentDecisionMaker;
        uint32_t mBuyExecutingTrader;
        uint8_t mBuyPartyRoleQualifiers;
        char mSellSideCIOrdID[20];
        uint8_t mSellSideOrderCapacity;
        uint8_t mSellSideClearingAccount;
        uint64_t mSellSideOrderQuantity;
        char mSellSideFirmID[11];
        uint8_t mSellSidePartyRole;
        uint8_t mSellFXMiFIDFlags;
        uint32_t mSellClientID;
        uint32_t mSellInvestmentDecisionMaker;
        uint32_t mSellExecutingTrader;
        uint8_t mSellPartyRoleQualifiers;
        int32_t mInstrumentID;
        int64_t mPrice;
        uint8_t mOrderType;
        uint8_t mTIF;

        BorsaItalianaNewOrderCrossMessage ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaNewOrderCrossMessage) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'C';

            memset (mCrossID, '\0', 20);
            mCrossType = 0;
            memset (mBuySideCIOrdID, '\0', 20);
            mBuySideOrderCapacity = 0;
            mBuySideClearingAccount = 0;
            mBuySideOrderQuantity = 0;
            memset (mBuySideFirmID, '\0', 11);
            mBuySidePartyRole = 0;
            mBuyFXMiFIDFlags = 0;
            mBuyClientID = 0;
            mBuyInvestmentDecisionMaker = 0;
            mBuyExecutingTrader = 0;
            mBuyPartyRoleQualifiers = 0;
            memset (mSellSideCIOrdID, '\0', 20);
            mSellSideOrderCapacity = 0;
            mSellSideClearingAccount = 0;
            mSellSideOrderQuantity = 0;
            memset (mSellSideFirmID, '\0', 11);
            mSellSidePartyRole = 0;
            mSellFXMiFIDFlags = 0;
            mSellClientID = 0;
            mSellInvestmentDecisionMaker = 0;
            mSellExecutingTrader = 0;
            mSellPartyRoleQualifiers = 0;
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

        bool setBuySideCIOrdID (const string& v)
        {
            return setString (mBuySideCIOrdID, v, 20);
        }

        string getBuySideCIOrdID ()
        {
            return getString (mBuySideCIOrdID, 20);
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

        bool setBuySideClearingAccount (uint8_t v)
        {
            mBuySideClearingAccount = v;
            return true;
        }

        uint8_t getBuySideClearingAccount ()
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

        bool setBuyFXMiFIDFlags (uint8_t v)
        {
            mBuyFXMiFIDFlags = v;
            return true;
        }

        uint8_t getBuyFXMiFIDFlags ()
        {
            return mBuyFXMiFIDFlags;
        }

        bool setBuyClientID (uint32_t v)
        {
            mBuyClientID = v;
            return true;
        }

        uint32_t getBuyClientID ()
        {
            return mBuyClientID;
        }

        bool setBuyInvestmentDecisionMaker (uint32_t v)
        {
            mBuyInvestmentDecisionMaker = v;
            return true;
        }

        uint32_t getBuyInvestmentDecisionMaker ()
        {
            return mBuyInvestmentDecisionMaker;
        }

        bool setBuyExecutingTrader (uint32_t v)
        {
            mBuyExecutingTrader = v;
            return true;
        }

        uint32_t getBuyExecutingTrader ()
        {
            return mBuyExecutingTrader;
        }

        bool setBuyPartyRoleQualifiers (uint8_t v)
        {
            mBuyPartyRoleQualifiers = v;
            return true;
        }

        uint8_t getBuyPartyRoleQualifiers ()
        {
            return mBuyPartyRoleQualifiers;
        }

        bool setSellSideCIOrdID (const string& v)
        {
            return setString (mSellSideCIOrdID, v, 20);
        }

        string getSellSideCIOrdID ()
        {
            return getString (mSellSideCIOrdID, 20);
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

        bool setSellSideClearingAccount (uint8_t v)
        {
            mSellSideClearingAccount = v;
            return true;
        }

        uint8_t getSellSideClearingAccount ()
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

        bool setSellFXMiFIDFlags (uint8_t v)
        {
            mSellFXMiFIDFlags = v;
            return true;
        }

        uint8_t getSellFXMiFIDFlags ()
        {
            return mSellFXMiFIDFlags;
        }

        bool setSellClientID (uint32_t v)
        {
            mSellClientID = v;
            return true;
        }

        uint32_t getSellClientID ()
        {
            return mSellClientID;
        }

        bool setSellInvestmentDecisionMaker (uint32_t v)
        {
            mSellInvestmentDecisionMaker = v;
            return true;
        }

        uint32_t getSellInvestmentDecisionMaker ()
        {
            return mSellInvestmentDecisionMaker;
        }

        bool setSellExecutingTrader (uint32_t v)
        {
            mSellExecutingTrader = v;
            return true;
        }

        uint32_t getSellExecutingTrader ()
        {
            return mSellExecutingTrader;
        }

        bool setSellPartyRoleQualifiers (uint8_t v)
        {
            mSellPartyRoleQualifiers = v;
            return true;
        }

        uint8_t getSellPartyRoleQualifiers ()
        {
            return mSellPartyRoleQualifiers;
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

        bool setPrice (int64_t v)
        {
            mPrice = v;
            return true;
        }

        int64_t getPrice ()
        {
            return mPrice;
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
            ss << "NewOrderCrossMessage::"
               << "[CrossID=" << getCrossID () << "],"
               << "[CrossType=" << unsigned(getCrossType ()) << "],"
               << "[BuySideCIOrdID=" << getBuySideCIOrdID () << "],"
               << "[BuySideOrderCapacity=" << unsigned(getBuySideOrderCapacity ()) << "],"
               << "[BuySideClearingAccount=" << unsigned(getBuySideClearingAccount ()) << "],"
               << "[BuySideOrderQuantity=" << getBuySideOrderQuantity () << "],"
               << "[BuySideFirmID=" << getBuySideFirmID () << "],"
               << "[BuySidePartyRole=" << unsigned(getBuySidePartyRole ()) << "],"
               << "[BuyFXMiFIDFlags=" << unsigned(getBuyFXMiFIDFlags ()) << "],"
               << "[BuyClientID=" << getBuyClientID () << "],"
               << "[BuyInvestmentDecisionMaker=" << getBuyInvestmentDecisionMaker () << "],"
               << "[BuyExecutingTrader=" << getBuyExecutingTrader () << "],"
               << "[BuyPartyRoleQualifiers=" << unsigned(getBuyPartyRoleQualifiers ()) << "],"
               << "[SellSideCIOrdID=" << getSellSideCIOrdID () << "],"
               << "[SellSideOrderCapacity=" << unsigned(getSellSideOrderCapacity ()) << "],"
               << "[SellSideClearingAccount=" << unsigned(getSellSideClearingAccount ()) << "],"
               << "[SellSideOrderQuantity=" << getSellSideOrderQuantity () << "],"
               << "[SellSideFirmID=" << getSellSideFirmID () << "],"
               << "[SellSidePartyRole=" << unsigned(getSellSidePartyRole ()) << "],"
               << "[SellFXMiFIDFlags=" << unsigned(getSellFXMiFIDFlags ()) << "],"
               << "[SellClientID=" << getSellClientID () << "],"
               << "[SellInvestmentDecisionMaker=" << getSellInvestmentDecisionMaker () << "],"
               << "[SellExecutingTrader=" << getSellExecutingTrader () << "],"
               << "[SellPartyRoleQualifiers=" << unsigned(getSellPartyRoleQualifiers ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[Price=" << getPrice () << "],"
               << "[OrderType=" << unsigned(getOrderType ()) << "],"
               << "[TIF=" << unsigned(getTIF ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
