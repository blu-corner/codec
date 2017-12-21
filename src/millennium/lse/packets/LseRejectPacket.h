/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_REJECT_PACKET_H
#define LSE_REJECT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseReject
{
    public:
        int32_t mRejectCode;
        char mRejectReason[30];
        char mRejectedMessageType;
        char mClientOrderID[20];

        LseReject ()
        {
            mRejectCode = 0;
            memset (mRejectReason, '\0', 30);
            memset (mClientOrderID, '\0', 20);
        }

        bool setRejectCode (int32_t v)
        {
            mRejectCode = v;
            return true;
        }

        int32_t getRejectCode ()
        {
            return mRejectCode;
        }

        bool setRejectReason (const string& v)
        {
            return setString (mRejectReason, v, 30);
        }

        string getRejectReason ()
        {
            return getString (mRejectReason, 30);
        }

        bool setRejectedMessageType (char v)
        {
            mRejectedMessageType = v;
            return true;
        }

        char getRejectedMessageType ()
        {
            return mRejectedMessageType;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        string toString ()
        {
            stringstream ss;
            ss << "Reject::"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[RejectReason=" << getRejectReason () << "],"
               << "[RejectedMessageType=" << getRejectedMessageType () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "]";
            return ss.str ();
        }
});

}

#endif
