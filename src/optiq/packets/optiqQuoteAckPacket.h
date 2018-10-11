/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_QUOTEACK_PACKET_H_
#define _OPTIQ_QUOTEACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqQuoteAckPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        uint64_t mOEGINFromMember;
        uint64_t mOEGOUTTimeToME;
        uint64_t mBookIn;
        uint64_t mBookOUTTime;
        uint64_t mOEGINFromME;
        uint64_t mOEGOUTToMember;
        int64_t mClientOrderID;
        uint8_t mAccountType;
        uint8_t mLPRole;

    optiqQuoteAckPacket ()
    {
        mFrameLength = sizeof (optiqQuoteAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqQuoteAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqQuoteAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = UINT64_MAX;
        mOEGINFromMember = UINT64_MAX;
        mOEGOUTTimeToME = UINT64_MAX;
        mBookIn = 0;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mClientOrderID = 0;
        mAccountType = 0;
        mLPRole = 0;
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
    
    uint64_t getSendingTime () const
    {
        return mSendingTime;
    }

    bool setSendingTime (uint64_t val)
    {
        mSendingTime = val;
        return true;
    }
    
    uint64_t getOEGINFromMember () const
    {
        return mOEGINFromMember;
    }

    bool setOEGINFromMember (uint64_t val)
    {
        mOEGINFromMember = val;
        return true;
    }
    
    uint64_t getOEGOUTTimeToME () const
    {
        return mOEGOUTTimeToME;
    }

    bool setOEGOUTTimeToME (uint64_t val)
    {
        mOEGOUTTimeToME = val;
        return true;
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
    
    int64_t getClientOrderID () const
    {
        return mClientOrderID;
    }

    bool setClientOrderID (int64_t val)
    {
        mClientOrderID = val;
        return true;
    }
    
    uint8_t getAccountType () const
    {
        return mAccountType;
    }

    bool setAccountType (uint8_t val)
    {
        mAccountType = val;
        return true;
    }
    
    uint8_t getLPRole () const
    {
        return mLPRole;
    }

    bool setLPRole (uint8_t val)
    {
        mLPRole = val;
        return true;
    }
});

} // namespace neueda

#endif
