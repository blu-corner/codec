/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_ORDERMASSCANCELREQUEST_PACKET_H
#define TURQUOISE_ORDERMASSCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseOrderMassCancelRequest
{
    public:
        TurquoiseHeader mHeader;

        char mClientOrderID[20];
        int8_t mMassCancelType;
        char mCommonSymbol[8];
        char mSegment[4];
        int8_t mReservedField1;
        int8_t mTargetBook;
        char mReservedField2[9];

        TurquoiseOrderMassCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseOrderMassCancelRequest) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'q';

            memset (mClientOrderID, '\0', 20);
            mMassCancelType = 0;
            memset (mCommonSymbol, '\0', 8);
            memset (mSegment, '\0', 4);
            mReservedField1 = 0;
            mTargetBook = 0;
            memset (mReservedField2, '\0', 9);
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setMassCancelType (int8_t v)
        {
            mMassCancelType = v;
            return true;
        }

        int8_t getMassCancelType ()
        {
            return mMassCancelType;
        }

        bool setCommonSymbol (const string& v)
        {
            return setString (mCommonSymbol, v, 8);
        }

        string getCommonSymbol ()
        {
            return getString (mCommonSymbol, 8);
        }

        bool setSegment (const string& v)
        {
            return setString (mSegment, v, 4);
        }

        string getSegment ()
        {
            return getString (mSegment, 4);
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

        bool setTargetBook (int8_t v)
        {
            mTargetBook = v;
            return true;
        }

        int8_t getTargetBook ()
        {
            return mTargetBook;
        }

        bool setReservedField2 (const string& v)
        {
            return setString (mReservedField2, v, 9);
        }

        string getReservedField2 ()
        {
            return getString (mReservedField2, 9);
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderMassCancelRequest::"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelType=" << getMassCancelType () << "],"
               << "[CommonSymbol=" << getCommonSymbol () << "],"
               << "[Segment=" << getSegment () << "],"
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[TargetBook=" << getTargetBook () << "],"
               << "[ReservedField2=" << getReservedField2 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
