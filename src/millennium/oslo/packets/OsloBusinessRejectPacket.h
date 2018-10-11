/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_BUSINESSREJECT_PACKET_H
#define OSLO_BUSINESSREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloBusinessReject
{
    public:
        OsloHeader mHeader;

        int8_t mPartitionID;
        int32_t mSequenceNo;
        int32_t mRejectCode;
        char mClientOrderID[20];
        char mOrderID[12];
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mReservedField[10];

        OsloBusinessReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloBusinessReject) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'j';

            mPartitionID = 0;
            mSequenceNo = 0;
            mRejectCode = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            memset (mReservedField, '\0', 10);
        }

        bool setPartitionID (int8_t v)
        {
            mPartitionID = v;
            return true;
        }

        int8_t getPartitionID ()
        {
            return mPartitionID;
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

        bool setReservedField (const string& v)
        {
            return setString (mReservedField, v, 10);
        }

        string getReservedField ()
        {
            return getString (mReservedField, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "BusinessReject::"
               << "[PartitionID=" << getPartitionID () << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[ReservedField=" << getReservedField () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
