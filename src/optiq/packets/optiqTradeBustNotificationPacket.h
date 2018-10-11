/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_TRADEBUSTNOTIFICATION_PACKET_H_
#define _OPTIQ_TRADEBUSTNOTIFICATION_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqTradeBustNotificationPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint64_t mBookIn;
        uint64_t mBookOUTTime;
        uint64_t mOEGINFromME;
        uint64_t mOEGOUTToMember;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint32_t mExecutionID;
        int64_t mLastTradedPx;
        uint64_t mLastShares;

    optiqTradeBustNotificationPacket ()
    {
        mFrameLength = sizeof (optiqTradeBustNotificationPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqTradeBustNotificationPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqTradeBustNotificationTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mBookIn = 0;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mSymbolIndex = 0;
        mEMM = 0;
        mExecutionID = 0;
        mLastTradedPx = 0;
        mLastShares = 0;
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
    
    uint64_t getBookIn () const
    {
        return mBookIn;
    }

    bool setBookIn (uint64_t val)
    {
        mBookIn = val;
        return true;
    }
    
    uint64_t getBookOUTTime () const
    {
        return mBookOUTTime;
    }

    bool setBookOUTTime (uint64_t val)
    {
        mBookOUTTime = val;
        return true;
    }
    
    uint64_t getOEGINFromME () const
    {
        return mOEGINFromME;
    }

    bool setOEGINFromME (uint64_t val)
    {
        mOEGINFromME = val;
        return true;
    }
    
    uint64_t getOEGOUTToMember () const
    {
        return mOEGOUTToMember;
    }

    bool setOEGOUTToMember (uint64_t val)
    {
        mOEGOUTToMember = val;
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
    
    uint32_t getExecutionID () const
    {
        return mExecutionID;
    }

    bool setExecutionID (uint32_t val)
    {
        mExecutionID = val;
        return true;
    }
    
    int64_t getLastTradedPx () const
    {
        return mLastTradedPx;
    }

    bool setLastTradedPx (int64_t val)
    {
        mLastTradedPx = val;
        return true;
    }
    
    uint64_t getLastShares () const
    {
        return mLastShares;
    }

    bool setLastShares (uint64_t val)
    {
        mLastShares = val;
        return true;
    }
});

} // namespace neueda

#endif
