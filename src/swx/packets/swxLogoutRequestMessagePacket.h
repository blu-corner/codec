/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_LOGOUTREQUESTMESSAGE_PACKET_H
#define SWX_LOGOUTREQUESTMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxLogoutRequestMessage
{
    public:
        swxHeader mHeader;



        swxLogoutRequestMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxLogoutRequestMessage) - 2);
            mHeader.mMessageType = 'O';


        }



        string toString ()
        {
            stringstream ss;
            ss << "LogoutRequestMessage::null";
            return ss.str ();
        }
});

} // namespace neueda

#endif
