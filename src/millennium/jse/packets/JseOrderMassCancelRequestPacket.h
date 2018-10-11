/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_ORDERMASSCANCELREQUEST_PACKET_H
#define JSE_ORDERMASSCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseOrderMassCancelRequest
{
    public:
        JseHeader mHeader;

        char mClientOrderID[20];
        uint8_t mMassCancelRequestType;
        int32_t mSecurityID;
        char mSegment[6];
        uint8_t mOrderSubType;
        uint8_t mOrderBook;

        JseOrderMassCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseOrderMassCancelRequest) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'q';

            memset (mClientOrderID, '\0', 20);
            mMassCancelRequestType = 0;
            mSecurityID = 0;
            memset (mSegment, '\0', 6);
            mOrderSubType = 0;
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

        bool setMassCancelRequestType (uint8_t v)
        {
            mMassCancelRequestType = v;
            return true;
        }

        uint8_t getMassCancelRequestType ()
        {
            return mMassCancelRequestType;
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

        bool setSegment (const string& v)
        {
            return setString (mSegment, v, 6);
        }

        string getSegment ()
        {
            return getString (mSegment, 6);
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
            ss << "OrderMassCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelRequestType=" << unsigned(getMassCancelRequestType ()) << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[Segment=" << getSegment () << "],"
               << "[OrderSubType=" << unsigned(getOrderSubType ()) << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
