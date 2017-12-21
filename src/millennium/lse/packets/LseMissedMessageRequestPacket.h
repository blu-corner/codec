/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_MISSEDMESSAGEREQUEST_PACKET_H
#define LSE_MISSEDMESSAGEREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseMissedMessageRequest
{
    public:
        int8_t mAppID;
        int32_t mLastMsgSeqNum;

        LseMissedMessageRequest ()
        {
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

}

#endif
