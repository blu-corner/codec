/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_SYSTEMSTATUS_PACKET_H
#define OSLO_SYSTEMSTATUS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloSystemStatus
{
    public:
        OsloHeader mHeader;

        int8_t mPartitionID;
        int8_t mStatus;

        OsloSystemStatus ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloSystemStatus) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'n';

            mPartitionID = 0;
            mStatus = 0;
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

        bool setStatus (int8_t v)
        {
            mStatus = v;
            return true;
        }

        int8_t getStatus ()
        {
            return mStatus;
        }

        string toString ()
        {
            stringstream ss;
            ss << "SystemStatus::"
               << "[PartitionID=" << getPartitionID () << "],"
               << "[Status=" << getStatus () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
