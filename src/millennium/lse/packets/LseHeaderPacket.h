/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_HEADER_PACKET_H
#define LSE_HEADER_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseHeader
{
    public:
        int8_t mStartOfMessage;
        int16_t mMessageLength;
        char mMessageType;

        LseHeader ()
        {
            mStartOfMessage = 2;
            mMessageLength = 0;
        }

        bool setStartOfMessage (int8_t v)
        {
            mStartOfMessage = v;
            return true;
        }

        int8_t getStartOfMessage ()
        {
            return mStartOfMessage;
        }

        bool setMessageLength (int16_t v)
        {
            mMessageLength = v;
            return true;
        }

        int16_t getMessageLength ()
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
               << "[StartOfMessage=" << getStartOfMessage () << "],"
               << "[MessageLength=" << getMessageLength () << "],"
               << "[MessageType=" << getMessageType () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
