/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_MISSEDMESSAGEREQUESTACK_PACKET_H
#define LSE_MISSEDMESSAGEREQUESTACK_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseMissedMessageRequestAck
{
    public:
        uint8_t mResponseType;

        LseMissedMessageRequestAck ()
        {
            mResponseType = 0;
        }

        bool setResponseType (uint8_t v)
        {
            mResponseType = v;
            return true;
        }

        uint8_t getResponseType ()
        {
            return mResponseType;
        }

        string toString ()
        {
            stringstream ss;
            ss << "MissedMessageRequestAck::"
               << "[ResponseType=" << unsigned(getResponseType ()) << "]";
            return ss.str ();
        }
});

}

#endif
