/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_BUSINESSREJECT_PACKET_H
#define LSE_BUSINESSREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseBusinessReject
{
    public:
        LseHeader mHeader;

        uint8_t mAppID;
        int32_t mSequenceNo;
        int32_t mRejectCode;
        char mClientOrderID[20];
        char mOrderID[12];
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mReservedField1[10];

        LseBusinessReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseBusinessReject) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'j';

            mAppID = 0;
            mSequenceNo = 0;
            mRejectCode = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            memset (mReservedField1, '\0', 10);
        }

        bool setAppID (uint8_t v)
        {
            mAppID = v;
            return true;
        }

        uint8_t getAppID ()
        {
            return mAppID;
        }

        bool setSequenceNo (int32_t v)
        {
            mSequenceNo = v;
            return true;
        }

        int32_t getSequenceNo ()
        {
            return mSequenceNo;
        }

        bool setRejectCode (int32_t v)
        {
            mRejectCode = v;
            return true;
        }

        int32_t getRejectCode ()
        {
            return mRejectCode;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setOrderID (const string& v)
        {
            return setString (mOrderID, v, 12);
        }

        string getOrderID ()
        {
            return getString (mOrderID, 12);
        }

        bool setTransactTimeSeconds (uint32_t v)
        {
            mTransactTimeSeconds = v;
            return true;
        }

        uint32_t getTransactTimeSeconds ()
        {
            return mTransactTimeSeconds;
        }

        bool setTransactTimeUsecs (uint32_t v)
        {
            mTransactTimeUsecs = v;
            return true;
        }

        uint32_t getTransactTimeUsecs ()
        {
            return mTransactTimeUsecs;
        }

        bool setReservedField1 (const string& v)
        {
            return setString (mReservedField1, v, 10);
        }

        string getReservedField1 ()
        {
            return getString (mReservedField1, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "BusinessReject::"
               << "[AppID=" << unsigned(getAppID ()) << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[ReservedField1=" << getReservedField1 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
