/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_SYSTEMSTATUS_PACKET_H
#define LSE_SYSTEMSTATUS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseSystemStatus
{
    public:
        uint8_t mAppID;
        uint8_t mStatus;

        LseSystemStatus ()
        {
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

}

#endif
