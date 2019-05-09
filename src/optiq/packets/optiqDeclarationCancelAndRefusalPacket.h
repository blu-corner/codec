/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11:10:58 07/05/19
 */
#ifndef _OPTIQ_DECLARATIONCANCELANDREFUSAL_PACKET_H_
#define _OPTIQ_DECLARATIONCANCELANDREFUSAL_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqDeclarationCancelAndRefusalPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint64_t mDeclarationID;
        uint8_t mActionType;

    optiqDeclarationCancelAndRefusalPacket ()
    {
        mFrameLength = sizeof (optiqDeclarationCancelAndRefusalPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqDeclarationCancelAndRefusalPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqDeclarationCancelAndRefusalTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (109);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        mDeclarationID = 0;
        mActionType = 0;
    }

    
    uint32_t getClMsgSeqNum () const
    {
        return mClMsgSeqNum;
    }

    bool setClMsgSeqNum (uint32_t val)
    {
        mClMsgSeqNum = val;
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
    
    uint64_t getSendingTime () const
    {
        return mSendingTime;
    }

    bool setSendingTime (uint64_t val)
    {
        mSendingTime = val;
        return true;
    }
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
        return true;
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
    
    uint64_t getDeclarationID () const
    {
        return mDeclarationID;
    }

    bool setDeclarationID (uint64_t val)
    {
        mDeclarationID = val;
        return true;
    }
    
    uint8_t getActionType () const
    {
        return mActionType;
    }

    bool setActionType (uint8_t val)
    {
        mActionType = val;
        return true;
    }
});

} // namespace neueda

#endif
