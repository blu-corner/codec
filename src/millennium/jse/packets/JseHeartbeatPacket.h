/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_HEARTBEAT_PACKET_H
#define JSE_HEARTBEAT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseHeartbeat
{
    public:
        JseHeader mHeader;



        JseHeartbeat ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseHeartbeat) - ((int16_t)sizeof (JseHeader) - 1);
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
