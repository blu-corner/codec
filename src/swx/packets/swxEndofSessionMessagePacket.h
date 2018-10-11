/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_ENDOFSESSIONMESSAGE_PACKET_H
#define SWX_ENDOFSESSIONMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxEndofSessionMessage
{
    public:
        swxHeader mHeader;



        swxEndofSessionMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxEndofSessionMessage) - 2);
            mHeader.mMessageType = 'Z';


        }



        string toString ()
        {
            stringstream ss;
            ss << "EndofSessionMessage::null";
            return ss.str ();
        }
});

} // namespace neueda

#endif
