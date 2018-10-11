/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_HEARTBEAT_PACKET_H
#define LSE_HEARTBEAT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseHeartbeat
{
    public:
        LseHeader mHeader;



        LseHeartbeat ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseHeartbeat) - ((int16_t)sizeof (LseHeader) - 1);
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
