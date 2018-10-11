/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_ORDERMASSCANCELREPORT_PACKET_H
#define JSE_ORDERMASSCANCELREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseOrderMassCancelReport
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mClientOrderID[20];
        uint8_t mStatus;
        int32_t mRejectCode;
        uint64_t mTransactTime;
        uint8_t mOrderBook;

        JseOrderMassCancelReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseOrderMassCancelReport) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'r';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mClientOrderID, '\0', 20);
            mStatus = 0;
            mRejectCode = 0;
            mTransactTime = 0;
            mOrderBook = 0;
        }

        bool setPartitionID (uint8_t v)
        {
            mPartitionID = v;
            return true;
        }

        uint8_t getPartitionID ()
        {
            return mPartitionID;
        }

        bool setSequenceNumber (int32_t v)
        {
            mSequenceNumber = v;
            return true;
        }

        int32_t getSequenceNumber ()
        {
            return mSequenceNumber;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        bool setStatus (uint8_t v)
        {
            mStatus = v;
            return true;
        }

        uint8_t getStatus ()
        {
            return mStatus;
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

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return true;
        }

        uint64_t getTransactTime ()
        {
            return mTransactTime;
        }

        bool setOrderBook (uint8_t v)
        {
            mOrderBook = v;
            return true;
        }

        uint8_t getOrderBook ()
        {
            return mOrderBook;
        }

        string toString ()
        {
            stringstream ss;
            ss << "OrderMassCancelReport::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[Status=" << unsigned(getStatus ()) << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[TransactTime=" << getTransactTime () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
