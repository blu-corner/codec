/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_QUOTE_PACKET_H
#define JSE_QUOTE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseQuote
{
    public:
        JseHeader mHeader;

        char mClientOrderID[20];
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        char mAccount[10];
        int64_t mBidPrice;
        int32_t mBidQuantity;
        int64_t mOfferPrice;
        int32_t mOfferQuantity;
        uint8_t mCancelonDisconnect;
        uint8_t mAnonymity;
        uint8_t mOrderBook;

        JseQuote ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseQuote) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'S';

            memset (mClientOrderID, '\0', 20);
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            memset (mAccount, '\0', 10);
            mBidPrice = 0;
            mBidQuantity = 0;
            mOfferPrice = 0;
            mOfferQuantity = 0;
            mCancelonDisconnect = 0;
            mAnonymity = 0;
            mOrderBook = 0;
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

        bool setBidPrice (int64_t v)
        {
            mBidPrice = v;
            return true;
        }

        int64_t getBidPrice ()
        {
            return mBidPrice;
        }

        bool setBidQuantity (int32_t v)
        {
            mBidQuantity = v;
            return true;
        }

        int32_t getBidQuantity ()
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

        bool setOfferQuantity (int32_t v)
        {
            mOfferQuantity = v;
            return true;
        }

        int32_t getOfferQuantity ()
        {
            return mOfferQuantity;
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

        bool setAnonymity (uint8_t v)
        {
            mAnonymity = v;
            return true;
        }

        uint8_t getAnonymity ()
        {
            return mAnonymity;
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

        string toString ()
        {
            stringstream ss;
            ss << "Quote::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Account=" << getAccount () << "],"
               << "[BidPrice=" << getBidPrice () << "],"
               << "[BidQuantity=" << getBidQuantity () << "],"
               << "[OfferPrice=" << getOfferPrice () << "],"
               << "[OfferQuantity=" << getOfferQuantity () << "],"
               << "[CancelonDisconnect=" << unsigned(getCancelonDisconnect ()) << "],"
               << "[Anonymity=" << unsigned(getAnonymity ()) << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
