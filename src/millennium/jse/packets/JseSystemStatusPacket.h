/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_SYSTEMSTATUS_PACKET_H
#define JSE_SYSTEMSTATUS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseSystemStatus
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        uint8_t mStatus;

        JseSystemStatus ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseSystemStatus) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'n';

            mPartitionID = 0;
            mStatus = 0;
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

        bool setStatus (uint8_t v)
        {
            mStatus = v;
            return true;
        }

        uint8_t getStatus ()
        {
            return mStatus;
        }

        string toString ()
        {
            stringstream ss;
            ss << "SystemStatus::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[Status=" << unsigned(getStatus ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
