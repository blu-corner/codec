/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_SERVERHEARTBEATMESSAGE_PACKET_H
#define SWX_SERVERHEARTBEATMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxServerHeartbeatMessage
{
    public:
        swxHeader mHeader;



        swxServerHeartbeatMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxServerHeartbeatMessage) - 2);
            mHeader.mMessageType = 'H';


        }



        string toString ()
        {
            stringstream ss;
            ss << "ServerHeartbeatMessage::null";
            return ss.str ();
        }
});

} // namespace neueda

#endif
