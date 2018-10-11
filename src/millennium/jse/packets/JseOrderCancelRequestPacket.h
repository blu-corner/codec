/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_ORDERCANCELREQUEST_PACKET_H
#define JSE_ORDERCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseOrderCancelRequest
{
    public:
        JseHeader mHeader;

        char mClientOrderID[20];
        char mOriginalClientOrderID[20];
        char mOrderID[12];
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        uint8_t mSide;
        uint8_t mOrderBook;

        JseOrderCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseOrderCancelRequest) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'F';

            memset (mClientOrderID, '\0', 20);
            memset (mOriginalClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            mSide = 0;
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

        bool setOriginalClientOrderID (const string& v)
        {
            return setString (mOriginalClientOrderID, v, 20);
        }

        string getOriginalClientOrderID ()
        {
            return getString (mOriginalClientOrderID, 20);
        }

        bool setOrderID (const string& v)
        {
            return setString (mOrderID, v, 12);
        }

        string getOrderID ()
        {
            return getString (mOrderID, 12);
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

        bool setSide (uint8_t v)
        {
            mSide = v;
            return true;
        }

        uint8_t getSide ()
        {
            return mSide;
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
            ss << "OrderCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OriginalClientOrderID=" << getOriginalClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
