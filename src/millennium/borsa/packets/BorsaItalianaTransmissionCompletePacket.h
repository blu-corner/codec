/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_TRANSMISSIONCOMPLETE_PACKET_H
#define BORSAITALIANA_TRANSMISSIONCOMPLETE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaTransmissionComplete
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mResponseType;

        BorsaItalianaTransmissionComplete ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaTransmissionComplete) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'P';

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
            ss << "TransmissionComplete::"
               << "[ResponseType=" << unsigned(getResponseType ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
