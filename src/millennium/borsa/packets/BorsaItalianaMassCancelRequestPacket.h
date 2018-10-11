/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_MASSCANCELREQUEST_PACKET_H
#define BORSAITALIANA_MASSCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaMassCancelRequest
{
    public:
        BorsaItalianaHeader mHeader;

        char mClientOrderID[20];
        uint8_t mMassCancelRequestType;
        int32_t mInstrumentID;
        int8_t mOrderBook;
        int8_t mReservedField1;
        char mSegment[4];
        uint8_t mOrderSubType;
        char mReservedField2[10];

        BorsaItalianaMassCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaMassCancelRequest) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'q';

            memset (mClientOrderID, '\0', 20);
            mMassCancelRequestType = 0;
            mInstrumentID = 0;
            mOrderBook = 0;
            mReservedField1 = 0;
            memset (mSegment, '\0', 4);
            mOrderSubType = 0;
            memset (mReservedField2, '\0', 10);
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

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
        }

        bool setOrderBook (int8_t v)
        {
            mOrderBook = v;
            return true;
        }

        int8_t getOrderBook ()
        {
            return mOrderBook;
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

        bool setSegment (const string& v)
        {
            return setString (mSegment, v, 4);
        }

        string getSegment ()
        {
            return getString (mSegment, 4);
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

        bool setReservedField2 (const string& v)
        {
            return setString (mReservedField2, v, 10);
        }

        string getReservedField2 ()
        {
            return getString (mReservedField2, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "MassCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelRequestType=" << unsigned(getMassCancelRequestType ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[OrderBook=" << getOrderBook () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[Segment=" << getSegment () << "],"
               << "[OrderSubType=" << unsigned(getOrderSubType ()) << "],"
               << "[ReservedField2=" << getReservedField2 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
