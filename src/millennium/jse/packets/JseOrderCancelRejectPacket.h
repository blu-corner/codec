/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_ORDERCANCELREJECT_PACKET_H
#define JSE_ORDERCANCELREJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseOrderCancelReject
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mClientOrderID[20];
        char mOrderID[12];
        uint64_t mTransactTime;
        int32_t mRejectCode;
        uint8_t mOrderBook;

        JseOrderCancelReject ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseOrderCancelReject) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = '9';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mTransactTime = 0;
            mRejectCode = 0;
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

        bool setRejectCode (int32_t v)
        {
            mRejectCode = v;
            return true;
        }

        int32_t getRejectCode ()
        {
            return mRejectCode;
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
            ss << "OrderCancelReject::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[TransactTime=" << getTransactTime () << "],"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
