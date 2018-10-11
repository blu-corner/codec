/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_MASSCANCELREQUEST_PACKET_H
#define OSLO_MASSCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloMassCancelRequest
{
    public:
        OsloHeader mHeader;

        char mClientOrderID[20];
        int8_t mMassCancelRequestType;
        int32_t mInstrumentID;
        int8_t mReservedField1;
        int8_t mReservedField2;
        char mSegment[4];
        int8_t mOrderSubType;
        int8_t mTargetBook;
        char mReservedField3[9];

        OsloMassCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloMassCancelRequest) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'q';

            memset (mClientOrderID, '\0', 20);
            mMassCancelRequestType = 0;
            mInstrumentID = 0;
            mReservedField1 = 0;
            mReservedField2 = 0;
            memset (mSegment, '\0', 4);
            mOrderSubType = 0;
            mTargetBook = 0;
            memset (mReservedField3, '\0', 9);
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setMassCancelRequestType (int8_t v)
        {
            mMassCancelRequestType = v;
            return true;
        }

        int8_t getMassCancelRequestType ()
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

        bool setOrderSubType (int8_t v)
        {
            mOrderSubType = v;
            return true;
        }

        int8_t getOrderSubType ()
        {
            return mOrderSubType;
        }

        bool setTargetBook (int8_t v)
        {
            mTargetBook = v;
            return true;
        }

        int8_t getTargetBook ()
        {
            return mTargetBook;
        }

        bool setReservedField3 (const string& v)
        {
            return setString (mReservedField3, v, 9);
        }

        string getReservedField3 ()
        {
            return getString (mReservedField3, 9);
        }

        string toString ()
        {
            stringstream ss;
            ss << "MassCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelRequestType=" << getMassCancelRequestType () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[ReservedField2=" << getReservedField2 () << "],"
               << "[Segment=" << getSegment () << "],"
               << "[OrderSubType=" << getOrderSubType () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ReservedField3=" << getReservedField3 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
