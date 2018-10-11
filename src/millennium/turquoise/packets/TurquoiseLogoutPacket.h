/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_LOGOUT_PACKET_H
#define TURQUOISE_LOGOUT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseLogout
{
    public:
        TurquoiseHeader mHeader;

        char mLogoutReason[20];

        TurquoiseLogout ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseLogout) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = '5';

            memset (mLogoutReason, '\0', 20);
        }

        bool setLogoutReason (const string& v)
        {
            return setString (mLogoutReason, v, 20);
        }

        string getLogoutReason ()
        {
            return getString (mLogoutReason, 20);
        }

        string toString ()
        {
            stringstream ss;
            ss << "Logout::"
               << "[LogoutReason=" << getLogoutReason () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
