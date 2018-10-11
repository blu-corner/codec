/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_HEADER_PACKET_H
#define SWX_HEADER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxHeader
{
    public:
        uint16_t mMessageLength;
        char mMessageType;

        swxHeader ()
        {

            mMessageLength = 0;
        }

        bool setMessageLength (uint16_t v)
        {
            mMessageLength = htons (v);
            return true;
        }

        uint16_t getMessageLength ()
        {
            return ntohs (mMessageLength);
        }

        bool setMessageType (char v)
        {
            mMessageType = v;
            return true;
        }

        char getMessageType ()
        {
            return mMessageType;
        }

        string toString ()
        {
            stringstream ss;
            ss << "Header::"
               << "[MessageLength=" << getMessageLength () << "],"
               << "[MessageType=" << getMessageType () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
