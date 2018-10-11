/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_ORDERMASSCANCELREQUEST_PACKET_H
#define LSE_ORDERMASSCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseOrderMassCancelRequest
{
    public:
        LseHeader mHeader;

        char mClientOrderID[20];
        uint8_t mMassCancelRequestType;
        int32_t mInstrumentID;
        int8_t mReservedField1;
        int8_t mReservedField2;
        char mSegment[4];
        uint8_t mOrderSubType;
        char mReservedField3[10];

        LseOrderMassCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseOrderMassCancelRequest) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'q';

            memset (mClientOrderID, '\0', 20);
            mMassCancelRequestType = 0;
            mInstrumentID = 0;
            mReservedField1 = 0;
            mReservedField2 = 0;
            memset (mSegment, '\0', 4);
            mOrderSubType = 0;
            memset (mReservedField3, '\0', 10);
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

        bool setReservedField3 (const string& v)
        {
            return setString (mReservedField3, v, 10);
        }

        string getReservedField3 ()
        {
            return getString (mReservedField3, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderMassCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelRequestType=" << unsigned(getMassCancelRequestType ()) << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[Segment=" << getSegment () << "],"
               << "[OrderSubType=" << unsigned(getOrderSubType ()) << "],"
               << "[ReservedField3=" << getReservedField3 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
