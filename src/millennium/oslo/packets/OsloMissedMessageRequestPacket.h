/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_MISSEDMESSAGEREQUEST_PACKET_H
#define OSLO_MISSEDMESSAGEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloMissedMessageRequest
{
    public:
        OsloHeader mHeader;

        int8_t mPartitionID;
        int32_t mLastMsgSeqNum;

        OsloMissedMessageRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloMissedMessageRequest) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'M';

            mPartitionID = 0;
            mLastMsgSeqNum = 0;
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

        bool setLastMsgSeqNum (int32_t v)
        {
            mLastMsgSeqNum = v;
            return true;
        }

        int32_t getLastMsgSeqNum ()
        {
            return mLastMsgSeqNum;
        }

        string toString ()
        {
            stringstream ss;
            ss << "MissedMessageRequest::"
               << "[PartitionID=" << getPartitionID () << "],"
               << "[LastMsgSeqNum=" << getLastMsgSeqNum () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
