/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_LOGOUT_PACKET_H
#define LSE_LOGOUT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseLogout
{
    public:
        char mReason[20];

        LseLogout ()
        {
            memset (mReason, '\0', 20);
        }

        bool setReason (const string& v)
        {
            return setString (mReason, v, 20);
        }

        string getReason ()
        {
            return getString (mReason, 20);
        }

        string toString ()
        {
            stringstream ss;
            ss << "Logout::"
               << "[Reason=" << getReason () << "]";
            return ss.str ();
        }
});

}

#endif
