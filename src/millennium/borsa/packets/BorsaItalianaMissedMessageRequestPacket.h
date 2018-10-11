/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_MISSEDMESSAGEREQUEST_PACKET_H
#define BORSAITALIANA_MISSEDMESSAGEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaMissedMessageRequest
{
    public:
        BorsaItalianaHeader mHeader;

        int8_t mAppID;
        int32_t mLastMsgSeqNum;

        BorsaItalianaMissedMessageRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaMissedMessageRequest) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'M';

            mAppID = 0;
            mLastMsgSeqNum = 0;
        }

        bool setAppID (int8_t v)
        {
            mAppID = v;
            return true;
        }

        int8_t getAppID ()
        {
            return mAppID;
        }

        bool setLastMsgSeqNum (int32_t v)
        {
            mLastMsgSeqNum = v;
            return true;
        }

        int32_t getLastMsgSeqNum ()
        {
            return mLastMsgSeqNum;
        }

        string toString ()
        {
            stringstream ss;
            ss << "MissedMessageRequest::"
               << "[AppID=" << getAppID () << "],"
               << "[LastMsgSeqNum=" << getLastMsgSeqNum () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
