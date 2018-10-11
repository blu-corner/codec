/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_CLIENTHEARTBEATMESSAGE_PACKET_H
#define SWX_CLIENTHEARTBEATMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxClientHeartbeatMessage
{
    public:
        swxHeader mHeader;



        swxClientHeartbeatMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxClientHeartbeatMessage) - 2);
            mHeader.mMessageType = 'R';


        }



        string toString ()
        {
            stringstream ss;
            ss << "ClientHeartbeatMessage::null";
            return ss.str ();
        }
});

} // namespace neueda

#endif
