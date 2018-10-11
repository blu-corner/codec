/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_MISSEDMESSAGEREPORT_PACKET_H
#define LSE_MISSEDMESSAGEREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseMissedMessageReport
{
    public:
        LseHeader mHeader;

        uint8_t mResponseType;

        LseMissedMessageReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseMissedMessageReport) - ((int16_t)sizeof (LseHeader) - 1);
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
            ss << "MissedMessageReport::"
               << "[ResponseType=" << unsigned(getResponseType ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
