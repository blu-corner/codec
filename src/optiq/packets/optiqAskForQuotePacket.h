/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef _OPTIQ_ASKFORQUOTE_PACKET_H_
#define _OPTIQ_ASKFORQUOTE_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqAskForQuotePacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mAFQReason;

    optiqAskForQuotePacket ()
    {
        mFrameLength = sizeof (optiqAskForQuotePacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqAskForQuotePacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqAskForQuoteTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSymbolIndex = 0;
        mEMM = 0;
        mAFQReason = 0;
    }

    
    uint32_t getMsgSeqNum () const
    {
        return mMsgSeqNum;
    }

    bool setMsgSeqNum (uint32_t val)
    {
        mMsgSeqNum = val;
        return true;
    }
    
    string getFirmID () const
    {
        return getString (mFirmID, sizeof (mFirmID));
    }

    bool setFirmID (const string& val)
    {
        return setString (mFirmID, val, sizeof (mFirmID));
    }
    
    uint32_t getSymbolIndex () const
    {
        return mSymbolIndex;
    }

    bool setSymbolIndex (uint32_t val)
    {
        mSymbolIndex = val;
        return true;
    }
    
    uint8_t getEMM () const
    {
        return mEMM;
    }

    bool setEMM (uint8_t val)
    {
        mEMM = val;
        return true;
    }
    
    uint8_t getAFQReason () const
    {
        return mAFQReason;
    }

    bool setAFQReason (uint8_t val)
    {
        mAFQReason = val;
        return true;
    }
});

} // namespace neueda

#endif
