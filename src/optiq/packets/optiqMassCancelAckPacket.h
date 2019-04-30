/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_MASSCANCELACK_PACKET_H_
#define _OPTIQ_MASSCANCELACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqMassCancelAckPacket
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
        int32_t mTotalAffectedOrders;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        char mInstrumentGroupCode[2];
        uint8_t mOrderSide;
        uint32_t mLogicalAccessID;
        uint16_t mOEPartitionID;
        uint32_t mContractID;
        char mMaturity[8];
        uint8_t mAccountType;
        uint8_t mOptionType;
        uint8_t mOrderCategory;

    optiqMassCancelAckPacket ()
    {
        mFrameLength = sizeof (optiqMassCancelAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqMassCancelAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqMassCancelAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = UINT64_MAX;
        mOEGINFromMember = UINT64_MAX;
        mOEGOUTTimeToME = UINT64_MAX;
        mBookIn = 0;
        mBookOUTTime = 0;
        mOEGINFromME = 0;
        mOEGOUTToMember = 0;
        mClientOrderID = 0;
        mTotalAffectedOrders = 0;
        mSymbolIndex = UINT32_MAX;
        mEMM = 0;
        memset (mInstrumentGroupCode, 0, 2);
        mOrderSide = 0;
        mLogicalAccessID = UINT32_MAX;
        mOEPartitionID = UINT16_MAX;
        mContractID = UINT32_MAX;
        memset (mMaturity, 0, 8);
        mAccountType = 0;
        mOptionType = 0;
        mOrderCategory = 0;
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
    
    int32_t getTotalAffectedOrders () const
    {
        return mTotalAffectedOrders;
    }

    bool setTotalAffectedOrders (int32_t val)
    {
        mTotalAffectedOrders = val;
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
    
    string getInstrumentGroupCode () const
    {
        return getString (mInstrumentGroupCode, sizeof (mInstrumentGroupCode));
    }

    bool setInstrumentGroupCode (const string& val)
    {
        return setString (mInstrumentGroupCode, val, sizeof (mInstrumentGroupCode));
    }
    
    uint8_t getOrderSide () const
    {
        return mOrderSide;
    }

    bool setOrderSide (uint8_t val)
    {
        mOrderSide = val;
        return true;
    }
    
    uint32_t getLogicalAccessID () const
    {
        return mLogicalAccessID;
    }

    bool setLogicalAccessID (uint32_t val)
    {
        mLogicalAccessID = val;
        return true;
    }
    
    uint16_t getOEPartitionID () const
    {
        return mOEPartitionID;
    }

    bool setOEPartitionID (uint16_t val)
    {
        mOEPartitionID = val;
        return true;
    }
    
    uint32_t getContractID () const
    {
        return mContractID;
    }

    bool setContractID (uint32_t val)
    {
        mContractID = val;
        return true;
    }
    
    string getMaturity () const
    {
        return getString (mMaturity, sizeof (mMaturity));
    }

    bool setMaturity (const string& val)
    {
        return setString (mMaturity, val, sizeof (mMaturity));
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
    
    uint8_t getOptionType () const
    {
        return mOptionType;
    }

    bool setOptionType (uint8_t val)
    {
        mOptionType = val;
        return true;
    }
    
    uint8_t getOrderCategory () const
    {
        return mOrderCategory;
    }

    bool setOrderCategory (uint8_t val)
    {
        mOrderCategory = val;
        return true;
    }
});

} // namespace neueda

#endif
