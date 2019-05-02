/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_CANCELREPLACEFREETEXTSECTION_PACKET_H_
#define _OPTIQ_CANCELREPLACEFREETEXTSECTION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqCancelReplaceFreeTextSectionPacket
{
public:
        char mFreeText[18];

    optiqCancelReplaceFreeTextSectionPacket ()
    {
        memset (mFreeText, 0, 18);
    }

    
    string getFreeText () const
    {
        return getString (mFreeText, sizeof (mFreeText));
    }

    bool setFreeText (const string& val)
    {
        return setString (mFreeText, val, sizeof (mFreeText));
    }

});

} // namespace neueda

#endif
