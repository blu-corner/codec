/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 14:16:38 30/04/19
 */
#ifndef _OPTIQ_FILL_PACKET_H_
#define _OPTIQ_FILL_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
#include "optiqMessageHeaderPacket.h"


namespace neueda
{

PACKED(class optiqFillPacket
{
public:
    uint16_t mFrameLength;
    optiqMessageHeaderPacket mHeader;
        uint32_t mMsgSeqNum;
        char mFirmID[8];
        uint64_t mTradeTime;
        uint64_t mBookOUTTime;
        uint64_t mOEGINFromME;
        uint64_t mOEGOUTToMember;
        int64_t mClientOrderID;
        uint32_t mSymbolIndex;
        uint8_t mEMM;
        uint8_t mOrderSide;
        uint8_t mTradeType;
        uint8_t mTradeQualifier;
        uint64_t mOrderID;
        int64_t mLastTradedPx;
        uint64_t mLastShares;
        uint64_t mLeavesQty;
        uint32_t mExecutionID;
        uint8_t mExecutionPhase;

    optiqFillPacket ()
    {
        mFrameLength = sizeof (optiqFillPacket) - sizeof (uint16_t);
        mHeader.setBlockLength (sizeof (optiqFillPacket) -
                                sizeof (optiqMessageHeaderPacket) -
                                sizeof (mFrameLength));
        mHeader.setTemplateId (OptiqFillTemplateId);
        mHeader.setSchemaId (0);
        mHeader.setVersion (102);
        mMsgSeqNum = 0;
        memset (mFirmID, 0, 8);
        mTradeTime = 0;
        mBookOUTTime = UINT64_MAX;
        mOEGINFromME = UINT64_MAX;
        mOEGOUTToMember = UINT64_MAX;
        mClientOrderID = INT64_MIN;
        mSymbolIndex = 0;
        mEMM = 0;
        mOrderSide = 0;
        mTradeType = 0;
        mTradeQualifier = 0;
        mOrderID = 0;
        mLastTradedPx = 0;
        mLastShares = 0;
        mLeavesQty = 0;
        mExecutionID = 0;
        mExecutionPhase = 0;
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
    
    uint64_t getTradeTime () const
    {
        return mTradeTime;
    }

    bool setTradeTime (uint64_t val)
    {
        mTradeTime = val;
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
    
    uint8_t getOrderSide () const
    {
        return mOrderSide;
    }

    bool setOrderSide (uint8_t val)
    {
        mOrderSide = val;
        return true;
    }
    
    uint8_t getTradeType () const
    {
        return mTradeType;
    }

    bool setTradeType (uint8_t val)
    {
        mTradeType = val;
        return true;
    }
    
    uint8_t getTradeQualifier () const
    {
        return mTradeQualifier;
    }

    bool setTradeQualifier (uint8_t val)
    {
        mTradeQualifier = val;
        return true;
    }
    bool getTradeQualifier_UncrossingTrade () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_UNCROSSINGTRADE) & 1);
    }

    void setTradeQualifier_UncrossingTrade ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_UNCROSSINGTRADE;
    }

    bool getTradeQualifier_FirstTradePrice () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_FIRSTTRADEPRICE) & 1);
    }

    void setTradeQualifier_FirstTradePrice ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_FIRSTTRADEPRICE;
    }

    bool getTradeQualifier_PassiveOrder () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_PASSIVEORDER) & 1);
    }

    void setTradeQualifier_PassiveOrder ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_PASSIVEORDER;
    }

    bool getTradeQualifier_AggressiveOrder () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_AGGRESSIVEORDER) & 1);
    }

    void setTradeQualifier_AggressiveOrder ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_AGGRESSIVEORDER;
    }

    bool getTradeQualifier_TradeCreationByMarketOperations () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_TRADECREATIONBYMARKETOPERATIONS) & 1);
    }

    void setTradeQualifier_TradeCreationByMarketOperations ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_TRADECREATIONBYMARKETOPERATIONS;
    }

    bool getTradeQualifier_NAVTradeExpressedInBps () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_NAVTRADEEXPRESSEDINBPS) & 1);
    }

    void setTradeQualifier_NAVTradeExpressedInBps ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_NAVTRADEEXPRESSEDINBPS;
    }

    bool getTradeQualifier_NAVTradeExpressedInPriceCurrency () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_NAVTRADEEXPRESSEDINPRICECURRENCY) & 1);
    }

    void setTradeQualifier_NAVTradeExpressedInPriceCurrency ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_NAVTRADEEXPRESSEDINPRICECURRENCY;
    }

    bool getTradeQualifier_DeferredPublication () const
    {
        return ((mTradeQualifier >> OPTIQ_TRADEQUALIFIER_DEFERREDPUBLICATION) & 1);
    }

    void setTradeQualifier_DeferredPublication ()
    {
        mTradeQualifier |= OPTIQ_TRADEQUALIFIER_DEFERREDPUBLICATION;
    }

    
    uint64_t getOrderID () const
    {
        return mOrderID;
    }

    bool setOrderID (uint64_t val)
    {
        mOrderID = val;
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
    
    uint64_t getLeavesQty () const
    {
        return mLeavesQty;
    }

    bool setLeavesQty (uint64_t val)
    {
        mLeavesQty = val;
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
    
    uint8_t getExecutionPhase () const
    {
        return mExecutionPhase;
    }

    bool setExecutionPhase (uint8_t val)
    {
        mExecutionPhase = val;
        return true;
    }
});

} // namespace neueda

#endif
