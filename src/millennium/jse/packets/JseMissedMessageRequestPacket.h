/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_MISSEDMESSAGEREQUEST_PACKET_H
#define JSE_MISSEDMESSAGEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseMissedMessageRequest
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;

        JseMissedMessageRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseMissedMessageRequest) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'M';

            mPartitionID = 0;
            mSequenceNumber = 0;
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

        string toString ()
        {
            stringstream ss;
            ss << "MissedMessageRequest::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
