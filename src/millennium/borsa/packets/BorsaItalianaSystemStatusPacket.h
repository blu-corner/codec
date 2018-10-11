/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_SYSTEMSTATUS_PACKET_H
#define BORSAITALIANA_SYSTEMSTATUS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaSystemStatus
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mAppID;
        uint8_t mAppStatus;

        BorsaItalianaSystemStatus ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaSystemStatus) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'n';

            mAppID = 0;
            mAppStatus = 0;
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

        bool setAppStatus (uint8_t v)
        {
            mAppStatus = v;
            return true;
        }

        uint8_t getAppStatus ()
        {
            return mAppStatus;
        }

        string toString ()
        {
            stringstream ss;
            ss << "SystemStatus::"
               << "[AppID=" << unsigned(getAppID ()) << "],"
               << "[AppStatus=" << unsigned(getAppStatus ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
