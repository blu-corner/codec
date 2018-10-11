/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_HEADER_PACKET_H
#define JSE_HEADER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseHeader
{
    public:
        uint8_t mStartOfMessage;
        uint16_t mMessageLength;
        char mMessageType;

        JseHeader ()
        {
            mStartOfMessage = 2;
            mMessageLength = 0;
        }

        bool setStartOfMessage (uint8_t v)
        {
            mStartOfMessage = v;
            return true;
        }

        uint8_t getStartOfMessage ()
        {
            return mStartOfMessage;
        }

        bool setMessageLength (uint16_t v)
        {
            mMessageLength = v;
            return true;
        }

        uint16_t getMessageLength ()
        {
            return mMessageLength;
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
               << "[StartOfMessage=" << unsigned(getStartOfMessage ()) << "],"
               << "[MessageLength=" << getMessageLength () << "],"
               << "[MessageType=" << getMessageType () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
