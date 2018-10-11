/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_MISSEDMESSAGEREQUESTACK_PACKET_H
#define JSE_MISSEDMESSAGEREQUESTACK_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseMissedMessageRequestAck
{
    public:
        JseHeader mHeader;

        uint8_t mStatus;

        JseMissedMessageRequestAck ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseMissedMessageRequestAck) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'N';

            mStatus = 0;
        }

        bool setStatus (uint8_t v)
        {
            mStatus = v;
            return true;
        }

        uint8_t getStatus ()
        {
            return mStatus;
        }

        string toString ()
        {
            stringstream ss;
            ss << "MissedMessageRequestAck::"
               << "[Status=" << unsigned(getStatus ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
