/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_SECURITYDEFINITIONREQUEST_PACKET_H
#define JSE_SECURITYDEFINITIONREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseSecurityDefinitionRequest
{
    public:
        JseHeader mHeader;

        char mSecurityRequestID[10];
        uint8_t mSequenceType;
        int64_t mStrikePrice;
        char mMaturityDate[8];
        uint8_t mReservedfield;
        char mReferenceInstrument[25];
        int64_t mReferencePrice;
        int32_t mNearMonthType;
        int32_t mFarMonthType;
        char mFarMaturityDate[8];

        JseSecurityDefinitionRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseSecurityDefinitionRequest) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'O';

            memset (mSecurityRequestID, '\0', 10);
            mSequenceType = 0;
            mStrikePrice = 0;
            memset (mMaturityDate, '\0', 8);
            mReservedfield = 0;
            memset (mReferenceInstrument, '\0', 25);
            mReferencePrice = 0;
            mNearMonthType = 0;
            mFarMonthType = 0;
            memset (mFarMaturityDate, '\0', 8);
        }

        bool setSecurityRequestID (const string& v)
        {
            return setString (mSecurityRequestID, v, 10);
        }

        string getSecurityRequestID ()
        {
            return getString (mSecurityRequestID, 10);
        }

        bool setSequenceType (uint8_t v)
        {
            mSequenceType = v;
            return true;
        }

        uint8_t getSequenceType ()
        {
            return mSequenceType;
        }

        bool setStrikePrice (int64_t v)
        {
            mStrikePrice = v;
            return true;
        }

        int64_t getStrikePrice ()
        {
            return mStrikePrice;
        }

        bool setMaturityDate (const string& v)
        {
            return setString (mMaturityDate, v, 8);
        }

        string getMaturityDate ()
        {
            return getString (mMaturityDate, 8);
        }

        bool setReservedfield (uint8_t v)
        {
            mReservedfield = v;
            return true;
        }

        uint8_t getReservedfield ()
        {
            return mReservedfield;
        }

        bool setReferenceInstrument (const string& v)
        {
            return setString (mReferenceInstrument, v, 25);
        }

        string getReferenceInstrument ()
        {
            return getString (mReferenceInstrument, 25);
        }

        bool setReferencePrice (int64_t v)
        {
            mReferencePrice = v;
            return true;
        }

        int64_t getReferencePrice ()
        {
            return mReferencePrice;
        }

        bool setNearMonthType (int32_t v)
        {
            mNearMonthType = v;
            return true;
        }

        int32_t getNearMonthType ()
        {
            return mNearMonthType;
        }

        bool setFarMonthType (int32_t v)
        {
            mFarMonthType = v;
            return true;
        }

        int32_t getFarMonthType ()
        {
            return mFarMonthType;
        }

        bool setFarMaturityDate (const string& v)
        {
            return setString (mFarMaturityDate, v, 8);
        }

        string getFarMaturityDate ()
        {
            return getString (mFarMaturityDate, 8);
        }

        string toString ()
        {
            stringstream ss;
            ss << "SecurityDefinitionRequest::"
               << "[SecurityRequestID=" << getSecurityRequestID () << "],"
               << "[SequenceType=" << unsigned(getSequenceType ()) << "],"
               << "[StrikePrice=" << getStrikePrice () << "],"
               << "[MaturityDate=" << getMaturityDate () << "],"
               << "[Reservedfield=" << unsigned(getReservedfield ()) << "],"
               << "[ReferenceInstrument=" << getReferenceInstrument () << "],"
               << "[ReferencePrice=" << getReferencePrice () << "],"
               << "[NearMonthType=" << getNearMonthType () << "],"
               << "[FarMonthType=" << getFarMonthType () << "],"
               << "[FarMaturityDate=" << getFarMaturityDate () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
