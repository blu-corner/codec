/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_DEBUGMESSAGE_PACKET_H
#define SWX_DEBUGMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxDebugMessage
{
    public:
        swxHeader mHeader;

        char mText;

        swxDebugMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxDebugMessage) - 2);
            mHeader.mMessageType = '+';


        }

        bool setText (char v)
        {
            mText = v;
            return true;
        }

        char getText ()
        {
            return mText;
        }

        string toString ()
        {
            stringstream ss;
            ss << "DebugMessage::"
               << "[Text=" << getText () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
