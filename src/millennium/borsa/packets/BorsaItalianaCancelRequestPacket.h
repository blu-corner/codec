/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_CANCELREQUEST_PACKET_H
#define BORSAITALIANA_CANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaCancelRequest
{
    public:
        BorsaItalianaHeader mHeader;

        char mClientOrderID[20];
        char mOriginalClientOrderID[20];
        char mOrderID[12];
        int32_t mInstrumentID;
        int8_t mReservedField1;
        int8_t mReservedField2;
        int8_t mSide;
        char mRFQID[10];

        BorsaItalianaCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaCancelRequest) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'F';

            memset (mClientOrderID, '\0', 20);
            memset (mOriginalClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mInstrumentID = 0;
            mReservedField1 = 0;
            mReservedField2 = 0;
            mSide = 0;
            memset (mRFQID, '\0', 10);
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

        bool setSide (int8_t v)
        {
            mSide = v;
            return true;
        }

        int8_t getSide ()
        {
            return mSide;
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "CancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OriginalClientOrderID=" << getOriginalClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[Side=" << getSide () << "],"
               << "[RFQID=" << getRFQID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
