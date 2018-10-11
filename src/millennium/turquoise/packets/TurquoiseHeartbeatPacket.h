/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_HEARTBEAT_PACKET_H
#define TURQUOISE_HEARTBEAT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseHeartbeat
{
    public:
        TurquoiseHeader mHeader;



        TurquoiseHeartbeat ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseHeartbeat) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = '0';


        }



        string toString ()
        {
            stringstream ss;
            ss << "Heartbeat::null";
            return ss.str ();
        }
});

} // namespace neueda

#endif
