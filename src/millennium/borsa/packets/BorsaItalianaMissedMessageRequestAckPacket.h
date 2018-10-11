/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_MISSEDMESSAGEREQUESTACK_PACKET_H
#define BORSAITALIANA_MISSEDMESSAGEREQUESTACK_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaMissedMessageRequestAck
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mResponseType;

        BorsaItalianaMissedMessageRequestAck ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaMissedMessageRequestAck) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'N';

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

} // namespace neueda

#endif
