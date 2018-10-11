/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_SYSTEMEVENTMESSAGE_PACKET_H
#define SWX_SYSTEMEVENTMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxSystemEventMessage
{
    public:
        swxHeader mHeader;

        char mType;
        uint64_t mTimestamp;
        char mEventCode;

        swxSystemEventMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxSystemEventMessage) - 2);
            mHeader.mMessageType = 'S';
            mType = 'S';

            mTimestamp = 0;
        }

        bool setType (char v)
        {
            mType = v;
            return true;
        }

        char getType ()
        {
            return mType;
        }

        bool setTimestamp (uint64_t v)
        {
            mTimestamp = htonll (v);
            return true;
        }

        uint64_t getTimestamp ()
        {
            return ntohll (mTimestamp);
        }

        bool setEventCode (char v)
        {
            mEventCode = v;
            return true;
        }

        char getEventCode ()
        {
            return mEventCode;
        }

        string toString ()
        {
            stringstream ss;
            ss << "SystemEventMessage::"
               << "[Type=" << getType () << "],"
               << "[Timestamp=" << getTimestamp () << "],"
               << "[EventCode=" << getEventCode () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
