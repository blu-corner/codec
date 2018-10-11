/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_TRANSMISSIONCOMPLETE_PACKET_H
#define OSLO_TRANSMISSIONCOMPLETE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloTransmissionComplete
{
    public:
        OsloHeader mHeader;

        int8_t mResponseType;

        OsloTransmissionComplete ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloTransmissionComplete) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'P';

            mResponseType = 0;
        }

        bool setResponseType (int8_t v)
        {
            mResponseType = v;
            return true;
        }

        int8_t getResponseType ()
        {
            return mResponseType;
        }

        string toString ()
        {
            stringstream ss;
            ss << "TransmissionComplete::"
               << "[ResponseType=" << getResponseType () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
