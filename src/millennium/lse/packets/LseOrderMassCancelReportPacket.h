/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_ORDERMASSCANCELREPORT_PACKET_H
#define LSE_ORDERMASSCANCELREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseOrderMassCancelReport
{
    public:
        LseHeader mHeader;

        uint8_t mAppID;
        int32_t mSequenceNo;
        char mClientOrderID[20];
        uint8_t mMassCancelResponse;
        int32_t mMassCancelRejectReason;
        int32_t mReservedField1;
        uint32_t mTransactTimeSeconds;
        uint32_t mTransactTimeUsecs;
        char mReservedField2[10];

        LseOrderMassCancelReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseOrderMassCancelReport) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'r';

            mAppID = 0;
            mSequenceNo = 0;
            memset (mClientOrderID, '\0', 20);
            mMassCancelResponse = 0;
            mMassCancelRejectReason = 0;
            mReservedField1 = 0;
            mTransactTimeSeconds = 0;
            mTransactTimeUsecs = 0;
            memset (mReservedField2, '\0', 10);
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

        bool setReservedField1 (int32_t v)
        {
            mReservedField1 = v;
            return true;
        }

        int32_t getReservedField1 ()
        {
            return mReservedField1;
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

        bool setReservedField2 (const string& v)
        {
            return setString (mReservedField2, v, 10);
        }

        string getReservedField2 ()
        {
            return getString (mReservedField2, 10);
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
               << "[ReservedField1=" << getReservedField1 () << "],"
               << "[TransactTimeSeconds=" << getTransactTimeSeconds () << "],"
               << "[TransactTimeUsecs=" << getTransactTimeUsecs () << "],"
               << "[ReservedField2=" << getReservedField2 () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
