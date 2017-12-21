/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_HEARTBEAT_PACKET_H
#define LSE_HEARTBEAT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseHeartbeat
{
    public:


        LseHeartbeat ()
        {

        }



        string toString ()
        {
            stringstream ss;
            ss << "Heartbeat::null";
            return ss.str ();
        }
});

}

#endif
