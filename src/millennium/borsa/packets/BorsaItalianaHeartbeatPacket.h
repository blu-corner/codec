/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_HEARTBEAT_PACKET_H
#define BORSAITALIANA_HEARTBEAT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaHeartbeat
{
    public:
        BorsaItalianaHeader mHeader;



        BorsaItalianaHeartbeat ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaHeartbeat) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
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
