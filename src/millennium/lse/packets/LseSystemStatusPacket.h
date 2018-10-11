/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_SYSTEMSTATUS_PACKET_H
#define LSE_SYSTEMSTATUS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseSystemStatus
{
    public:
        LseHeader mHeader;

        uint8_t mAppID;
        uint8_t mStatus;

        LseSystemStatus ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseSystemStatus) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'n';

            mAppID = 0;
            mStatus = 0;
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
               << "[AppID=" << unsigned(getAppID ()) << "],"
               << "[Status=" << unsigned(getStatus ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
