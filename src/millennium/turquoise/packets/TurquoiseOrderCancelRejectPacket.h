/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_ORDERCANCELREJECT_PACKET_H
#define TURQUOISE_ORDERCANCELREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseOrderCancelReject
{
    public:
        TurquoiseHeader mHeader;

        int8_t mAppID;
        int32_t mSequenceNo;
        char mClientOrderID[20];
        char mOrderID[12];
        int32_t mCancelRejectReason;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mReservedField1[10];

        TurquoiseOrderCancelReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseOrderCancelReject) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = '9';

            mAppID = 0;
            mSequenceNo = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mCancelRejectReason = 0;
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            memset (mReservedField1, '\0', 10);
        }

        bool setAppID (int8_t v)
        {
            mAppID = v;
            return true;
        }

        int8_t getAppID ()
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
            ss << "OrderCancelReject::"
               << "[AppID=" << getAppID () << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[CancelRejectReason=" << getCancelRejectReason () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[ReservedField1=" << getReservedField1 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
