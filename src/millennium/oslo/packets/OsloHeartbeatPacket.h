/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_HEARTBEAT_PACKET_H
#define OSLO_HEARTBEAT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloHeartbeat
{
    public:
        OsloHeader mHeader;



        OsloHeartbeat ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloHeartbeat) - ((int16_t)sizeof (OsloHeader) - 1);
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
