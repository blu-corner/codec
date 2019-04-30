/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_DECLARATIONENTRYACK_PACKET_H_
#define _OPTIQ_DECLARATIONENTRYACK_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqDeclarationEntryAckPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint64_t mDeclarationID;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        char mMICofSecondaryListing[4];
        uint8_t mOperationType;
        uint8_t mPreMatchingType;
        uint8_t mWaiverIndicator;

    optiqDeclarationEntryAckPacket ()
    {
        mFrameLength = sizeof (optiqDeclarationEntryAckPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqDeclarationEntryAckPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqDeclarationEntryAckTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mDeclarationID = UINT64_MAX;
        mClientOrderID = 0;
        mSymbolIndex = 0;
        mEMM = 0;
        memset (mMICofSecondaryListing, 0, 4);
        mOperationType = 0;
        mPreMatchingType = 0;
        mWaiverIndicator = 0;
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
    
    uint64_t getDeclarationID () const
    {
        return mDeclarationID;
    }

    bool setDeclarationID (uint64_t val)
    {
        mDeclarationID = val;
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
    
    string getMICofSecondaryListing () const
    {
        return getString (mMICofSecondaryListing, sizeof (mMICofSecondaryListing));
    }

    bool setMICofSecondaryListing (const string& val)
    {
        return setString (mMICofSecondaryListing, val, sizeof (mMICofSecondaryListing));
    }
    
    uint8_t getOperationType () const
    {
        return mOperationType;
    }

    bool setOperationType (uint8_t val)
    {
        mOperationType = val;
        return true;
    }
    
    uint8_t getPreMatchingType () const
    {
        return mPreMatchingType;
    }

    bool setPreMatchingType (uint8_t val)
    {
        mPreMatchingType = val;
        return true;
    }
    
    uint8_t getWaiverIndicator () const
    {
        return mWaiverIndicator;
    }

    bool setWaiverIndicator (uint8_t val)
    {
        mWaiverIndicator = val;
        return true;
    }
    bool getWaiverIndicator_LRGS () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_LRGS) & 1);
    }

    void setWaiverIndicator_LRGS ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_LRGS;
    }

    bool getWaiverIndicator_RFPT () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_RFPT) & 1);
    }

    void setWaiverIndicator_RFPT ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_RFPT;
    }

    bool getWaiverIndicator_NLIQ () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_NLIQ) & 1);
    }

    void setWaiverIndicator_NLIQ ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_NLIQ;
    }

    bool getWaiverIndicator_OILQ () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_OILQ) & 1);
    }

    void setWaiverIndicator_OILQ ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_OILQ;
    }

    bool getWaiverIndicator_PRIC () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_PRIC) & 1);
    }

    void setWaiverIndicator_PRIC ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_PRIC;
    }

    bool getWaiverIndicator_SIZE () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_SIZE) & 1);
    }

    void setWaiverIndicator_SIZE ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_SIZE;
    }

    bool getWaiverIndicator_ILQD () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_ILQD) & 1);
    }

    void setWaiverIndicator_ILQD ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_ILQD;
    }

    bool getWaiverIndicator_OMF () const
    {
        return ((mWaiverIndicator >> OPTIQ_WAIVERINDICATOR_OMF) & 1);
    }

    void setWaiverIndicator_OMF ()
    {
        mWaiverIndicator |= OPTIQ_WAIVERINDICATOR_OMF;
    }

});

} // namespace neueda

#endif
