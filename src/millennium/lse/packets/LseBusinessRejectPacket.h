/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_BUSINESSREJECT_PACKET_H
#define LSE_BUSINESSREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseBusinessReject
{
    public:
        uint8_t mAppID;
        int32_t mSequenceNo;
        int32_t mRejectCode;
        char mClientOrderID[20];
        char mOrderID[12];
        uint64_t mTransactTime;
        char mReservedField1[10];

        LseBusinessReject ()
        {
            mAppID = 0;
            mSequenceNo = 0;
            mRejectCode = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mTransactTime = 0;
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

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return true;
        }

        uint64_t getTransactTime ()
        {
            return mTransactTime;
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
               << "[TransactTime=" << getTransactTime () << "],"
               << "[ReservedField1=" << getReservedField1 () << "]";
            return ss.str ();
        }
});

}

#endif
