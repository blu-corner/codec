/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_MASSCANCEL_PACKET_H_
#define _OPTIQ_MASSCANCEL_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqMassCancelPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mClMsgSeqNum;
        char mFirmID[8];
        uint64_t mSendingTime;
        int32_t mExecutionWithinFirmShortCode;
        int32_t mClientIdentificationShortcode;
        int64_t mClientOrderID;
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

    optiqMassCancelPacket ()
    {
        mFrameLength = sizeof (optiqMassCancelPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqMassCancelPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqMassCancelTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mClMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mSendingTime = 0;
        mExecutionWithinFirmShortCode = 0;
        mClientIdentificationShortcode = INT32_MIN;
        mClientOrderID = 0;
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
    
    int32_t getExecutionWithinFirmShortCode () const
    {
        return mExecutionWithinFirmShortCode;
    }

    bool setExecutionWithinFirmShortCode (int32_t val)
    {
        mExecutionWithinFirmShortCode = val;
        return true;
    }
    
    int32_t getClientIdentificationShortcode () const
    {
        return mClientIdentificationShortcode;
    }

    bool setClientIdentificationShortcode (int32_t val)
    {
        mClientIdentificationShortcode = val;
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
});

} // namespace neueda

#endif
