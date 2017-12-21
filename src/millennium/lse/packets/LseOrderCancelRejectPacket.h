/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_ORDERCANCELREJECT_PACKET_H
#define LSE_ORDERCANCELREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseOrderCancelReject
{
    public:
        uint8_t mAppID;
        int32_t mSequenceNo;
        char mClientOrderID[20];
        char mOrderID[12];
        int32_t mCancelRejectReason;
        uint64_t mTransactTime;
        char mRfqID[10];

        LseOrderCancelReject ()
        {
            mAppID = 0;
            mSequenceNo = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mCancelRejectReason = 0;
            mTransactTime = 0;
            memset (mRfqID, '\0', 10);
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

        bool setCancelRejectReason (int32_t v)
        {
            mCancelRejectReason = v;
            return true;
        }

        int32_t getCancelRejectReason ()
        {
            return mCancelRejectReason;
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

        bool setRfqID (const string& v)
        {
            return setString (mRfqID, v, 10);
        }

        string getRfqID ()
        {
            return getString (mRfqID, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderCancelReject::"
               << "[AppID=" << unsigned(getAppID ()) << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[CancelRejectReason=" << getCancelRejectReason () << "],"
               << "[TransactTime=" << getTransactTime () << "],"
               << "[RfqID=" << getRfqID () << "]";
            return ss.str ();
        }
});

}

#endif
