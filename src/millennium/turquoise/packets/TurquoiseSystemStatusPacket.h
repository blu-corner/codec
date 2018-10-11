/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_SYSTEMSTATUS_PACKET_H
#define TURQUOISE_SYSTEMSTATUS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseSystemStatus
{
    public:
        TurquoiseHeader mHeader;

        int8_t mAppID;
        int8_t mRejectReason;

        TurquoiseSystemStatus ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseSystemStatus) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'n';

            mAppID = 0;
            mRejectReason = 0;
        }

        bool setAppID (int8_t v)
        {
            mAppID = v;
            return true;
        }

        int8_t getAppID ()
        {
            return mAppID;
        }

        bool setRejectReason (int8_t v)
        {
            mRejectReason = v;
            return true;
        }

        int8_t getRejectReason ()
        {
            return mRejectReason;
        }

        string toString ()
        {
            stringstream ss;
            ss << "SystemStatus::"
               << "[AppID=" << getAppID () << "],"
               << "[RejectReason=" << getRejectReason () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
