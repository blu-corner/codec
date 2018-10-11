/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_MASSCANCELREPORT_PACKET_H
#define OSLO_MASSCANCELREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloMassCancelReport
{
    public:
        OsloHeader mHeader;

        int8_t mPartitionID;
        int32_t mSequenceNo;
        char mClientOrderID[20];
        int8_t mMassCancelResponse;
        int32_t mMassCancelRejectReason;
        int32_t mTotalAffectedOrders;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mReservedField[10];

        OsloMassCancelReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloMassCancelReport) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'r';

            mPartitionID = 0;
            mSequenceNo = 0;
            memset (mClientOrderID, '\0', 20);
            mMassCancelResponse = 0;
            mMassCancelRejectReason = 0;
            mTotalAffectedOrders = 0;
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

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setMassCancelResponse (int8_t v)
        {
            mMassCancelResponse = v;
            return true;
        }

        int8_t getMassCancelResponse ()
        {
            return mMassCancelResponse;
        }

        bool setMassCancelRejectReason (int32_t v)
        {
            mMassCancelRejectReason = v;
            return true;
        }

        int32_t getMassCancelRejectReason ()
        {
            return mMassCancelRejectReason;
        }

        bool setTotalAffectedOrders (int32_t v)
        {
            mTotalAffectedOrders = v;
            return true;
        }

        int32_t getTotalAffectedOrders ()
        {
            return mTotalAffectedOrders;
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
            ss << "MassCancelReport::"
               << "[PartitionID=" << getPartitionID () << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelResponse=" << getMassCancelResponse () << "],"
               << "[MassCancelRejectReason=" << getMassCancelRejectReason () << "],"
               << "[TotalAffectedOrders=" << getTotalAffectedOrders () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[ReservedField=" << getReservedField () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
