/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_ORDERCANCELREJECT_PACKET_H
#define LSE_ORDERCANCELREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseOrderCancelReject
{
    public:
        LseHeader mHeader;

        uint8_t mAppID;
        int32_t mSequenceNo;
        char mClientOrderID[20];
        char mOrderID[12];
        int32_t mCancelRejectReason;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mRfqID[10];

        LseOrderCancelReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseOrderCancelReject) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = '9';

            mAppID = 0;
            mSequenceNo = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mCancelRejectReason = 0;
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
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
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[RfqID=" << getRfqID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
