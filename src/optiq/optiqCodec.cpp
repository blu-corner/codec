/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#include "optiqCodec.h"
#include "optiqPackets.h"
#include "fields.h"
#include "codecHelpers.h"
#include <sstream>


namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new optiqCodec ();
}

codecState
optiqCodec::getNewOrder (cdr& d, const void* buf)
{
    d.setString (MessageName, "NewOrder");

    const optiqNewOrderPacket* packet = (optiqNewOrderPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderType, packet->getOrderType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (TimeInForce, packet->getTimeInForce ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderPx () != INT64_MIN)
        d.setInteger (OrderPx, packet->getOrderPx ());
    offset += sizeof (int64_t);
    
    d.setInteger (OrderQty, packet->getOrderQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    d.setInteger (TradingCapacity, packet->getTradingCapacity ());
    offset += sizeof (uint8_t);
    
    d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    if (packet->getLPRole () != UINT8_MAX)
        d.setInteger (LPRole, packet->getLPRole ());
    offset += sizeof (uint8_t);
    
    d.setInteger (ExecutionInstruction, packet->getExecutionInstruction ());
    offset += sizeof (uint8_t);
    
    d.setInteger (DarkExecutionInstruction, packet->getDarkExecutionInstruction ());
    offset += sizeof (uint8_t);
    
    d.setInteger (MiFIDIndicators, packet->getMiFIDIndicators ());
    offset += sizeof (uint8_t);
    
    if (packet->getSTPID () != UINT16_MAX)
        d.setInteger (STPID, packet->getSTPID ());
    offset += sizeof (uint16_t);
    
    optiqGroupSizeEncodingPacket* gse20 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray FreeTextSectionArray;
    for (int i = 0; i < gse20->getNumInGroup (); i++)
    {
        cdr item;
        optiqNewOrderFreeTextSectionPacket* gNewOrderFreeTextSection = (optiqNewOrderFreeTextSectionPacket*) ((char*)buf + offset);

        item.setString (FreeText, gNewOrderFreeTextSection->getFreeText ());
        offset += 18;

        FreeTextSectionArray.push_back (item);
    }
    d.setArray (FreeTextSection, FreeTextSectionArray);

    
    optiqGroupSizeEncodingPacket* gse21 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray MiFIDShortcodesArray;
    for (int i = 0; i < gse21->getNumInGroup (); i++)
    {
        cdr item;
        optiqNewOrderMiFIDShortcodesPacket* gNewOrderMiFIDShortcodes = (optiqNewOrderMiFIDShortcodesPacket*) ((char*)buf + offset);

        if (gNewOrderMiFIDShortcodes->getInvestmentDecisionWFirmShortCode () != INT32_MIN)
            item.setInteger (InvestmentDecisionWFirmShortCode, gNewOrderMiFIDShortcodes->getInvestmentDecisionWFirmShortCode ());
        offset += sizeof (int32_t);

        if (gNewOrderMiFIDShortcodes->getNonExecutingBrokerShortCode () != INT32_MIN)
            item.setInteger (NonExecutingBrokerShortCode, gNewOrderMiFIDShortcodes->getNonExecutingBrokerShortCode ());
        offset += sizeof (int32_t);

        if (gNewOrderMiFIDShortcodes->getClientIdentificationShortcode () != INT32_MIN)
            item.setInteger (ClientIdentificationShortcode, gNewOrderMiFIDShortcodes->getClientIdentificationShortcode ());
        offset += sizeof (int32_t);

        MiFIDShortcodesArray.push_back (item);
    }
    d.setArray (MiFIDShortcodes, MiFIDShortcodesArray);

    
    optiqGroupSizeEncodingPacket* gse22 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray OptionalFieldsArray;
    for (int i = 0; i < gse22->getNumInGroup (); i++)
    {
        cdr item;
        optiqNewOrderOptionalFieldsPacket* gNewOrderOptionalFields = (optiqNewOrderOptionalFieldsPacket*) ((char*)buf + offset);

        if (gNewOrderOptionalFields->getStopPx () != INT64_MIN)
            item.setInteger (StopPx, gNewOrderOptionalFields->getStopPx ());
        offset += sizeof (int64_t);

        if (gNewOrderOptionalFields->getUndisclosedPrice () != INT64_MIN)
            item.setInteger (UndisclosedPrice, gNewOrderOptionalFields->getUndisclosedPrice ());
        offset += sizeof (int64_t);

        if (gNewOrderOptionalFields->getDisclosedQty () != UINT64_MAX)
            item.setInteger (DisclosedQty, gNewOrderOptionalFields->getDisclosedQty ());
        offset += sizeof (uint64_t);

        if (gNewOrderOptionalFields->getMinOrderQty () != UINT64_MAX)
            item.setInteger (MinOrderQty, gNewOrderOptionalFields->getMinOrderQty ());
        offset += sizeof (uint64_t);

        if (gNewOrderOptionalFields->getQuoteReqID () != UINT64_MAX)
            item.setInteger (QuoteReqID, gNewOrderOptionalFields->getQuoteReqID ());
        offset += sizeof (uint64_t);

        if (gNewOrderOptionalFields->getOrderExpirationTime () != UINT32_MAX)
            item.setInteger (OrderExpirationTime, gNewOrderOptionalFields->getOrderExpirationTime ());
        offset += sizeof (uint32_t);

        if (gNewOrderOptionalFields->getOrderExpirationDate () != UINT16_MAX)
            item.setInteger (OrderExpirationDate, gNewOrderOptionalFields->getOrderExpirationDate ());
        offset += sizeof (uint16_t);

        if (gNewOrderOptionalFields->getPegOffset () != INT8_MIN)
            item.setInteger (PegOffset, gNewOrderOptionalFields->getPegOffset ());
        offset += sizeof (int8_t);

        if (gNewOrderOptionalFields->getTradingSession () != UINT8_MAX)
            item.setInteger (TradingSession, gNewOrderOptionalFields->getTradingSession ());
        offset += sizeof (uint8_t);

        if (gNewOrderOptionalFields->getUndisclosedIcebergType () != UINT8_MAX)
            item.setInteger (UndisclosedIcebergType, gNewOrderOptionalFields->getUndisclosedIcebergType ());
        offset += sizeof (uint8_t);

        if (gNewOrderOptionalFields->getStopTriggeredTimeInForce () != UINT8_MAX)
            item.setInteger (StopTriggeredTimeInForce, gNewOrderOptionalFields->getStopTriggeredTimeInForce ());
        offset += sizeof (uint8_t);

        OptionalFieldsArray.push_back (item);
    }
    d.setArray (OptionalFields, OptionalFieldsArray);

    
    optiqGroupSizeEncodingPacket* gse23 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray ClearingFieldsArray;
    for (int i = 0; i < gse23->getNumInGroup (); i++)
    {
        cdr item;
        optiqNewOrderClearingFieldsPacket* gNewOrderClearingFields = (optiqNewOrderClearingFieldsPacket*) ((char*)buf + offset);

        item.setString (ClearingFirmID, gNewOrderClearingFields->getClearingFirmID ());
        offset += 8;

        item.setString (ClientID, gNewOrderClearingFields->getClientID ());
        offset += 8;

        item.setString (AccountNumber, gNewOrderClearingFields->getAccountNumber ());
        offset += 12;

        if (gNewOrderClearingFields->getTechnicalOrigin () != UINT8_MAX)
            item.setInteger (TechnicalOrigin, gNewOrderClearingFields->getTechnicalOrigin ());
        offset += sizeof (uint8_t);

        if (gNewOrderClearingFields->getOpenClose () != UINT16_MAX)
            item.setInteger (OpenClose, gNewOrderClearingFields->getOpenClose ());
        offset += sizeof (uint16_t);

        if (gNewOrderClearingFields->getClearingInstruction () != UINT8_MAX)
            item.setInteger (ClearingInstruction, gNewOrderClearingFields->getClearingInstruction ());
        offset += sizeof (uint8_t);

        if (gNewOrderClearingFields->getAccountTypeCross () != UINT8_MAX)
            item.setInteger (AccountTypeCross, gNewOrderClearingFields->getAccountTypeCross ());
        offset += sizeof (uint8_t);

        ClearingFieldsArray.push_back (item);
    }
    d.setArray (ClearingFields, ClearingFieldsArray);

    
    optiqGroupSizeEncodingPacket* gse24 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup1Array;
    for (int i = 0; i < gse24->getNumInGroup (); i++)
    {
        cdr item;
        optiqNewOrderNotUsedGroup1Packet* gNewOrderNotUsedGroup1 = (optiqNewOrderNotUsedGroup1Packet*) ((char*)buf + offset);

        NotUsedGroup1Array.push_back (item);
    }
    d.setArray (NotUsedGroup1, NotUsedGroup1Array);

    
    optiqGroupSizeEncodingPacket* gse25 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup2Array;
    for (int i = 0; i < gse25->getNumInGroup (); i++)
    {
        cdr item;
        optiqNewOrderNotUsedGroup2Packet* gNewOrderNotUsedGroup2 = (optiqNewOrderNotUsedGroup2Packet*) ((char*)buf + offset);

        NotUsedGroup2Array.push_back (item);
    }
    d.setArray (NotUsedGroup2, NotUsedGroup2Array);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "Ack");

    const optiqAckPacket* packet = (optiqAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getSendingTime () != UINT64_MAX)
        d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromMember () != UINT64_MAX)
        d.setInteger (OEGINFromMember, packet->getOEGINFromMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTTimeToME () != UINT64_MAX)
        d.setInteger (OEGOUTTimeToME, packet->getOEGOUTTimeToME ());
    offset += sizeof (uint64_t);
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getClientOrderID () != INT64_MIN)
        d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderSide () != UINT8_MAX)
        d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    d.setInteger (AckType, packet->getAckType ());
    offset += sizeof (uint8_t);
    
    if (packet->getAckPhase () != UINT8_MAX)
        d.setInteger (AckPhase, packet->getAckPhase ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrderPriority () != UINT64_MAX)
        d.setInteger (OrderPriority, packet->getOrderPriority ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrderPx () != INT64_MIN)
        d.setInteger (OrderPx, packet->getOrderPx ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderQty () != UINT64_MAX)
        d.setInteger (OrderQty, packet->getOrderQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (AckQualifiers, packet->getAckQualifiers ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getFill (cdr& d, const void* buf)
{
    d.setString (MessageName, "Fill");

    const optiqFillPacket* packet = (optiqFillPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (TradeTime, packet->getTradeTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getClientOrderID () != INT64_MIN)
        d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    d.setInteger (TradeType, packet->getTradeType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (TradeQualifier, packet->getTradeQualifier ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (LastTradedPx, packet->getLastTradedPx ());
    offset += sizeof (int64_t);
    
    d.setInteger (LastShares, packet->getLastShares ());
    offset += sizeof (uint64_t);
    
    d.setInteger (LeavesQty, packet->getLeavesQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionID, packet->getExecutionID ());
    offset += sizeof (uint32_t);
    
    d.setInteger (ExecutionPhase, packet->getExecutionPhase ());
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse19 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray OptionalFieldsFillArray;
    for (int i = 0; i < gse19->getNumInGroup (); i++)
    {
        cdr item;
        optiqFillOptionalFieldsFillPacket* gFillOptionalFieldsFill = (optiqFillOptionalFieldsFillPacket*) ((char*)buf + offset);

        item.setString (CounterpartFirmID, gFillOptionalFieldsFill->getCounterpartFirmID ());
        offset += 8;

        if (gFillOptionalFieldsFill->getOtherLegLastPx () != INT64_MIN)
            item.setInteger (OtherLegLastPx, gFillOptionalFieldsFill->getOtherLegLastPx ());
        offset += sizeof (int64_t);

        item.setString (PackageID, gFillOptionalFieldsFill->getPackageID ());
        offset += 12;

        if (gFillOptionalFieldsFill->getUnderlyingInstrumentID () != UINT32_MAX)
            item.setInteger (UnderlyingInstrumentID, gFillOptionalFieldsFill->getUnderlyingInstrumentID ());
        offset += sizeof (uint32_t);

        OptionalFieldsFillArray.push_back (item);
    }
    d.setArray (OptionalFieldsFill, OptionalFieldsFillArray);

    
    optiqGroupSizeEncodingPacket* gse20 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray StrategyFieldsArray;
    for (int i = 0; i < gse20->getNumInGroup (); i++)
    {
        cdr item;
        optiqFillStrategyFieldsPacket* gFillStrategyFields = (optiqFillStrategyFieldsPacket*) ((char*)buf + offset);

        if (gFillStrategyFields->getLegLastPx () != INT64_MIN)
            item.setInteger (LegLastPx, gFillStrategyFields->getLegLastPx ());
        offset += sizeof (int64_t);

        if (gFillStrategyFields->getLegLastQty () != UINT64_MAX)
            item.setInteger (LegLastQty, gFillStrategyFields->getLegLastQty ());
        offset += sizeof (uint64_t);

        if (gFillStrategyFields->getLegInstrumentID () != UINT32_MAX)
            item.setInteger (LegInstrumentID, gFillStrategyFields->getLegInstrumentID ());
        offset += sizeof (uint32_t);

        if (gFillStrategyFields->getLegSide () != UINT8_MAX)
            item.setInteger (LegSide, gFillStrategyFields->getLegSide ());
        offset += sizeof (uint8_t);

        StrategyFieldsArray.push_back (item);
    }
    d.setArray (StrategyFields, StrategyFieldsArray);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getKill (cdr& d, const void* buf)
{
    d.setString (MessageName, "Kill");

    const optiqKillPacket* packet = (optiqKillPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getSendingTime () != UINT64_MAX)
        d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromMember () != UINT64_MAX)
        d.setInteger (OEGINFromMember, packet->getOEGINFromMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTTimeToME () != UINT64_MAX)
        d.setInteger (OEGOUTTimeToME, packet->getOEGOUTTimeToME ());
    offset += sizeof (uint64_t);
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getClientOrderID () != INT64_MIN)
        d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (KillReason, packet->getKillReason ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getCancelReplace (cdr& d, const void* buf)
{
    d.setString (MessageName, "CancelReplace");

    const optiqCancelReplacePacket* packet = (optiqCancelReplacePacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderPx () != INT64_MIN)
        d.setInteger (OrderPx, packet->getOrderPx ());
    offset += sizeof (int64_t);
    
    d.setInteger (OrderQty, packet->getOrderQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderType, packet->getOrderType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (TimeInForce, packet->getTimeInForce ());
    offset += sizeof (uint8_t);
    
    if (packet->getAccountType () != UINT8_MAX)
        d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    if (packet->getLPRole () != UINT8_MAX)
        d.setInteger (LPRole, packet->getLPRole ());
    offset += sizeof (uint8_t);
    
    d.setInteger (ExecutionInstruction, packet->getExecutionInstruction ());
    offset += sizeof (uint8_t);
    
    d.setInteger (DarkExecutionInstruction, packet->getDarkExecutionInstruction ());
    offset += sizeof (uint8_t);
    
    d.setInteger (MiFIDIndicators, packet->getMiFIDIndicators ());
    offset += sizeof (uint8_t);
    
    if (packet->getSTPID () != UINT16_MAX)
        d.setInteger (STPID, packet->getSTPID ());
    offset += sizeof (uint16_t);
    
    optiqGroupSizeEncodingPacket* gse22 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray FreeTextSectionArray;
    for (int i = 0; i < gse22->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelReplaceFreeTextSectionPacket* gCancelReplaceFreeTextSection = (optiqCancelReplaceFreeTextSectionPacket*) ((char*)buf + offset);

        item.setString (FreeText, gCancelReplaceFreeTextSection->getFreeText ());
        offset += 18;

        FreeTextSectionArray.push_back (item);
    }
    d.setArray (FreeTextSection, FreeTextSectionArray);

    
    optiqGroupSizeEncodingPacket* gse23 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray OptionalFieldsArray;
    for (int i = 0; i < gse23->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelReplaceOptionalFieldsPacket* gCancelReplaceOptionalFields = (optiqCancelReplaceOptionalFieldsPacket*) ((char*)buf + offset);

        if (gCancelReplaceOptionalFields->getStopPx () != INT64_MIN)
            item.setInteger (StopPx, gCancelReplaceOptionalFields->getStopPx ());
        offset += sizeof (int64_t);

        if (gCancelReplaceOptionalFields->getPegOffset () != INT8_MIN)
            item.setInteger (PegOffset, gCancelReplaceOptionalFields->getPegOffset ());
        offset += sizeof (int8_t);

        if (gCancelReplaceOptionalFields->getUndisclosedPrice () != INT64_MIN)
            item.setInteger (UndisclosedPrice, gCancelReplaceOptionalFields->getUndisclosedPrice ());
        offset += sizeof (int64_t);

        if (gCancelReplaceOptionalFields->getDisclosedQty () != UINT64_MAX)
            item.setInteger (DisclosedQty, gCancelReplaceOptionalFields->getDisclosedQty ());
        offset += sizeof (uint64_t);

        if (gCancelReplaceOptionalFields->getOrderExpirationTime () != UINT32_MAX)
            item.setInteger (OrderExpirationTime, gCancelReplaceOptionalFields->getOrderExpirationTime ());
        offset += sizeof (uint32_t);

        if (gCancelReplaceOptionalFields->getOrderExpirationDate () != UINT16_MAX)
            item.setInteger (OrderExpirationDate, gCancelReplaceOptionalFields->getOrderExpirationDate ());
        offset += sizeof (uint16_t);

        if (gCancelReplaceOptionalFields->getTradingSession () != UINT8_MAX)
            item.setInteger (TradingSession, gCancelReplaceOptionalFields->getTradingSession ());
        offset += sizeof (uint8_t);

        if (gCancelReplaceOptionalFields->getStopTriggeredTimeInForce () != UINT8_MAX)
            item.setInteger (StopTriggeredTimeInForce, gCancelReplaceOptionalFields->getStopTriggeredTimeInForce ());
        offset += sizeof (uint8_t);

        if (gCancelReplaceOptionalFields->getUndisclosedIcebergType () != UINT8_MAX)
            item.setInteger (UndisclosedIcebergType, gCancelReplaceOptionalFields->getUndisclosedIcebergType ());
        offset += sizeof (uint8_t);

        OptionalFieldsArray.push_back (item);
    }
    d.setArray (OptionalFields, OptionalFieldsArray);

    
    optiqGroupSizeEncodingPacket* gse24 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray ClearingFieldsArray;
    for (int i = 0; i < gse24->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelReplaceClearingFieldsPacket* gCancelReplaceClearingFields = (optiqCancelReplaceClearingFieldsPacket*) ((char*)buf + offset);

        item.setString (ClearingFirmID, gCancelReplaceClearingFields->getClearingFirmID ());
        offset += 8;

        item.setString (ClientID, gCancelReplaceClearingFields->getClientID ());
        offset += 8;

        item.setString (AccountNumber, gCancelReplaceClearingFields->getAccountNumber ());
        offset += 12;

        if (gCancelReplaceClearingFields->getTechnicalOrigin () != UINT8_MAX)
            item.setInteger (TechnicalOrigin, gCancelReplaceClearingFields->getTechnicalOrigin ());
        offset += sizeof (uint8_t);

        if (gCancelReplaceClearingFields->getOpenClose () != UINT16_MAX)
            item.setInteger (OpenClose, gCancelReplaceClearingFields->getOpenClose ());
        offset += sizeof (uint16_t);

        if (gCancelReplaceClearingFields->getClearingInstruction () != UINT8_MAX)
            item.setInteger (ClearingInstruction, gCancelReplaceClearingFields->getClearingInstruction ());
        offset += sizeof (uint8_t);

        ClearingFieldsArray.push_back (item);
    }
    d.setArray (ClearingFields, ClearingFieldsArray);

    
    optiqGroupSizeEncodingPacket* gse25 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup1Array;
    for (int i = 0; i < gse25->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelReplaceNotUsedGroup1Packet* gCancelReplaceNotUsedGroup1 = (optiqCancelReplaceNotUsedGroup1Packet*) ((char*)buf + offset);

        NotUsedGroup1Array.push_back (item);
    }
    d.setArray (NotUsedGroup1, NotUsedGroup1Array);

    
    optiqGroupSizeEncodingPacket* gse26 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup2Array;
    for (int i = 0; i < gse26->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelReplaceNotUsedGroup2Packet* gCancelReplaceNotUsedGroup2 = (optiqCancelReplaceNotUsedGroup2Packet*) ((char*)buf + offset);

        NotUsedGroup2Array.push_back (item);
    }
    d.setArray (NotUsedGroup2, NotUsedGroup2Array);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getReject (cdr& d, const void* buf)
{
    d.setString (MessageName, "Reject");

    const optiqRejectPacket* packet = (optiqRejectPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getSendingTime () != UINT64_MAX)
        d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromMember () != UINT64_MAX)
        d.setInteger (OEGINFromMember, packet->getOEGINFromMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTTimeToME () != UINT64_MAX)
        d.setInteger (OEGOUTTimeToME, packet->getOEGOUTTimeToME ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookIn () != UINT64_MAX)
        d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getClientOrderID () != INT64_MIN)
        d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getSymbolIndex () != UINT32_MAX)
        d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    if (packet->getEMM () != UINT8_MAX)
        d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    if (packet->getRejectedMessage () != UINT8_MAX)
        d.setInteger (RejectedMessage, packet->getRejectedMessage ());
    offset += sizeof (uint8_t);
    
    d.setInteger (ErrorCode, packet->getErrorCode ());
    offset += sizeof (uint16_t);
    
    if (packet->getRejectedMessageID () != UINT16_MAX)
        d.setInteger (RejectedMessageID, packet->getRejectedMessageID ());
    offset += sizeof (uint16_t);
    
    optiqGroupSizeEncodingPacket* gse17 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray CollarFieldsArray;
    for (int i = 0; i < gse17->getNumInGroup (); i++)
    {
        cdr item;
        optiqRejectCollarFieldsPacket* gRejectCollarFields = (optiqRejectCollarFieldsPacket*) ((char*)buf + offset);

        if (gRejectCollarFields->getCollarRejType () != UINT8_MAX)
            item.setInteger (CollarRejType, gRejectCollarFields->getCollarRejType ());
        offset += sizeof (uint8_t);

        if (gRejectCollarFields->getBreachedCollarPrice () != INT64_MIN)
            item.setInteger (BreachedCollarPrice, gRejectCollarFields->getBreachedCollarPrice ());
        offset += sizeof (int64_t);

        CollarFieldsArray.push_back (item);
    }
    d.setArray (CollarFields, CollarFieldsArray);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getQuotes (cdr& d, const void* buf)
{
    d.setString (MessageName, "Quotes");

    const optiqQuotesPacket* packet = (optiqQuotesPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    d.setInteger (TradingCapacity, packet->getTradingCapacity ());
    offset += sizeof (uint8_t);
    
    d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (LPRole, packet->getLPRole ());
    offset += sizeof (uint8_t);
    
    d.setInteger (MiFIDIndicators, packet->getMiFIDIndicators ());
    offset += sizeof (uint8_t);
    
    d.setInteger (RFEAnswer, packet->getRFEAnswer ());
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse11 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray MiFIDShortcodesArray;
    for (int i = 0; i < gse11->getNumInGroup (); i++)
    {
        cdr item;
        optiqQuotesMiFIDShortcodesPacket* gQuotesMiFIDShortcodes = (optiqQuotesMiFIDShortcodesPacket*) ((char*)buf + offset);

        if (gQuotesMiFIDShortcodes->getInvestmentDecisionWFirmShortCode () != INT32_MIN)
            item.setInteger (InvestmentDecisionWFirmShortCode, gQuotesMiFIDShortcodes->getInvestmentDecisionWFirmShortCode ());
        offset += sizeof (int32_t);

        if (gQuotesMiFIDShortcodes->getNonExecutingBrokerShortCode () != INT32_MIN)
            item.setInteger (NonExecutingBrokerShortCode, gQuotesMiFIDShortcodes->getNonExecutingBrokerShortCode ());
        offset += sizeof (int32_t);

        if (gQuotesMiFIDShortcodes->getClientIdentificationShortcode () != INT32_MIN)
            item.setInteger (ClientIdentificationShortcode, gQuotesMiFIDShortcodes->getClientIdentificationShortcode ());
        offset += sizeof (int32_t);

        MiFIDShortcodesArray.push_back (item);
    }
    d.setArray (MiFIDShortcodes, MiFIDShortcodesArray);

    
    optiqGroupSizeEncodingPacket* gse12 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray ClearingDatasetArray;
    for (int i = 0; i < gse12->getNumInGroup (); i++)
    {
        cdr item;
        optiqQuotesClearingDatasetPacket* gQuotesClearingDataset = (optiqQuotesClearingDatasetPacket*) ((char*)buf + offset);

        item.setString (ClearingFirmID, gQuotesClearingDataset->getClearingFirmID ());
        offset += 8;

        item.setString (ClientID, gQuotesClearingDataset->getClientID ());
        offset += 8;

        item.setString (AccountNumber, gQuotesClearingDataset->getAccountNumber ());
        offset += 12;

        if (gQuotesClearingDataset->getTechnicalOrigin () != UINT8_MAX)
            item.setInteger (TechnicalOrigin, gQuotesClearingDataset->getTechnicalOrigin ());
        offset += sizeof (uint8_t);

        if (gQuotesClearingDataset->getOpenClose () != UINT16_MAX)
            item.setInteger (OpenClose, gQuotesClearingDataset->getOpenClose ());
        offset += sizeof (uint16_t);

        if (gQuotesClearingDataset->getClearingInstruction () != UINT8_MAX)
            item.setInteger (ClearingInstruction, gQuotesClearingDataset->getClearingInstruction ());
        offset += sizeof (uint8_t);

        item.setString (FreeText, gQuotesClearingDataset->getFreeText ());
        offset += 18;

        ClearingDatasetArray.push_back (item);
    }
    d.setArray (ClearingDataset, ClearingDatasetArray);

    
    optiqGroupSizeEncodingPacket* gse13 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray QuotesRepArray;
    for (int i = 0; i < gse13->getNumInGroup (); i++)
    {
        cdr item;
        optiqQuotesQuotesRepPacket* gQuotesQuotesRep = (optiqQuotesQuotesRepPacket*) ((char*)buf + offset);

        if (gQuotesQuotesRep->getBidSize () != UINT64_MAX)
            item.setInteger (BidSize, gQuotesQuotesRep->getBidSize ());
        offset += sizeof (uint64_t);

        if (gQuotesQuotesRep->getBidPx () != INT64_MIN)
            item.setInteger (BidPx, gQuotesQuotesRep->getBidPx ());
        offset += sizeof (int64_t);

        if (gQuotesQuotesRep->getOfferSize () != UINT64_MAX)
            item.setInteger (OfferSize, gQuotesQuotesRep->getOfferSize ());
        offset += sizeof (uint64_t);

        if (gQuotesQuotesRep->getOfferPx () != INT64_MIN)
            item.setInteger (OfferPx, gQuotesQuotesRep->getOfferPx ());
        offset += sizeof (int64_t);

        item.setInteger (SymbolIndex, gQuotesQuotesRep->getSymbolIndex ());
        offset += sizeof (uint32_t);

        item.setInteger (EMM, gQuotesQuotesRep->getEMM ());
        offset += sizeof (uint8_t);

        QuotesRepArray.push_back (item);
    }
    d.setArray (QuotesRep, QuotesRepArray);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getQuoteAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "QuoteAck");

    const optiqQuoteAckPacket* packet = (optiqQuoteAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getSendingTime () != UINT64_MAX)
        d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromMember () != UINT64_MAX)
        d.setInteger (OEGINFromMember, packet->getOEGINFromMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTTimeToME () != UINT64_MAX)
        d.setInteger (OEGOUTTimeToME, packet->getOEGOUTTimeToME ());
    offset += sizeof (uint64_t);
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (LPRole, packet->getLPRole ());
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse13 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray QuoteAcksArray;
    for (int i = 0; i < gse13->getNumInGroup (); i++)
    {
        cdr item;
        optiqQuoteAckQuoteAcksPacket* gQuoteAckQuoteAcks = (optiqQuoteAckQuoteAcksPacket*) ((char*)buf + offset);

        if (gQuoteAckQuoteAcks->getBidOrderID () != UINT64_MAX)
            item.setInteger (BidOrderID, gQuoteAckQuoteAcks->getBidOrderID ());
        offset += sizeof (uint64_t);

        if (gQuoteAckQuoteAcks->getOfferOrderID () != UINT64_MAX)
            item.setInteger (OfferOrderID, gQuoteAckQuoteAcks->getOfferOrderID ());
        offset += sizeof (uint64_t);

        item.setInteger (SymbolIndex, gQuoteAckQuoteAcks->getSymbolIndex ());
        offset += sizeof (uint32_t);

        item.setInteger (EMM, gQuoteAckQuoteAcks->getEMM ());
        offset += sizeof (uint8_t);

        if (gQuoteAckQuoteAcks->getBuyRevisionFlag () != UINT8_MAX)
            item.setInteger (BuyRevisionFlag, gQuoteAckQuoteAcks->getBuyRevisionFlag ());
        offset += sizeof (uint8_t);

        if (gQuoteAckQuoteAcks->getSellRevisionFlag () != UINT8_MAX)
            item.setInteger (SellRevisionFlag, gQuoteAckQuoteAcks->getSellRevisionFlag ());
        offset += sizeof (uint8_t);

        if (gQuoteAckQuoteAcks->getBidErrorCode () != UINT16_MAX)
            item.setInteger (BidErrorCode, gQuoteAckQuoteAcks->getBidErrorCode ());
        offset += sizeof (uint16_t);

        if (gQuoteAckQuoteAcks->getOfferErrorCode () != UINT16_MAX)
            item.setInteger (OfferErrorCode, gQuoteAckQuoteAcks->getOfferErrorCode ());
        offset += sizeof (uint16_t);

        QuoteAcksArray.push_back (item);
    }
    d.setArray (QuoteAcks, QuoteAcksArray);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getQuoteRequest (cdr& d, const void* buf)
{
    d.setString (MessageName, "QuoteRequest");

    const optiqQuoteRequestPacket* packet = (optiqQuoteRequestPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (OrderQty, packet->getOrderQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderSide () != UINT8_MAX)
        d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    if (packet->getFirmIDPublication () != UINT8_MAX)
        d.setInteger (FirmIDPublication, packet->getFirmIDPublication ());
    offset += sizeof (uint8_t);
    
    d.setString (EndClient, packet->getEndClient ());
    offset += 11;
    
    d.setInteger (DarkExecutionInstruction, packet->getDarkExecutionInstruction ());
    offset += sizeof (uint8_t);
    
    if (packet->getMinOrderQty () != UINT64_MAX)
        d.setInteger (MinOrderQty, packet->getMinOrderQty ());
    offset += sizeof (uint64_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getCancelRequest (cdr& d, const void* buf)
{
    d.setString (MessageName, "CancelRequest");

    const optiqCancelRequestPacket* packet = (optiqCancelRequestPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderType, packet->getOrderType ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderCategory () != UINT8_MAX)
        d.setInteger (OrderCategory, packet->getOrderCategory ());
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse14 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup1Array;
    for (int i = 0; i < gse14->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelRequestNotUsedGroup1Packet* gCancelRequestNotUsedGroup1 = (optiqCancelRequestNotUsedGroup1Packet*) ((char*)buf + offset);

        NotUsedGroup1Array.push_back (item);
    }
    d.setArray (NotUsedGroup1, NotUsedGroup1Array);

    
    optiqGroupSizeEncodingPacket* gse15 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup2Array;
    for (int i = 0; i < gse15->getNumInGroup (); i++)
    {
        cdr item;
        optiqCancelRequestNotUsedGroup2Packet* gCancelRequestNotUsedGroup2 = (optiqCancelRequestNotUsedGroup2Packet*) ((char*)buf + offset);

        NotUsedGroup2Array.push_back (item);
    }
    d.setArray (NotUsedGroup2, NotUsedGroup2Array);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getMassCancel (cdr& d, const void* buf)
{
    d.setString (MessageName, "MassCancel");

    const optiqMassCancelPacket* packet = (optiqMassCancelPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getSymbolIndex () != UINT32_MAX)
        d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    if (packet->getEMM () != UINT8_MAX)
        d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setString (InstrumentGroupCode, packet->getInstrumentGroupCode ());
    offset += 2;
    
    if (packet->getOrderSide () != UINT8_MAX)
        d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    if (packet->getLogicalAccessID () != UINT32_MAX)
        d.setInteger (LogicalAccessID, packet->getLogicalAccessID ());
    offset += sizeof (uint32_t);
    
    if (packet->getOEPartitionID () != UINT16_MAX)
        d.setInteger (OEPartitionID, packet->getOEPartitionID ());
    offset += sizeof (uint16_t);
    
    if (packet->getContractID () != UINT32_MAX)
        d.setInteger (ContractID, packet->getContractID ());
    offset += sizeof (uint32_t);
    
    d.setString (Maturity, packet->getMaturity ());
    offset += 8;
    
    if (packet->getAccountType () != UINT8_MAX)
        d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    if (packet->getOptionType () != UINT8_MAX)
        d.setInteger (OptionType, packet->getOptionType ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderCategory () != UINT8_MAX)
        d.setInteger (OrderCategory, packet->getOrderCategory ());
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse18 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup1Array;
    for (int i = 0; i < gse18->getNumInGroup (); i++)
    {
        cdr item;
        optiqMassCancelNotUsedGroup1Packet* gMassCancelNotUsedGroup1 = (optiqMassCancelNotUsedGroup1Packet*) ((char*)buf + offset);

        NotUsedGroup1Array.push_back (item);
    }
    d.setArray (NotUsedGroup1, NotUsedGroup1Array);

    
    optiqGroupSizeEncodingPacket* gse19 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray NotUsedGroup2Array;
    for (int i = 0; i < gse19->getNumInGroup (); i++)
    {
        cdr item;
        optiqMassCancelNotUsedGroup2Packet* gMassCancelNotUsedGroup2 = (optiqMassCancelNotUsedGroup2Packet*) ((char*)buf + offset);

        NotUsedGroup2Array.push_back (item);
    }
    d.setArray (NotUsedGroup2, NotUsedGroup2Array);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getMassCancelAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "MassCancelAck");

    const optiqMassCancelAckPacket* packet = (optiqMassCancelAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getSendingTime () != UINT64_MAX)
        d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromMember () != UINT64_MAX)
        d.setInteger (OEGINFromMember, packet->getOEGINFromMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTTimeToME () != UINT64_MAX)
        d.setInteger (OEGOUTTimeToME, packet->getOEGOUTTimeToME ());
    offset += sizeof (uint64_t);
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (TotalAffectedOrders, packet->getTotalAffectedOrders ());
    offset += sizeof (int32_t);
    
    if (packet->getSymbolIndex () != UINT32_MAX)
        d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    if (packet->getEMM () != UINT8_MAX)
        d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setString (InstrumentGroupCode, packet->getInstrumentGroupCode ());
    offset += 2;
    
    if (packet->getOrderSide () != UINT8_MAX)
        d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    if (packet->getLogicalAccessID () != UINT32_MAX)
        d.setInteger (LogicalAccessID, packet->getLogicalAccessID ());
    offset += sizeof (uint32_t);
    
    if (packet->getOEPartitionID () != UINT16_MAX)
        d.setInteger (OEPartitionID, packet->getOEPartitionID ());
    offset += sizeof (uint16_t);
    
    if (packet->getContractID () != UINT32_MAX)
        d.setInteger (ContractID, packet->getContractID ());
    offset += sizeof (uint32_t);
    
    d.setString (Maturity, packet->getMaturity ());
    offset += 8;
    
    if (packet->getAccountType () != UINT8_MAX)
        d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    if (packet->getOptionType () != UINT8_MAX)
        d.setInteger (OptionType, packet->getOptionType ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderCategory () != UINT8_MAX)
        d.setInteger (OrderCategory, packet->getOrderCategory ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getOpenOrderRequest (cdr& d, const void* buf)
{
    d.setString (MessageName, "OpenOrderRequest");

    const optiqOpenOrderRequestPacket* packet = (optiqOpenOrderRequestPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderCategory () != UINT8_MAX)
        d.setInteger (OrderCategory, packet->getOrderCategory ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getOwnershipRequestAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "OwnershipRequestAck");

    const optiqOwnershipRequestAckPacket* packet = (optiqOwnershipRequestAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    if (packet->getLogicalAccessID () != UINT32_MAX)
        d.setInteger (LogicalAccessID, packet->getLogicalAccessID ());
    offset += sizeof (uint32_t);
    
    if (packet->getOEPartitionID () != UINT16_MAX)
        d.setInteger (OEPartitionID, packet->getOEPartitionID ());
    offset += sizeof (uint16_t);
    
    d.setInteger (TotalAffectedOrders, packet->getTotalAffectedOrders ());
    offset += sizeof (int32_t);
    
    if (packet->getOrderCategory () != UINT8_MAX)
        d.setInteger (OrderCategory, packet->getOrderCategory ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getOwnershipRequest (cdr& d, const void* buf)
{
    d.setString (MessageName, "OwnershipRequest");

    const optiqOwnershipRequestPacket* packet = (optiqOwnershipRequestPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    if (packet->getLogicalAccessID () != UINT32_MAX)
        d.setInteger (LogicalAccessID, packet->getLogicalAccessID ());
    offset += sizeof (uint32_t);
    
    if (packet->getOEPartitionID () != UINT16_MAX)
        d.setInteger (OEPartitionID, packet->getOEPartitionID ());
    offset += sizeof (uint16_t);
    
    if (packet->getOrderCategory () != UINT8_MAX)
        d.setInteger (OrderCategory, packet->getOrderCategory ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getTradeBustNotification (cdr& d, const void* buf)
{
    d.setString (MessageName, "TradeBustNotification");

    const optiqTradeBustNotificationPacket* packet = (optiqTradeBustNotificationPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (ExecutionID, packet->getExecutionID ());
    offset += sizeof (uint32_t);
    
    d.setInteger (LastTradedPx, packet->getLastTradedPx ());
    offset += sizeof (int64_t);
    
    d.setInteger (LastShares, packet->getLastShares ());
    offset += sizeof (uint64_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getCollarBreachConfirmation (cdr& d, const void* buf)
{
    d.setString (MessageName, "CollarBreachConfirmation");

    const optiqCollarBreachConfirmationPacket* packet = (optiqCollarBreachConfirmationPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderID () != UINT64_MAX)
        d.setInteger (OrderID, packet->getOrderID ());
    offset += sizeof (uint64_t);
    
    if (packet->getOrigClientOrderID () != INT64_MIN)
        d.setInteger (OrigClientOrderID, packet->getOrigClientOrderID ());
    offset += sizeof (int64_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getPriceInput (cdr& d, const void* buf)
{
    d.setString (MessageName, "PriceInput");

    const optiqPriceInputPacket* packet = (optiqPriceInputPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (InputPriceType, packet->getInputPriceType ());
    offset += sizeof (uint8_t);
    
    if (packet->getPrice () != INT64_MIN)
        d.setInteger (Price, packet->getPrice ());
    offset += sizeof (int64_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getLiquidityProviderCommand (cdr& d, const void* buf)
{
    d.setString (MessageName, "LiquidityProviderCommand");

    const optiqLiquidityProviderCommandPacket* packet = (optiqLiquidityProviderCommandPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (LPActionCode, packet->getLPActionCode ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getAskForQuote (cdr& d, const void* buf)
{
    d.setString (MessageName, "AskForQuote");

    const optiqAskForQuotePacket* packet = (optiqAskForQuotePacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (AFQReason, packet->getAFQReason ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getRequestForExecution (cdr& d, const void* buf)
{
    d.setString (MessageName, "RequestForExecution");

    const optiqRequestForExecutionPacket* packet = (optiqRequestForExecutionPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getRFQNotification (cdr& d, const void* buf)
{
    d.setString (MessageName, "RFQNotification");

    const optiqRFQNotificationPacket* packet = (optiqRFQNotificationPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (QuoteReqID, packet->getQuoteReqID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (OrderQty, packet->getOrderQty ());
    offset += sizeof (uint64_t);
    
    d.setString (CounterpartFirmID, packet->getCounterpartFirmID ());
    offset += 8;
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (RFQUpdateType, packet->getRFQUpdateType ());
    offset += sizeof (uint8_t);
    
    if (packet->getOrderSide () != UINT8_MAX)
        d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    d.setString (EndClient, packet->getEndClient ());
    offset += 11;
    
    d.setInteger (DarkExecutionInstruction, packet->getDarkExecutionInstruction ());
    offset += sizeof (uint8_t);
    
    if (packet->getMinOrderQty () != UINT64_MAX)
        d.setInteger (MinOrderQty, packet->getMinOrderQty ());
    offset += sizeof (uint64_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getRFQMatchingStatus (cdr& d, const void* buf)
{
    d.setString (MessageName, "RFQMatchingStatus");

    const optiqRFQMatchingStatusPacket* packet = (optiqRFQMatchingStatusPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (QuoteReqID, packet->getQuoteReqID ());
    offset += sizeof (uint64_t);
    
    if (packet->getPotentialMatchingPX () != INT64_MIN)
        d.setInteger (PotentialMatchingPX, packet->getPotentialMatchingPX ());
    offset += sizeof (int64_t);
    
    d.setInteger (PotentialMatchingQty, packet->getPotentialMatchingQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    
    if (packet->getNumberOfLPs () != UINT8_MAX)
        d.setInteger (NumberOfLPs, packet->getNumberOfLPs ());
    offset += sizeof (uint8_t);
    
    d.setInteger (RecipientType, packet->getRecipientType ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getRFQLPMatchingStatus (cdr& d, const void* buf)
{
    d.setString (MessageName, "RFQLPMatchingStatus");

    const optiqRFQLPMatchingStatusPacket* packet = (optiqRFQLPMatchingStatusPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (BookIn, packet->getBookIn ());
    offset += sizeof (uint64_t);
    
    if (packet->getBookOUTTime () != UINT64_MAX)
        d.setInteger (BookOUTTime, packet->getBookOUTTime ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGINFromME () != UINT64_MAX)
        d.setInteger (OEGINFromME, packet->getOEGINFromME ());
    offset += sizeof (uint64_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (QuoteReqID, packet->getQuoteReqID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (PotentialMatchingQty, packet->getPotentialMatchingQty ());
    offset += sizeof (uint64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OrderSide, packet->getOrderSide ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getUserNotification (cdr& d, const void* buf)
{
    d.setString (MessageName, "UserNotification");

    const optiqUserNotificationPacket* packet = (optiqUserNotificationPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getExecutionWithinFirmShortCode () != INT32_MIN)
        d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setString (FamilyID, packet->getFamilyID ());
    offset += 8;
    
    if (packet->getSymbolIndex () != UINT32_MAX)
        d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (UserStatus, packet->getUserStatus ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getInstrumentSynchronizationList (cdr& d, const void* buf)
{
    d.setString (MessageName, "InstrumentSynchronizationList");

    const optiqInstrumentSynchronizationListPacket* packet = (optiqInstrumentSynchronizationListPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ResynchronizationID, packet->getResynchronizationID ());
    offset += sizeof (uint16_t);
    
    optiqGroupSizeEncodingPacket* gse4 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    cdrArray InstrumentSynchronizationSectionArray;
    for (int i = 0; i < gse4->getNumInGroup (); i++)
    {
        cdr item;
        optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket* gInstrumentSynchronizationListInstrumentSynchronizationSection = (optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket*) ((char*)buf + offset);

        item.setInteger (SymbolIndex, gInstrumentSynchronizationListInstrumentSynchronizationSection->getSymbolIndex ());
        offset += sizeof (uint32_t);

        item.setInteger (EMM, gInstrumentSynchronizationListInstrumentSynchronizationSection->getEMM ());
        offset += sizeof (uint8_t);

        InstrumentSynchronizationSectionArray.push_back (item);
    }
    d.setArray (InstrumentSynchronizationSection, InstrumentSynchronizationSectionArray);

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getSynchronizationTime (cdr& d, const void* buf)
{
    d.setString (MessageName, "SynchronizationTime");

    const optiqSynchronizationTimePacket* packet = (optiqSynchronizationTimePacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ResynchronizationID, packet->getResynchronizationID ());
    offset += sizeof (uint16_t);
    
    d.setInteger (LastBookInTime, packet->getLastBookInTime ());
    offset += sizeof (uint64_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getLogon (cdr& d, const void* buf)
{
    d.setString (MessageName, "Logon");

    const optiqLogonPacket* packet = (optiqLogonPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (LogicalAccessID, packet->getLogicalAccessID ());
    offset += sizeof (uint32_t);
    
    d.setInteger (OEPartitionID, packet->getOEPartitionID ());
    offset += sizeof (uint16_t);
    
    if (packet->getLastMsgSeqNum () != UINT32_MAX)
        d.setInteger (LastMsgSeqNum, packet->getLastMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (SoftwareProvider, packet->getSoftwareProvider ());
    offset += 8;
    
    d.setInteger (QueueingIndicator, packet->getQueueingIndicator ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getLogonAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "LogonAck");

    const optiqLogonAckPacket* packet = (optiqLogonAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setString (ExchangeID, packet->getExchangeID ());
    offset += 8;
    
    d.setInteger (LastClMsgSeqNum, packet->getLastClMsgSeqNum ());
    offset += sizeof (uint32_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getLogonReject (cdr& d, const void* buf)
{
    d.setString (MessageName, "LogonReject");

    const optiqLogonRejectPacket* packet = (optiqLogonRejectPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setString (ExchangeID, packet->getExchangeID ());
    offset += 8;
    
    d.setInteger (LogonRejectCode, packet->getLogonRejectCode ());
    offset += sizeof (uint8_t);
    
    d.setInteger (LastClMsgSeqNum, packet->getLastClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setInteger (LastMsgSeqNum, packet->getLastMsgSeqNum ());
    offset += sizeof (uint32_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getLogout (cdr& d, const void* buf)
{
    d.setString (MessageName, "Logout");

    const optiqLogoutPacket* packet = (optiqLogoutPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (LogOutReasonCode, packet->getLogOutReasonCode ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getHeartbeat (cdr& d, const void* buf)
{
    d.setString (MessageName, "Heartbeat");

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getTestRequest (cdr& d, const void* buf)
{
    d.setString (MessageName, "TestRequest");

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getTechnicalReject (cdr& d, const void* buf)
{
    d.setString (MessageName, "TechnicalReject");

    const optiqTechnicalRejectPacket* packet = (optiqTechnicalRejectPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    if (packet->getOEGOUTToMember () != UINT64_MAX)
        d.setInteger (OEGOUTToMember, packet->getOEGOUTToMember ());
    offset += sizeof (uint64_t);
    
    if (packet->getRejectedClientMessageSequenceNumber () != UINT32_MAX)
        d.setInteger (RejectedClientMessageSequenceNumber, packet->getRejectedClientMessageSequenceNumber ());
    offset += sizeof (uint32_t);
    
    if (packet->getRejectedMessage () != UINT8_MAX)
        d.setInteger (RejectedMessage, packet->getRejectedMessage ());
    offset += sizeof (uint8_t);
    
    d.setInteger (ErrorCode, packet->getErrorCode ());
    offset += sizeof (uint16_t);
    
    if (packet->getRejectedMessageID () != UINT16_MAX)
        d.setInteger (RejectedMessageID, packet->getRejectedMessageID ());
    offset += sizeof (uint16_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getDeclarationEntry (cdr& d, const void* buf)
{
    d.setString (MessageName, "DeclarationEntry");

    const optiqDeclarationEntryPacket* packet = (optiqDeclarationEntryPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (OperationType, packet->getOperationType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setString (EnteringCounterparty, packet->getEnteringCounterparty ());
    offset += 8;
    
    d.setInteger (Side, packet->getSide ());
    offset += sizeof (uint8_t);
    
    if (packet->getQuantity () != UINT64_MAX)
        d.setInteger (Quantity, packet->getQuantity ());
    offset += sizeof (uint64_t);
    
    if (packet->getPrice () != INT64_MIN)
        d.setInteger (Price, packet->getPrice ());
    offset += sizeof (int64_t);
    
    d.setInteger (ExecutionWithinFirmShortCode, packet->getExecutionWithinFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortcode () != INT32_MIN)
        d.setInteger (ClientIdentificationShortcode, packet->getClientIdentificationShortcode ());
    offset += sizeof (int32_t);
    
    d.setString (MICofSecondaryListing, packet->getMICofSecondaryListing ());
    offset += 4;
    
    d.setString (CentralisationDate, packet->getCentralisationDate ());
    offset += 10;
    
    d.setString (ClearingFirmID, packet->getClearingFirmID ());
    offset += 8;
    
    d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    if (packet->getAccountTypeCross () != UINT8_MAX)
        d.setInteger (AccountTypeCross, packet->getAccountTypeCross ());
    offset += sizeof (uint8_t);
    
    d.setInteger (TradingCapacity, packet->getTradingCapacity ());
    offset += sizeof (uint8_t);
    
    if (packet->getTradingCapacityCross () != UINT8_MAX)
        d.setInteger (TradingCapacityCross, packet->getTradingCapacityCross ());
    offset += sizeof (uint8_t);
    
    d.setInteger (SettlementPeriod, packet->getSettlementPeriod ());
    offset += sizeof (uint8_t);
    
    d.setInteger (SettlementFlag, packet->getSettlementFlag ());
    offset += sizeof (uint8_t);
    
    d.setInteger (GuaranteeFlag, packet->getGuaranteeFlag ());
    offset += sizeof (uint8_t);
    
    d.setInteger (MiFIDIndicators, packet->getMiFIDIndicators ());
    offset += sizeof (uint8_t);
    
    if (packet->getTransactionPriceType () != UINT8_MAX)
        d.setInteger (TransactionPriceType, packet->getTransactionPriceType ());
    offset += sizeof (uint8_t);
    
    d.setString (PrincipalCode, packet->getPrincipalCode ());
    offset += 8;
    
    d.setString (PrincipalCodeCross, packet->getPrincipalCodeCross ());
    offset += 8;
    
    if (packet->getStartTimeVwap () != UINT32_MAX)
        d.setInteger (StartTimeVwap, packet->getStartTimeVwap ());
    offset += sizeof (uint32_t);
    
    if (packet->getEndTimeVwap () != UINT32_MAX)
        d.setInteger (EndTimeVwap, packet->getEndTimeVwap ());
    offset += sizeof (uint32_t);
    
    if (packet->getGrossTradeAmount () != INT64_MIN)
        d.setInteger (GrossTradeAmount, packet->getGrossTradeAmount ());
    offset += sizeof (int64_t);
    
    d.setString (AccountNumber, packet->getAccountNumber ());
    offset += 12;
    
    d.setString (AccountNumberCross, packet->getAccountNumberCross ());
    offset += 12;
    
    d.setString (FreeText, packet->getFreeText ());
    offset += 18;
    
    d.setString (FreeTextCross, packet->getFreeTextCross ());
    offset += 18;
    
    if (packet->getInvestmentDecisionWFirmShortCode () != INT32_MIN)
        d.setInteger (InvestmentDecisionWFirmShortCode, packet->getInvestmentDecisionWFirmShortCode ());
    offset += sizeof (int32_t);
    
    if (packet->getClientIdentificationShortCodeCross () != INT32_MIN)
        d.setInteger (ClientIdentificationShortCodeCross, packet->getClientIdentificationShortCodeCross ());
    offset += sizeof (int32_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getDeclarationEntryAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "DeclarationEntryAck");

    const optiqDeclarationEntryAckPacket* packet = (optiqDeclarationEntryAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getDeclarationID () != UINT64_MAX)
        d.setInteger (DeclarationID, packet->getDeclarationID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setString (MICofSecondaryListing, packet->getMICofSecondaryListing ());
    offset += 4;
    
    d.setInteger (OperationType, packet->getOperationType ());
    offset += sizeof (uint8_t);
    
    if (packet->getPreMatchingType () != UINT8_MAX)
        d.setInteger (PreMatchingType, packet->getPreMatchingType ());
    offset += sizeof (uint8_t);
    
    if (packet->getWaiverIndicator () != UINT8_MAX)
        d.setInteger (WaiverIndicator, packet->getWaiverIndicator ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getDeclarationNotice (cdr& d, const void* buf)
{
    d.setString (MessageName, "DeclarationNotice");

    const optiqDeclarationNoticePacket* packet = (optiqDeclarationNoticePacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    if (packet->getClientOrderID () != INT64_MIN)
        d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (DeclarationID, packet->getDeclarationID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (DeclarationStatus, packet->getDeclarationStatus ());
    offset += sizeof (uint8_t);
    
    d.setInteger (OperationType, packet->getOperationType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setString (EnteringCounterparty, packet->getEnteringCounterparty ());
    offset += 8;
    
    if (packet->getSide () != UINT8_MAX)
        d.setInteger (Side, packet->getSide ());
    offset += sizeof (uint8_t);
    
    if (packet->getQuantity () != UINT64_MAX)
        d.setInteger (Quantity, packet->getQuantity ());
    offset += sizeof (uint64_t);
    
    if (packet->getPrice () != INT64_MIN)
        d.setInteger (Price, packet->getPrice ());
    offset += sizeof (int64_t);
    
    if (packet->getPreMatchingType () != UINT8_MAX)
        d.setInteger (PreMatchingType, packet->getPreMatchingType ());
    offset += sizeof (uint8_t);
    
    if (packet->getTradeTime () != UINT64_MAX)
        d.setInteger (TradeTime, packet->getTradeTime ());
    offset += sizeof (uint64_t);
    
    d.setString (MICofSecondaryListing, packet->getMICofSecondaryListing ());
    offset += 4;
    
    d.setString (CentralisationDate, packet->getCentralisationDate ());
    offset += 10;
    
    d.setString (ClearingFirmID, packet->getClearingFirmID ());
    offset += 8;
    
    if (packet->getAccountType () != UINT8_MAX)
        d.setInteger (AccountType, packet->getAccountType ());
    offset += sizeof (uint8_t);
    
    if (packet->getAccountTypeCross () != UINT8_MAX)
        d.setInteger (AccountTypeCross, packet->getAccountTypeCross ());
    offset += sizeof (uint8_t);
    
    if (packet->getTradingCapacity () != UINT8_MAX)
        d.setInteger (TradingCapacity, packet->getTradingCapacity ());
    offset += sizeof (uint8_t);
    
    if (packet->getTradingCapacityCross () != UINT8_MAX)
        d.setInteger (TradingCapacityCross, packet->getTradingCapacityCross ());
    offset += sizeof (uint8_t);
    
    if (packet->getSettlementFlag () != UINT8_MAX)
        d.setInteger (SettlementFlag, packet->getSettlementFlag ());
    offset += sizeof (uint8_t);
    
    if (packet->getSettlementPeriod () != UINT8_MAX)
        d.setInteger (SettlementPeriod, packet->getSettlementPeriod ());
    offset += sizeof (uint8_t);
    
    if (packet->getGuaranteeFlag () != UINT8_MAX)
        d.setInteger (GuaranteeFlag, packet->getGuaranteeFlag ());
    offset += sizeof (uint8_t);
    
    if (packet->getTransactionPriceType () != UINT8_MAX)
        d.setInteger (TransactionPriceType, packet->getTransactionPriceType ());
    offset += sizeof (uint8_t);
    
    d.setString (PrincipalCode, packet->getPrincipalCode ());
    offset += 8;
    
    d.setString (PrincipalCodeCross, packet->getPrincipalCodeCross ());
    offset += 8;
    
    if (packet->getStartTimeVwap () != UINT32_MAX)
        d.setInteger (StartTimeVwap, packet->getStartTimeVwap ());
    offset += sizeof (uint32_t);
    
    if (packet->getEndTimeVwap () != UINT32_MAX)
        d.setInteger (EndTimeVwap, packet->getEndTimeVwap ());
    offset += sizeof (uint32_t);
    
    if (packet->getGrossTradeAmount () != INT64_MIN)
        d.setInteger (GrossTradeAmount, packet->getGrossTradeAmount ());
    offset += sizeof (int64_t);
    
    d.setString (AccountNumber, packet->getAccountNumber ());
    offset += 12;
    
    d.setString (AccountNumberCross, packet->getAccountNumberCross ());
    offset += 12;
    
    d.setString (FreeText, packet->getFreeText ());
    offset += 18;
    
    d.setString (FreeTextCross, packet->getFreeTextCross ());
    offset += 18;
    
    if (packet->getWaiverIndicator () != UINT8_MAX)
        d.setInteger (WaiverIndicator, packet->getWaiverIndicator ());
    offset += sizeof (uint8_t);
    
    if (packet->getPreviousDayIndicator () != UINT8_MAX)
        d.setInteger (PreviousDayIndicator, packet->getPreviousDayIndicator ());
    offset += sizeof (uint8_t);
    
    if (packet->getMiscellaneousFeeAmount () != INT64_MIN)
        d.setInteger (MiscellaneousFeeAmount, packet->getMiscellaneousFeeAmount ());
    offset += sizeof (int64_t);
    
    if (packet->getCCPID () != UINT8_MAX)
        d.setInteger (CCPID, packet->getCCPID ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getDeclarationCancelAndRefusal (cdr& d, const void* buf)
{
    d.setString (MessageName, "DeclarationCancelAndRefusal");

    const optiqDeclarationCancelAndRefusalPacket* packet = (optiqDeclarationCancelAndRefusalPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (DeclarationID, packet->getDeclarationID ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ActionType, packet->getActionType ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getFundPriceInput (cdr& d, const void* buf)
{
    d.setString (MessageName, "FundPriceInput");

    const optiqFundPriceInputPacket* packet = (optiqFundPriceInputPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (ClMsgSeqNum, packet->getClMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (SendingTime, packet->getSendingTime ());
    offset += sizeof (uint64_t);
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (Price, packet->getPrice ());
    offset += sizeof (int64_t);
    
    if (packet->getBypassIndicator () != UINT8_MAX)
        d.setInteger (BypassIndicator, packet->getBypassIndicator ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getFundPriceInputAck (cdr& d, const void* buf)
{
    d.setString (MessageName, "FundPriceInputAck");

    const optiqFundPriceInputAckPacket* packet = (optiqFundPriceInputAckPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setInteger (Price, packet->getPrice ());
    offset += sizeof (int64_t);
    
    if (packet->getBypassIndicator () != UINT8_MAX)
        d.setInteger (BypassIndicator, packet->getBypassIndicator ());
    offset += sizeof (uint8_t);
    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::getDeclarationEntryReject (cdr& d, const void* buf)
{
    d.setString (MessageName, "DeclarationEntryReject");

    const optiqDeclarationEntryRejectPacket* packet = (optiqDeclarationEntryRejectPacket*)buf;
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;
    
    d.setInteger (MsgSeqNum, packet->getMsgSeqNum ());
    offset += sizeof (uint32_t);
    
    d.setString (FirmID, packet->getFirmID ());
    offset += 8;
    
    d.setInteger (ClientOrderID, packet->getClientOrderID ());
    offset += sizeof (int64_t);
    
    d.setInteger (SymbolIndex, packet->getSymbolIndex ());
    offset += sizeof (uint32_t);
    
    if (packet->getEMM () != UINT8_MAX)
        d.setInteger (EMM, packet->getEMM ());
    offset += sizeof (uint8_t);
    
    d.setString (MICofSecondaryListing, packet->getMICofSecondaryListing ());
    offset += 4;
    
    d.setInteger (OperationType, packet->getOperationType ());
    offset += sizeof (uint8_t);
    
    d.setInteger (ErrorCode, packet->getErrorCode ());
    offset += sizeof (uint16_t);
    
    if (packet->getRejectedMessage () != UINT8_MAX)
        d.setInteger (RejectedMessage, packet->getRejectedMessage ());
    offset += sizeof (uint8_t);
    
    if (packet->getRejectedMessageID () != UINT16_MAX)
        d.setInteger (RejectedMessageID, packet->getRejectedMessageID ());
    offset += sizeof (uint16_t);
    return GW_CODEC_SUCCESS;
}


codecState
optiqCodec::putNewOrder (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqNewOrderPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqNewOrderPacket* packet = (optiqNewOrderPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqNewOrderPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
    {
        setLastError ("OrderSide missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    uint8_t ordertype;
    if (!d.getInteger (OrderType, ordertype))
    {
        setLastError ("OrderType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderType (ordertype);
    offset += sizeof (uint8_t);
    
    uint8_t timeinforce;
    if (!d.getInteger (TimeInForce, timeinforce))
    {
        setLastError ("TimeInForce missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTimeInForce (timeinforce);
    offset += sizeof (uint8_t);
    
    int64_t orderpx;
    if (!d.getInteger (OrderPx, orderpx))
        packet->setOrderPx (INT64_MIN);
    else
        packet->setOrderPx (orderpx);
    offset += sizeof (int64_t);
    
    
    uint64_t orderqty;
    if (!d.getInteger (OrderQty, orderqty))
    {
        setLastError ("OrderQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderQty (orderqty);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    uint8_t tradingcapacity;
    if (!d.getInteger (TradingCapacity, tradingcapacity))
    {
        setLastError ("TradingCapacity missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTradingCapacity (tradingcapacity);
    offset += sizeof (uint8_t);
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
    {
        setLastError ("AccountType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    uint8_t lprole;
    if (!d.getInteger (LPRole, lprole))
        packet->setLPRole (UINT8_MAX);
    else
        packet->setLPRole (lprole);
    offset += sizeof (uint8_t);
    
    
    uint8_t executioninstruction;
    if (!d.getInteger (ExecutionInstruction, executioninstruction))
    {
        setLastError ("ExecutionInstruction missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionInstruction (executioninstruction);
    offset += sizeof (uint8_t);
    
    uint8_t darkexecutioninstruction;
    if (!d.getInteger (DarkExecutionInstruction, darkexecutioninstruction))
    {
        setLastError ("DarkExecutionInstruction missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDarkExecutionInstruction (darkexecutioninstruction);
    offset += sizeof (uint8_t);
    
    uint8_t mifidindicators;
    if (!d.getInteger (MiFIDIndicators, mifidindicators))
    {
        setLastError ("MiFIDIndicators missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMiFIDIndicators (mifidindicators);
    offset += sizeof (uint8_t);
    
    uint16_t stpid;
    if (!d.getInteger (STPID, stpid))
        packet->setSTPID (UINT16_MAX);
    else
        packet->setSTPID (stpid);
    offset += sizeof (uint16_t);
    
    
    optiqGroupSizeEncodingPacket* gse20 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse20->setNumInGroup (d.getArraySize (FreeTextSection));
    gse20->setBlockLength (sizeof (optiqNewOrderFreeTextSectionPacket));
    
    if (d.getArraySize (FreeTextSection) > 0)
    {
        cdrArray* FreeTextSectionArray = NULL;
        d.getArray (FreeTextSection, (const cdrArray**)(&FreeTextSectionArray));
        for (cdrArray::iterator it = FreeTextSectionArray->begin(); it != FreeTextSectionArray->end(); ++it)
        {
            cdr& item = *it;
            optiqNewOrderFreeTextSectionPacket* freetextsection = (optiqNewOrderFreeTextSectionPacket*) ((char*)buf + offset);

            string freetext;
            if (!item.getString (FreeText, freetext))
            {
                setLastError ("FreeText missing or not string");
                return GW_CODEC_ERROR;
            }
            freetextsection->setFreeText (freetext);
            offset += 18;

        }
    }
    
    optiqGroupSizeEncodingPacket* gse21 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse21->setNumInGroup (d.getArraySize (MiFIDShortcodes));
    gse21->setBlockLength (sizeof (optiqNewOrderMiFIDShortcodesPacket));
    
    if (d.getArraySize (MiFIDShortcodes) > 0)
    {
        cdrArray* MiFIDShortcodesArray = NULL;
        d.getArray (MiFIDShortcodes, (const cdrArray**)(&MiFIDShortcodesArray));
        for (cdrArray::iterator it = MiFIDShortcodesArray->begin(); it != MiFIDShortcodesArray->end(); ++it)
        {
            cdr& item = *it;
            optiqNewOrderMiFIDShortcodesPacket* mifidshortcodes = (optiqNewOrderMiFIDShortcodesPacket*) ((char*)buf + offset);

            int32_t investmentdecisionwfirmshortcode;
            if (!item.getInteger (InvestmentDecisionWFirmShortCode, investmentdecisionwfirmshortcode))
                mifidshortcodes->setInvestmentDecisionWFirmShortCode (INT32_MIN);
            else
                mifidshortcodes->setInvestmentDecisionWFirmShortCode (investmentdecisionwfirmshortcode);
            offset += sizeof (int32_t);
            

            int32_t nonexecutingbrokershortcode;
            if (!item.getInteger (NonExecutingBrokerShortCode, nonexecutingbrokershortcode))
                mifidshortcodes->setNonExecutingBrokerShortCode (INT32_MIN);
            else
                mifidshortcodes->setNonExecutingBrokerShortCode (nonexecutingbrokershortcode);
            offset += sizeof (int32_t);
            

            int32_t clientidentificationshortcode;
            if (!item.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
                mifidshortcodes->setClientIdentificationShortcode (INT32_MIN);
            else
                mifidshortcodes->setClientIdentificationShortcode (clientidentificationshortcode);
            offset += sizeof (int32_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse22 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse22->setNumInGroup (d.getArraySize (OptionalFields));
    gse22->setBlockLength (sizeof (optiqNewOrderOptionalFieldsPacket));
    
    if (d.getArraySize (OptionalFields) > 0)
    {
        cdrArray* OptionalFieldsArray = NULL;
        d.getArray (OptionalFields, (const cdrArray**)(&OptionalFieldsArray));
        for (cdrArray::iterator it = OptionalFieldsArray->begin(); it != OptionalFieldsArray->end(); ++it)
        {
            cdr& item = *it;
            optiqNewOrderOptionalFieldsPacket* optionalfields = (optiqNewOrderOptionalFieldsPacket*) ((char*)buf + offset);

            int64_t stoppx;
            if (!item.getInteger (StopPx, stoppx))
                optionalfields->setStopPx (INT64_MIN);
            else
                optionalfields->setStopPx (stoppx);
            offset += sizeof (int64_t);
            

            int64_t undisclosedprice;
            if (!item.getInteger (UndisclosedPrice, undisclosedprice))
                optionalfields->setUndisclosedPrice (INT64_MIN);
            else
                optionalfields->setUndisclosedPrice (undisclosedprice);
            offset += sizeof (int64_t);
            

            uint64_t disclosedqty;
            if (!item.getInteger (DisclosedQty, disclosedqty))
                optionalfields->setDisclosedQty (UINT64_MAX);
            else
                optionalfields->setDisclosedQty (disclosedqty);
            offset += sizeof (uint64_t);
            

            uint64_t minorderqty;
            if (!item.getInteger (MinOrderQty, minorderqty))
                optionalfields->setMinOrderQty (UINT64_MAX);
            else
                optionalfields->setMinOrderQty (minorderqty);
            offset += sizeof (uint64_t);
            

            uint64_t quotereqid;
            if (!item.getInteger (QuoteReqID, quotereqid))
                optionalfields->setQuoteReqID (UINT64_MAX);
            else
                optionalfields->setQuoteReqID (quotereqid);
            offset += sizeof (uint64_t);
            

            uint32_t orderexpirationtime;
            if (!item.getInteger (OrderExpirationTime, orderexpirationtime))
                optionalfields->setOrderExpirationTime (UINT32_MAX);
            else
                optionalfields->setOrderExpirationTime (orderexpirationtime);
            offset += sizeof (uint32_t);
            

            uint16_t orderexpirationdate;
            if (!item.getInteger (OrderExpirationDate, orderexpirationdate))
                optionalfields->setOrderExpirationDate (UINT16_MAX);
            else
                optionalfields->setOrderExpirationDate (orderexpirationdate);
            offset += sizeof (uint16_t);
            

            int8_t pegoffset;
            if (!item.getInteger (PegOffset, pegoffset))
                optionalfields->setPegOffset (INT8_MIN);
            else
                optionalfields->setPegOffset (pegoffset);
            offset += sizeof (int8_t);
            

            uint8_t tradingsession;
            if (!item.getInteger (TradingSession, tradingsession))
                optionalfields->setTradingSession (UINT8_MAX);
            else
                optionalfields->setTradingSession (tradingsession);
            offset += sizeof (uint8_t);
            

            uint8_t undisclosedicebergtype;
            if (!item.getInteger (UndisclosedIcebergType, undisclosedicebergtype))
                optionalfields->setUndisclosedIcebergType (UINT8_MAX);
            else
                optionalfields->setUndisclosedIcebergType (undisclosedicebergtype);
            offset += sizeof (uint8_t);
            

            uint8_t stoptriggeredtimeinforce;
            if (!item.getInteger (StopTriggeredTimeInForce, stoptriggeredtimeinforce))
                optionalfields->setStopTriggeredTimeInForce (UINT8_MAX);
            else
                optionalfields->setStopTriggeredTimeInForce (stoptriggeredtimeinforce);
            offset += sizeof (uint8_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse23 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse23->setNumInGroup (d.getArraySize (ClearingFields));
    gse23->setBlockLength (sizeof (optiqNewOrderClearingFieldsPacket));
    
    if (d.getArraySize (ClearingFields) > 0)
    {
        cdrArray* ClearingFieldsArray = NULL;
        d.getArray (ClearingFields, (const cdrArray**)(&ClearingFieldsArray));
        for (cdrArray::iterator it = ClearingFieldsArray->begin(); it != ClearingFieldsArray->end(); ++it)
        {
            cdr& item = *it;
            optiqNewOrderClearingFieldsPacket* clearingfields = (optiqNewOrderClearingFieldsPacket*) ((char*)buf + offset);

            string clearingfirmid;
            if (!item.getString (ClearingFirmID, clearingfirmid))
            {
                setLastError ("ClearingFirmID missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingfields->setClearingFirmID (clearingfirmid);
            offset += 8;

            string clientid;
            if (!item.getString (ClientID, clientid))
            {
                setLastError ("ClientID missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingfields->setClientID (clientid);
            offset += 8;

            string accountnumber;
            if (!item.getString (AccountNumber, accountnumber))
            {
                setLastError ("AccountNumber missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingfields->setAccountNumber (accountnumber);
            offset += 12;

            uint8_t technicalorigin;
            if (!item.getInteger (TechnicalOrigin, technicalorigin))
                clearingfields->setTechnicalOrigin (UINT8_MAX);
            else
                clearingfields->setTechnicalOrigin (technicalorigin);
            offset += sizeof (uint8_t);
            

            uint16_t openclose;
            if (!item.getInteger (OpenClose, openclose))
                clearingfields->setOpenClose (UINT16_MAX);
            else
                clearingfields->setOpenClose (openclose);
            offset += sizeof (uint16_t);
            

            uint8_t clearinginstruction;
            if (!item.getInteger (ClearingInstruction, clearinginstruction))
                clearingfields->setClearingInstruction (UINT8_MAX);
            else
                clearingfields->setClearingInstruction (clearinginstruction);
            offset += sizeof (uint8_t);
            

            uint8_t accounttypecross;
            if (!item.getInteger (AccountTypeCross, accounttypecross))
                clearingfields->setAccountTypeCross (UINT8_MAX);
            else
                clearingfields->setAccountTypeCross (accounttypecross);
            offset += sizeof (uint8_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse24 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse24->setNumInGroup (d.getArraySize (NotUsedGroup1));
    gse24->setBlockLength (sizeof (optiqNewOrderNotUsedGroup1Packet));
    
    if (d.getArraySize (NotUsedGroup1) > 0)
    {
        cdrArray* NotUsedGroup1Array = NULL;
        d.getArray (NotUsedGroup1, (const cdrArray**)(&NotUsedGroup1Array));
        for (cdrArray::iterator it = NotUsedGroup1Array->begin(); it != NotUsedGroup1Array->end(); ++it)
        {
            cdr& item = *it;
            optiqNewOrderNotUsedGroup1Packet* notusedgroup1 = (optiqNewOrderNotUsedGroup1Packet*) ((char*)buf + offset);

        }
    }
    
    optiqGroupSizeEncodingPacket* gse25 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse25->setNumInGroup (d.getArraySize (NotUsedGroup2));
    gse25->setBlockLength (sizeof (optiqNewOrderNotUsedGroup2Packet));
    
    if (d.getArraySize (NotUsedGroup2) > 0)
    {
        cdrArray* NotUsedGroup2Array = NULL;
        d.getArray (NotUsedGroup2, (const cdrArray**)(&NotUsedGroup2Array));
        for (cdrArray::iterator it = NotUsedGroup2Array->begin(); it != NotUsedGroup2Array->end(); ++it)
        {
            cdr& item = *it;
            optiqNewOrderNotUsedGroup2Packet* notusedgroup2 = (optiqNewOrderNotUsedGroup2Packet*) ((char*)buf + offset);

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqAckPacket* packet = (optiqAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqAckPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
        packet->setSendingTime (UINT64_MAX);
    else
        packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfrommember;
    if (!d.getInteger (OEGINFromMember, oeginfrommember))
        packet->setOEGINFromMember (UINT64_MAX);
    else
        packet->setOEGINFromMember (oeginfrommember);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttimetome;
    if (!d.getInteger (OEGOUTTimeToME, oegouttimetome))
        packet->setOEGOUTTimeToME (UINT64_MAX);
    else
        packet->setOEGOUTTimeToME (oegouttimetome);
    offset += sizeof (uint64_t);
    
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
        packet->setClientOrderID (INT64_MIN);
    else
        packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
        packet->setOrderSide (UINT8_MAX);
    else
        packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    
    uint8_t acktype;
    if (!d.getInteger (AckType, acktype))
    {
        setLastError ("AckType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAckType (acktype);
    offset += sizeof (uint8_t);
    
    uint8_t ackphase;
    if (!d.getInteger (AckPhase, ackphase))
        packet->setAckPhase (UINT8_MAX);
    else
        packet->setAckPhase (ackphase);
    offset += sizeof (uint8_t);
    
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    uint64_t orderpriority;
    if (!d.getInteger (OrderPriority, orderpriority))
        packet->setOrderPriority (UINT64_MAX);
    else
        packet->setOrderPriority (orderpriority);
    offset += sizeof (uint64_t);
    
    
    int64_t orderpx;
    if (!d.getInteger (OrderPx, orderpx))
        packet->setOrderPx (INT64_MIN);
    else
        packet->setOrderPx (orderpx);
    offset += sizeof (int64_t);
    
    
    uint64_t orderqty;
    if (!d.getInteger (OrderQty, orderqty))
        packet->setOrderQty (UINT64_MAX);
    else
        packet->setOrderQty (orderqty);
    offset += sizeof (uint64_t);
    
    
    uint8_t ackqualifiers;
    if (!d.getInteger (AckQualifiers, ackqualifiers))
    {
        setLastError ("AckQualifiers missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAckQualifiers (ackqualifiers);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putFill (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqFillPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqFillPacket* packet = (optiqFillPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqFillPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t tradetime;
    if (!d.getInteger (TradeTime, tradetime))
    {
        setLastError ("TradeTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTradeTime (tradetime);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
        packet->setClientOrderID (INT64_MIN);
    else
        packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
    {
        setLastError ("OrderSide missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    uint8_t tradetype;
    if (!d.getInteger (TradeType, tradetype))
    {
        setLastError ("TradeType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTradeType (tradetype);
    offset += sizeof (uint8_t);
    
    uint8_t tradequalifier;
    if (!d.getInteger (TradeQualifier, tradequalifier))
    {
        setLastError ("TradeQualifier missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTradeQualifier (tradequalifier);
    offset += sizeof (uint8_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
    {
        setLastError ("OrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    int64_t lasttradedpx;
    if (!d.getInteger (LastTradedPx, lasttradedpx))
    {
        setLastError ("LastTradedPx missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastTradedPx (lasttradedpx);
    offset += sizeof (int64_t);
    
    uint64_t lastshares;
    if (!d.getInteger (LastShares, lastshares))
    {
        setLastError ("LastShares missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastShares (lastshares);
    offset += sizeof (uint64_t);
    
    uint64_t leavesqty;
    if (!d.getInteger (LeavesQty, leavesqty))
    {
        setLastError ("LeavesQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLeavesQty (leavesqty);
    offset += sizeof (uint64_t);
    
    uint32_t executionid;
    if (!d.getInteger (ExecutionID, executionid))
    {
        setLastError ("ExecutionID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionID (executionid);
    offset += sizeof (uint32_t);
    
    uint8_t executionphase;
    if (!d.getInteger (ExecutionPhase, executionphase))
    {
        setLastError ("ExecutionPhase missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionPhase (executionphase);
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse19 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse19->setNumInGroup (d.getArraySize (OptionalFieldsFill));
    gse19->setBlockLength (sizeof (optiqFillOptionalFieldsFillPacket));
    
    if (d.getArraySize (OptionalFieldsFill) > 0)
    {
        cdrArray* OptionalFieldsFillArray = NULL;
        d.getArray (OptionalFieldsFill, (const cdrArray**)(&OptionalFieldsFillArray));
        for (cdrArray::iterator it = OptionalFieldsFillArray->begin(); it != OptionalFieldsFillArray->end(); ++it)
        {
            cdr& item = *it;
            optiqFillOptionalFieldsFillPacket* optionalfieldsfill = (optiqFillOptionalFieldsFillPacket*) ((char*)buf + offset);

            string counterpartfirmid;
            if (!item.getString (CounterpartFirmID, counterpartfirmid))
            {
                setLastError ("CounterpartFirmID missing or not string");
                return GW_CODEC_ERROR;
            }
            optionalfieldsfill->setCounterpartFirmID (counterpartfirmid);
            offset += 8;

            int64_t otherleglastpx;
            if (!item.getInteger (OtherLegLastPx, otherleglastpx))
                optionalfieldsfill->setOtherLegLastPx (INT64_MIN);
            else
                optionalfieldsfill->setOtherLegLastPx (otherleglastpx);
            offset += sizeof (int64_t);
            

            string packageid;
            if (!item.getString (PackageID, packageid))
            {
                setLastError ("PackageID missing or not string");
                return GW_CODEC_ERROR;
            }
            optionalfieldsfill->setPackageID (packageid);
            offset += 12;

            uint32_t underlyinginstrumentid;
            if (!item.getInteger (UnderlyingInstrumentID, underlyinginstrumentid))
                optionalfieldsfill->setUnderlyingInstrumentID (UINT32_MAX);
            else
                optionalfieldsfill->setUnderlyingInstrumentID (underlyinginstrumentid);
            offset += sizeof (uint32_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse20 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse20->setNumInGroup (d.getArraySize (StrategyFields));
    gse20->setBlockLength (sizeof (optiqFillStrategyFieldsPacket));
    
    if (d.getArraySize (StrategyFields) > 0)
    {
        cdrArray* StrategyFieldsArray = NULL;
        d.getArray (StrategyFields, (const cdrArray**)(&StrategyFieldsArray));
        for (cdrArray::iterator it = StrategyFieldsArray->begin(); it != StrategyFieldsArray->end(); ++it)
        {
            cdr& item = *it;
            optiqFillStrategyFieldsPacket* strategyfields = (optiqFillStrategyFieldsPacket*) ((char*)buf + offset);

            int64_t leglastpx;
            if (!item.getInteger (LegLastPx, leglastpx))
                strategyfields->setLegLastPx (INT64_MIN);
            else
                strategyfields->setLegLastPx (leglastpx);
            offset += sizeof (int64_t);
            

            uint64_t leglastqty;
            if (!item.getInteger (LegLastQty, leglastqty))
                strategyfields->setLegLastQty (UINT64_MAX);
            else
                strategyfields->setLegLastQty (leglastqty);
            offset += sizeof (uint64_t);
            

            uint32_t leginstrumentid;
            if (!item.getInteger (LegInstrumentID, leginstrumentid))
                strategyfields->setLegInstrumentID (UINT32_MAX);
            else
                strategyfields->setLegInstrumentID (leginstrumentid);
            offset += sizeof (uint32_t);
            

            uint8_t legside;
            if (!item.getInteger (LegSide, legside))
                strategyfields->setLegSide (UINT8_MAX);
            else
                strategyfields->setLegSide (legside);
            offset += sizeof (uint8_t);
            

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putKill (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqKillPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqKillPacket* packet = (optiqKillPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqKillPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
        packet->setSendingTime (UINT64_MAX);
    else
        packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfrommember;
    if (!d.getInteger (OEGINFromMember, oeginfrommember))
        packet->setOEGINFromMember (UINT64_MAX);
    else
        packet->setOEGINFromMember (oeginfrommember);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttimetome;
    if (!d.getInteger (OEGOUTTimeToME, oegouttimetome))
        packet->setOEGOUTTimeToME (UINT64_MAX);
    else
        packet->setOEGOUTTimeToME (oegouttimetome);
    offset += sizeof (uint64_t);
    
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
        packet->setClientOrderID (INT64_MIN);
    else
        packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
    {
        setLastError ("OrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t killreason;
    if (!d.getInteger (KillReason, killreason))
    {
        setLastError ("KillReason missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setKillReason (killreason);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putCancelReplace (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqCancelReplacePacket base;
    memcpy (buf, &base, sizeof(base));

    optiqCancelReplacePacket* packet = (optiqCancelReplacePacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqCancelReplacePacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    
    int64_t orderpx;
    if (!d.getInteger (OrderPx, orderpx))
        packet->setOrderPx (INT64_MIN);
    else
        packet->setOrderPx (orderpx);
    offset += sizeof (int64_t);
    
    
    uint64_t orderqty;
    if (!d.getInteger (OrderQty, orderqty))
    {
        setLastError ("OrderQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderQty (orderqty);
    offset += sizeof (uint64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
    {
        setLastError ("OrderSide missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    uint8_t ordertype;
    if (!d.getInteger (OrderType, ordertype))
    {
        setLastError ("OrderType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderType (ordertype);
    offset += sizeof (uint8_t);
    
    uint8_t timeinforce;
    if (!d.getInteger (TimeInForce, timeinforce))
    {
        setLastError ("TimeInForce missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTimeInForce (timeinforce);
    offset += sizeof (uint8_t);
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
        packet->setAccountType (UINT8_MAX);
    else
        packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    
    uint8_t lprole;
    if (!d.getInteger (LPRole, lprole))
        packet->setLPRole (UINT8_MAX);
    else
        packet->setLPRole (lprole);
    offset += sizeof (uint8_t);
    
    
    uint8_t executioninstruction;
    if (!d.getInteger (ExecutionInstruction, executioninstruction))
    {
        setLastError ("ExecutionInstruction missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionInstruction (executioninstruction);
    offset += sizeof (uint8_t);
    
    uint8_t darkexecutioninstruction;
    if (!d.getInteger (DarkExecutionInstruction, darkexecutioninstruction))
    {
        setLastError ("DarkExecutionInstruction missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDarkExecutionInstruction (darkexecutioninstruction);
    offset += sizeof (uint8_t);
    
    uint8_t mifidindicators;
    if (!d.getInteger (MiFIDIndicators, mifidindicators))
    {
        setLastError ("MiFIDIndicators missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMiFIDIndicators (mifidindicators);
    offset += sizeof (uint8_t);
    
    uint16_t stpid;
    if (!d.getInteger (STPID, stpid))
        packet->setSTPID (UINT16_MAX);
    else
        packet->setSTPID (stpid);
    offset += sizeof (uint16_t);
    
    
    optiqGroupSizeEncodingPacket* gse22 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse22->setNumInGroup (d.getArraySize (FreeTextSection));
    gse22->setBlockLength (sizeof (optiqCancelReplaceFreeTextSectionPacket));
    
    if (d.getArraySize (FreeTextSection) > 0)
    {
        cdrArray* FreeTextSectionArray = NULL;
        d.getArray (FreeTextSection, (const cdrArray**)(&FreeTextSectionArray));
        for (cdrArray::iterator it = FreeTextSectionArray->begin(); it != FreeTextSectionArray->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelReplaceFreeTextSectionPacket* freetextsection = (optiqCancelReplaceFreeTextSectionPacket*) ((char*)buf + offset);

            string freetext;
            if (!item.getString (FreeText, freetext))
            {
                setLastError ("FreeText missing or not string");
                return GW_CODEC_ERROR;
            }
            freetextsection->setFreeText (freetext);
            offset += 18;

        }
    }
    
    optiqGroupSizeEncodingPacket* gse23 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse23->setNumInGroup (d.getArraySize (OptionalFields));
    gse23->setBlockLength (sizeof (optiqCancelReplaceOptionalFieldsPacket));
    
    if (d.getArraySize (OptionalFields) > 0)
    {
        cdrArray* OptionalFieldsArray = NULL;
        d.getArray (OptionalFields, (const cdrArray**)(&OptionalFieldsArray));
        for (cdrArray::iterator it = OptionalFieldsArray->begin(); it != OptionalFieldsArray->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelReplaceOptionalFieldsPacket* optionalfields = (optiqCancelReplaceOptionalFieldsPacket*) ((char*)buf + offset);

            int64_t stoppx;
            if (!item.getInteger (StopPx, stoppx))
                optionalfields->setStopPx (INT64_MIN);
            else
                optionalfields->setStopPx (stoppx);
            offset += sizeof (int64_t);
            

            int8_t pegoffset;
            if (!item.getInteger (PegOffset, pegoffset))
                optionalfields->setPegOffset (INT8_MIN);
            else
                optionalfields->setPegOffset (pegoffset);
            offset += sizeof (int8_t);
            

            int64_t undisclosedprice;
            if (!item.getInteger (UndisclosedPrice, undisclosedprice))
                optionalfields->setUndisclosedPrice (INT64_MIN);
            else
                optionalfields->setUndisclosedPrice (undisclosedprice);
            offset += sizeof (int64_t);
            

            uint64_t disclosedqty;
            if (!item.getInteger (DisclosedQty, disclosedqty))
                optionalfields->setDisclosedQty (UINT64_MAX);
            else
                optionalfields->setDisclosedQty (disclosedqty);
            offset += sizeof (uint64_t);
            

            uint32_t orderexpirationtime;
            if (!item.getInteger (OrderExpirationTime, orderexpirationtime))
                optionalfields->setOrderExpirationTime (UINT32_MAX);
            else
                optionalfields->setOrderExpirationTime (orderexpirationtime);
            offset += sizeof (uint32_t);
            

            uint16_t orderexpirationdate;
            if (!item.getInteger (OrderExpirationDate, orderexpirationdate))
                optionalfields->setOrderExpirationDate (UINT16_MAX);
            else
                optionalfields->setOrderExpirationDate (orderexpirationdate);
            offset += sizeof (uint16_t);
            

            uint8_t tradingsession;
            if (!item.getInteger (TradingSession, tradingsession))
                optionalfields->setTradingSession (UINT8_MAX);
            else
                optionalfields->setTradingSession (tradingsession);
            offset += sizeof (uint8_t);
            

            uint8_t stoptriggeredtimeinforce;
            if (!item.getInteger (StopTriggeredTimeInForce, stoptriggeredtimeinforce))
                optionalfields->setStopTriggeredTimeInForce (UINT8_MAX);
            else
                optionalfields->setStopTriggeredTimeInForce (stoptriggeredtimeinforce);
            offset += sizeof (uint8_t);
            

            uint8_t undisclosedicebergtype;
            if (!item.getInteger (UndisclosedIcebergType, undisclosedicebergtype))
                optionalfields->setUndisclosedIcebergType (UINT8_MAX);
            else
                optionalfields->setUndisclosedIcebergType (undisclosedicebergtype);
            offset += sizeof (uint8_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse24 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse24->setNumInGroup (d.getArraySize (ClearingFields));
    gse24->setBlockLength (sizeof (optiqCancelReplaceClearingFieldsPacket));
    
    if (d.getArraySize (ClearingFields) > 0)
    {
        cdrArray* ClearingFieldsArray = NULL;
        d.getArray (ClearingFields, (const cdrArray**)(&ClearingFieldsArray));
        for (cdrArray::iterator it = ClearingFieldsArray->begin(); it != ClearingFieldsArray->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelReplaceClearingFieldsPacket* clearingfields = (optiqCancelReplaceClearingFieldsPacket*) ((char*)buf + offset);

            string clearingfirmid;
            if (!item.getString (ClearingFirmID, clearingfirmid))
            {
                setLastError ("ClearingFirmID missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingfields->setClearingFirmID (clearingfirmid);
            offset += 8;

            string clientid;
            if (!item.getString (ClientID, clientid))
            {
                setLastError ("ClientID missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingfields->setClientID (clientid);
            offset += 8;

            string accountnumber;
            if (!item.getString (AccountNumber, accountnumber))
            {
                setLastError ("AccountNumber missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingfields->setAccountNumber (accountnumber);
            offset += 12;

            uint8_t technicalorigin;
            if (!item.getInteger (TechnicalOrigin, technicalorigin))
                clearingfields->setTechnicalOrigin (UINT8_MAX);
            else
                clearingfields->setTechnicalOrigin (technicalorigin);
            offset += sizeof (uint8_t);
            

            uint16_t openclose;
            if (!item.getInteger (OpenClose, openclose))
                clearingfields->setOpenClose (UINT16_MAX);
            else
                clearingfields->setOpenClose (openclose);
            offset += sizeof (uint16_t);
            

            uint8_t clearinginstruction;
            if (!item.getInteger (ClearingInstruction, clearinginstruction))
                clearingfields->setClearingInstruction (UINT8_MAX);
            else
                clearingfields->setClearingInstruction (clearinginstruction);
            offset += sizeof (uint8_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse25 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse25->setNumInGroup (d.getArraySize (NotUsedGroup1));
    gse25->setBlockLength (sizeof (optiqCancelReplaceNotUsedGroup1Packet));
    
    if (d.getArraySize (NotUsedGroup1) > 0)
    {
        cdrArray* NotUsedGroup1Array = NULL;
        d.getArray (NotUsedGroup1, (const cdrArray**)(&NotUsedGroup1Array));
        for (cdrArray::iterator it = NotUsedGroup1Array->begin(); it != NotUsedGroup1Array->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelReplaceNotUsedGroup1Packet* notusedgroup1 = (optiqCancelReplaceNotUsedGroup1Packet*) ((char*)buf + offset);

        }
    }
    
    optiqGroupSizeEncodingPacket* gse26 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse26->setNumInGroup (d.getArraySize (NotUsedGroup2));
    gse26->setBlockLength (sizeof (optiqCancelReplaceNotUsedGroup2Packet));
    
    if (d.getArraySize (NotUsedGroup2) > 0)
    {
        cdrArray* NotUsedGroup2Array = NULL;
        d.getArray (NotUsedGroup2, (const cdrArray**)(&NotUsedGroup2Array));
        for (cdrArray::iterator it = NotUsedGroup2Array->begin(); it != NotUsedGroup2Array->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelReplaceNotUsedGroup2Packet* notusedgroup2 = (optiqCancelReplaceNotUsedGroup2Packet*) ((char*)buf + offset);

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putReject (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqRejectPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqRejectPacket* packet = (optiqRejectPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqRejectPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
        packet->setSendingTime (UINT64_MAX);
    else
        packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfrommember;
    if (!d.getInteger (OEGINFromMember, oeginfrommember))
        packet->setOEGINFromMember (UINT64_MAX);
    else
        packet->setOEGINFromMember (oeginfrommember);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttimetome;
    if (!d.getInteger (OEGOUTTimeToME, oegouttimetome))
        packet->setOEGOUTTimeToME (UINT64_MAX);
    else
        packet->setOEGOUTTimeToME (oegouttimetome);
    offset += sizeof (uint64_t);
    
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
        packet->setBookIn (UINT64_MAX);
    else
        packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
        packet->setClientOrderID (INT64_MIN);
    else
        packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
        packet->setSymbolIndex (UINT32_MAX);
    else
        packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
        packet->setEMM (UINT8_MAX);
    else
        packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    
    uint8_t rejectedmessage;
    if (!d.getInteger (RejectedMessage, rejectedmessage))
        packet->setRejectedMessage (UINT8_MAX);
    else
        packet->setRejectedMessage (rejectedmessage);
    offset += sizeof (uint8_t);
    
    
    uint16_t errorcode;
    if (!d.getInteger (ErrorCode, errorcode))
    {
        setLastError ("ErrorCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setErrorCode (errorcode);
    offset += sizeof (uint16_t);
    
    uint16_t rejectedmessageid;
    if (!d.getInteger (RejectedMessageID, rejectedmessageid))
        packet->setRejectedMessageID (UINT16_MAX);
    else
        packet->setRejectedMessageID (rejectedmessageid);
    offset += sizeof (uint16_t);
    
    
    optiqGroupSizeEncodingPacket* gse17 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse17->setNumInGroup (d.getArraySize (CollarFields));
    gse17->setBlockLength (sizeof (optiqRejectCollarFieldsPacket));
    
    if (d.getArraySize (CollarFields) > 0)
    {
        cdrArray* CollarFieldsArray = NULL;
        d.getArray (CollarFields, (const cdrArray**)(&CollarFieldsArray));
        for (cdrArray::iterator it = CollarFieldsArray->begin(); it != CollarFieldsArray->end(); ++it)
        {
            cdr& item = *it;
            optiqRejectCollarFieldsPacket* collarfields = (optiqRejectCollarFieldsPacket*) ((char*)buf + offset);

            uint8_t collarrejtype;
            if (!item.getInteger (CollarRejType, collarrejtype))
                collarfields->setCollarRejType (UINT8_MAX);
            else
                collarfields->setCollarRejType (collarrejtype);
            offset += sizeof (uint8_t);
            

            int64_t breachedcollarprice;
            if (!item.getInteger (BreachedCollarPrice, breachedcollarprice))
                collarfields->setBreachedCollarPrice (INT64_MIN);
            else
                collarfields->setBreachedCollarPrice (breachedcollarprice);
            offset += sizeof (int64_t);
            

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putQuotes (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqQuotesPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqQuotesPacket* packet = (optiqQuotesPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqQuotesPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    uint8_t tradingcapacity;
    if (!d.getInteger (TradingCapacity, tradingcapacity))
    {
        setLastError ("TradingCapacity missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTradingCapacity (tradingcapacity);
    offset += sizeof (uint8_t);
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
    {
        setLastError ("AccountType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    uint8_t lprole;
    if (!d.getInteger (LPRole, lprole))
    {
        setLastError ("LPRole missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLPRole (lprole);
    offset += sizeof (uint8_t);
    
    uint8_t mifidindicators;
    if (!d.getInteger (MiFIDIndicators, mifidindicators))
    {
        setLastError ("MiFIDIndicators missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMiFIDIndicators (mifidindicators);
    offset += sizeof (uint8_t);
    
    uint8_t rfeanswer;
    if (!d.getInteger (RFEAnswer, rfeanswer))
    {
        setLastError ("RFEAnswer missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setRFEAnswer (rfeanswer);
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse11 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse11->setNumInGroup (d.getArraySize (MiFIDShortcodes));
    gse11->setBlockLength (sizeof (optiqQuotesMiFIDShortcodesPacket));
    
    if (d.getArraySize (MiFIDShortcodes) > 0)
    {
        cdrArray* MiFIDShortcodesArray = NULL;
        d.getArray (MiFIDShortcodes, (const cdrArray**)(&MiFIDShortcodesArray));
        for (cdrArray::iterator it = MiFIDShortcodesArray->begin(); it != MiFIDShortcodesArray->end(); ++it)
        {
            cdr& item = *it;
            optiqQuotesMiFIDShortcodesPacket* mifidshortcodes = (optiqQuotesMiFIDShortcodesPacket*) ((char*)buf + offset);

            int32_t investmentdecisionwfirmshortcode;
            if (!item.getInteger (InvestmentDecisionWFirmShortCode, investmentdecisionwfirmshortcode))
                mifidshortcodes->setInvestmentDecisionWFirmShortCode (INT32_MIN);
            else
                mifidshortcodes->setInvestmentDecisionWFirmShortCode (investmentdecisionwfirmshortcode);
            offset += sizeof (int32_t);
            

            int32_t nonexecutingbrokershortcode;
            if (!item.getInteger (NonExecutingBrokerShortCode, nonexecutingbrokershortcode))
                mifidshortcodes->setNonExecutingBrokerShortCode (INT32_MIN);
            else
                mifidshortcodes->setNonExecutingBrokerShortCode (nonexecutingbrokershortcode);
            offset += sizeof (int32_t);
            

            int32_t clientidentificationshortcode;
            if (!item.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
                mifidshortcodes->setClientIdentificationShortcode (INT32_MIN);
            else
                mifidshortcodes->setClientIdentificationShortcode (clientidentificationshortcode);
            offset += sizeof (int32_t);
            

        }
    }
    
    optiqGroupSizeEncodingPacket* gse12 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse12->setNumInGroup (d.getArraySize (ClearingDataset));
    gse12->setBlockLength (sizeof (optiqQuotesClearingDatasetPacket));
    
    if (d.getArraySize (ClearingDataset) > 0)
    {
        cdrArray* ClearingDatasetArray = NULL;
        d.getArray (ClearingDataset, (const cdrArray**)(&ClearingDatasetArray));
        for (cdrArray::iterator it = ClearingDatasetArray->begin(); it != ClearingDatasetArray->end(); ++it)
        {
            cdr& item = *it;
            optiqQuotesClearingDatasetPacket* clearingdataset = (optiqQuotesClearingDatasetPacket*) ((char*)buf + offset);

            string clearingfirmid;
            if (!item.getString (ClearingFirmID, clearingfirmid))
            {
                setLastError ("ClearingFirmID missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingdataset->setClearingFirmID (clearingfirmid);
            offset += 8;

            string clientid;
            if (!item.getString (ClientID, clientid))
            {
                setLastError ("ClientID missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingdataset->setClientID (clientid);
            offset += 8;

            string accountnumber;
            if (!item.getString (AccountNumber, accountnumber))
            {
                setLastError ("AccountNumber missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingdataset->setAccountNumber (accountnumber);
            offset += 12;

            uint8_t technicalorigin;
            if (!item.getInteger (TechnicalOrigin, technicalorigin))
                clearingdataset->setTechnicalOrigin (UINT8_MAX);
            else
                clearingdataset->setTechnicalOrigin (technicalorigin);
            offset += sizeof (uint8_t);
            

            uint16_t openclose;
            if (!item.getInteger (OpenClose, openclose))
                clearingdataset->setOpenClose (UINT16_MAX);
            else
                clearingdataset->setOpenClose (openclose);
            offset += sizeof (uint16_t);
            

            uint8_t clearinginstruction;
            if (!item.getInteger (ClearingInstruction, clearinginstruction))
                clearingdataset->setClearingInstruction (UINT8_MAX);
            else
                clearingdataset->setClearingInstruction (clearinginstruction);
            offset += sizeof (uint8_t);
            

            string freetext;
            if (!item.getString (FreeText, freetext))
            {
                setLastError ("FreeText missing or not string");
                return GW_CODEC_ERROR;
            }
            clearingdataset->setFreeText (freetext);
            offset += 18;

        }
    }
    
    optiqGroupSizeEncodingPacket* gse13 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse13->setNumInGroup (d.getArraySize (QuotesRep));
    gse13->setBlockLength (sizeof (optiqQuotesQuotesRepPacket));
    
    if (d.getArraySize (QuotesRep) > 0)
    {
        cdrArray* QuotesRepArray = NULL;
        d.getArray (QuotesRep, (const cdrArray**)(&QuotesRepArray));
        for (cdrArray::iterator it = QuotesRepArray->begin(); it != QuotesRepArray->end(); ++it)
        {
            cdr& item = *it;
            optiqQuotesQuotesRepPacket* quotesrep = (optiqQuotesQuotesRepPacket*) ((char*)buf + offset);

            uint64_t bidsize;
            if (!item.getInteger (BidSize, bidsize))
                quotesrep->setBidSize (UINT64_MAX);
            else
                quotesrep->setBidSize (bidsize);
            offset += sizeof (uint64_t);
            

            int64_t bidpx;
            if (!item.getInteger (BidPx, bidpx))
                quotesrep->setBidPx (INT64_MIN);
            else
                quotesrep->setBidPx (bidpx);
            offset += sizeof (int64_t);
            

            uint64_t offersize;
            if (!item.getInteger (OfferSize, offersize))
                quotesrep->setOfferSize (UINT64_MAX);
            else
                quotesrep->setOfferSize (offersize);
            offset += sizeof (uint64_t);
            

            int64_t offerpx;
            if (!item.getInteger (OfferPx, offerpx))
                quotesrep->setOfferPx (INT64_MIN);
            else
                quotesrep->setOfferPx (offerpx);
            offset += sizeof (int64_t);
            

            uint32_t symbolindex;
            if (!item.getInteger (SymbolIndex, symbolindex))
            {
                setLastError ("SymbolIndex missing or not integer");
                return GW_CODEC_ERROR;
            }
            quotesrep->setSymbolIndex (symbolindex);
            offset += sizeof (uint32_t);

            uint8_t emm;
            if (!item.getInteger (EMM, emm))
            {
                setLastError ("EMM missing or not integer");
                return GW_CODEC_ERROR;
            }
            quotesrep->setEMM (emm);
            offset += sizeof (uint8_t);

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putQuoteAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqQuoteAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqQuoteAckPacket* packet = (optiqQuoteAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqQuoteAckPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
        packet->setSendingTime (UINT64_MAX);
    else
        packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfrommember;
    if (!d.getInteger (OEGINFromMember, oeginfrommember))
        packet->setOEGINFromMember (UINT64_MAX);
    else
        packet->setOEGINFromMember (oeginfrommember);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttimetome;
    if (!d.getInteger (OEGOUTTimeToME, oegouttimetome))
        packet->setOEGOUTTimeToME (UINT64_MAX);
    else
        packet->setOEGOUTTimeToME (oegouttimetome);
    offset += sizeof (uint64_t);
    
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
    {
        setLastError ("AccountType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    uint8_t lprole;
    if (!d.getInteger (LPRole, lprole))
    {
        setLastError ("LPRole missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLPRole (lprole);
    offset += sizeof (uint8_t);
    
    optiqGroupSizeEncodingPacket* gse13 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse13->setNumInGroup (d.getArraySize (QuoteAcks));
    gse13->setBlockLength (sizeof (optiqQuoteAckQuoteAcksPacket));
    
    if (d.getArraySize (QuoteAcks) > 0)
    {
        cdrArray* QuoteAcksArray = NULL;
        d.getArray (QuoteAcks, (const cdrArray**)(&QuoteAcksArray));
        for (cdrArray::iterator it = QuoteAcksArray->begin(); it != QuoteAcksArray->end(); ++it)
        {
            cdr& item = *it;
            optiqQuoteAckQuoteAcksPacket* quoteacks = (optiqQuoteAckQuoteAcksPacket*) ((char*)buf + offset);

            uint64_t bidorderid;
            if (!item.getInteger (BidOrderID, bidorderid))
                quoteacks->setBidOrderID (UINT64_MAX);
            else
                quoteacks->setBidOrderID (bidorderid);
            offset += sizeof (uint64_t);
            

            uint64_t offerorderid;
            if (!item.getInteger (OfferOrderID, offerorderid))
                quoteacks->setOfferOrderID (UINT64_MAX);
            else
                quoteacks->setOfferOrderID (offerorderid);
            offset += sizeof (uint64_t);
            

            uint32_t symbolindex;
            if (!item.getInteger (SymbolIndex, symbolindex))
            {
                setLastError ("SymbolIndex missing or not integer");
                return GW_CODEC_ERROR;
            }
            quoteacks->setSymbolIndex (symbolindex);
            offset += sizeof (uint32_t);

            uint8_t emm;
            if (!item.getInteger (EMM, emm))
            {
                setLastError ("EMM missing or not integer");
                return GW_CODEC_ERROR;
            }
            quoteacks->setEMM (emm);
            offset += sizeof (uint8_t);

            uint8_t buyrevisionflag;
            if (!item.getInteger (BuyRevisionFlag, buyrevisionflag))
                quoteacks->setBuyRevisionFlag (UINT8_MAX);
            else
                quoteacks->setBuyRevisionFlag (buyrevisionflag);
            offset += sizeof (uint8_t);
            

            uint8_t sellrevisionflag;
            if (!item.getInteger (SellRevisionFlag, sellrevisionflag))
                quoteacks->setSellRevisionFlag (UINT8_MAX);
            else
                quoteacks->setSellRevisionFlag (sellrevisionflag);
            offset += sizeof (uint8_t);
            

            uint16_t biderrorcode;
            if (!item.getInteger (BidErrorCode, biderrorcode))
                quoteacks->setBidErrorCode (UINT16_MAX);
            else
                quoteacks->setBidErrorCode (biderrorcode);
            offset += sizeof (uint16_t);
            

            uint16_t offererrorcode;
            if (!item.getInteger (OfferErrorCode, offererrorcode))
                quoteacks->setOfferErrorCode (UINT16_MAX);
            else
                quoteacks->setOfferErrorCode (offererrorcode);
            offset += sizeof (uint16_t);
            

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putQuoteRequest (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqQuoteRequestPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqQuoteRequestPacket* packet = (optiqQuoteRequestPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqQuoteRequestPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint64_t orderqty;
    if (!d.getInteger (OrderQty, orderqty))
    {
        setLastError ("OrderQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderQty (orderqty);
    offset += sizeof (uint64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
        packet->setOrderSide (UINT8_MAX);
    else
        packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    
    uint8_t firmidpublication;
    if (!d.getInteger (FirmIDPublication, firmidpublication))
        packet->setFirmIDPublication (UINT8_MAX);
    else
        packet->setFirmIDPublication (firmidpublication);
    offset += sizeof (uint8_t);
    
    
    string endclient;
    if (!d.getString (EndClient, endclient))
    {
        setLastError ("EndClient missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setEndClient (endclient);
    offset += 11;
    
    uint8_t darkexecutioninstruction;
    if (!d.getInteger (DarkExecutionInstruction, darkexecutioninstruction))
    {
        setLastError ("DarkExecutionInstruction missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDarkExecutionInstruction (darkexecutioninstruction);
    offset += sizeof (uint8_t);
    
    uint64_t minorderqty;
    if (!d.getInteger (MinOrderQty, minorderqty))
        packet->setMinOrderQty (UINT64_MAX);
    else
        packet->setMinOrderQty (minorderqty);
    offset += sizeof (uint64_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putCancelRequest (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqCancelRequestPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqCancelRequestPacket* packet = (optiqCancelRequestPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqCancelRequestPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
    {
        setLastError ("OrderSide missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    uint8_t ordertype;
    if (!d.getInteger (OrderType, ordertype))
    {
        setLastError ("OrderType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderType (ordertype);
    offset += sizeof (uint8_t);
    
    uint8_t ordercategory;
    if (!d.getInteger (OrderCategory, ordercategory))
        packet->setOrderCategory (UINT8_MAX);
    else
        packet->setOrderCategory (ordercategory);
    offset += sizeof (uint8_t);
    
    
    optiqGroupSizeEncodingPacket* gse14 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse14->setNumInGroup (d.getArraySize (NotUsedGroup1));
    gse14->setBlockLength (sizeof (optiqCancelRequestNotUsedGroup1Packet));
    
    if (d.getArraySize (NotUsedGroup1) > 0)
    {
        cdrArray* NotUsedGroup1Array = NULL;
        d.getArray (NotUsedGroup1, (const cdrArray**)(&NotUsedGroup1Array));
        for (cdrArray::iterator it = NotUsedGroup1Array->begin(); it != NotUsedGroup1Array->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelRequestNotUsedGroup1Packet* notusedgroup1 = (optiqCancelRequestNotUsedGroup1Packet*) ((char*)buf + offset);

        }
    }
    
    optiqGroupSizeEncodingPacket* gse15 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse15->setNumInGroup (d.getArraySize (NotUsedGroup2));
    gse15->setBlockLength (sizeof (optiqCancelRequestNotUsedGroup2Packet));
    
    if (d.getArraySize (NotUsedGroup2) > 0)
    {
        cdrArray* NotUsedGroup2Array = NULL;
        d.getArray (NotUsedGroup2, (const cdrArray**)(&NotUsedGroup2Array));
        for (cdrArray::iterator it = NotUsedGroup2Array->begin(); it != NotUsedGroup2Array->end(); ++it)
        {
            cdr& item = *it;
            optiqCancelRequestNotUsedGroup2Packet* notusedgroup2 = (optiqCancelRequestNotUsedGroup2Packet*) ((char*)buf + offset);

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putMassCancel (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqMassCancelPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqMassCancelPacket* packet = (optiqMassCancelPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqMassCancelPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
        packet->setSymbolIndex (UINT32_MAX);
    else
        packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
        packet->setEMM (UINT8_MAX);
    else
        packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    
    string instrumentgroupcode;
    if (!d.getString (InstrumentGroupCode, instrumentgroupcode))
    {
        setLastError ("InstrumentGroupCode missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setInstrumentGroupCode (instrumentgroupcode);
    offset += 2;
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
        packet->setOrderSide (UINT8_MAX);
    else
        packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    
    uint32_t logicalaccessid;
    if (!d.getInteger (LogicalAccessID, logicalaccessid))
        packet->setLogicalAccessID (UINT32_MAX);
    else
        packet->setLogicalAccessID (logicalaccessid);
    offset += sizeof (uint32_t);
    
    
    uint16_t oepartitionid;
    if (!d.getInteger (OEPartitionID, oepartitionid))
        packet->setOEPartitionID (UINT16_MAX);
    else
        packet->setOEPartitionID (oepartitionid);
    offset += sizeof (uint16_t);
    
    
    uint32_t contractid;
    if (!d.getInteger (ContractID, contractid))
        packet->setContractID (UINT32_MAX);
    else
        packet->setContractID (contractid);
    offset += sizeof (uint32_t);
    
    
    string maturity;
    if (!d.getString (Maturity, maturity))
    {
        setLastError ("Maturity missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setMaturity (maturity);
    offset += 8;
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
        packet->setAccountType (UINT8_MAX);
    else
        packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    
    uint8_t optiontype;
    if (!d.getInteger (OptionType, optiontype))
        packet->setOptionType (UINT8_MAX);
    else
        packet->setOptionType (optiontype);
    offset += sizeof (uint8_t);
    
    
    uint8_t ordercategory;
    if (!d.getInteger (OrderCategory, ordercategory))
        packet->setOrderCategory (UINT8_MAX);
    else
        packet->setOrderCategory (ordercategory);
    offset += sizeof (uint8_t);
    
    
    optiqGroupSizeEncodingPacket* gse18 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse18->setNumInGroup (d.getArraySize (NotUsedGroup1));
    gse18->setBlockLength (sizeof (optiqMassCancelNotUsedGroup1Packet));
    
    if (d.getArraySize (NotUsedGroup1) > 0)
    {
        cdrArray* NotUsedGroup1Array = NULL;
        d.getArray (NotUsedGroup1, (const cdrArray**)(&NotUsedGroup1Array));
        for (cdrArray::iterator it = NotUsedGroup1Array->begin(); it != NotUsedGroup1Array->end(); ++it)
        {
            cdr& item = *it;
            optiqMassCancelNotUsedGroup1Packet* notusedgroup1 = (optiqMassCancelNotUsedGroup1Packet*) ((char*)buf + offset);

        }
    }
    
    optiqGroupSizeEncodingPacket* gse19 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse19->setNumInGroup (d.getArraySize (NotUsedGroup2));
    gse19->setBlockLength (sizeof (optiqMassCancelNotUsedGroup2Packet));
    
    if (d.getArraySize (NotUsedGroup2) > 0)
    {
        cdrArray* NotUsedGroup2Array = NULL;
        d.getArray (NotUsedGroup2, (const cdrArray**)(&NotUsedGroup2Array));
        for (cdrArray::iterator it = NotUsedGroup2Array->begin(); it != NotUsedGroup2Array->end(); ++it)
        {
            cdr& item = *it;
            optiqMassCancelNotUsedGroup2Packet* notusedgroup2 = (optiqMassCancelNotUsedGroup2Packet*) ((char*)buf + offset);

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putMassCancelAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqMassCancelAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqMassCancelAckPacket* packet = (optiqMassCancelAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqMassCancelAckPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
        packet->setSendingTime (UINT64_MAX);
    else
        packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfrommember;
    if (!d.getInteger (OEGINFromMember, oeginfrommember))
        packet->setOEGINFromMember (UINT64_MAX);
    else
        packet->setOEGINFromMember (oeginfrommember);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttimetome;
    if (!d.getInteger (OEGOUTTimeToME, oegouttimetome))
        packet->setOEGOUTTimeToME (UINT64_MAX);
    else
        packet->setOEGOUTTimeToME (oegouttimetome);
    offset += sizeof (uint64_t);
    
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
    {
        setLastError ("BookOUTTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
    {
        setLastError ("OEGINFromME missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
    {
        setLastError ("OEGOUTToMember missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    int32_t totalaffectedorders;
    if (!d.getInteger (TotalAffectedOrders, totalaffectedorders))
    {
        setLastError ("TotalAffectedOrders missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTotalAffectedOrders (totalaffectedorders);
    offset += sizeof (int32_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
        packet->setSymbolIndex (UINT32_MAX);
    else
        packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
        packet->setEMM (UINT8_MAX);
    else
        packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    
    string instrumentgroupcode;
    if (!d.getString (InstrumentGroupCode, instrumentgroupcode))
    {
        setLastError ("InstrumentGroupCode missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setInstrumentGroupCode (instrumentgroupcode);
    offset += 2;
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
        packet->setOrderSide (UINT8_MAX);
    else
        packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    
    uint32_t logicalaccessid;
    if (!d.getInteger (LogicalAccessID, logicalaccessid))
        packet->setLogicalAccessID (UINT32_MAX);
    else
        packet->setLogicalAccessID (logicalaccessid);
    offset += sizeof (uint32_t);
    
    
    uint16_t oepartitionid;
    if (!d.getInteger (OEPartitionID, oepartitionid))
        packet->setOEPartitionID (UINT16_MAX);
    else
        packet->setOEPartitionID (oepartitionid);
    offset += sizeof (uint16_t);
    
    
    uint32_t contractid;
    if (!d.getInteger (ContractID, contractid))
        packet->setContractID (UINT32_MAX);
    else
        packet->setContractID (contractid);
    offset += sizeof (uint32_t);
    
    
    string maturity;
    if (!d.getString (Maturity, maturity))
    {
        setLastError ("Maturity missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setMaturity (maturity);
    offset += 8;
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
        packet->setAccountType (UINT8_MAX);
    else
        packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    
    uint8_t optiontype;
    if (!d.getInteger (OptionType, optiontype))
        packet->setOptionType (UINT8_MAX);
    else
        packet->setOptionType (optiontype);
    offset += sizeof (uint8_t);
    
    
    uint8_t ordercategory;
    if (!d.getInteger (OrderCategory, ordercategory))
        packet->setOrderCategory (UINT8_MAX);
    else
        packet->setOrderCategory (ordercategory);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putOpenOrderRequest (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqOpenOrderRequestPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqOpenOrderRequestPacket* packet = (optiqOpenOrderRequestPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqOpenOrderRequestPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t ordercategory;
    if (!d.getInteger (OrderCategory, ordercategory))
        packet->setOrderCategory (UINT8_MAX);
    else
        packet->setOrderCategory (ordercategory);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putOwnershipRequestAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqOwnershipRequestAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqOwnershipRequestAckPacket* packet = (optiqOwnershipRequestAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqOwnershipRequestAckPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint32_t logicalaccessid;
    if (!d.getInteger (LogicalAccessID, logicalaccessid))
        packet->setLogicalAccessID (UINT32_MAX);
    else
        packet->setLogicalAccessID (logicalaccessid);
    offset += sizeof (uint32_t);
    
    
    uint16_t oepartitionid;
    if (!d.getInteger (OEPartitionID, oepartitionid))
        packet->setOEPartitionID (UINT16_MAX);
    else
        packet->setOEPartitionID (oepartitionid);
    offset += sizeof (uint16_t);
    
    
    int32_t totalaffectedorders;
    if (!d.getInteger (TotalAffectedOrders, totalaffectedorders))
    {
        setLastError ("TotalAffectedOrders missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTotalAffectedOrders (totalaffectedorders);
    offset += sizeof (int32_t);
    
    uint8_t ordercategory;
    if (!d.getInteger (OrderCategory, ordercategory))
        packet->setOrderCategory (UINT8_MAX);
    else
        packet->setOrderCategory (ordercategory);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putOwnershipRequest (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqOwnershipRequestPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqOwnershipRequestPacket* packet = (optiqOwnershipRequestPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqOwnershipRequestPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint32_t logicalaccessid;
    if (!d.getInteger (LogicalAccessID, logicalaccessid))
        packet->setLogicalAccessID (UINT32_MAX);
    else
        packet->setLogicalAccessID (logicalaccessid);
    offset += sizeof (uint32_t);
    
    
    uint16_t oepartitionid;
    if (!d.getInteger (OEPartitionID, oepartitionid))
        packet->setOEPartitionID (UINT16_MAX);
    else
        packet->setOEPartitionID (oepartitionid);
    offset += sizeof (uint16_t);
    
    
    uint8_t ordercategory;
    if (!d.getInteger (OrderCategory, ordercategory))
        packet->setOrderCategory (UINT8_MAX);
    else
        packet->setOrderCategory (ordercategory);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putTradeBustNotification (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqTradeBustNotificationPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqTradeBustNotificationPacket* packet = (optiqTradeBustNotificationPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqTradeBustNotificationPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint32_t executionid;
    if (!d.getInteger (ExecutionID, executionid))
    {
        setLastError ("ExecutionID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionID (executionid);
    offset += sizeof (uint32_t);
    
    int64_t lasttradedpx;
    if (!d.getInteger (LastTradedPx, lasttradedpx))
    {
        setLastError ("LastTradedPx missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastTradedPx (lasttradedpx);
    offset += sizeof (int64_t);
    
    uint64_t lastshares;
    if (!d.getInteger (LastShares, lastshares))
    {
        setLastError ("LastShares missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastShares (lastshares);
    offset += sizeof (uint64_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putCollarBreachConfirmation (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqCollarBreachConfirmationPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqCollarBreachConfirmationPacket* packet = (optiqCollarBreachConfirmationPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqCollarBreachConfirmationPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint64_t orderid;
    if (!d.getInteger (OrderID, orderid))
        packet->setOrderID (UINT64_MAX);
    else
        packet->setOrderID (orderid);
    offset += sizeof (uint64_t);
    
    
    int64_t origclientorderid;
    if (!d.getInteger (OrigClientOrderID, origclientorderid))
        packet->setOrigClientOrderID (INT64_MIN);
    else
        packet->setOrigClientOrderID (origclientorderid);
    offset += sizeof (int64_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putPriceInput (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqPriceInputPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqPriceInputPacket* packet = (optiqPriceInputPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqPriceInputPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t inputpricetype;
    if (!d.getInteger (InputPriceType, inputpricetype))
    {
        setLastError ("InputPriceType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setInputPriceType (inputpricetype);
    offset += sizeof (uint8_t);
    
    int64_t price;
    if (!d.getInteger (Price, price))
        packet->setPrice (INT64_MIN);
    else
        packet->setPrice (price);
    offset += sizeof (int64_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putLiquidityProviderCommand (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqLiquidityProviderCommandPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqLiquidityProviderCommandPacket* packet = (optiqLiquidityProviderCommandPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqLiquidityProviderCommandPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t lpactioncode;
    if (!d.getInteger (LPActionCode, lpactioncode))
    {
        setLastError ("LPActionCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLPActionCode (lpactioncode);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putAskForQuote (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqAskForQuotePacket base;
    memcpy (buf, &base, sizeof(base));

    optiqAskForQuotePacket* packet = (optiqAskForQuotePacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqAskForQuotePacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t afqreason;
    if (!d.getInteger (AFQReason, afqreason))
    {
        setLastError ("AFQReason missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAFQReason (afqreason);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putRequestForExecution (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqRequestForExecutionPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqRequestForExecutionPacket* packet = (optiqRequestForExecutionPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqRequestForExecutionPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putRFQNotification (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqRFQNotificationPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqRFQNotificationPacket* packet = (optiqRFQNotificationPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqRFQNotificationPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint64_t quotereqid;
    if (!d.getInteger (QuoteReqID, quotereqid))
    {
        setLastError ("QuoteReqID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setQuoteReqID (quotereqid);
    offset += sizeof (uint64_t);
    
    uint64_t orderqty;
    if (!d.getInteger (OrderQty, orderqty))
    {
        setLastError ("OrderQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderQty (orderqty);
    offset += sizeof (uint64_t);
    
    string counterpartfirmid;
    if (!d.getString (CounterpartFirmID, counterpartfirmid))
    {
        setLastError ("CounterpartFirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setCounterpartFirmID (counterpartfirmid);
    offset += 8;
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t rfqupdatetype;
    if (!d.getInteger (RFQUpdateType, rfqupdatetype))
    {
        setLastError ("RFQUpdateType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setRFQUpdateType (rfqupdatetype);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
        packet->setOrderSide (UINT8_MAX);
    else
        packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    
    string endclient;
    if (!d.getString (EndClient, endclient))
    {
        setLastError ("EndClient missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setEndClient (endclient);
    offset += 11;
    
    uint8_t darkexecutioninstruction;
    if (!d.getInteger (DarkExecutionInstruction, darkexecutioninstruction))
    {
        setLastError ("DarkExecutionInstruction missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDarkExecutionInstruction (darkexecutioninstruction);
    offset += sizeof (uint8_t);
    
    uint64_t minorderqty;
    if (!d.getInteger (MinOrderQty, minorderqty))
        packet->setMinOrderQty (UINT64_MAX);
    else
        packet->setMinOrderQty (minorderqty);
    offset += sizeof (uint64_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putRFQMatchingStatus (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqRFQMatchingStatusPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqRFQMatchingStatusPacket* packet = (optiqRFQMatchingStatusPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqRFQMatchingStatusPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint64_t quotereqid;
    if (!d.getInteger (QuoteReqID, quotereqid))
    {
        setLastError ("QuoteReqID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setQuoteReqID (quotereqid);
    offset += sizeof (uint64_t);
    
    int64_t potentialmatchingpx;
    if (!d.getInteger (PotentialMatchingPX, potentialmatchingpx))
        packet->setPotentialMatchingPX (INT64_MIN);
    else
        packet->setPotentialMatchingPX (potentialmatchingpx);
    offset += sizeof (int64_t);
    
    
    uint64_t potentialmatchingqty;
    if (!d.getInteger (PotentialMatchingQty, potentialmatchingqty))
    {
        setLastError ("PotentialMatchingQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setPotentialMatchingQty (potentialmatchingqty);
    offset += sizeof (uint64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
    {
        setLastError ("OrderSide missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    
    uint8_t numberoflps;
    if (!d.getInteger (NumberOfLPs, numberoflps))
        packet->setNumberOfLPs (UINT8_MAX);
    else
        packet->setNumberOfLPs (numberoflps);
    offset += sizeof (uint8_t);
    
    
    uint8_t recipienttype;
    if (!d.getInteger (RecipientType, recipienttype))
    {
        setLastError ("RecipientType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setRecipientType (recipienttype);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putRFQLPMatchingStatus (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqRFQLPMatchingStatusPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqRFQLPMatchingStatusPacket* packet = (optiqRFQLPMatchingStatusPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqRFQLPMatchingStatusPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t bookin;
    if (!d.getInteger (BookIn, bookin))
    {
        setLastError ("BookIn missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setBookIn (bookin);
    offset += sizeof (uint64_t);
    
    uint64_t bookouttime;
    if (!d.getInteger (BookOUTTime, bookouttime))
        packet->setBookOUTTime (UINT64_MAX);
    else
        packet->setBookOUTTime (bookouttime);
    offset += sizeof (uint64_t);
    
    
    uint64_t oeginfromme;
    if (!d.getInteger (OEGINFromME, oeginfromme))
        packet->setOEGINFromME (UINT64_MAX);
    else
        packet->setOEGINFromME (oeginfromme);
    offset += sizeof (uint64_t);
    
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint64_t quotereqid;
    if (!d.getInteger (QuoteReqID, quotereqid))
    {
        setLastError ("QuoteReqID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setQuoteReqID (quotereqid);
    offset += sizeof (uint64_t);
    
    uint64_t potentialmatchingqty;
    if (!d.getInteger (PotentialMatchingQty, potentialmatchingqty))
    {
        setLastError ("PotentialMatchingQty missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setPotentialMatchingQty (potentialmatchingqty);
    offset += sizeof (uint64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint8_t orderside;
    if (!d.getInteger (OrderSide, orderside))
    {
        setLastError ("OrderSide missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOrderSide (orderside);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putUserNotification (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqUserNotificationPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqUserNotificationPacket* packet = (optiqUserNotificationPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqUserNotificationPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
        packet->setExecutionWithinFirmShortCode (INT32_MIN);
    else
        packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    string familyid;
    if (!d.getString (FamilyID, familyid))
    {
        setLastError ("FamilyID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFamilyID (familyid);
    offset += 8;
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
        packet->setSymbolIndex (UINT32_MAX);
    else
        packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    
    uint8_t userstatus;
    if (!d.getInteger (UserStatus, userstatus))
    {
        setLastError ("UserStatus missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setUserStatus (userstatus);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putInstrumentSynchronizationList (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqInstrumentSynchronizationListPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqInstrumentSynchronizationListPacket* packet = (optiqInstrumentSynchronizationListPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqInstrumentSynchronizationListPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint16_t resynchronizationid;
    if (!d.getInteger (ResynchronizationID, resynchronizationid))
    {
        setLastError ("ResynchronizationID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setResynchronizationID (resynchronizationid);
    offset += sizeof (uint16_t);
    
    optiqGroupSizeEncodingPacket* gse4 = (optiqGroupSizeEncodingPacket*)((char*)buf + offset);
    offset += sizeof (optiqGroupSizeEncodingPacket);
    
    gse4->setNumInGroup (d.getArraySize (InstrumentSynchronizationSection));
    gse4->setBlockLength (sizeof (optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket));
    
    if (d.getArraySize (InstrumentSynchronizationSection) > 0)
    {
        cdrArray* InstrumentSynchronizationSectionArray = NULL;
        d.getArray (InstrumentSynchronizationSection, (const cdrArray**)(&InstrumentSynchronizationSectionArray));
        for (cdrArray::iterator it = InstrumentSynchronizationSectionArray->begin(); it != InstrumentSynchronizationSectionArray->end(); ++it)
        {
            cdr& item = *it;
            optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket* instrumentsynchronizationsection = (optiqInstrumentSynchronizationListInstrumentSynchronizationSectionPacket*) ((char*)buf + offset);

            uint32_t symbolindex;
            if (!item.getInteger (SymbolIndex, symbolindex))
            {
                setLastError ("SymbolIndex missing or not integer");
                return GW_CODEC_ERROR;
            }
            instrumentsynchronizationsection->setSymbolIndex (symbolindex);
            offset += sizeof (uint32_t);

            uint8_t emm;
            if (!item.getInteger (EMM, emm))
            {
                setLastError ("EMM missing or not integer");
                return GW_CODEC_ERROR;
            }
            instrumentsynchronizationsection->setEMM (emm);
            offset += sizeof (uint8_t);

        }
    }
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putSynchronizationTime (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqSynchronizationTimePacket base;
    memcpy (buf, &base, sizeof(base));

    optiqSynchronizationTimePacket* packet = (optiqSynchronizationTimePacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqSynchronizationTimePacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint16_t resynchronizationid;
    if (!d.getInteger (ResynchronizationID, resynchronizationid))
    {
        setLastError ("ResynchronizationID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setResynchronizationID (resynchronizationid);
    offset += sizeof (uint16_t);
    
    uint64_t lastbookintime;
    if (!d.getInteger (LastBookInTime, lastbookintime))
    {
        setLastError ("LastBookInTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastBookInTime (lastbookintime);
    offset += sizeof (uint64_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putLogon (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqLogonPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqLogonPacket* packet = (optiqLogonPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqLogonPacket))
        return GW_CODEC_SHORT;

    
    uint32_t logicalaccessid;
    if (!d.getInteger (LogicalAccessID, logicalaccessid))
    {
        setLastError ("LogicalAccessID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLogicalAccessID (logicalaccessid);
    offset += sizeof (uint32_t);
    
    uint16_t oepartitionid;
    if (!d.getInteger (OEPartitionID, oepartitionid))
    {
        setLastError ("OEPartitionID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOEPartitionID (oepartitionid);
    offset += sizeof (uint16_t);
    
    uint32_t lastmsgseqnum;
    if (!d.getInteger (LastMsgSeqNum, lastmsgseqnum))
        packet->setLastMsgSeqNum (UINT32_MAX);
    else
        packet->setLastMsgSeqNum (lastmsgseqnum);
    offset += sizeof (uint32_t);
    
    
    string softwareprovider;
    if (!d.getString (SoftwareProvider, softwareprovider))
    {
        setLastError ("SoftwareProvider missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setSoftwareProvider (softwareprovider);
    offset += 8;
    
    uint8_t queueingindicator;
    if (!d.getInteger (QueueingIndicator, queueingindicator))
    {
        setLastError ("QueueingIndicator missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setQueueingIndicator (queueingindicator);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putLogonAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqLogonAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqLogonAckPacket* packet = (optiqLogonAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqLogonAckPacket))
        return GW_CODEC_SHORT;

    
    string exchangeid;
    if (!d.getString (ExchangeID, exchangeid))
    {
        setLastError ("ExchangeID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setExchangeID (exchangeid);
    offset += 8;
    
    uint32_t lastclmsgseqnum;
    if (!d.getInteger (LastClMsgSeqNum, lastclmsgseqnum))
    {
        setLastError ("LastClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastClMsgSeqNum (lastclmsgseqnum);
    offset += sizeof (uint32_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putLogonReject (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqLogonRejectPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqLogonRejectPacket* packet = (optiqLogonRejectPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqLogonRejectPacket))
        return GW_CODEC_SHORT;

    
    string exchangeid;
    if (!d.getString (ExchangeID, exchangeid))
    {
        setLastError ("ExchangeID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setExchangeID (exchangeid);
    offset += 8;
    
    uint8_t logonrejectcode;
    if (!d.getInteger (LogonRejectCode, logonrejectcode))
    {
        setLastError ("LogonRejectCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLogonRejectCode (logonrejectcode);
    offset += sizeof (uint8_t);
    
    uint32_t lastclmsgseqnum;
    if (!d.getInteger (LastClMsgSeqNum, lastclmsgseqnum))
    {
        setLastError ("LastClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastClMsgSeqNum (lastclmsgseqnum);
    offset += sizeof (uint32_t);
    
    uint32_t lastmsgseqnum;
    if (!d.getInteger (LastMsgSeqNum, lastmsgseqnum))
    {
        setLastError ("LastMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLastMsgSeqNum (lastmsgseqnum);
    offset += sizeof (uint32_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putLogout (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqLogoutPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqLogoutPacket* packet = (optiqLogoutPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqLogoutPacket))
        return GW_CODEC_SHORT;

    
    uint8_t logoutreasoncode;
    if (!d.getInteger (LogOutReasonCode, logoutreasoncode))
    {
        setLastError ("LogOutReasonCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setLogOutReasonCode (logoutreasoncode);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putHeartbeat (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqHeartbeatPacket base;
    memcpy (buf, &base, sizeof(base));

    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqHeartbeatPacket))
        return GW_CODEC_SHORT;

    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putTestRequest (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqTestRequestPacket base;
    memcpy (buf, &base, sizeof(base));

    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqTestRequestPacket))
        return GW_CODEC_SHORT;

    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putTechnicalReject (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqTechnicalRejectPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqTechnicalRejectPacket* packet = (optiqTechnicalRejectPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqTechnicalRejectPacket))
        return GW_CODEC_SHORT;

    
    uint64_t oegouttomember;
    if (!d.getInteger (OEGOUTToMember, oegouttomember))
        packet->setOEGOUTToMember (UINT64_MAX);
    else
        packet->setOEGOUTToMember (oegouttomember);
    offset += sizeof (uint64_t);
    
    
    uint32_t rejectedclientmessagesequencenumber;
    if (!d.getInteger (RejectedClientMessageSequenceNumber, rejectedclientmessagesequencenumber))
        packet->setRejectedClientMessageSequenceNumber (UINT32_MAX);
    else
        packet->setRejectedClientMessageSequenceNumber (rejectedclientmessagesequencenumber);
    offset += sizeof (uint32_t);
    
    
    uint8_t rejectedmessage;
    if (!d.getInteger (RejectedMessage, rejectedmessage))
        packet->setRejectedMessage (UINT8_MAX);
    else
        packet->setRejectedMessage (rejectedmessage);
    offset += sizeof (uint8_t);
    
    
    uint16_t errorcode;
    if (!d.getInteger (ErrorCode, errorcode))
    {
        setLastError ("ErrorCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setErrorCode (errorcode);
    offset += sizeof (uint16_t);
    
    uint16_t rejectedmessageid;
    if (!d.getInteger (RejectedMessageID, rejectedmessageid))
        packet->setRejectedMessageID (UINT16_MAX);
    else
        packet->setRejectedMessageID (rejectedmessageid);
    offset += sizeof (uint16_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putDeclarationEntry (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqDeclarationEntryPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqDeclarationEntryPacket* packet = (optiqDeclarationEntryPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqDeclarationEntryPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint8_t operationtype;
    if (!d.getInteger (OperationType, operationtype))
    {
        setLastError ("OperationType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOperationType (operationtype);
    offset += sizeof (uint8_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    string enteringcounterparty;
    if (!d.getString (EnteringCounterparty, enteringcounterparty))
    {
        setLastError ("EnteringCounterparty missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setEnteringCounterparty (enteringcounterparty);
    offset += 8;
    
    uint8_t side;
    if (!d.getInteger (Side, side))
    {
        setLastError ("Side missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSide (side);
    offset += sizeof (uint8_t);
    
    uint64_t quantity;
    if (!d.getInteger (Quantity, quantity))
        packet->setQuantity (UINT64_MAX);
    else
        packet->setQuantity (quantity);
    offset += sizeof (uint64_t);
    
    
    int64_t price;
    if (!d.getInteger (Price, price))
        packet->setPrice (INT64_MIN);
    else
        packet->setPrice (price);
    offset += sizeof (int64_t);
    
    
    int32_t executionwithinfirmshortcode;
    if (!d.getInteger (ExecutionWithinFirmShortCode, executionwithinfirmshortcode))
    {
        setLastError ("ExecutionWithinFirmShortCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setExecutionWithinFirmShortCode (executionwithinfirmshortcode);
    offset += sizeof (int32_t);
    
    int32_t clientidentificationshortcode;
    if (!d.getInteger (ClientIdentificationShortcode, clientidentificationshortcode))
        packet->setClientIdentificationShortcode (INT32_MIN);
    else
        packet->setClientIdentificationShortcode (clientidentificationshortcode);
    offset += sizeof (int32_t);
    
    
    string micofsecondarylisting;
    if (!d.getString (MICofSecondaryListing, micofsecondarylisting))
    {
        setLastError ("MICofSecondaryListing missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setMICofSecondaryListing (micofsecondarylisting);
    offset += 4;
    
    string centralisationdate;
    if (!d.getString (CentralisationDate, centralisationdate))
    {
        setLastError ("CentralisationDate missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setCentralisationDate (centralisationdate);
    offset += 10;
    
    string clearingfirmid;
    if (!d.getString (ClearingFirmID, clearingfirmid))
    {
        setLastError ("ClearingFirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setClearingFirmID (clearingfirmid);
    offset += 8;
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
    {
        setLastError ("AccountType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    uint8_t accounttypecross;
    if (!d.getInteger (AccountTypeCross, accounttypecross))
        packet->setAccountTypeCross (UINT8_MAX);
    else
        packet->setAccountTypeCross (accounttypecross);
    offset += sizeof (uint8_t);
    
    
    uint8_t tradingcapacity;
    if (!d.getInteger (TradingCapacity, tradingcapacity))
    {
        setLastError ("TradingCapacity missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setTradingCapacity (tradingcapacity);
    offset += sizeof (uint8_t);
    
    uint8_t tradingcapacitycross;
    if (!d.getInteger (TradingCapacityCross, tradingcapacitycross))
        packet->setTradingCapacityCross (UINT8_MAX);
    else
        packet->setTradingCapacityCross (tradingcapacitycross);
    offset += sizeof (uint8_t);
    
    
    uint8_t settlementperiod;
    if (!d.getInteger (SettlementPeriod, settlementperiod))
    {
        setLastError ("SettlementPeriod missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSettlementPeriod (settlementperiod);
    offset += sizeof (uint8_t);
    
    uint8_t settlementflag;
    if (!d.getInteger (SettlementFlag, settlementflag))
    {
        setLastError ("SettlementFlag missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSettlementFlag (settlementflag);
    offset += sizeof (uint8_t);
    
    uint8_t guaranteeflag;
    if (!d.getInteger (GuaranteeFlag, guaranteeflag))
    {
        setLastError ("GuaranteeFlag missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setGuaranteeFlag (guaranteeflag);
    offset += sizeof (uint8_t);
    
    uint8_t mifidindicators;
    if (!d.getInteger (MiFIDIndicators, mifidindicators))
    {
        setLastError ("MiFIDIndicators missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMiFIDIndicators (mifidindicators);
    offset += sizeof (uint8_t);
    
    uint8_t transactionpricetype;
    if (!d.getInteger (TransactionPriceType, transactionpricetype))
        packet->setTransactionPriceType (UINT8_MAX);
    else
        packet->setTransactionPriceType (transactionpricetype);
    offset += sizeof (uint8_t);
    
    
    string principalcode;
    if (!d.getString (PrincipalCode, principalcode))
    {
        setLastError ("PrincipalCode missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setPrincipalCode (principalcode);
    offset += 8;
    
    string principalcodecross;
    if (!d.getString (PrincipalCodeCross, principalcodecross))
    {
        setLastError ("PrincipalCodeCross missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setPrincipalCodeCross (principalcodecross);
    offset += 8;
    
    uint32_t starttimevwap;
    if (!d.getInteger (StartTimeVwap, starttimevwap))
        packet->setStartTimeVwap (UINT32_MAX);
    else
        packet->setStartTimeVwap (starttimevwap);
    offset += sizeof (uint32_t);
    
    
    uint32_t endtimevwap;
    if (!d.getInteger (EndTimeVwap, endtimevwap))
        packet->setEndTimeVwap (UINT32_MAX);
    else
        packet->setEndTimeVwap (endtimevwap);
    offset += sizeof (uint32_t);
    
    
    int64_t grosstradeamount;
    if (!d.getInteger (GrossTradeAmount, grosstradeamount))
        packet->setGrossTradeAmount (INT64_MIN);
    else
        packet->setGrossTradeAmount (grosstradeamount);
    offset += sizeof (int64_t);
    
    
    string accountnumber;
    if (!d.getString (AccountNumber, accountnumber))
    {
        setLastError ("AccountNumber missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setAccountNumber (accountnumber);
    offset += 12;
    
    string accountnumbercross;
    if (!d.getString (AccountNumberCross, accountnumbercross))
    {
        setLastError ("AccountNumberCross missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setAccountNumberCross (accountnumbercross);
    offset += 12;
    
    string freetext;
    if (!d.getString (FreeText, freetext))
    {
        setLastError ("FreeText missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFreeText (freetext);
    offset += 18;
    
    string freetextcross;
    if (!d.getString (FreeTextCross, freetextcross))
    {
        setLastError ("FreeTextCross missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFreeTextCross (freetextcross);
    offset += 18;
    
    int32_t investmentdecisionwfirmshortcode;
    if (!d.getInteger (InvestmentDecisionWFirmShortCode, investmentdecisionwfirmshortcode))
        packet->setInvestmentDecisionWFirmShortCode (INT32_MIN);
    else
        packet->setInvestmentDecisionWFirmShortCode (investmentdecisionwfirmshortcode);
    offset += sizeof (int32_t);
    
    
    int32_t clientidentificationshortcodecross;
    if (!d.getInteger (ClientIdentificationShortCodeCross, clientidentificationshortcodecross))
        packet->setClientIdentificationShortCodeCross (INT32_MIN);
    else
        packet->setClientIdentificationShortCodeCross (clientidentificationshortcodecross);
    offset += sizeof (int32_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putDeclarationEntryAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqDeclarationEntryAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqDeclarationEntryAckPacket* packet = (optiqDeclarationEntryAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqDeclarationEntryAckPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t declarationid;
    if (!d.getInteger (DeclarationID, declarationid))
        packet->setDeclarationID (UINT64_MAX);
    else
        packet->setDeclarationID (declarationid);
    offset += sizeof (uint64_t);
    
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    string micofsecondarylisting;
    if (!d.getString (MICofSecondaryListing, micofsecondarylisting))
    {
        setLastError ("MICofSecondaryListing missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setMICofSecondaryListing (micofsecondarylisting);
    offset += 4;
    
    uint8_t operationtype;
    if (!d.getInteger (OperationType, operationtype))
    {
        setLastError ("OperationType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOperationType (operationtype);
    offset += sizeof (uint8_t);
    
    uint8_t prematchingtype;
    if (!d.getInteger (PreMatchingType, prematchingtype))
        packet->setPreMatchingType (UINT8_MAX);
    else
        packet->setPreMatchingType (prematchingtype);
    offset += sizeof (uint8_t);
    
    
    uint8_t waiverindicator;
    if (!d.getInteger (WaiverIndicator, waiverindicator))
        packet->setWaiverIndicator (UINT8_MAX);
    else
        packet->setWaiverIndicator (waiverindicator);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putDeclarationNotice (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqDeclarationNoticePacket base;
    memcpy (buf, &base, sizeof(base));

    optiqDeclarationNoticePacket* packet = (optiqDeclarationNoticePacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqDeclarationNoticePacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
        packet->setClientOrderID (INT64_MIN);
    else
        packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    
    uint64_t declarationid;
    if (!d.getInteger (DeclarationID, declarationid))
    {
        setLastError ("DeclarationID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDeclarationID (declarationid);
    offset += sizeof (uint64_t);
    
    uint8_t declarationstatus;
    if (!d.getInteger (DeclarationStatus, declarationstatus))
    {
        setLastError ("DeclarationStatus missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDeclarationStatus (declarationstatus);
    offset += sizeof (uint8_t);
    
    uint8_t operationtype;
    if (!d.getInteger (OperationType, operationtype))
    {
        setLastError ("OperationType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOperationType (operationtype);
    offset += sizeof (uint8_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    string enteringcounterparty;
    if (!d.getString (EnteringCounterparty, enteringcounterparty))
    {
        setLastError ("EnteringCounterparty missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setEnteringCounterparty (enteringcounterparty);
    offset += 8;
    
    uint8_t side;
    if (!d.getInteger (Side, side))
        packet->setSide (UINT8_MAX);
    else
        packet->setSide (side);
    offset += sizeof (uint8_t);
    
    
    uint64_t quantity;
    if (!d.getInteger (Quantity, quantity))
        packet->setQuantity (UINT64_MAX);
    else
        packet->setQuantity (quantity);
    offset += sizeof (uint64_t);
    
    
    int64_t price;
    if (!d.getInteger (Price, price))
        packet->setPrice (INT64_MIN);
    else
        packet->setPrice (price);
    offset += sizeof (int64_t);
    
    
    uint8_t prematchingtype;
    if (!d.getInteger (PreMatchingType, prematchingtype))
        packet->setPreMatchingType (UINT8_MAX);
    else
        packet->setPreMatchingType (prematchingtype);
    offset += sizeof (uint8_t);
    
    
    uint64_t tradetime;
    if (!d.getInteger (TradeTime, tradetime))
        packet->setTradeTime (UINT64_MAX);
    else
        packet->setTradeTime (tradetime);
    offset += sizeof (uint64_t);
    
    
    string micofsecondarylisting;
    if (!d.getString (MICofSecondaryListing, micofsecondarylisting))
    {
        setLastError ("MICofSecondaryListing missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setMICofSecondaryListing (micofsecondarylisting);
    offset += 4;
    
    string centralisationdate;
    if (!d.getString (CentralisationDate, centralisationdate))
    {
        setLastError ("CentralisationDate missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setCentralisationDate (centralisationdate);
    offset += 10;
    
    string clearingfirmid;
    if (!d.getString (ClearingFirmID, clearingfirmid))
    {
        setLastError ("ClearingFirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setClearingFirmID (clearingfirmid);
    offset += 8;
    
    uint8_t accounttype;
    if (!d.getInteger (AccountType, accounttype))
        packet->setAccountType (UINT8_MAX);
    else
        packet->setAccountType (accounttype);
    offset += sizeof (uint8_t);
    
    
    uint8_t accounttypecross;
    if (!d.getInteger (AccountTypeCross, accounttypecross))
        packet->setAccountTypeCross (UINT8_MAX);
    else
        packet->setAccountTypeCross (accounttypecross);
    offset += sizeof (uint8_t);
    
    
    uint8_t tradingcapacity;
    if (!d.getInteger (TradingCapacity, tradingcapacity))
        packet->setTradingCapacity (UINT8_MAX);
    else
        packet->setTradingCapacity (tradingcapacity);
    offset += sizeof (uint8_t);
    
    
    uint8_t tradingcapacitycross;
    if (!d.getInteger (TradingCapacityCross, tradingcapacitycross))
        packet->setTradingCapacityCross (UINT8_MAX);
    else
        packet->setTradingCapacityCross (tradingcapacitycross);
    offset += sizeof (uint8_t);
    
    
    uint8_t settlementflag;
    if (!d.getInteger (SettlementFlag, settlementflag))
        packet->setSettlementFlag (UINT8_MAX);
    else
        packet->setSettlementFlag (settlementflag);
    offset += sizeof (uint8_t);
    
    
    uint8_t settlementperiod;
    if (!d.getInteger (SettlementPeriod, settlementperiod))
        packet->setSettlementPeriod (UINT8_MAX);
    else
        packet->setSettlementPeriod (settlementperiod);
    offset += sizeof (uint8_t);
    
    
    uint8_t guaranteeflag;
    if (!d.getInteger (GuaranteeFlag, guaranteeflag))
        packet->setGuaranteeFlag (UINT8_MAX);
    else
        packet->setGuaranteeFlag (guaranteeflag);
    offset += sizeof (uint8_t);
    
    
    uint8_t transactionpricetype;
    if (!d.getInteger (TransactionPriceType, transactionpricetype))
        packet->setTransactionPriceType (UINT8_MAX);
    else
        packet->setTransactionPriceType (transactionpricetype);
    offset += sizeof (uint8_t);
    
    
    string principalcode;
    if (!d.getString (PrincipalCode, principalcode))
    {
        setLastError ("PrincipalCode missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setPrincipalCode (principalcode);
    offset += 8;
    
    string principalcodecross;
    if (!d.getString (PrincipalCodeCross, principalcodecross))
    {
        setLastError ("PrincipalCodeCross missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setPrincipalCodeCross (principalcodecross);
    offset += 8;
    
    uint32_t starttimevwap;
    if (!d.getInteger (StartTimeVwap, starttimevwap))
        packet->setStartTimeVwap (UINT32_MAX);
    else
        packet->setStartTimeVwap (starttimevwap);
    offset += sizeof (uint32_t);
    
    
    uint32_t endtimevwap;
    if (!d.getInteger (EndTimeVwap, endtimevwap))
        packet->setEndTimeVwap (UINT32_MAX);
    else
        packet->setEndTimeVwap (endtimevwap);
    offset += sizeof (uint32_t);
    
    
    int64_t grosstradeamount;
    if (!d.getInteger (GrossTradeAmount, grosstradeamount))
        packet->setGrossTradeAmount (INT64_MIN);
    else
        packet->setGrossTradeAmount (grosstradeamount);
    offset += sizeof (int64_t);
    
    
    string accountnumber;
    if (!d.getString (AccountNumber, accountnumber))
    {
        setLastError ("AccountNumber missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setAccountNumber (accountnumber);
    offset += 12;
    
    string accountnumbercross;
    if (!d.getString (AccountNumberCross, accountnumbercross))
    {
        setLastError ("AccountNumberCross missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setAccountNumberCross (accountnumbercross);
    offset += 12;
    
    string freetext;
    if (!d.getString (FreeText, freetext))
    {
        setLastError ("FreeText missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFreeText (freetext);
    offset += 18;
    
    string freetextcross;
    if (!d.getString (FreeTextCross, freetextcross))
    {
        setLastError ("FreeTextCross missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFreeTextCross (freetextcross);
    offset += 18;
    
    uint8_t waiverindicator;
    if (!d.getInteger (WaiverIndicator, waiverindicator))
        packet->setWaiverIndicator (UINT8_MAX);
    else
        packet->setWaiverIndicator (waiverindicator);
    offset += sizeof (uint8_t);
    
    
    uint8_t previousdayindicator;
    if (!d.getInteger (PreviousDayIndicator, previousdayindicator))
        packet->setPreviousDayIndicator (UINT8_MAX);
    else
        packet->setPreviousDayIndicator (previousdayindicator);
    offset += sizeof (uint8_t);
    
    
    int64_t miscellaneousfeeamount;
    if (!d.getInteger (MiscellaneousFeeAmount, miscellaneousfeeamount))
        packet->setMiscellaneousFeeAmount (INT64_MIN);
    else
        packet->setMiscellaneousFeeAmount (miscellaneousfeeamount);
    offset += sizeof (int64_t);
    
    
    uint8_t ccpid;
    if (!d.getInteger (CCPID, ccpid))
        packet->setCCPID (UINT8_MAX);
    else
        packet->setCCPID (ccpid);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putDeclarationCancelAndRefusal (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqDeclarationCancelAndRefusalPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqDeclarationCancelAndRefusalPacket* packet = (optiqDeclarationCancelAndRefusalPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqDeclarationCancelAndRefusalPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    uint64_t declarationid;
    if (!d.getInteger (DeclarationID, declarationid))
    {
        setLastError ("DeclarationID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setDeclarationID (declarationid);
    offset += sizeof (uint64_t);
    
    uint8_t actiontype;
    if (!d.getInteger (ActionType, actiontype))
    {
        setLastError ("ActionType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setActionType (actiontype);
    offset += sizeof (uint8_t);
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putFundPriceInput (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqFundPriceInputPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqFundPriceInputPacket* packet = (optiqFundPriceInputPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqFundPriceInputPacket))
        return GW_CODEC_SHORT;

    
    uint32_t clmsgseqnum;
    if (!d.getInteger (ClMsgSeqNum, clmsgseqnum))
    {
        setLastError ("ClMsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClMsgSeqNum (clmsgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    uint64_t sendingtime;
    if (!d.getInteger (SendingTime, sendingtime))
    {
        setLastError ("SendingTime missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSendingTime (sendingtime);
    offset += sizeof (uint64_t);
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    int64_t price;
    if (!d.getInteger (Price, price))
    {
        setLastError ("Price missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setPrice (price);
    offset += sizeof (int64_t);
    
    uint8_t bypassindicator;
    if (!d.getInteger (BypassIndicator, bypassindicator))
        packet->setBypassIndicator (UINT8_MAX);
    else
        packet->setBypassIndicator (bypassindicator);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putFundPriceInputAck (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqFundPriceInputAckPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqFundPriceInputAckPacket* packet = (optiqFundPriceInputAckPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqFundPriceInputAckPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
    {
        setLastError ("EMM missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    int64_t price;
    if (!d.getInteger (Price, price))
    {
        setLastError ("Price missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setPrice (price);
    offset += sizeof (int64_t);
    
    uint8_t bypassindicator;
    if (!d.getInteger (BypassIndicator, bypassindicator))
        packet->setBypassIndicator (UINT8_MAX);
    else
        packet->setBypassIndicator (bypassindicator);
    offset += sizeof (uint8_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}

codecState
optiqCodec::putDeclarationEntryReject (const cdr& d, void* buf, size_t len, size_t& used)
{
    optiqDeclarationEntryRejectPacket base;
    memcpy (buf, &base, sizeof(base));

    optiqDeclarationEntryRejectPacket* packet = (optiqDeclarationEntryRejectPacket*)((char*)buf);
    size_t offset = sizeof (optiqMessageHeaderPacket) + 2;

    if (len < sizeof (optiqDeclarationEntryRejectPacket))
        return GW_CODEC_SHORT;

    
    uint32_t msgseqnum;
    if (!d.getInteger (MsgSeqNum, msgseqnum))
    {
        setLastError ("MsgSeqNum missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setMsgSeqNum (msgseqnum);
    offset += sizeof (uint32_t);
    
    string firmid;
    if (!d.getString (FirmID, firmid))
    {
        setLastError ("FirmID missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setFirmID (firmid);
    offset += 8;
    
    int64_t clientorderid;
    if (!d.getInteger (ClientOrderID, clientorderid))
    {
        setLastError ("ClientOrderID missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setClientOrderID (clientorderid);
    offset += sizeof (int64_t);
    
    uint32_t symbolindex;
    if (!d.getInteger (SymbolIndex, symbolindex))
    {
        setLastError ("SymbolIndex missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setSymbolIndex (symbolindex);
    offset += sizeof (uint32_t);
    
    uint8_t emm;
    if (!d.getInteger (EMM, emm))
        packet->setEMM (UINT8_MAX);
    else
        packet->setEMM (emm);
    offset += sizeof (uint8_t);
    
    
    string micofsecondarylisting;
    if (!d.getString (MICofSecondaryListing, micofsecondarylisting))
    {
        setLastError ("MICofSecondaryListing missing or not string");
        return GW_CODEC_ERROR;
    }
    packet->setMICofSecondaryListing (micofsecondarylisting);
    offset += 4;
    
    uint8_t operationtype;
    if (!d.getInteger (OperationType, operationtype))
    {
        setLastError ("OperationType missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setOperationType (operationtype);
    offset += sizeof (uint8_t);
    
    uint16_t errorcode;
    if (!d.getInteger (ErrorCode, errorcode))
    {
        setLastError ("ErrorCode missing or not integer");
        return GW_CODEC_ERROR;
    }
    packet->setErrorCode (errorcode);
    offset += sizeof (uint16_t);
    
    uint8_t rejectedmessage;
    if (!d.getInteger (RejectedMessage, rejectedmessage))
        packet->setRejectedMessage (UINT8_MAX);
    else
        packet->setRejectedMessage (rejectedmessage);
    offset += sizeof (uint8_t);
    
    
    uint16_t rejectedmessageid;
    if (!d.getInteger (RejectedMessageID, rejectedmessageid))
        packet->setRejectedMessageID (UINT16_MAX);
    else
        packet->setRejectedMessageID (rejectedmessageid);
    offset += sizeof (uint16_t);
    
    used += offset;

    return GW_CODEC_SUCCESS;
}


codecState
optiqCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    if (len < sizeof(optiqMessageHeaderPacket))
        return GW_CODEC_SHORT;

    uint16_t frameLength = *((uint16_t*)buf);
    if (len < frameLength)
        return GW_CODEC_SHORT;

    optiqMessageHeaderPacket* hdr =
        (optiqMessageHeaderPacket*)
            (((unsigned char*)buf) + sizeof(uint16_t));

    used = frameLength;

    std::ostringstream oss;
    oss << hdr->mTemplateId;
    
    d.setInteger (FrameLength, frameLength);
    d.setString (MessageType, "%s", oss.str ().c_str ());
    d.setInteger (TemplateId, hdr->mTemplateId);
    d.setInteger (SchemaId, hdr->mSchemaId);
    d.setInteger (Version, hdr->mVersion);

    switch (hdr->mTemplateId) {
        case 1:
            return getNewOrder (d, buf);
        case 3:
            return getAck (d, buf);
        case 4:
            return getFill (d, buf);
        case 5:
            return getKill (d, buf);
        case 6:
            return getCancelReplace (d, buf);
        case 7:
            return getReject (d, buf);
        case 8:
            return getQuotes (d, buf);
        case 9:
            return getQuoteAck (d, buf);
        case 10:
            return getQuoteRequest (d, buf);
        case 12:
            return getCancelRequest (d, buf);
        case 13:
            return getMassCancel (d, buf);
        case 14:
            return getMassCancelAck (d, buf);
        case 15:
            return getOpenOrderRequest (d, buf);
        case 17:
            return getOwnershipRequestAck (d, buf);
        case 18:
            return getOwnershipRequest (d, buf);
        case 19:
            return getTradeBustNotification (d, buf);
        case 20:
            return getCollarBreachConfirmation (d, buf);
        case 28:
            return getPriceInput (d, buf);
        case 32:
            return getLiquidityProviderCommand (d, buf);
        case 33:
            return getAskForQuote (d, buf);
        case 34:
            return getRequestForExecution (d, buf);
        case 35:
            return getRFQNotification (d, buf);
        case 36:
            return getRFQMatchingStatus (d, buf);
        case 37:
            return getRFQLPMatchingStatus (d, buf);
        case 39:
            return getUserNotification (d, buf);
        case 50:
            return getInstrumentSynchronizationList (d, buf);
        case 51:
            return getSynchronizationTime (d, buf);
        case 100:
            return getLogon (d, buf);
        case 101:
            return getLogonAck (d, buf);
        case 102:
            return getLogonReject (d, buf);
        case 103:
            return getLogout (d, buf);
        case 106:
            return getHeartbeat (d, buf);
        case 107:
            return getTestRequest (d, buf);
        case 108:
            return getTechnicalReject (d, buf);
        case 40:
            return getDeclarationEntry (d, buf);
        case 41:
            return getDeclarationEntryAck (d, buf);
        case 42:
            return getDeclarationNotice (d, buf);
        case 43:
            return getDeclarationCancelAndRefusal (d, buf);
        case 44:
            return getFundPriceInput (d, buf);
        case 45:
            return getFundPriceInputAck (d, buf);
        case 46:
            return getDeclarationEntryReject (d, buf);
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
}

codecState
optiqCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    if (len < sizeof(optiqMessageHeaderPacket))
        return GW_CODEC_SHORT;

    if (!d.isType (TemplateId, CDR_INTEGER, 1))
    {
        setLastError ("TemplateId missing or not string");
        return GW_CODEC_ERROR;
    }
    uint16_t type;
    d.getInteger (TemplateId, type);

    codecState state = GW_CODEC_ERROR;
    switch (type) {
        case 1:
            state = putNewOrder (d, buf, len, used);
            break;
        case 3:
            state = putAck (d, buf, len, used);
            break;
        case 4:
            state = putFill (d, buf, len, used);
            break;
        case 5:
            state = putKill (d, buf, len, used);
            break;
        case 6:
            state = putCancelReplace (d, buf, len, used);
            break;
        case 7:
            state = putReject (d, buf, len, used);
            break;
        case 8:
            state = putQuotes (d, buf, len, used);
            break;
        case 9:
            state = putQuoteAck (d, buf, len, used);
            break;
        case 10:
            state = putQuoteRequest (d, buf, len, used);
            break;
        case 12:
            state = putCancelRequest (d, buf, len, used);
            break;
        case 13:
            state = putMassCancel (d, buf, len, used);
            break;
        case 14:
            state = putMassCancelAck (d, buf, len, used);
            break;
        case 15:
            state = putOpenOrderRequest (d, buf, len, used);
            break;
        case 17:
            state = putOwnershipRequestAck (d, buf, len, used);
            break;
        case 18:
            state = putOwnershipRequest (d, buf, len, used);
            break;
        case 19:
            state = putTradeBustNotification (d, buf, len, used);
            break;
        case 20:
            state = putCollarBreachConfirmation (d, buf, len, used);
            break;
        case 28:
            state = putPriceInput (d, buf, len, used);
            break;
        case 32:
            state = putLiquidityProviderCommand (d, buf, len, used);
            break;
        case 33:
            state = putAskForQuote (d, buf, len, used);
            break;
        case 34:
            state = putRequestForExecution (d, buf, len, used);
            break;
        case 35:
            state = putRFQNotification (d, buf, len, used);
            break;
        case 36:
            state = putRFQMatchingStatus (d, buf, len, used);
            break;
        case 37:
            state = putRFQLPMatchingStatus (d, buf, len, used);
            break;
        case 39:
            state = putUserNotification (d, buf, len, used);
            break;
        case 50:
            state = putInstrumentSynchronizationList (d, buf, len, used);
            break;
        case 51:
            state = putSynchronizationTime (d, buf, len, used);
            break;
        case 100:
            state = putLogon (d, buf, len, used);
            break;
        case 101:
            state = putLogonAck (d, buf, len, used);
            break;
        case 102:
            state = putLogonReject (d, buf, len, used);
            break;
        case 103:
            state = putLogout (d, buf, len, used);
            break;
        case 106:
            state = putHeartbeat (d, buf, len, used);
            break;
        case 107:
            state = putTestRequest (d, buf, len, used);
            break;
        case 108:
            state = putTechnicalReject (d, buf, len, used);
            break;
        case 40:
            state = putDeclarationEntry (d, buf, len, used);
            break;
        case 41:
            state = putDeclarationEntryAck (d, buf, len, used);
            break;
        case 42:
            state = putDeclarationNotice (d, buf, len, used);
            break;
        case 43:
            state = putDeclarationCancelAndRefusal (d, buf, len, used);
            break;
        case 44:
            state = putFundPriceInput (d, buf, len, used);
            break;
        case 45:
            state = putFundPriceInputAck (d, buf, len, used);
            break;
        case 46:
            state = putDeclarationEntryReject (d, buf, len, used);
            break;
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }

    uint16_t* frameLength = (uint16_t*)buf;
    *frameLength = used;

    return state;
}

} // namespace neueda
