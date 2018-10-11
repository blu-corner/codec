/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_MISSEDMESSAGEREPORT_PACKET_H
#define TURQUOISE_MISSEDMESSAGEREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseMissedMessageReport
{
    public:
        TurquoiseHeader mHeader;

        int8_t mResponseType;

        TurquoiseMissedMessageReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseMissedMessageReport) - ((int16_t)sizeof (TurquoiseHeader) - 1);
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
            ss << "MissedMessageReport::"
               << "[ResponseType=" << getResponseType () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
