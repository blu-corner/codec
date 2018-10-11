/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_LOGINREJECTEDMESSAGE_PACKET_H
#define SWX_LOGINREJECTEDMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxLoginRejectedMessage
{
    public:
        swxHeader mHeader;

        char mRejectReasonCode;

        swxLoginRejectedMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxLoginRejectedMessage) - 2);
            mHeader.mMessageType = 'J';


        }

        bool setRejectReasonCode (char v)
        {
            mRejectReasonCode = v;
            return true;
        }

        char getRejectReasonCode ()
        {
            return mRejectReasonCode;
        }

        string toString ()
        {
            stringstream ss;
            ss << "LoginRejectedMessage::"
               << "[RejectReasonCode=" << getRejectReasonCode () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
