/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_ORDERMASSCANCELREPORT_PACKET_H
#define BORSAITALIANA_ORDERMASSCANCELREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaOrderMassCancelReport
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mAppID;
        int32_t mSequenceNo;
        char mClientOrderID[20];
        uint8_t mMassCancelResponse;
        int32_t mMassCancelRejectReason;
        int32_t mTotalAffectedOrders;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mReservedField1[10];

        BorsaItalianaOrderMassCancelReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaOrderMassCancelReport) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'r';

            mAppID = 0;
            mSequenceNo = 0;
            memset (mClientOrderID, '\0', 20);
            mMassCancelResponse = 0;
            mMassCancelRejectReason = 0;
            mTotalAffectedOrders = 0;
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

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setMassCancelResponse (uint8_t v)
        {
            mMassCancelResponse = v;
            return true;
        }

        uint8_t getMassCancelResponse ()
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
            ss << "OrderMassCancelReport::"
               << "[AppID=" << unsigned(getAppID ()) << "],"
               << "[SequenceNo=" << getSequenceNo () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[MassCancelResponse=" << unsigned(getMassCancelResponse ()) << "],"
               << "[MassCancelRejectReason=" << getMassCancelRejectReason () << "],"
               << "[TotalAffectedOrders=" << getTotalAffectedOrders () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[ReservedField1=" << getReservedField1 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
