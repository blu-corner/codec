/*
 * Copyright 2014-2018 Neueda
 */
#include "xetraCodec.h"
#include "xetraPackets.h"
#include "xetraPacketUtils.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new xetraCodec ();
}

static void
getResponseHeaderMEComp (cdr &d, const xetraResponseHeaderMECompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getRequestTime, &xetraResponseHeaderMECompPacket::isRequestTimeValid> (d, RequestTime, packet);
    xetra::setInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getTrdRegTSTimeIn, &xetraResponseHeaderMECompPacket::isTrdRegTSTimeInValid> (d, TrdRegTSTimeIn, packet);
    xetra::setInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getTrdRegTSTimeOut, &xetraResponseHeaderMECompPacket::isTrdRegTSTimeOutValid> (d, TrdRegTSTimeOut, packet);
    xetra::setInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getResponseIn, &xetraResponseHeaderMECompPacket::isResponseInValid> (d, ResponseIn, packet);
    xetra::setInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getSendingTime, &xetraResponseHeaderMECompPacket::isSendingTimeValid> (d, SendingTime, packet);
    xetra::setInteger<uint32_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getMsgSeqNum, &xetraResponseHeaderMECompPacket::isMsgSeqNumValid> (d, MsgSeqNum, packet);
    xetra::setInteger<uint16_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getPartitionID, &xetraResponseHeaderMECompPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setInteger<int8_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getApplID, &xetraResponseHeaderMECompPacket::isApplIDValid> (d, ApplID, packet);
    xetra::setString<xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getApplMsgID, &xetraResponseHeaderMECompPacket::isApplMsgIDValid> (d, ApplMsgID, packet);
    xetra::setInteger<int8_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::getLastFragment, &xetraResponseHeaderMECompPacket::isLastFragmentValid> (d, LastFragment, packet);
}

static void
getOrderBookItemGrpComp (cdr &d, const xetraOrderBookItemGrpCompPacket& packet)
{
    xetra::setInteger<int64_t, xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getSecurityID, &xetraOrderBookItemGrpCompPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getBestBidPx, &xetraOrderBookItemGrpCompPacket::isBestBidPxValid> (d, BestBidPx, packet);
    xetra::setDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getBestBidSize, &xetraOrderBookItemGrpCompPacket::isBestBidSizeValid> (d, BestBidSize, packet);
    xetra::setDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getBestOfferPx, &xetraOrderBookItemGrpCompPacket::isBestOfferPxValid> (d, BestOfferPx, packet);
    xetra::setDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getBestOfferSize, &xetraOrderBookItemGrpCompPacket::isBestOfferSizeValid> (d, BestOfferSize, packet);
    xetra::setInteger<int8_t, xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getMDBookType, &xetraOrderBookItemGrpCompPacket::isMDBookTypeValid> (d, MDBookType, packet);
    xetra::setString<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::getPad7, &xetraOrderBookItemGrpCompPacket::isPad7Valid> (d, Pad7, packet);
}

static void
getQuoteEntryGrpComp (cdr &d, const xetraQuoteEntryGrpCompPacket& packet)
{
    xetra::setInteger<int64_t, xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::getSecurityID, &xetraQuoteEntryGrpCompPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::getBidPx, &xetraQuoteEntryGrpCompPacket::isBidPxValid> (d, BidPx, packet);
    xetra::setDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::getBidSize, &xetraQuoteEntryGrpCompPacket::isBidSizeValid> (d, BidSize, packet);
    xetra::setDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::getOfferPx, &xetraQuoteEntryGrpCompPacket::isOfferPxValid> (d, OfferPx, packet);
    xetra::setDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::getOfferSize, &xetraQuoteEntryGrpCompPacket::isOfferSizeValid> (d, OfferSize, packet);
}

static void
getResponseHeaderComp (cdr &d, const xetraResponseHeaderCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::getRequestTime, &xetraResponseHeaderCompPacket::isRequestTimeValid> (d, RequestTime, packet);
    xetra::setInteger<uint64_t, xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::getSendingTime, &xetraResponseHeaderCompPacket::isSendingTimeValid> (d, SendingTime, packet);
    xetra::setInteger<uint32_t, xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::getMsgSeqNum, &xetraResponseHeaderCompPacket::isMsgSeqNumValid> (d, MsgSeqNum, packet);
    xetra::setString<xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::getPad4, &xetraResponseHeaderCompPacket::isPad4Valid> (d, Pad4, packet);
}

static void
getNotAffectedOrdersGrpComp (cdr &d, const xetraNotAffectedOrdersGrpCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraNotAffectedOrdersGrpCompPacket, &xetraNotAffectedOrdersGrpCompPacket::getNotAffectedOrderID, &xetraNotAffectedOrdersGrpCompPacket::isNotAffectedOrderIDValid> (d, NotAffectedOrderID, packet);
    xetra::setInteger<uint64_t, xetraNotAffectedOrdersGrpCompPacket, &xetraNotAffectedOrdersGrpCompPacket::getNotAffOrigClOrdID, &xetraNotAffectedOrdersGrpCompPacket::isNotAffOrigClOrdIDValid> (d, NotAffOrigClOrdID, packet);
}

static void
getMessageHeaderInComp (cdr &d, const xetraMessageHeaderInCompPacket& packet)
{
    xetra::setInteger<uint32_t, xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::getBodyLen, &xetraMessageHeaderInCompPacket::isBodyLenValid> (d, BodyLen, packet);
    xetra::setInteger<uint16_t, xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::getTemplateID, &xetraMessageHeaderInCompPacket::isTemplateIDValid> (d, TemplateID, packet);
    xetra::setString<xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::getNetworkMsgID, &xetraMessageHeaderInCompPacket::isNetworkMsgIDValid> (d, NetworkMsgID, packet);
    xetra::setString<xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::getPad2, &xetraMessageHeaderInCompPacket::isPad2Valid> (d, Pad2, packet);
}

static void
getRequestHeaderComp (cdr &d, const xetraRequestHeaderCompPacket& packet)
{
    xetra::setInteger<uint32_t, xetraRequestHeaderCompPacket, &xetraRequestHeaderCompPacket::getMsgSeqNum, &xetraRequestHeaderCompPacket::isMsgSeqNumValid> (d, MsgSeqNum, packet);
    xetra::setInteger<int32_t, xetraRequestHeaderCompPacket, &xetraRequestHeaderCompPacket::getSenderSubID, &xetraRequestHeaderCompPacket::isSenderSubIDValid> (d, SenderSubID, packet);
}

static void
getNotAffectedSecuritiesGrpComp (cdr &d, const xetraNotAffectedSecuritiesGrpCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraNotAffectedSecuritiesGrpCompPacket, &xetraNotAffectedSecuritiesGrpCompPacket::getNotAffectedSecurityID, &xetraNotAffectedSecuritiesGrpCompPacket::isNotAffectedSecurityIDValid> (d, NotAffectedSecurityID, packet);
}

static void
getPartyDetailsGrpComp (cdr &d, const xetraPartyDetailsGrpCompPacket& packet)
{
    xetra::setInteger<uint32_t, xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::getPartyDetailIDExecutingTrader, &xetraPartyDetailsGrpCompPacket::isPartyDetailIDExecutingTraderValid> (d, PartyDetailIDExecutingTrader, packet);
    xetra::setString<xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::getPartyDetailExecutingTrader, &xetraPartyDetailsGrpCompPacket::isPartyDetailExecutingTraderValid> (d, PartyDetailExecutingTrader, packet);
    xetra::setInteger<int8_t, xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::getPartyDetailRoleQualifier, &xetraPartyDetailsGrpCompPacket::isPartyDetailRoleQualifierValid> (d, PartyDetailRoleQualifier, packet);
    xetra::setInteger<int8_t, xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::getPartyDetailStatus, &xetraPartyDetailsGrpCompPacket::isPartyDetailStatusValid> (d, PartyDetailStatus, packet);
    xetra::setString<xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::getPartyDetailDeskID, &xetraPartyDetailsGrpCompPacket::isPartyDetailDeskIDValid> (d, PartyDetailDeskID, packet);
    xetra::setString<xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::getPad1, &xetraPartyDetailsGrpCompPacket::isPad1Valid> (d, Pad1, packet);
}

static void
getNRResponseHeaderMEComp (cdr &d, const xetraNRResponseHeaderMECompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getRequestTime, &xetraNRResponseHeaderMECompPacket::isRequestTimeValid> (d, RequestTime, packet);
    xetra::setInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getTrdRegTSTimeIn, &xetraNRResponseHeaderMECompPacket::isTrdRegTSTimeInValid> (d, TrdRegTSTimeIn, packet);
    xetra::setInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getTrdRegTSTimeOut, &xetraNRResponseHeaderMECompPacket::isTrdRegTSTimeOutValid> (d, TrdRegTSTimeOut, packet);
    xetra::setInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getResponseIn, &xetraNRResponseHeaderMECompPacket::isResponseInValid> (d, ResponseIn, packet);
    xetra::setInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getSendingTime, &xetraNRResponseHeaderMECompPacket::isSendingTimeValid> (d, SendingTime, packet);
    xetra::setInteger<uint32_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getMsgSeqNum, &xetraNRResponseHeaderMECompPacket::isMsgSeqNumValid> (d, MsgSeqNum, packet);
    xetra::setInteger<int8_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getLastFragment, &xetraNRResponseHeaderMECompPacket::isLastFragmentValid> (d, LastFragment, packet);
    xetra::setString<xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::getPad3, &xetraNRResponseHeaderMECompPacket::isPad3Valid> (d, Pad3, packet);
}

static void
getRBCHeaderMEComp (cdr &d, const xetraRBCHeaderMECompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getTrdRegTSTimeOut, &xetraRBCHeaderMECompPacket::isTrdRegTSTimeOutValid> (d, TrdRegTSTimeOut, packet);
    xetra::setInteger<uint64_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getNotificationIn, &xetraRBCHeaderMECompPacket::isNotificationInValid> (d, NotificationIn, packet);
    xetra::setInteger<uint64_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getSendingTime, &xetraRBCHeaderMECompPacket::isSendingTimeValid> (d, SendingTime, packet);
    xetra::setInteger<uint32_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getApplSubID, &xetraRBCHeaderMECompPacket::isApplSubIDValid> (d, ApplSubID, packet);
    xetra::setInteger<uint16_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getPartitionID, &xetraRBCHeaderMECompPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setString<xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getApplMsgID, &xetraRBCHeaderMECompPacket::isApplMsgIDValid> (d, ApplMsgID, packet);
    xetra::setInteger<int8_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getApplID, &xetraRBCHeaderMECompPacket::isApplIDValid> (d, ApplID, packet);
    xetra::setInteger<int8_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getApplResendFlag, &xetraRBCHeaderMECompPacket::isApplResendFlagValid> (d, ApplResendFlag, packet);
    xetra::setInteger<int8_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getLastFragment, &xetraRBCHeaderMECompPacket::isLastFragmentValid> (d, LastFragment, packet);
    xetra::setString<xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::getPad7, &xetraRBCHeaderMECompPacket::isPad7Valid> (d, Pad7, packet);
}

static void
getEnrichmentRulesGrpComp (cdr &d, const xetraEnrichmentRulesGrpCompPacket& packet)
{
    xetra::setInteger<int16_t, xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::getEnrichmentRuleID, &xetraEnrichmentRulesGrpCompPacket::isEnrichmentRuleIDValid> (d, EnrichmentRuleID, packet);
    xetra::setString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::getFreeText1, &xetraEnrichmentRulesGrpCompPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::getFreeText2, &xetraEnrichmentRulesGrpCompPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::getFreeText4, &xetraEnrichmentRulesGrpCompPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::getPad6, &xetraEnrichmentRulesGrpCompPacket::isPad6Valid> (d, Pad6, packet);
}

static void
getSessionsGrpComp (cdr &d, const xetraSessionsGrpCompPacket& packet)
{
    xetra::setInteger<uint32_t, xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::getPartyIDSessionID, &xetraSessionsGrpCompPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setInteger<int8_t, xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::getSessionMode, &xetraSessionsGrpCompPacket::isSessionModeValid> (d, SessionMode, packet);
    xetra::setInteger<int8_t, xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::getSessionSubMode, &xetraSessionsGrpCompPacket::isSessionSubModeValid> (d, SessionSubMode, packet);
    xetra::setString<xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::getPad2, &xetraSessionsGrpCompPacket::isPad2Valid> (d, Pad2, packet);
}

static void
getAffectedOrdGrpComp (cdr &d, const xetraAffectedOrdGrpCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraAffectedOrdGrpCompPacket, &xetraAffectedOrdGrpCompPacket::getAffectedOrderID, &xetraAffectedOrdGrpCompPacket::isAffectedOrderIDValid> (d, AffectedOrderID, packet);
    xetra::setInteger<uint64_t, xetraAffectedOrdGrpCompPacket, &xetraAffectedOrdGrpCompPacket::getAffectedOrigClOrdID, &xetraAffectedOrdGrpCompPacket::isAffectedOrigClOrdIDValid> (d, AffectedOrigClOrdID, packet);
}

static void
getRBCHeaderComp (cdr &d, const xetraRBCHeaderCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getSendingTime, &xetraRBCHeaderCompPacket::isSendingTimeValid> (d, SendingTime, packet);
    xetra::setInteger<uint64_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getApplSeqNum, &xetraRBCHeaderCompPacket::isApplSeqNumValid> (d, ApplSeqNum, packet);
    xetra::setInteger<uint32_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getApplSubID, &xetraRBCHeaderCompPacket::isApplSubIDValid> (d, ApplSubID, packet);
    xetra::setInteger<uint16_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getPartitionID, &xetraRBCHeaderCompPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setInteger<int8_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getApplResendFlag, &xetraRBCHeaderCompPacket::isApplResendFlagValid> (d, ApplResendFlag, packet);
    xetra::setInteger<int8_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getApplID, &xetraRBCHeaderCompPacket::isApplIDValid> (d, ApplID, packet);
    xetra::setInteger<int8_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getLastFragment, &xetraRBCHeaderCompPacket::isLastFragmentValid> (d, LastFragment, packet);
    xetra::setString<xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::getPad7, &xetraRBCHeaderCompPacket::isPad7Valid> (d, Pad7, packet);
}

static void
getTargetPartiesComp (cdr &d, const xetraTargetPartiesCompPacket& packet)
{
    xetra::setInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getSideDisclosureInstruction, &xetraTargetPartiesCompPacket::isSideDisclosureInstructionValid> (d, SideDisclosureInstruction, packet);
    xetra::setInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getPriceDisclosureInstruction, &xetraTargetPartiesCompPacket::isPriceDisclosureInstructionValid> (d, PriceDisclosureInstruction, packet);
    xetra::setInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getLeavesQtyDisclosureInstruction, &xetraTargetPartiesCompPacket::isLeavesQtyDisclosureInstructionValid> (d, LeavesQtyDisclosureInstruction, packet);
    xetra::setInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getLastPxDisclosureInstruction, &xetraTargetPartiesCompPacket::isLastPxDisclosureInstructionValid> (d, LastPxDisclosureInstruction, packet);
    xetra::setInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getLastQtyDisclosureInstruction, &xetraTargetPartiesCompPacket::isLastQtyDisclosureInstructionValid> (d, LastQtyDisclosureInstruction, packet);
    xetra::setInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getQuoteInstruction, &xetraTargetPartiesCompPacket::isQuoteInstructionValid> (d, QuoteInstruction, packet);
    xetra::setString<xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getTargetPartyExecutingFirm, &xetraTargetPartiesCompPacket::isTargetPartyExecutingFirmValid> (d, TargetPartyExecutingFirm, packet);
    xetra::setString<xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getTargetPartyExecutingTrader, &xetraTargetPartiesCompPacket::isTargetPartyExecutingTraderValid> (d, TargetPartyExecutingTrader, packet);
    xetra::setString<xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::getPad7, &xetraTargetPartiesCompPacket::isPad7Valid> (d, Pad7, packet);
}

static void
getNotifHeaderComp (cdr &d, const xetraNotifHeaderCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraNotifHeaderCompPacket, &xetraNotifHeaderCompPacket::getSendingTime, &xetraNotifHeaderCompPacket::isSendingTimeValid> (d, SendingTime, packet);
}

static void
getMessageHeaderOutComp (cdr &d, const xetraMessageHeaderOutCompPacket& packet)
{
    xetra::setInteger<uint32_t, xetraMessageHeaderOutCompPacket, &xetraMessageHeaderOutCompPacket::getBodyLen, &xetraMessageHeaderOutCompPacket::isBodyLenValid> (d, BodyLen, packet);
    xetra::setInteger<uint16_t, xetraMessageHeaderOutCompPacket, &xetraMessageHeaderOutCompPacket::getTemplateID, &xetraMessageHeaderOutCompPacket::isTemplateIDValid> (d, TemplateID, packet);
    xetra::setString<xetraMessageHeaderOutCompPacket, &xetraMessageHeaderOutCompPacket::getPad2, &xetraMessageHeaderOutCompPacket::isPad2Valid> (d, Pad2, packet);
}

static void
getNRBCHeaderComp (cdr &d, const xetraNRBCHeaderCompPacket& packet)
{
    xetra::setInteger<uint64_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::getSendingTime, &xetraNRBCHeaderCompPacket::isSendingTimeValid> (d, SendingTime, packet);
    xetra::setInteger<uint32_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::getApplSubID, &xetraNRBCHeaderCompPacket::isApplSubIDValid> (d, ApplSubID, packet);
    xetra::setInteger<int8_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::getApplID, &xetraNRBCHeaderCompPacket::isApplIDValid> (d, ApplID, packet);
    xetra::setInteger<int8_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::getLastFragment, &xetraNRBCHeaderCompPacket::isLastFragmentValid> (d, LastFragment, packet);
    xetra::setString<xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::getPad2, &xetraNRBCHeaderCompPacket::isPad2Valid> (d, Pad2, packet);
}

static void
getSideAllocGrpBCComp (cdr &d, const xetraSideAllocGrpBCCompPacket& packet)
{
    xetra::setDouble<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getAllocQty, &xetraSideAllocGrpBCCompPacket::isAllocQtyValid> (d, AllocQty, packet);
    xetra::setInteger<uint32_t, xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getIndividualAllocID, &xetraSideAllocGrpBCCompPacket::isIndividualAllocIDValid> (d, IndividualAllocID, packet);
    xetra::setString<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getPartyExecutingFirm, &xetraSideAllocGrpBCCompPacket::isPartyExecutingFirmValid> (d, PartyExecutingFirm, packet);
    xetra::setString<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getPartyExecutingTrader, &xetraSideAllocGrpBCCompPacket::isPartyExecutingTraderValid> (d, PartyExecutingTrader, packet);
    xetra::setInteger<int8_t, xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getSide, &xetraSideAllocGrpBCCompPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getTradeAllocStatus, &xetraSideAllocGrpBCCompPacket::isTradeAllocStatusValid> (d, TradeAllocStatus, packet);
    xetra::setString<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::getPad7, &xetraSideAllocGrpBCCompPacket::isPad7Valid> (d, Pad7, packet);
}

static void
getSideAllocGrpComp (cdr &d, const xetraSideAllocGrpCompPacket& packet)
{
    xetra::setDouble<xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::getAllocQty, &xetraSideAllocGrpCompPacket::isAllocQtyValid> (d, AllocQty, packet);
    xetra::setInteger<uint32_t, xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::getIndividualAllocID, &xetraSideAllocGrpCompPacket::isIndividualAllocIDValid> (d, IndividualAllocID, packet);
    xetra::setInteger<int8_t, xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::getSide, &xetraSideAllocGrpCompPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::getPartyExecutingFirm, &xetraSideAllocGrpCompPacket::isPartyExecutingFirmValid> (d, PartyExecutingFirm, packet);
    xetra::setString<xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::getPartyExecutingTrader, &xetraSideAllocGrpCompPacket::isPartyExecutingTraderValid> (d, PartyExecutingTrader, packet);
}

static void
getFillsGrpComp (cdr &d, const xetraFillsGrpCompPacket& packet)
{
    xetra::setDouble<xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::getFillPx, &xetraFillsGrpCompPacket::isFillPxValid> (d, FillPx, packet);
    xetra::setDouble<xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::getFillQty, &xetraFillsGrpCompPacket::isFillQtyValid> (d, FillQty, packet);
    xetra::setInteger<uint32_t, xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::getFillMatchID, &xetraFillsGrpCompPacket::isFillMatchIDValid> (d, FillMatchID, packet);
    xetra::setInteger<int32_t, xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::getFillExecID, &xetraFillsGrpCompPacket::isFillExecIDValid> (d, FillExecID, packet);
    xetra::setInteger<int8_t, xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::getFillLiquidityInd, &xetraFillsGrpCompPacket::isFillLiquidityIndValid> (d, FillLiquidityInd, packet);
    xetra::setString<xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::getPad7, &xetraFillsGrpCompPacket::isPad7Valid> (d, Pad7, packet);
}

static void
getQuoteEntryAckGrpComp (cdr &d, const xetraQuoteEntryAckGrpCompPacket& packet)
{
    xetra::setInteger<int64_t, xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::getSecurityID, &xetraQuoteEntryAckGrpCompPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::getBidCxlSize, &xetraQuoteEntryAckGrpCompPacket::isBidCxlSizeValid> (d, BidCxlSize, packet);
    xetra::setDouble<xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::getOfferCxlSize, &xetraQuoteEntryAckGrpCompPacket::isOfferCxlSizeValid> (d, OfferCxlSize, packet);
    xetra::setInteger<int32_t, xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::getQuoteEntryRejectReason, &xetraQuoteEntryAckGrpCompPacket::isQuoteEntryRejectReasonValid> (d, QuoteEntryRejectReason, packet);
    xetra::setInteger<int8_t, xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::getQuoteEntryStatus, &xetraQuoteEntryAckGrpCompPacket::isQuoteEntryStatusValid> (d, QuoteEntryStatus, packet);
    xetra::setString<xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::getPad3, &xetraQuoteEntryAckGrpCompPacket::isPad3Valid> (d, Pad3, packet);
}

static void
getQuoteEventGrpComp (cdr &d, const xetraQuoteEventGrpCompPacket& packet)
{
    xetra::setInteger<int64_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getSecurityID, &xetraQuoteEventGrpCompPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventPx, &xetraQuoteEventGrpCompPacket::isQuoteEventPxValid> (d, QuoteEventPx, packet);
    xetra::setDouble<xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventQty, &xetraQuoteEventGrpCompPacket::isQuoteEventQtyValid> (d, QuoteEventQty, packet);
    xetra::setInteger<uint64_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteMsgID, &xetraQuoteEventGrpCompPacket::isQuoteMsgIDValid> (d, QuoteMsgID, packet);
    xetra::setInteger<uint32_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventMatchID, &xetraQuoteEventGrpCompPacket::isQuoteEventMatchIDValid> (d, QuoteEventMatchID, packet);
    xetra::setInteger<int32_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventExecID, &xetraQuoteEventGrpCompPacket::isQuoteEventExecIDValid> (d, QuoteEventExecID, packet);
    xetra::setInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventType, &xetraQuoteEventGrpCompPacket::isQuoteEventTypeValid> (d, QuoteEventType, packet);
    xetra::setInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventSide, &xetraQuoteEventGrpCompPacket::isQuoteEventSideValid> (d, QuoteEventSide, packet);
    xetra::setInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventLiquidityInd, &xetraQuoteEventGrpCompPacket::isQuoteEventLiquidityIndValid> (d, QuoteEventLiquidityInd, packet);
    xetra::setInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getQuoteEventReason, &xetraQuoteEventGrpCompPacket::isQuoteEventReasonValid> (d, QuoteEventReason, packet);
    xetra::setString<xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::getPad4, &xetraQuoteEventGrpCompPacket::isPad4Valid> (d, Pad4, packet);
}

static void
getSecurityStatusEventGrpComp (cdr &d, const xetraSecurityStatusEventGrpCompPacket& packet)
{
    xetra::setDouble<xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::getEventPx, &xetraSecurityStatusEventGrpCompPacket::isEventPxValid> (d, EventPx, packet);
    xetra::setInteger<int32_t, xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::getEventDate, &xetraSecurityStatusEventGrpCompPacket::isEventDateValid> (d, EventDate, packet);
    xetra::setInteger<int8_t, xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::getEventType, &xetraSecurityStatusEventGrpCompPacket::isEventTypeValid> (d, EventType, packet);
    xetra::setString<xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::getPad3, &xetraSecurityStatusEventGrpCompPacket::isPad3Valid> (d, Pad3, packet);
}


void
xetraCodec::getApproveTESTradeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraApproveTESTradeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ApproveTESTradeRequest");
    d.setString (MessageName, "ApproveTESTradeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPartyIDClientID, &xetraApproveTESTradeRequestPacket::isPartyIDClientIDValid> (d, PartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraApproveTESTradeRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getExecutingTrader, &xetraApproveTESTradeRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setDouble<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getAllocQty, &xetraApproveTESTradeRequestPacket::isAllocQtyValid> (d, AllocQty, packet);
    xetra::setInteger<uint32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPackageID, &xetraApproveTESTradeRequestPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<uint32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getAllocID, &xetraApproveTESTradeRequestPacket::isAllocIDValid> (d, AllocID, packet);
    xetra::setInteger<uint32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getTESExecID, &xetraApproveTESTradeRequestPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<int32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getMarketSegmentID, &xetraApproveTESTradeRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int16_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getTrdType, &xetraApproveTESTradeRequestPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getTradingCapacity, &xetraApproveTESTradeRequestPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getTradeReportType, &xetraApproveTESTradeRequestPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getSide, &xetraApproveTESTradeRequestPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getValueCheckTypeValue, &xetraApproveTESTradeRequestPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getValueCheckTypeQuantity, &xetraApproveTESTradeRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getOrderAttributeLiquidityProvision, &xetraApproveTESTradeRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraApproveTESTradeRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getExecutingTraderQualifier, &xetraApproveTESTradeRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getTradeReportID, &xetraApproveTESTradeRequestPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPartyExecutingFirm, &xetraApproveTESTradeRequestPacket::isPartyExecutingFirmValid> (d, PartyExecutingFirm, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPartyExecutingTrader, &xetraApproveTESTradeRequestPacket::isPartyExecutingTraderValid> (d, PartyExecutingTrader, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getFreeText1, &xetraApproveTESTradeRequestPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getFreeText2, &xetraApproveTESTradeRequestPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getFreeText4, &xetraApproveTESTradeRequestPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::getPad7, &xetraApproveTESTradeRequestPacket::isPad7Valid> (d, Pad7, packet);
}

void
xetraCodec::getBESTQuoteExecutionReport (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraBESTQuoteExecutionReportPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize BESTQuoteExecutionReport");
    d.setString (MessageName, "BESTQuoteExecutionReport");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getExecID, &xetraBESTQuoteExecutionReportPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<uint64_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteMsgID, &xetraBESTQuoteExecutionReportPacket::isQuoteMsgIDValid> (d, QuoteMsgID, packet);
    xetra::setInteger<int64_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getSecurityID, &xetraBESTQuoteExecutionReportPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteEventPx, &xetraBESTQuoteExecutionReportPacket::isQuoteEventPxValid> (d, QuoteEventPx, packet);
    xetra::setDouble<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteEventQty, &xetraBESTQuoteExecutionReportPacket::isQuoteEventQtyValid> (d, QuoteEventQty, packet);
    xetra::setDouble<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getReservedSize, &xetraBESTQuoteExecutionReportPacket::isReservedSizeValid> (d, ReservedSize, packet);
    xetra::setInteger<int32_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getMarketSegmentID, &xetraBESTQuoteExecutionReportPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteEventMatchID, &xetraBESTQuoteExecutionReportPacket::isQuoteEventMatchIDValid> (d, QuoteEventMatchID, packet);
    xetra::setInteger<int32_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteEventExecID, &xetraBESTQuoteExecutionReportPacket::isQuoteEventExecIDValid> (d, QuoteEventExecID, packet);
    xetra::setInteger<int8_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteEventType, &xetraBESTQuoteExecutionReportPacket::isQuoteEventTypeValid> (d, QuoteEventType, packet);
    xetra::setInteger<int8_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getQuoteEventSide, &xetraBESTQuoteExecutionReportPacket::isQuoteEventSideValid> (d, QuoteEventSide, packet);
    xetra::setString<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::getPad2, &xetraBESTQuoteExecutionReportPacket::isPad2Valid> (d, Pad2, packet);
}

void
xetraCodec::getBESTQuoteResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraBESTQuoteResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize BESTQuoteResponse");
    d.setString (MessageName, "BESTQuoteResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getQuoteID, &xetraBESTQuoteResponsePacket::isQuoteIDValid> (d, QuoteID, packet);
    xetra::setInteger<uint64_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getQuoteResponseID, &xetraBESTQuoteResponsePacket::isQuoteResponseIDValid> (d, QuoteResponseID, packet);
    xetra::setInteger<int64_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getSecurityID, &xetraBESTQuoteResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getBidCxlSize, &xetraBESTQuoteResponsePacket::isBidCxlSizeValid> (d, BidCxlSize, packet);
    xetra::setDouble<xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getOfferCxlSize, &xetraBESTQuoteResponsePacket::isOfferCxlSizeValid> (d, OfferCxlSize, packet);
    xetra::setInteger<int32_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getMarketSegmentID, &xetraBESTQuoteResponsePacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setString<xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::getPad4, &xetraBESTQuoteResponsePacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getBroadcastErrorNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraBroadcastErrorNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize BroadcastErrorNotification");
    d.setString (MessageName, "BroadcastErrorNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNotifHeaderComp (d, packet.getNotifHeader ());
    xetra::setInteger<uint32_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getApplIDStatus, &xetraBroadcastErrorNotificationPacket::isApplIDStatusValid> (d, ApplIDStatus, packet);
    xetra::setInteger<uint32_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getRefApplSubID, &xetraBroadcastErrorNotificationPacket::isRefApplSubIDValid> (d, RefApplSubID, packet);
    xetra::setInteger<int16_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getVarTextLen, &xetraBroadcastErrorNotificationPacket::isVarTextLenValid> (d, VarTextLen, packet);
    xetra::setInteger<int8_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getRefApplID, &xetraBroadcastErrorNotificationPacket::isRefApplIDValid> (d, RefApplID, packet);
    xetra::setInteger<int8_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getSessionStatus, &xetraBroadcastErrorNotificationPacket::isSessionStatusValid> (d, SessionStatus, packet);
    xetra::setString<xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getPad4, &xetraBroadcastErrorNotificationPacket::isPad4Valid> (d, Pad4, packet);
    xetra::setString<xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::getVarText, &xetraBroadcastErrorNotificationPacket::isVarTextValid> (d, VarText, packet);
}

void
xetraCodec::getCrossRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraCrossRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize CrossRequest");
    d.setString (MessageName, "CrossRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int64_t, xetraCrossRequestPacket, &xetraCrossRequestPacket::getSecurityID, &xetraCrossRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraCrossRequestPacket, &xetraCrossRequestPacket::getOrderQty, &xetraCrossRequestPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setInteger<int32_t, xetraCrossRequestPacket, &xetraCrossRequestPacket::getMarketSegmentID, &xetraCrossRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setString<xetraCrossRequestPacket, &xetraCrossRequestPacket::getPad4, &xetraCrossRequestPacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getCrossRequestResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraCrossRequestResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize CrossRequestResponse");
    d.setString (MessageName, "CrossRequestResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraCrossRequestResponsePacket, &xetraCrossRequestResponsePacket::getExecID, &xetraCrossRequestResponsePacket::isExecIDValid> (d, ExecID, packet);
}

void
xetraCodec::getDeleteAllOrderBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllOrderBroadcast");
    d.setString (MessageName, "DeleteAllOrderBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getMassActionReportID, &xetraDeleteAllOrderBroadcastPacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int64_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getSecurityID, &xetraDeleteAllOrderBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getPrice, &xetraDeleteAllOrderBroadcastPacket::isPriceValid> (d, Price, packet);
    xetra::setInteger<int32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getMarketSegmentID, &xetraDeleteAllOrderBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getTargetPartyIDSessionID, &xetraDeleteAllOrderBroadcastPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<int32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getTargetPartyIDExecutingTrader, &xetraDeleteAllOrderBroadcastPacket::isTargetPartyIDExecutingTraderValid> (d, TargetPartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getPartyIDEnteringTrader, &xetraDeleteAllOrderBroadcastPacket::isPartyIDEnteringTraderValid> (d, PartyIDEnteringTrader, packet);
    xetra::setInteger<int16_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getNoNotAffectedOrders, &xetraDeleteAllOrderBroadcastPacket::isNoNotAffectedOrdersValid> (d, NoNotAffectedOrders, packet);
    xetra::setInteger<int16_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getNoAffectedOrders, &xetraDeleteAllOrderBroadcastPacket::isNoAffectedOrdersValid> (d, NoAffectedOrders, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getPartyIDEnteringFirm, &xetraDeleteAllOrderBroadcastPacket::isPartyIDEnteringFirmValid> (d, PartyIDEnteringFirm, packet);
    xetra::setInteger<uint8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getMassActionReason, &xetraDeleteAllOrderBroadcastPacket::isMassActionReasonValid> (d, MassActionReason, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getExecInst, &xetraDeleteAllOrderBroadcastPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::getSide, &xetraDeleteAllOrderBroadcastPacket::isSideValid> (d, Side, packet);
    const vector<xetraNotAffectedOrdersGrpCompPacket>& vNotAffectedOrdersGrp = packet.getNotAffectedOrdersGrp ();
    for (size_t i = 0; i < vNotAffectedOrdersGrp.size (); i++)
    {
        cdr c;
        getNotAffectedOrdersGrpComp (c, vNotAffectedOrdersGrp[i]);
        d.appendArray (NotAffectedOrdersGrp, c);
    }
    const vector<xetraAffectedOrdGrpCompPacket>& vAffectedOrdGrp = packet.getAffectedOrdGrp ();
    for (size_t i = 0; i < vAffectedOrdGrp.size (); i++)
    {
        cdr c;
        getAffectedOrdGrpComp (c, vAffectedOrdGrp[i]);
        d.appendArray (AffectedOrdGrp, c);
    }
}

void
xetraCodec::getDeleteAllOrderNRResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderNRResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllOrderNRResponse");
    d.setString (MessageName, "DeleteAllOrderNRResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteAllOrderNRResponsePacket, &xetraDeleteAllOrderNRResponsePacket::getMassActionReportID, &xetraDeleteAllOrderNRResponsePacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
}

void
xetraCodec::getDeleteAllOrderQuoteEventBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderQuoteEventBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllOrderQuoteEventBroadcast");
    d.setString (MessageName, "DeleteAllOrderQuoteEventBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::getMassActionReportID, &xetraDeleteAllOrderQuoteEventBroadcastPacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int64_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::getSecurityID, &xetraDeleteAllOrderQuoteEventBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<int32_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::getMarketSegmentID, &xetraDeleteAllOrderQuoteEventBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint8_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::getMassActionReason, &xetraDeleteAllOrderQuoteEventBroadcastPacket::isMassActionReasonValid> (d, MassActionReason, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::getExecInst, &xetraDeleteAllOrderQuoteEventBroadcastPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setString<xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::getPad2, &xetraDeleteAllOrderQuoteEventBroadcastPacket::isPad2Valid> (d, Pad2, packet);
}

void
xetraCodec::getDeleteAllOrderRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllOrderRequest");
    d.setString (MessageName, "DeleteAllOrderRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int64_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getSecurityID, &xetraDeleteAllOrderRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getPrice, &xetraDeleteAllOrderRequestPacket::isPriceValid> (d, Price, packet);
    xetra::setInteger<uint64_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraDeleteAllOrderRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getExecutingTrader, &xetraDeleteAllOrderRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getMarketSegmentID, &xetraDeleteAllOrderRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getTargetPartyIDSessionID, &xetraDeleteAllOrderRequestPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<int32_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getTargetPartyIDExecutingTrader, &xetraDeleteAllOrderRequestPacket::isTargetPartyIDExecutingTraderValid> (d, TargetPartyIDExecutingTrader, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getSide, &xetraDeleteAllOrderRequestPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraDeleteAllOrderRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getExecutingTraderQualifier, &xetraDeleteAllOrderRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::getPad1, &xetraDeleteAllOrderRequestPacket::isPad1Valid> (d, Pad1, packet);
}

void
xetraCodec::getDeleteAllOrderResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllOrderResponse");
    d.setString (MessageName, "DeleteAllOrderResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderMEComp (d, packet.getResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::getMassActionReportID, &xetraDeleteAllOrderResponsePacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int16_t, xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::getNoNotAffectedOrders, &xetraDeleteAllOrderResponsePacket::isNoNotAffectedOrdersValid> (d, NoNotAffectedOrders, packet);
    xetra::setInteger<int16_t, xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::getNoAffectedOrders, &xetraDeleteAllOrderResponsePacket::isNoAffectedOrdersValid> (d, NoAffectedOrders, packet);
    xetra::setString<xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::getPad4, &xetraDeleteAllOrderResponsePacket::isPad4Valid> (d, Pad4, packet);
    const vector<xetraNotAffectedOrdersGrpCompPacket>& vNotAffectedOrdersGrp = packet.getNotAffectedOrdersGrp ();
    for (size_t i = 0; i < vNotAffectedOrdersGrp.size (); i++)
    {
        cdr c;
        getNotAffectedOrdersGrpComp (c, vNotAffectedOrdersGrp[i]);
        d.appendArray (NotAffectedOrdersGrp, c);
    }
    const vector<xetraAffectedOrdGrpCompPacket>& vAffectedOrdGrp = packet.getAffectedOrdGrp ();
    for (size_t i = 0; i < vAffectedOrdGrp.size (); i++)
    {
        cdr c;
        getAffectedOrdGrpComp (c, vAffectedOrdGrp[i]);
        d.appendArray (AffectedOrdGrp, c);
    }
}

void
xetraCodec::getDeleteAllQuoteBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllQuoteBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllQuoteBroadcast");
    d.setString (MessageName, "DeleteAllQuoteBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getMassActionReportID, &xetraDeleteAllQuoteBroadcastPacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int64_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getSecurityID, &xetraDeleteAllQuoteBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<int32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getMarketSegmentID, &xetraDeleteAllQuoteBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getTargetPartyIDSessionID, &xetraDeleteAllQuoteBroadcastPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<uint32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getPartyIDEnteringTrader, &xetraDeleteAllQuoteBroadcastPacket::isPartyIDEnteringTraderValid> (d, PartyIDEnteringTrader, packet);
    xetra::setInteger<int32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getTargetPartyIDExecutingTrader, &xetraDeleteAllQuoteBroadcastPacket::isTargetPartyIDExecutingTraderValid> (d, TargetPartyIDExecutingTrader, packet);
    xetra::setInteger<int16_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getNoNotAffectedSecurities, &xetraDeleteAllQuoteBroadcastPacket::isNoNotAffectedSecuritiesValid> (d, NoNotAffectedSecurities, packet);
    xetra::setInteger<uint8_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getMassActionReason, &xetraDeleteAllQuoteBroadcastPacket::isMassActionReasonValid> (d, MassActionReason, packet);
    xetra::setInteger<int8_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getPartyIDEnteringFirm, &xetraDeleteAllQuoteBroadcastPacket::isPartyIDEnteringFirmValid> (d, PartyIDEnteringFirm, packet);
    xetra::setString<xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getTargetPartyIDDeskID, &xetraDeleteAllQuoteBroadcastPacket::isTargetPartyIDDeskIDValid> (d, TargetPartyIDDeskID, packet);
    xetra::setString<xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::getPad1, &xetraDeleteAllQuoteBroadcastPacket::isPad1Valid> (d, Pad1, packet);
    const vector<xetraNotAffectedSecuritiesGrpCompPacket>& vNotAffectedSecuritiesGrp = packet.getNotAffectedSecuritiesGrp ();
    for (size_t i = 0; i < vNotAffectedSecuritiesGrp.size (); i++)
    {
        cdr c;
        getNotAffectedSecuritiesGrpComp (c, vNotAffectedSecuritiesGrp[i]);
        d.appendArray (NotAffectedSecuritiesGrp, c);
    }
}

void
xetraCodec::getDeleteAllQuoteRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllQuoteRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllQuoteRequest");
    d.setString (MessageName, "DeleteAllQuoteRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraDeleteAllQuoteRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getExecutingTrader, &xetraDeleteAllQuoteRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getMarketSegmentID, &xetraDeleteAllQuoteRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getTargetPartyIDSessionID, &xetraDeleteAllQuoteRequestPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<int8_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraDeleteAllQuoteRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getExecutingTraderQualifier, &xetraDeleteAllQuoteRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::getPad6, &xetraDeleteAllQuoteRequestPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getDeleteAllQuoteResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteAllQuoteResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteAllQuoteResponse");
    d.setString (MessageName, "DeleteAllQuoteResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteAllQuoteResponsePacket, &xetraDeleteAllQuoteResponsePacket::getMassActionReportID, &xetraDeleteAllQuoteResponsePacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int16_t, xetraDeleteAllQuoteResponsePacket, &xetraDeleteAllQuoteResponsePacket::getNoNotAffectedSecurities, &xetraDeleteAllQuoteResponsePacket::isNoNotAffectedSecuritiesValid> (d, NoNotAffectedSecurities, packet);
    xetra::setString<xetraDeleteAllQuoteResponsePacket, &xetraDeleteAllQuoteResponsePacket::getPad6, &xetraDeleteAllQuoteResponsePacket::isPad6Valid> (d, Pad6, packet);
    const vector<xetraNotAffectedSecuritiesGrpCompPacket>& vNotAffectedSecuritiesGrp = packet.getNotAffectedSecuritiesGrp ();
    for (size_t i = 0; i < vNotAffectedSecuritiesGrp.size (); i++)
    {
        cdr c;
        getNotAffectedSecuritiesGrpComp (c, vNotAffectedSecuritiesGrp[i]);
        d.appendArray (NotAffectedSecuritiesGrp, c);
    }
}

void
xetraCodec::getDeleteOrderBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteOrderBroadcast");
    d.setString (MessageName, "DeleteOrderBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getOrderID, &xetraDeleteOrderBroadcastPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getClOrdID, &xetraDeleteOrderBroadcastPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getOrigClOrdID, &xetraDeleteOrderBroadcastPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getSecurityID, &xetraDeleteOrderBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getExecID, &xetraDeleteOrderBroadcastPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getCumQty, &xetraDeleteOrderBroadcastPacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getCxlQty, &xetraDeleteOrderBroadcastPacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setInteger<uint32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getOrderIDSfx, &xetraDeleteOrderBroadcastPacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getMarketSegmentID, &xetraDeleteOrderBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getPartyIDEnteringTrader, &xetraDeleteOrderBroadcastPacket::isPartyIDEnteringTraderValid> (d, PartyIDEnteringTrader, packet);
    xetra::setInteger<uint32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getPartyIDSessionID, &xetraDeleteOrderBroadcastPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setInteger<int16_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getExecRestatementReason, &xetraDeleteOrderBroadcastPacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getPartyIDEnteringFirm, &xetraDeleteOrderBroadcastPacket::isPartyIDEnteringFirmValid> (d, PartyIDEnteringFirm, packet);
    xetra::setString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getOrdStatus, &xetraDeleteOrderBroadcastPacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getExecType, &xetraDeleteOrderBroadcastPacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int8_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getSide, &xetraDeleteOrderBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getFIXClOrdID, &xetraDeleteOrderBroadcastPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::getPad6, &xetraDeleteOrderBroadcastPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getDeleteOrderNRResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderNRResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteOrderNRResponse");
    d.setString (MessageName, "DeleteOrderNRResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getOrderID, &xetraDeleteOrderNRResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getClOrdID, &xetraDeleteOrderNRResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getOrigClOrdID, &xetraDeleteOrderNRResponsePacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getSecurityID, &xetraDeleteOrderNRResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getExecID, &xetraDeleteOrderNRResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getCumQty, &xetraDeleteOrderNRResponsePacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getCxlQty, &xetraDeleteOrderNRResponsePacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setInteger<uint32_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getOrderIDSfx, &xetraDeleteOrderNRResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setString<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getOrdStatus, &xetraDeleteOrderNRResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getExecType, &xetraDeleteOrderNRResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int16_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::getExecRestatementReason, &xetraDeleteOrderNRResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
}

void
xetraCodec::getDeleteOrderResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteOrderResponse");
    d.setString (MessageName, "DeleteOrderResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderMEComp (d, packet.getResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getOrderID, &xetraDeleteOrderResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getClOrdID, &xetraDeleteOrderResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getOrigClOrdID, &xetraDeleteOrderResponsePacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getSecurityID, &xetraDeleteOrderResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getExecID, &xetraDeleteOrderResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getCumQty, &xetraDeleteOrderResponsePacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getCxlQty, &xetraDeleteOrderResponsePacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setInteger<uint32_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getOrderIDSfx, &xetraDeleteOrderResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setString<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getOrdStatus, &xetraDeleteOrderResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getExecType, &xetraDeleteOrderResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int16_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::getExecRestatementReason, &xetraDeleteOrderResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
}

void
xetraCodec::getDeleteOrderSingleRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderSingleRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteOrderSingleRequest");
    d.setString (MessageName, "DeleteOrderSingleRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getOrderID, &xetraDeleteOrderSingleRequestPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getClOrdID, &xetraDeleteOrderSingleRequestPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getOrigClOrdID, &xetraDeleteOrderSingleRequestPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getSecurityID, &xetraDeleteOrderSingleRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraDeleteOrderSingleRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getExecutingTrader, &xetraDeleteOrderSingleRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getMarketSegmentID, &xetraDeleteOrderSingleRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getTargetPartyIDSessionID, &xetraDeleteOrderSingleRequestPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<int8_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraDeleteOrderSingleRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getExecutingTraderQualifier, &xetraDeleteOrderSingleRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getFIXClOrdID, &xetraDeleteOrderSingleRequestPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setString<xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::getPad2, &xetraDeleteOrderSingleRequestPacket::isPad2Valid> (d, Pad2, packet);
}

void
xetraCodec::getDeleteTESTradeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraDeleteTESTradeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize DeleteTESTradeRequest");
    d.setString (MessageName, "DeleteTESTradeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint32_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getPackageID, &xetraDeleteTESTradeRequestPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<int32_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getMarketSegmentID, &xetraDeleteTESTradeRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getTESExecID, &xetraDeleteTESTradeRequestPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<int16_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getTrdType, &xetraDeleteTESTradeRequestPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getTradeReportType, &xetraDeleteTESTradeRequestPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setString<xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getTradeReportID, &xetraDeleteTESTradeRequestPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::getPad5, &xetraDeleteTESTradeRequestPacket::isPad5Valid> (d, Pad5, packet);
}

void
xetraCodec::getEnterBESTQuoteRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraEnterBESTQuoteRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize EnterBESTQuoteRequest");
    d.setString (MessageName, "EnterBESTQuoteRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getQuoteID, &xetraEnterBESTQuoteRequestPacket::isQuoteIDValid> (d, QuoteID, packet);
    xetra::setInteger<int64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getSecurityID, &xetraEnterBESTQuoteRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getBidPx, &xetraEnterBESTQuoteRequestPacket::isBidPxValid> (d, BidPx, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getBidSize, &xetraEnterBESTQuoteRequestPacket::isBidSizeValid> (d, BidSize, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getReservedBidSize, &xetraEnterBESTQuoteRequestPacket::isReservedBidSizeValid> (d, ReservedBidSize, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getOfferPx, &xetraEnterBESTQuoteRequestPacket::isOfferPxValid> (d, OfferPx, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getOfferSize, &xetraEnterBESTQuoteRequestPacket::isOfferSizeValid> (d, OfferSize, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getReservedOfferSize, &xetraEnterBESTQuoteRequestPacket::isReservedOfferSizeValid> (d, ReservedOfferSize, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getPegOffsetValueBidPx, &xetraEnterBESTQuoteRequestPacket::isPegOffsetValueBidPxValid> (d, PegOffsetValueBidPx, packet);
    xetra::setDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getPegOffsetValueOfferPx, &xetraEnterBESTQuoteRequestPacket::isPegOffsetValueOfferPxValid> (d, PegOffsetValueOfferPx, packet);
    xetra::setInteger<uint64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraEnterBESTQuoteRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getExecutingTrader, &xetraEnterBESTQuoteRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getMarketSegmentID, &xetraEnterBESTQuoteRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int16_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getEnrichmentRuleID, &xetraEnterBESTQuoteRequestPacket::isEnrichmentRuleIDValid> (d, EnrichmentRuleID, packet);
    xetra::setInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getOrderAttributeLiquidityProvision, &xetraEnterBESTQuoteRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getValueCheckTypeQuantity, &xetraEnterBESTQuoteRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraEnterBESTQuoteRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getExecutingTraderQualifier, &xetraEnterBESTQuoteRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::getPad6, &xetraEnterBESTQuoteRequestPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getEnterTESTradeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraEnterTESTradeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize EnterTESTradeRequest");
    d.setString (MessageName, "EnterTESTradeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int64_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getSecurityID, &xetraEnterTESTradeRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getLastPx, &xetraEnterTESTradeRequestPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setInteger<uint64_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getTransBkdTime, &xetraEnterTESTradeRequestPacket::isTransBkdTimeValid> (d, TransBkdTime, packet);
    xetra::setDouble<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getSettlCurrFxRate, &xetraEnterTESTradeRequestPacket::isSettlCurrFxRateValid> (d, SettlCurrFxRate, packet);
    xetra::setInteger<int32_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getMarketSegmentID, &xetraEnterTESTradeRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int32_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getSettlDate, &xetraEnterTESTradeRequestPacket::isSettlDateValid> (d, SettlDate, packet);
    xetra::setInteger<int16_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getTrdType, &xetraEnterTESTradeRequestPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getTradeReportType, &xetraEnterTESTradeRequestPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getNoSideAllocs, &xetraEnterTESTradeRequestPacket::isNoSideAllocsValid> (d, NoSideAllocs, packet);
    xetra::setString<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getTradeReportText, &xetraEnterTESTradeRequestPacket::isTradeReportTextValid> (d, TradeReportText, packet);
    xetra::setString<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getTradeReportID, &xetraEnterTESTradeRequestPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::getPad4, &xetraEnterTESTradeRequestPacket::isPad4Valid> (d, Pad4, packet);
    const vector<xetraSideAllocGrpCompPacket>& vSideAllocGrp = packet.getSideAllocGrp ();
    for (size_t i = 0; i < vSideAllocGrp.size (); i++)
    {
        cdr c;
        getSideAllocGrpComp (c, vSideAllocGrp[i]);
        d.appendArray (SideAllocGrp, c);
    }
}

void
xetraCodec::getExtendedDeletionReport (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraExtendedDeletionReportPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ExtendedDeletionReport");
    d.setString (MessageName, "ExtendedDeletionReport");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getOrderID, &xetraExtendedDeletionReportPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getClOrdID, &xetraExtendedDeletionReportPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getOrigClOrdID, &xetraExtendedDeletionReportPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getSecurityID, &xetraExtendedDeletionReportPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getExecID, &xetraExtendedDeletionReportPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getTrdRegTSEntryTime, &xetraExtendedDeletionReportPacket::isTrdRegTSEntryTimeValid> (d, TrdRegTSEntryTime, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPrice, &xetraExtendedDeletionReportPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getLeavesQty, &xetraExtendedDeletionReportPacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getCumQty, &xetraExtendedDeletionReportPacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getCxlQty, &xetraExtendedDeletionReportPacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getOrderQty, &xetraExtendedDeletionReportPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getDisplayQty, &xetraExtendedDeletionReportPacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getDisplayLowQty, &xetraExtendedDeletionReportPacket::isDisplayLowQtyValid> (d, DisplayLowQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getDisplayHighQty, &xetraExtendedDeletionReportPacket::isDisplayHighQtyValid> (d, DisplayHighQty, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getStopPx, &xetraExtendedDeletionReportPacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getVolumeDiscoveryPrice, &xetraExtendedDeletionReportPacket::isVolumeDiscoveryPriceValid> (d, VolumeDiscoveryPrice, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPegOffsetValueAbs, &xetraExtendedDeletionReportPacket::isPegOffsetValueAbsValid> (d, PegOffsetValueAbs, packet);
    xetra::setDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPegOffsetValuePct, &xetraExtendedDeletionReportPacket::isPegOffsetValuePctValid> (d, PegOffsetValuePct, packet);
    xetra::setInteger<int32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getMarketSegmentID, &xetraExtendedDeletionReportPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getOrderIDSfx, &xetraExtendedDeletionReportPacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getExpireDate, &xetraExtendedDeletionReportPacket::isExpireDateValid> (d, ExpireDate, packet);
    xetra::setInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getMatchInstCrossID, &xetraExtendedDeletionReportPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPartyIDExecutingUnit, &xetraExtendedDeletionReportPacket::isPartyIDExecutingUnitValid> (d, PartyIDExecutingUnit, packet);
    xetra::setInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPartyIDSessionID, &xetraExtendedDeletionReportPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPartyIDExecutingTrader, &xetraExtendedDeletionReportPacket::isPartyIDExecutingTraderValid> (d, PartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPartyIDEnteringTrader, &xetraExtendedDeletionReportPacket::isPartyIDEnteringTraderValid> (d, PartyIDEnteringTrader, packet);
    xetra::setInteger<int16_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getExecRestatementReason, &xetraExtendedDeletionReportPacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getOrdStatus, &xetraExtendedDeletionReportPacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getExecType, &xetraExtendedDeletionReportPacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getSide, &xetraExtendedDeletionReportPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getOrdType, &xetraExtendedDeletionReportPacket::isOrdTypeValid> (d, OrdType, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getTradingCapacity, &xetraExtendedDeletionReportPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getTimeInForce, &xetraExtendedDeletionReportPacket::isTimeInForceValid> (d, TimeInForce, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getExecInst, &xetraExtendedDeletionReportPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getTradingSessionSubID, &xetraExtendedDeletionReportPacket::isTradingSessionSubIDValid> (d, TradingSessionSubID, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getApplSeqIndicator, &xetraExtendedDeletionReportPacket::isApplSeqIndicatorValid> (d, ApplSeqIndicator, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getExDestinationType, &xetraExtendedDeletionReportPacket::isExDestinationTypeValid> (d, ExDestinationType, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getFreeText1, &xetraExtendedDeletionReportPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getFreeText2, &xetraExtendedDeletionReportPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getFreeText4, &xetraExtendedDeletionReportPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getFIXClOrdID, &xetraExtendedDeletionReportPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getTriggered, &xetraExtendedDeletionReportPacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::getPad7, &xetraExtendedDeletionReportPacket::isPad7Valid> (d, Pad7, packet);
}

void
xetraCodec::getForcedLogoutNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraForcedLogoutNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ForcedLogoutNotification");
    d.setString (MessageName, "ForcedLogoutNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNotifHeaderComp (d, packet.getNotifHeader ());
    xetra::setInteger<int16_t, xetraForcedLogoutNotificationPacket, &xetraForcedLogoutNotificationPacket::getVarTextLen, &xetraForcedLogoutNotificationPacket::isVarTextLenValid> (d, VarTextLen, packet);
    xetra::setString<xetraForcedLogoutNotificationPacket, &xetraForcedLogoutNotificationPacket::getPad6, &xetraForcedLogoutNotificationPacket::isPad6Valid> (d, Pad6, packet);
    xetra::setString<xetraForcedLogoutNotificationPacket, &xetraForcedLogoutNotificationPacket::getVarText, &xetraForcedLogoutNotificationPacket::isVarTextValid> (d, VarText, packet);
}

void
xetraCodec::getForcedUserLogoutNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraForcedUserLogoutNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ForcedUserLogoutNotification");
    d.setString (MessageName, "ForcedUserLogoutNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNotifHeaderComp (d, packet.getNotifHeader ());
    xetra::setInteger<int8_t, xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::getUserStatus, &xetraForcedUserLogoutNotificationPacket::isUserStatusValid> (d, UserStatus, packet);
    xetra::setString<xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::getPad3, &xetraForcedUserLogoutNotificationPacket::isPad3Valid> (d, Pad3, packet);
    xetra::setInteger<int32_t, xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::getUsername, &xetraForcedUserLogoutNotificationPacket::isUsernameValid> (d, Username, packet);
    xetra::setInteger<int16_t, xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::getVarTextLen, &xetraForcedUserLogoutNotificationPacket::isVarTextLenValid> (d, VarTextLen, packet);
    xetra::setString<xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::getPad6, &xetraForcedUserLogoutNotificationPacket::isPad6Valid> (d, Pad6, packet);
    xetra::setString<xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::getVarText, &xetraForcedUserLogoutNotificationPacket::isVarTextValid> (d, VarText, packet);
}

void
xetraCodec::getGatewayRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraGatewayRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize GatewayRequest");
    d.setString (MessageName, "GatewayRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint32_t, xetraGatewayRequestPacket, &xetraGatewayRequestPacket::getPartyIDSessionID, &xetraGatewayRequestPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setInteger<uint16_t, xetraGatewayRequestPacket, &xetraGatewayRequestPacket::getPartitionID, &xetraGatewayRequestPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setString<xetraGatewayRequestPacket, &xetraGatewayRequestPacket::getDefaultCstmApplVerID, &xetraGatewayRequestPacket::isDefaultCstmApplVerIDValid> (d, DefaultCstmApplVerID, packet);
    xetra::setString<xetraGatewayRequestPacket, &xetraGatewayRequestPacket::getPassword, &xetraGatewayRequestPacket::isPasswordValid> (d, Password, packet);
    xetra::setString<xetraGatewayRequestPacket, &xetraGatewayRequestPacket::getPad4, &xetraGatewayRequestPacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getHeartbeat (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraHeartbeatPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize Heartbeat");
    d.setString (MessageName, "Heartbeat");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
}

void
xetraCodec::getHeartbeatNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraHeartbeatNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize HeartbeatNotification");
    d.setString (MessageName, "HeartbeatNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNotifHeaderComp (d, packet.getNotifHeader ());
}

void
xetraCodec::getInquireEnrichmentRuleIDListRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraInquireEnrichmentRuleIDListRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize InquireEnrichmentRuleIDListRequest");
    d.setString (MessageName, "InquireEnrichmentRuleIDListRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setString<xetraInquireEnrichmentRuleIDListRequestPacket, &xetraInquireEnrichmentRuleIDListRequestPacket::getLastEntityProcessed, &xetraInquireEnrichmentRuleIDListRequestPacket::isLastEntityProcessedValid> (d, LastEntityProcessed, packet);
}

void
xetraCodec::getInquireEnrichmentRuleIDListResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraInquireEnrichmentRuleIDListResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize InquireEnrichmentRuleIDListResponse");
    d.setString (MessageName, "InquireEnrichmentRuleIDListResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setString<xetraInquireEnrichmentRuleIDListResponsePacket, &xetraInquireEnrichmentRuleIDListResponsePacket::getLastEntityProcessed, &xetraInquireEnrichmentRuleIDListResponsePacket::isLastEntityProcessedValid> (d, LastEntityProcessed, packet);
    xetra::setInteger<int16_t, xetraInquireEnrichmentRuleIDListResponsePacket, &xetraInquireEnrichmentRuleIDListResponsePacket::getNoEnrichmentRules, &xetraInquireEnrichmentRuleIDListResponsePacket::isNoEnrichmentRulesValid> (d, NoEnrichmentRules, packet);
    xetra::setString<xetraInquireEnrichmentRuleIDListResponsePacket, &xetraInquireEnrichmentRuleIDListResponsePacket::getPad6, &xetraInquireEnrichmentRuleIDListResponsePacket::isPad6Valid> (d, Pad6, packet);
    const vector<xetraEnrichmentRulesGrpCompPacket>& vEnrichmentRulesGrp = packet.getEnrichmentRulesGrp ();
    for (size_t i = 0; i < vEnrichmentRulesGrp.size (); i++)
    {
        cdr c;
        getEnrichmentRulesGrpComp (c, vEnrichmentRulesGrp[i]);
        d.appendArray (EnrichmentRulesGrp, c);
    }
}

void
xetraCodec::getInquireSessionListRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraInquireSessionListRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize InquireSessionListRequest");
    d.setString (MessageName, "InquireSessionListRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
}

void
xetraCodec::getInquireSessionListResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraInquireSessionListResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize InquireSessionListResponse");
    d.setString (MessageName, "InquireSessionListResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setInteger<int16_t, xetraInquireSessionListResponsePacket, &xetraInquireSessionListResponsePacket::getNoSessions, &xetraInquireSessionListResponsePacket::isNoSessionsValid> (d, NoSessions, packet);
    xetra::setString<xetraInquireSessionListResponsePacket, &xetraInquireSessionListResponsePacket::getPad6, &xetraInquireSessionListResponsePacket::isPad6Valid> (d, Pad6, packet);
    const vector<xetraSessionsGrpCompPacket>& vSessionsGrp = packet.getSessionsGrp ();
    for (size_t i = 0; i < vSessionsGrp.size (); i++)
    {
        cdr c;
        getSessionsGrpComp (c, vSessionsGrp[i]);
        d.appendArray (SessionsGrp, c);
    }
}

void
xetraCodec::getInquireUserRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraInquireUserRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize InquireUserRequest");
    d.setString (MessageName, "InquireUserRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setString<xetraInquireUserRequestPacket, &xetraInquireUserRequestPacket::getLastEntityProcessed, &xetraInquireUserRequestPacket::isLastEntityProcessedValid> (d, LastEntityProcessed, packet);
}

void
xetraCodec::getInquireUserResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraInquireUserResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize InquireUserResponse");
    d.setString (MessageName, "InquireUserResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setString<xetraInquireUserResponsePacket, &xetraInquireUserResponsePacket::getLastEntityProcessed, &xetraInquireUserResponsePacket::isLastEntityProcessedValid> (d, LastEntityProcessed, packet);
    xetra::setInteger<int16_t, xetraInquireUserResponsePacket, &xetraInquireUserResponsePacket::getNoPartyDetails, &xetraInquireUserResponsePacket::isNoPartyDetailsValid> (d, NoPartyDetails, packet);
    xetra::setString<xetraInquireUserResponsePacket, &xetraInquireUserResponsePacket::getPad6, &xetraInquireUserResponsePacket::isPad6Valid> (d, Pad6, packet);
    const vector<xetraPartyDetailsGrpCompPacket>& vPartyDetailsGrp = packet.getPartyDetailsGrp ();
    for (size_t i = 0; i < vPartyDetailsGrp.size (); i++)
    {
        cdr c;
        getPartyDetailsGrpComp (c, vPartyDetailsGrp[i]);
        d.appendArray (PartyDetailsGrp, c);
    }
}

void
xetraCodec::getIssuerNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraIssuerNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize IssuerNotification");
    d.setString (MessageName, "IssuerNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<int64_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getSecurityID, &xetraIssuerNotificationPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getTransactTime, &xetraIssuerNotificationPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getLastPx, &xetraIssuerNotificationPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getPotentialExecVolume, &xetraIssuerNotificationPacket::isPotentialExecVolumeValid> (d, PotentialExecVolume, packet);
    xetra::setDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getLastQty, &xetraIssuerNotificationPacket::isLastQtyValid> (d, LastQty, packet);
    xetra::setDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getImbalanceQty, &xetraIssuerNotificationPacket::isImbalanceQtyValid> (d, ImbalanceQty, packet);
    xetra::setInteger<int32_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getMarketSegmentID, &xetraIssuerNotificationPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getPartyIDSessionID, &xetraIssuerNotificationPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setInteger<int8_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getSecurityTradingStatus, &xetraIssuerNotificationPacket::isSecurityTradingStatusValid> (d, SecurityTradingStatus, packet);
    xetra::setString<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::getPad7, &xetraIssuerNotificationPacket::isPad7Valid> (d, Pad7, packet);
}

void
xetraCodec::getIssuerSecurityStateChangeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraIssuerSecurityStateChangeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize IssuerSecurityStateChangeRequest");
    d.setString (MessageName, "IssuerSecurityStateChangeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int64_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getSecurityID, &xetraIssuerSecurityStateChangeRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getTransactTime, &xetraIssuerSecurityStateChangeRequestPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<int32_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getMarketSegmentID, &xetraIssuerSecurityStateChangeRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int8_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getNoEvents, &xetraIssuerSecurityStateChangeRequestPacket::isNoEventsValid> (d, NoEvents, packet);
    xetra::setInteger<int8_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getSecurityStatus, &xetraIssuerSecurityStateChangeRequestPacket::isSecurityStatusValid> (d, SecurityStatus, packet);
    xetra::setInteger<int8_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getSoldOutIndicator, &xetraIssuerSecurityStateChangeRequestPacket::isSoldOutIndicatorValid> (d, SoldOutIndicator, packet);
    xetra::setString<xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::getPad1, &xetraIssuerSecurityStateChangeRequestPacket::isPad1Valid> (d, Pad1, packet);
    const vector<xetraSecurityStatusEventGrpCompPacket>& vSecurityStatusEventGrp = packet.getSecurityStatusEventGrp ();
    for (size_t i = 0; i < vSecurityStatusEventGrp.size (); i++)
    {
        cdr c;
        getSecurityStatusEventGrpComp (c, vSecurityStatusEventGrp[i]);
        d.appendArray (SecurityStatusEventGrp, c);
    }
}

void
xetraCodec::getIssuerSecurityStateChangeResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraIssuerSecurityStateChangeResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize IssuerSecurityStateChangeResponse");
    d.setString (MessageName, "IssuerSecurityStateChangeResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraIssuerSecurityStateChangeResponsePacket, &xetraIssuerSecurityStateChangeResponsePacket::getSecurityStatusReportID, &xetraIssuerSecurityStateChangeResponsePacket::isSecurityStatusReportIDValid> (d, SecurityStatusReportID, packet);
}

void
xetraCodec::getLegalNotificationBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraLegalNotificationBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize LegalNotificationBroadcast");
    d.setString (MessageName, "LegalNotificationBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<uint64_t, xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::getTransactTime, &xetraLegalNotificationBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<int16_t, xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::getVarTextLen, &xetraLegalNotificationBroadcastPacket::isVarTextLenValid> (d, VarTextLen, packet);
    xetra::setInteger<int8_t, xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::getUserStatus, &xetraLegalNotificationBroadcastPacket::isUserStatusValid> (d, UserStatus, packet);
    xetra::setString<xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::getPad5, &xetraLegalNotificationBroadcastPacket::isPad5Valid> (d, Pad5, packet);
    xetra::setString<xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::getVarText, &xetraLegalNotificationBroadcastPacket::isVarTextValid> (d, VarText, packet);
}

void
xetraCodec::getLogonRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraLogonRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize LogonRequest");
    d.setString (MessageName, "LogonRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint32_t, xetraLogonRequestPacket, &xetraLogonRequestPacket::getHeartBtInt, &xetraLogonRequestPacket::isHeartBtIntValid> (d, HeartBtInt, packet);
    xetra::setInteger<uint32_t, xetraLogonRequestPacket, &xetraLogonRequestPacket::getPartyIDSessionID, &xetraLogonRequestPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getDefaultCstmApplVerID, &xetraLogonRequestPacket::isDefaultCstmApplVerIDValid> (d, DefaultCstmApplVerID, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getPassword, &xetraLogonRequestPacket::isPasswordValid> (d, Password, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getApplUsageOrders, &xetraLogonRequestPacket::isApplUsageOrdersValid> (d, ApplUsageOrders, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getApplUsageQuotes, &xetraLogonRequestPacket::isApplUsageQuotesValid> (d, ApplUsageQuotes, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getOrderRoutingIndicator, &xetraLogonRequestPacket::isOrderRoutingIndicatorValid> (d, OrderRoutingIndicator, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getFIXEngineName, &xetraLogonRequestPacket::isFIXEngineNameValid> (d, FIXEngineName, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getFIXEngineVersion, &xetraLogonRequestPacket::isFIXEngineVersionValid> (d, FIXEngineVersion, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getFIXEngineVendor, &xetraLogonRequestPacket::isFIXEngineVendorValid> (d, FIXEngineVendor, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getApplicationSystemName, &xetraLogonRequestPacket::isApplicationSystemNameValid> (d, ApplicationSystemName, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getApplicationSystemVersion, &xetraLogonRequestPacket::isApplicationSystemVersionValid> (d, ApplicationSystemVersion, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getApplicationSystemVendor, &xetraLogonRequestPacket::isApplicationSystemVendorValid> (d, ApplicationSystemVendor, packet);
    xetra::setString<xetraLogonRequestPacket, &xetraLogonRequestPacket::getPad3, &xetraLogonRequestPacket::isPad3Valid> (d, Pad3, packet);
}

void
xetraCodec::getLogonResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraLogonResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize LogonResponse");
    d.setString (MessageName, "LogonResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setInteger<int64_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getThrottleTimeInterval, &xetraLogonResponsePacket::isThrottleTimeIntervalValid> (d, ThrottleTimeInterval, packet);
    xetra::setInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getThrottleNoMsgs, &xetraLogonResponsePacket::isThrottleNoMsgsValid> (d, ThrottleNoMsgs, packet);
    xetra::setInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getThrottleDisconnectLimit, &xetraLogonResponsePacket::isThrottleDisconnectLimitValid> (d, ThrottleDisconnectLimit, packet);
    xetra::setInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getHeartBtInt, &xetraLogonResponsePacket::isHeartBtIntValid> (d, HeartBtInt, packet);
    xetra::setInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getSessionInstanceID, &xetraLogonResponsePacket::isSessionInstanceIDValid> (d, SessionInstanceID, packet);
    xetra::setInteger<int16_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getMarketID, &xetraLogonResponsePacket::isMarketIDValid> (d, MarketID, packet);
    xetra::setInteger<int8_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::getTradSesMode, &xetraLogonResponsePacket::isTradSesModeValid> (d, TradSesMode, packet);
    xetra::setString<xetraLogonResponsePacket, &xetraLogonResponsePacket::getDefaultCstmApplVerID, &xetraLogonResponsePacket::isDefaultCstmApplVerIDValid> (d, DefaultCstmApplVerID, packet);
    xetra::setString<xetraLogonResponsePacket, &xetraLogonResponsePacket::getDefaultCstmApplVerSubID, &xetraLogonResponsePacket::isDefaultCstmApplVerSubIDValid> (d, DefaultCstmApplVerSubID, packet);
    xetra::setString<xetraLogonResponsePacket, &xetraLogonResponsePacket::getPad2, &xetraLogonResponsePacket::isPad2Valid> (d, Pad2, packet);
}

void
xetraCodec::getLogoutRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraLogoutRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize LogoutRequest");
    d.setString (MessageName, "LogoutRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
}

void
xetraCodec::getLogoutResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraLogoutResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize LogoutResponse");
    d.setString (MessageName, "LogoutResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
}

void
xetraCodec::getMassQuoteRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraMassQuoteRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize MassQuoteRequest");
    d.setString (MessageName, "MassQuoteRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getQuoteID, &xetraMassQuoteRequestPacket::isQuoteIDValid> (d, QuoteID, packet);
    xetra::setInteger<uint64_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraMassQuoteRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getExecutingTrader, &xetraMassQuoteRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getMarketSegmentID, &xetraMassQuoteRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getMatchInstCrossID, &xetraMassQuoteRequestPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<int16_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getEnrichmentRuleID, &xetraMassQuoteRequestPacket::isEnrichmentRuleIDValid> (d, EnrichmentRuleID, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getPriceValidityCheckType, &xetraMassQuoteRequestPacket::isPriceValidityCheckTypeValid> (d, PriceValidityCheckType, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getValueCheckTypeValue, &xetraMassQuoteRequestPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getValueCheckTypeQuantity, &xetraMassQuoteRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getQuoteSizeType, &xetraMassQuoteRequestPacket::isQuoteSizeTypeValid> (d, QuoteSizeType, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getQuoteType, &xetraMassQuoteRequestPacket::isQuoteTypeValid> (d, QuoteType, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getOrderAttributeLiquidityProvision, &xetraMassQuoteRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getNoQuoteEntries, &xetraMassQuoteRequestPacket::isNoQuoteEntriesValid> (d, NoQuoteEntries, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraMassQuoteRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getExecutingTraderQualifier, &xetraMassQuoteRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::getPad5, &xetraMassQuoteRequestPacket::isPad5Valid> (d, Pad5, packet);
    const vector<xetraQuoteEntryGrpCompPacket>& vQuoteEntryGrp = packet.getQuoteEntryGrp ();
    for (size_t i = 0; i < vQuoteEntryGrp.size (); i++)
    {
        cdr c;
        getQuoteEntryGrpComp (c, vQuoteEntryGrp[i]);
        d.appendArray (QuoteEntryGrp, c);
    }
}

void
xetraCodec::getMassQuoteResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraMassQuoteResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize MassQuoteResponse");
    d.setString (MessageName, "MassQuoteResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::getQuoteID, &xetraMassQuoteResponsePacket::isQuoteIDValid> (d, QuoteID, packet);
    xetra::setInteger<uint64_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::getQuoteResponseID, &xetraMassQuoteResponsePacket::isQuoteResponseIDValid> (d, QuoteResponseID, packet);
    xetra::setInteger<int32_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::getMarketSegmentID, &xetraMassQuoteResponsePacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int8_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::getNoQuoteEntries, &xetraMassQuoteResponsePacket::isNoQuoteEntriesValid> (d, NoQuoteEntries, packet);
    xetra::setString<xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::getPad3, &xetraMassQuoteResponsePacket::isPad3Valid> (d, Pad3, packet);
    const vector<xetraQuoteEntryAckGrpCompPacket>& vQuoteEntryAckGrp = packet.getQuoteEntryAckGrp ();
    for (size_t i = 0; i < vQuoteEntryAckGrp.size (); i++)
    {
        cdr c;
        getQuoteEntryAckGrpComp (c, vQuoteEntryAckGrp[i]);
        d.appendArray (QuoteEntryAckGrp, c);
    }
}

void
xetraCodec::getModifyOrderNRResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraModifyOrderNRResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ModifyOrderNRResponse");
    d.setString (MessageName, "ModifyOrderNRResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getOrderID, &xetraModifyOrderNRResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getClOrdID, &xetraModifyOrderNRResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getOrigClOrdID, &xetraModifyOrderNRResponsePacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getSecurityID, &xetraModifyOrderNRResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getExecID, &xetraModifyOrderNRResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getStopPx, &xetraModifyOrderNRResponsePacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getLeavesQty, &xetraModifyOrderNRResponsePacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getCumQty, &xetraModifyOrderNRResponsePacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getCxlQty, &xetraModifyOrderNRResponsePacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getDisplayQty, &xetraModifyOrderNRResponsePacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setInteger<uint32_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getOrderIDSfx, &xetraModifyOrderNRResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setString<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getOrdStatus, &xetraModifyOrderNRResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getExecType, &xetraModifyOrderNRResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int16_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getExecRestatementReason, &xetraModifyOrderNRResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getCrossedIndicator, &xetraModifyOrderNRResponsePacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setInteger<int8_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getTriggered, &xetraModifyOrderNRResponsePacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setString<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::getPad6, &xetraModifyOrderNRResponsePacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getModifyOrderResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraModifyOrderResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ModifyOrderResponse");
    d.setString (MessageName, "ModifyOrderResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderMEComp (d, packet.getResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getOrderID, &xetraModifyOrderResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getClOrdID, &xetraModifyOrderResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getOrigClOrdID, &xetraModifyOrderResponsePacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getSecurityID, &xetraModifyOrderResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getExecID, &xetraModifyOrderResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getStopPx, &xetraModifyOrderResponsePacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getLeavesQty, &xetraModifyOrderResponsePacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getCumQty, &xetraModifyOrderResponsePacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getCxlQty, &xetraModifyOrderResponsePacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getDisplayQty, &xetraModifyOrderResponsePacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getTrdRegTSTimePriority, &xetraModifyOrderResponsePacket::isTrdRegTSTimePriorityValid> (d, TrdRegTSTimePriority, packet);
    xetra::setInteger<uint32_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getOrderIDSfx, &xetraModifyOrderResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setString<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getOrdStatus, &xetraModifyOrderResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getExecType, &xetraModifyOrderResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int16_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getExecRestatementReason, &xetraModifyOrderResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getCrossedIndicator, &xetraModifyOrderResponsePacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setInteger<int8_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getTriggered, &xetraModifyOrderResponsePacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setString<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::getPad6, &xetraModifyOrderResponsePacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getModifyOrderSingleRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraModifyOrderSingleRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ModifyOrderSingleRequest");
    d.setString (MessageName, "ModifyOrderSingleRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getOrderID, &xetraModifyOrderSingleRequestPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getClOrdID, &xetraModifyOrderSingleRequestPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getOrigClOrdID, &xetraModifyOrderSingleRequestPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getSecurityID, &xetraModifyOrderSingleRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPrice, &xetraModifyOrderSingleRequestPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getOrderQty, &xetraModifyOrderSingleRequestPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getDisplayQty, &xetraModifyOrderSingleRequestPacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getDisplayLowQty, &xetraModifyOrderSingleRequestPacket::isDisplayLowQtyValid> (d, DisplayLowQty, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getDisplayHighQty, &xetraModifyOrderSingleRequestPacket::isDisplayHighQtyValid> (d, DisplayHighQty, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getStopPx, &xetraModifyOrderSingleRequestPacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getVolumeDiscoveryPrice, &xetraModifyOrderSingleRequestPacket::isVolumeDiscoveryPriceValid> (d, VolumeDiscoveryPrice, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPegOffsetValueAbs, &xetraModifyOrderSingleRequestPacket::isPegOffsetValueAbsValid> (d, PegOffsetValueAbs, packet);
    xetra::setDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPegOffsetValuePct, &xetraModifyOrderSingleRequestPacket::isPegOffsetValuePctValid> (d, PegOffsetValuePct, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPartyIDClientID, &xetraModifyOrderSingleRequestPacket::isPartyIDClientIDValid> (d, PartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraModifyOrderSingleRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getExecutingTrader, &xetraModifyOrderSingleRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getExpireDate, &xetraModifyOrderSingleRequestPacket::isExpireDateValid> (d, ExpireDate, packet);
    xetra::setInteger<int32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getMarketSegmentID, &xetraModifyOrderSingleRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getMatchInstCrossID, &xetraModifyOrderSingleRequestPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<uint32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getTargetPartyIDSessionID, &xetraModifyOrderSingleRequestPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getApplSeqIndicator, &xetraModifyOrderSingleRequestPacket::isApplSeqIndicatorValid> (d, ApplSeqIndicator, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getSide, &xetraModifyOrderSingleRequestPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getOrdType, &xetraModifyOrderSingleRequestPacket::isOrdTypeValid> (d, OrdType, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPriceValidityCheckType, &xetraModifyOrderSingleRequestPacket::isPriceValidityCheckTypeValid> (d, PriceValidityCheckType, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getValueCheckTypeValue, &xetraModifyOrderSingleRequestPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getValueCheckTypeQuantity, &xetraModifyOrderSingleRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getOrderAttributeLiquidityProvision, &xetraModifyOrderSingleRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getTimeInForce, &xetraModifyOrderSingleRequestPacket::isTimeInForceValid> (d, TimeInForce, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getExecInst, &xetraModifyOrderSingleRequestPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getTradingSessionSubID, &xetraModifyOrderSingleRequestPacket::isTradingSessionSubIDValid> (d, TradingSessionSubID, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getStopPxIndicator, &xetraModifyOrderSingleRequestPacket::isStopPxIndicatorValid> (d, StopPxIndicator, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getTradingCapacity, &xetraModifyOrderSingleRequestPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getExDestinationType, &xetraModifyOrderSingleRequestPacket::isExDestinationTypeValid> (d, ExDestinationType, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraModifyOrderSingleRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getExecutingTraderQualifier, &xetraModifyOrderSingleRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getOwnershipIndicator, &xetraModifyOrderSingleRequestPacket::isOwnershipIndicatorValid> (d, OwnershipIndicator, packet);
    xetra::setString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getFreeText1, &xetraModifyOrderSingleRequestPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getFreeText2, &xetraModifyOrderSingleRequestPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getFreeText4, &xetraModifyOrderSingleRequestPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getFIXClOrdID, &xetraModifyOrderSingleRequestPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::getPad4, &xetraModifyOrderSingleRequestPacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getModifyOrderSingleShortRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraModifyOrderSingleShortRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ModifyOrderSingleShortRequest");
    d.setString (MessageName, "ModifyOrderSingleShortRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getClOrdID, &xetraModifyOrderSingleShortRequestPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getOrigClOrdID, &xetraModifyOrderSingleShortRequestPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getSecurityID, &xetraModifyOrderSingleShortRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getPrice, &xetraModifyOrderSingleShortRequestPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getOrderQty, &xetraModifyOrderSingleShortRequestPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getPartyIDClientID, &xetraModifyOrderSingleShortRequestPacket::isPartyIDClientIDValid> (d, PartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraModifyOrderSingleShortRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getExecutingTrader, &xetraModifyOrderSingleShortRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getMatchInstCrossID, &xetraModifyOrderSingleShortRequestPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<int16_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getEnrichmentRuleID, &xetraModifyOrderSingleShortRequestPacket::isEnrichmentRuleIDValid> (d, EnrichmentRuleID, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getSide, &xetraModifyOrderSingleShortRequestPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getPriceValidityCheckType, &xetraModifyOrderSingleShortRequestPacket::isPriceValidityCheckTypeValid> (d, PriceValidityCheckType, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getValueCheckTypeValue, &xetraModifyOrderSingleShortRequestPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getValueCheckTypeQuantity, &xetraModifyOrderSingleShortRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getOrderAttributeLiquidityProvision, &xetraModifyOrderSingleShortRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getTimeInForce, &xetraModifyOrderSingleShortRequestPacket::isTimeInForceValid> (d, TimeInForce, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getApplSeqIndicator, &xetraModifyOrderSingleShortRequestPacket::isApplSeqIndicatorValid> (d, ApplSeqIndicator, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getExecInst, &xetraModifyOrderSingleShortRequestPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getTradingCapacity, &xetraModifyOrderSingleShortRequestPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getExDestinationType, &xetraModifyOrderSingleShortRequestPacket::isExDestinationTypeValid> (d, ExDestinationType, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraModifyOrderSingleShortRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getExecutingTraderQualifier, &xetraModifyOrderSingleShortRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::getPad6, &xetraModifyOrderSingleShortRequestPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getModifyTESTradeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraModifyTESTradeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ModifyTESTradeRequest");
    d.setString (MessageName, "ModifyTESTradeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setDouble<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getLastPx, &xetraModifyTESTradeRequestPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setInteger<uint64_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getTransBkdTime, &xetraModifyTESTradeRequestPacket::isTransBkdTimeValid> (d, TransBkdTime, packet);
    xetra::setInteger<int32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getMarketSegmentID, &xetraModifyTESTradeRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getPackageID, &xetraModifyTESTradeRequestPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<uint32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getTESExecID, &xetraModifyTESTradeRequestPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<int32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getSettlDate, &xetraModifyTESTradeRequestPacket::isSettlDateValid> (d, SettlDate, packet);
    xetra::setInteger<int16_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getTrdType, &xetraModifyTESTradeRequestPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getTradeReportType, &xetraModifyTESTradeRequestPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getNoSideAllocs, &xetraModifyTESTradeRequestPacket::isNoSideAllocsValid> (d, NoSideAllocs, packet);
    xetra::setString<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getTradeReportText, &xetraModifyTESTradeRequestPacket::isTradeReportTextValid> (d, TradeReportText, packet);
    xetra::setString<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getTradeReportID, &xetraModifyTESTradeRequestPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::getPad4, &xetraModifyTESTradeRequestPacket::isPad4Valid> (d, Pad4, packet);
    const vector<xetraSideAllocGrpCompPacket>& vSideAllocGrp = packet.getSideAllocGrp ();
    for (size_t i = 0; i < vSideAllocGrp.size (); i++)
    {
        cdr c;
        getSideAllocGrpComp (c, vSideAllocGrp[i]);
        d.appendArray (SideAllocGrp, c);
    }
}

void
xetraCodec::getNewOrderNRResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraNewOrderNRResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize NewOrderNRResponse");
    d.setString (MessageName, "NewOrderNRResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getOrderID, &xetraNewOrderNRResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getClOrdID, &xetraNewOrderNRResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<int64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getSecurityID, &xetraNewOrderNRResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getExecID, &xetraNewOrderNRResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<uint32_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getOrderIDSfx, &xetraNewOrderNRResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setString<xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getOrdStatus, &xetraNewOrderNRResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getExecType, &xetraNewOrderNRResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int16_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getExecRestatementReason, &xetraNewOrderNRResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getCrossedIndicator, &xetraNewOrderNRResponsePacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setInteger<int8_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getTriggered, &xetraNewOrderNRResponsePacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setString<xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::getPad6, &xetraNewOrderNRResponsePacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getNewOrderResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraNewOrderResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize NewOrderResponse");
    d.setString (MessageName, "NewOrderResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderMEComp (d, packet.getResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getOrderID, &xetraNewOrderResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getClOrdID, &xetraNewOrderResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<int64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getSecurityID, &xetraNewOrderResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getExecID, &xetraNewOrderResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getTrdRegTSEntryTime, &xetraNewOrderResponsePacket::isTrdRegTSEntryTimeValid> (d, TrdRegTSEntryTime, packet);
    xetra::setInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getTrdRegTSTimePriority, &xetraNewOrderResponsePacket::isTrdRegTSTimePriorityValid> (d, TrdRegTSTimePriority, packet);
    xetra::setInteger<uint32_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getOrderIDSfx, &xetraNewOrderResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setString<xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getOrdStatus, &xetraNewOrderResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getExecType, &xetraNewOrderResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int16_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getExecRestatementReason, &xetraNewOrderResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getCrossedIndicator, &xetraNewOrderResponsePacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setInteger<int8_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getTriggered, &xetraNewOrderResponsePacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setString<xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::getPad6, &xetraNewOrderResponsePacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getNewOrderSingleRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraNewOrderSingleRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize NewOrderSingleRequest");
    d.setString (MessageName, "NewOrderSingleRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPrice, &xetraNewOrderSingleRequestPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getOrderQty, &xetraNewOrderSingleRequestPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getDisplayQty, &xetraNewOrderSingleRequestPacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getDisplayLowQty, &xetraNewOrderSingleRequestPacket::isDisplayLowQtyValid> (d, DisplayLowQty, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getDisplayHighQty, &xetraNewOrderSingleRequestPacket::isDisplayHighQtyValid> (d, DisplayHighQty, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getStopPx, &xetraNewOrderSingleRequestPacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getVolumeDiscoveryPrice, &xetraNewOrderSingleRequestPacket::isVolumeDiscoveryPriceValid> (d, VolumeDiscoveryPrice, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPegOffsetValueAbs, &xetraNewOrderSingleRequestPacket::isPegOffsetValueAbsValid> (d, PegOffsetValueAbs, packet);
    xetra::setDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPegOffsetValuePct, &xetraNewOrderSingleRequestPacket::isPegOffsetValuePctValid> (d, PegOffsetValuePct, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getClOrdID, &xetraNewOrderSingleRequestPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<int64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getSecurityID, &xetraNewOrderSingleRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPartyIDClientID, &xetraNewOrderSingleRequestPacket::isPartyIDClientIDValid> (d, PartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraNewOrderSingleRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getExecutingTrader, &xetraNewOrderSingleRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getExpireDate, &xetraNewOrderSingleRequestPacket::isExpireDateValid> (d, ExpireDate, packet);
    xetra::setInteger<int32_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getMarketSegmentID, &xetraNewOrderSingleRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getMatchInstCrossID, &xetraNewOrderSingleRequestPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getApplSeqIndicator, &xetraNewOrderSingleRequestPacket::isApplSeqIndicatorValid> (d, ApplSeqIndicator, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getSide, &xetraNewOrderSingleRequestPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getOrdType, &xetraNewOrderSingleRequestPacket::isOrdTypeValid> (d, OrdType, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPriceValidityCheckType, &xetraNewOrderSingleRequestPacket::isPriceValidityCheckTypeValid> (d, PriceValidityCheckType, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getValueCheckTypeValue, &xetraNewOrderSingleRequestPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getValueCheckTypeQuantity, &xetraNewOrderSingleRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getOrderAttributeLiquidityProvision, &xetraNewOrderSingleRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getTimeInForce, &xetraNewOrderSingleRequestPacket::isTimeInForceValid> (d, TimeInForce, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getExecInst, &xetraNewOrderSingleRequestPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getTradingSessionSubID, &xetraNewOrderSingleRequestPacket::isTradingSessionSubIDValid> (d, TradingSessionSubID, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getTradingCapacity, &xetraNewOrderSingleRequestPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getExDestinationType, &xetraNewOrderSingleRequestPacket::isExDestinationTypeValid> (d, ExDestinationType, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraNewOrderSingleRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getExecutingTraderQualifier, &xetraNewOrderSingleRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getFreeText1, &xetraNewOrderSingleRequestPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getFreeText2, &xetraNewOrderSingleRequestPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getFreeText4, &xetraNewOrderSingleRequestPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getFIXClOrdID, &xetraNewOrderSingleRequestPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::getPad2, &xetraNewOrderSingleRequestPacket::isPad2Valid> (d, Pad2, packet);
}

void
xetraCodec::getNewOrderSingleShortRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraNewOrderSingleShortRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize NewOrderSingleShortRequest");
    d.setString (MessageName, "NewOrderSingleShortRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getSecurityID, &xetraNewOrderSingleShortRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getPrice, &xetraNewOrderSingleShortRequestPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getOrderQty, &xetraNewOrderSingleShortRequestPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getClOrdID, &xetraNewOrderSingleShortRequestPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getPartyIDClientID, &xetraNewOrderSingleShortRequestPacket::isPartyIDClientIDValid> (d, PartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraNewOrderSingleShortRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getExecutingTrader, &xetraNewOrderSingleShortRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getMatchInstCrossID, &xetraNewOrderSingleShortRequestPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<int16_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getEnrichmentRuleID, &xetraNewOrderSingleShortRequestPacket::isEnrichmentRuleIDValid> (d, EnrichmentRuleID, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getSide, &xetraNewOrderSingleShortRequestPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getApplSeqIndicator, &xetraNewOrderSingleShortRequestPacket::isApplSeqIndicatorValid> (d, ApplSeqIndicator, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getPriceValidityCheckType, &xetraNewOrderSingleShortRequestPacket::isPriceValidityCheckTypeValid> (d, PriceValidityCheckType, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getValueCheckTypeValue, &xetraNewOrderSingleShortRequestPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getValueCheckTypeQuantity, &xetraNewOrderSingleShortRequestPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getOrderAttributeLiquidityProvision, &xetraNewOrderSingleShortRequestPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getTimeInForce, &xetraNewOrderSingleShortRequestPacket::isTimeInForceValid> (d, TimeInForce, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getExecInst, &xetraNewOrderSingleShortRequestPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getTradingCapacity, &xetraNewOrderSingleShortRequestPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getExDestinationType, &xetraNewOrderSingleShortRequestPacket::isExDestinationTypeValid> (d, ExDestinationType, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraNewOrderSingleShortRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getExecutingTraderQualifier, &xetraNewOrderSingleShortRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::getPad6, &xetraNewOrderSingleShortRequestPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getNewsBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraNewsBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize NewsBroadcast");
    d.setString (MessageName, "NewsBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<uint64_t, xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::getOrigTime, &xetraNewsBroadcastPacket::isOrigTimeValid> (d, OrigTime, packet);
    xetra::setInteger<int16_t, xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::getVarTextLen, &xetraNewsBroadcastPacket::isVarTextLenValid> (d, VarTextLen, packet);
    xetra::setString<xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::getHeadline, &xetraNewsBroadcastPacket::isHeadlineValid> (d, Headline, packet);
    xetra::setString<xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::getPad6, &xetraNewsBroadcastPacket::isPad6Valid> (d, Pad6, packet);
    xetra::setString<xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::getVarText, &xetraNewsBroadcastPacket::isVarTextValid> (d, VarText, packet);
}

void
xetraCodec::getOrderExecNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraOrderExecNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize OrderExecNotification");
    d.setString (MessageName, "OrderExecNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getOrderID, &xetraOrderExecNotificationPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getClOrdID, &xetraOrderExecNotificationPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getOrigClOrdID, &xetraOrderExecNotificationPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getSecurityID, &xetraOrderExecNotificationPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getExecID, &xetraOrderExecNotificationPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getLeavesQty, &xetraOrderExecNotificationPacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getCumQty, &xetraOrderExecNotificationPacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getCxlQty, &xetraOrderExecNotificationPacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getDisplayQty, &xetraOrderExecNotificationPacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setInteger<int32_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getMarketSegmentID, &xetraOrderExecNotificationPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getOrderIDSfx, &xetraOrderExecNotificationPacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int16_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getExecRestatementReason, &xetraOrderExecNotificationPacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getSide, &xetraOrderExecNotificationPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getOrdStatus, &xetraOrderExecNotificationPacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getExecType, &xetraOrderExecNotificationPacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getMatchType, &xetraOrderExecNotificationPacket::isMatchTypeValid> (d, MatchType, packet);
    xetra::setInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getTriggered, &xetraOrderExecNotificationPacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getCrossedIndicator, &xetraOrderExecNotificationPacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getFIXClOrdID, &xetraOrderExecNotificationPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getNoFills, &xetraOrderExecNotificationPacket::isNoFillsValid> (d, NoFills, packet);
    xetra::setString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::getPad3, &xetraOrderExecNotificationPacket::isPad3Valid> (d, Pad3, packet);
    const vector<xetraFillsGrpCompPacket>& vFillsGrp = packet.getFillsGrp ();
    for (size_t i = 0; i < vFillsGrp.size (); i++)
    {
        cdr c;
        getFillsGrpComp (c, vFillsGrp[i]);
        d.appendArray (FillsGrp, c);
    }
}

void
xetraCodec::getOrderExecReportBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraOrderExecReportBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize OrderExecReportBroadcast");
    d.setString (MessageName, "OrderExecReportBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getOrderID, &xetraOrderExecReportBroadcastPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getClOrdID, &xetraOrderExecReportBroadcastPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getOrigClOrdID, &xetraOrderExecReportBroadcastPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getSecurityID, &xetraOrderExecReportBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getExecID, &xetraOrderExecReportBroadcastPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getTrdRegTSEntryTime, &xetraOrderExecReportBroadcastPacket::isTrdRegTSEntryTimeValid> (d, TrdRegTSEntryTime, packet);
    xetra::setInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getTrdRegTSTimePriority, &xetraOrderExecReportBroadcastPacket::isTrdRegTSTimePriorityValid> (d, TrdRegTSTimePriority, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPrice, &xetraOrderExecReportBroadcastPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getLeavesQty, &xetraOrderExecReportBroadcastPacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getCumQty, &xetraOrderExecReportBroadcastPacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getCxlQty, &xetraOrderExecReportBroadcastPacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getOrderQty, &xetraOrderExecReportBroadcastPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getDisplayQty, &xetraOrderExecReportBroadcastPacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getDisplayLowQty, &xetraOrderExecReportBroadcastPacket::isDisplayLowQtyValid> (d, DisplayLowQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getDisplayHighQty, &xetraOrderExecReportBroadcastPacket::isDisplayHighQtyValid> (d, DisplayHighQty, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getStopPx, &xetraOrderExecReportBroadcastPacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getVolumeDiscoveryPrice, &xetraOrderExecReportBroadcastPacket::isVolumeDiscoveryPriceValid> (d, VolumeDiscoveryPrice, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPegOffsetValueAbs, &xetraOrderExecReportBroadcastPacket::isPegOffsetValueAbsValid> (d, PegOffsetValueAbs, packet);
    xetra::setDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPegOffsetValuePct, &xetraOrderExecReportBroadcastPacket::isPegOffsetValuePctValid> (d, PegOffsetValuePct, packet);
    xetra::setInteger<int32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getMarketSegmentID, &xetraOrderExecReportBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getOrderIDSfx, &xetraOrderExecReportBroadcastPacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getExpireDate, &xetraOrderExecReportBroadcastPacket::isExpireDateValid> (d, ExpireDate, packet);
    xetra::setInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getMatchInstCrossID, &xetraOrderExecReportBroadcastPacket::isMatchInstCrossIDValid> (d, MatchInstCrossID, packet);
    xetra::setInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPartyIDExecutingUnit, &xetraOrderExecReportBroadcastPacket::isPartyIDExecutingUnitValid> (d, PartyIDExecutingUnit, packet);
    xetra::setInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPartyIDSessionID, &xetraOrderExecReportBroadcastPacket::isPartyIDSessionIDValid> (d, PartyIDSessionID, packet);
    xetra::setInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPartyIDExecutingTrader, &xetraOrderExecReportBroadcastPacket::isPartyIDExecutingTraderValid> (d, PartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPartyIDEnteringTrader, &xetraOrderExecReportBroadcastPacket::isPartyIDEnteringTraderValid> (d, PartyIDEnteringTrader, packet);
    xetra::setInteger<int16_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getExecRestatementReason, &xetraOrderExecReportBroadcastPacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPartyIDEnteringFirm, &xetraOrderExecReportBroadcastPacket::isPartyIDEnteringFirmValid> (d, PartyIDEnteringFirm, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getOrdStatus, &xetraOrderExecReportBroadcastPacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getExecType, &xetraOrderExecReportBroadcastPacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getMatchType, &xetraOrderExecReportBroadcastPacket::isMatchTypeValid> (d, MatchType, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getSide, &xetraOrderExecReportBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getOrdType, &xetraOrderExecReportBroadcastPacket::isOrdTypeValid> (d, OrdType, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getTradingCapacity, &xetraOrderExecReportBroadcastPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getTimeInForce, &xetraOrderExecReportBroadcastPacket::isTimeInForceValid> (d, TimeInForce, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getExecInst, &xetraOrderExecReportBroadcastPacket::isExecInstValid> (d, ExecInst, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getTradingSessionSubID, &xetraOrderExecReportBroadcastPacket::isTradingSessionSubIDValid> (d, TradingSessionSubID, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getApplSeqIndicator, &xetraOrderExecReportBroadcastPacket::isApplSeqIndicatorValid> (d, ApplSeqIndicator, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getExDestinationType, &xetraOrderExecReportBroadcastPacket::isExDestinationTypeValid> (d, ExDestinationType, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getFreeText1, &xetraOrderExecReportBroadcastPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getFreeText2, &xetraOrderExecReportBroadcastPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getFreeText4, &xetraOrderExecReportBroadcastPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getFIXClOrdID, &xetraOrderExecReportBroadcastPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getNoFills, &xetraOrderExecReportBroadcastPacket::isNoFillsValid> (d, NoFills, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getTriggered, &xetraOrderExecReportBroadcastPacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getCrossedIndicator, &xetraOrderExecReportBroadcastPacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::getPad3, &xetraOrderExecReportBroadcastPacket::isPad3Valid> (d, Pad3, packet);
    const vector<xetraFillsGrpCompPacket>& vFillsGrp = packet.getFillsGrp ();
    for (size_t i = 0; i < vFillsGrp.size (); i++)
    {
        cdr c;
        getFillsGrpComp (c, vFillsGrp[i]);
        d.appendArray (FillsGrp, c);
    }
}

void
xetraCodec::getOrderExecResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraOrderExecResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize OrderExecResponse");
    d.setString (MessageName, "OrderExecResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderMEComp (d, packet.getResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getOrderID, &xetraOrderExecResponsePacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getClOrdID, &xetraOrderExecResponsePacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getOrigClOrdID, &xetraOrderExecResponsePacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getSecurityID, &xetraOrderExecResponsePacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getExecID, &xetraOrderExecResponsePacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getTrdRegTSEntryTime, &xetraOrderExecResponsePacket::isTrdRegTSEntryTimeValid> (d, TrdRegTSEntryTime, packet);
    xetra::setInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getTrdRegTSTimePriority, &xetraOrderExecResponsePacket::isTrdRegTSTimePriorityValid> (d, TrdRegTSTimePriority, packet);
    xetra::setDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getLeavesQty, &xetraOrderExecResponsePacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getCumQty, &xetraOrderExecResponsePacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getCxlQty, &xetraOrderExecResponsePacket::isCxlQtyValid> (d, CxlQty, packet);
    xetra::setDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getDisplayQty, &xetraOrderExecResponsePacket::isDisplayQtyValid> (d, DisplayQty, packet);
    xetra::setInteger<int32_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getMarketSegmentID, &xetraOrderExecResponsePacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getOrderIDSfx, &xetraOrderExecResponsePacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int16_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getExecRestatementReason, &xetraOrderExecResponsePacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getSide, &xetraOrderExecResponsePacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getOrdStatus, &xetraOrderExecResponsePacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getExecType, &xetraOrderExecResponsePacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getMatchType, &xetraOrderExecResponsePacket::isMatchTypeValid> (d, MatchType, packet);
    xetra::setInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getTriggered, &xetraOrderExecResponsePacket::isTriggeredValid> (d, Triggered, packet);
    xetra::setInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getCrossedIndicator, &xetraOrderExecResponsePacket::isCrossedIndicatorValid> (d, CrossedIndicator, packet);
    xetra::setInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getNoFills, &xetraOrderExecResponsePacket::isNoFillsValid> (d, NoFills, packet);
    xetra::setString<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::getPad7, &xetraOrderExecResponsePacket::isPad7Valid> (d, Pad7, packet);
    const vector<xetraFillsGrpCompPacket>& vFillsGrp = packet.getFillsGrp ();
    for (size_t i = 0; i < vFillsGrp.size (); i++)
    {
        cdr c;
        getFillsGrpComp (c, vFillsGrp[i]);
        d.appendArray (FillsGrp, c);
    }
}

void
xetraCodec::getPartyActionReport (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraPartyActionReportPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize PartyActionReport");
    d.setString (MessageName, "PartyActionReport");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<uint64_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getTransactTime, &xetraPartyActionReportPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<int32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getTradeDate, &xetraPartyActionReportPacket::isTradeDateValid> (d, TradeDate, packet);
    xetra::setInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getRequestingPartyIDExecutingTrader, &xetraPartyActionReportPacket::isRequestingPartyIDExecutingTraderValid> (d, RequestingPartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getPartyIDExecutingUnit, &xetraPartyActionReportPacket::isPartyIDExecutingUnitValid> (d, PartyIDExecutingUnit, packet);
    xetra::setInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getPartyIDExecutingTrader, &xetraPartyActionReportPacket::isPartyIDExecutingTraderValid> (d, PartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getRequestingPartyIDExecutingSystem, &xetraPartyActionReportPacket::isRequestingPartyIDExecutingSystemValid> (d, RequestingPartyIDExecutingSystem, packet);
    xetra::setInteger<int16_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getMarketID, &xetraPartyActionReportPacket::isMarketIDValid> (d, MarketID, packet);
    xetra::setInteger<int8_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getPartyActionType, &xetraPartyActionReportPacket::isPartyActionTypeValid> (d, PartyActionType, packet);
    xetra::setInteger<int8_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::getRequestingPartyIDEnteringFirm, &xetraPartyActionReportPacket::isRequestingPartyIDEnteringFirmValid> (d, RequestingPartyIDEnteringFirm, packet);
}

void
xetraCodec::getPartyEntitlementsUpdateReport (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraPartyEntitlementsUpdateReportPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize PartyEntitlementsUpdateReport");
    d.setString (MessageName, "PartyEntitlementsUpdateReport");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<uint64_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getTransactTime, &xetraPartyEntitlementsUpdateReportPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<int32_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getTradeDate, &xetraPartyEntitlementsUpdateReportPacket::isTradeDateValid> (d, TradeDate, packet);
    xetra::setInteger<uint32_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getPartyDetailIDExecutingUnit, &xetraPartyEntitlementsUpdateReportPacket::isPartyDetailIDExecutingUnitValid> (d, PartyDetailIDExecutingUnit, packet);
    xetra::setInteger<uint32_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getRequestingPartyIDExecutingSystem, &xetraPartyEntitlementsUpdateReportPacket::isRequestingPartyIDExecutingSystemValid> (d, RequestingPartyIDExecutingSystem, packet);
    xetra::setInteger<int16_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getMarketID, &xetraPartyEntitlementsUpdateReportPacket::isMarketIDValid> (d, MarketID, packet);
    xetra::setString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getListUpdateAction, &xetraPartyEntitlementsUpdateReportPacket::isListUpdateActionValid> (d, ListUpdateAction, packet);
    xetra::setString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getRequestingPartyEnteringFirm, &xetraPartyEntitlementsUpdateReportPacket::isRequestingPartyEnteringFirmValid> (d, RequestingPartyEnteringFirm, packet);
    xetra::setString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getRequestingPartyClearingFirm, &xetraPartyEntitlementsUpdateReportPacket::isRequestingPartyClearingFirmValid> (d, RequestingPartyClearingFirm, packet);
    xetra::setInteger<int8_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getPartyDetailStatus, &xetraPartyEntitlementsUpdateReportPacket::isPartyDetailStatusValid> (d, PartyDetailStatus, packet);
    xetra::setString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::getPad6, &xetraPartyEntitlementsUpdateReportPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getQuoteActivationNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraQuoteActivationNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize QuoteActivationNotification");
    d.setString (MessageName, "QuoteActivationNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getMassActionReportID, &xetraQuoteActivationNotificationPacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int32_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getMarketSegmentID, &xetraQuoteActivationNotificationPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getPartyIDEnteringTrader, &xetraQuoteActivationNotificationPacket::isPartyIDEnteringTraderValid> (d, PartyIDEnteringTrader, packet);
    xetra::setInteger<int16_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getNoNotAffectedSecurities, &xetraQuoteActivationNotificationPacket::isNoNotAffectedSecuritiesValid> (d, NoNotAffectedSecurities, packet);
    xetra::setInteger<int8_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getPartyIDEnteringFirm, &xetraQuoteActivationNotificationPacket::isPartyIDEnteringFirmValid> (d, PartyIDEnteringFirm, packet);
    xetra::setInteger<int8_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getMassActionType, &xetraQuoteActivationNotificationPacket::isMassActionTypeValid> (d, MassActionType, packet);
    xetra::setInteger<uint8_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getMassActionReason, &xetraQuoteActivationNotificationPacket::isMassActionReasonValid> (d, MassActionReason, packet);
    xetra::setString<xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::getPad3, &xetraQuoteActivationNotificationPacket::isPad3Valid> (d, Pad3, packet);
    const vector<xetraNotAffectedSecuritiesGrpCompPacket>& vNotAffectedSecuritiesGrp = packet.getNotAffectedSecuritiesGrp ();
    for (size_t i = 0; i < vNotAffectedSecuritiesGrp.size (); i++)
    {
        cdr c;
        getNotAffectedSecuritiesGrpComp (c, vNotAffectedSecuritiesGrp[i]);
        d.appendArray (NotAffectedSecuritiesGrp, c);
    }
}

void
xetraCodec::getQuoteActivationRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraQuoteActivationRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize QuoteActivationRequest");
    d.setString (MessageName, "QuoteActivationRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getPartyIdInvestmentDecisionMaker, &xetraQuoteActivationRequestPacket::isPartyIdInvestmentDecisionMakerValid> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::setInteger<uint64_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getExecutingTrader, &xetraQuoteActivationRequestPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<int32_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getMarketSegmentID, &xetraQuoteActivationRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getTargetPartyIDSessionID, &xetraQuoteActivationRequestPacket::isTargetPartyIDSessionIDValid> (d, TargetPartyIDSessionID, packet);
    xetra::setInteger<int8_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getMassActionType, &xetraQuoteActivationRequestPacket::isMassActionTypeValid> (d, MassActionType, packet);
    xetra::setInteger<int8_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getPartyIdInvestmentDecisionMakerQualifier, &xetraQuoteActivationRequestPacket::isPartyIdInvestmentDecisionMakerQualifierValid> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::setInteger<int8_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getExecutingTraderQualifier, &xetraQuoteActivationRequestPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setString<xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::getPad5, &xetraQuoteActivationRequestPacket::isPad5Valid> (d, Pad5, packet);
}

void
xetraCodec::getQuoteActivationResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraQuoteActivationResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize QuoteActivationResponse");
    d.setString (MessageName, "QuoteActivationResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraQuoteActivationResponsePacket, &xetraQuoteActivationResponsePacket::getMassActionReportID, &xetraQuoteActivationResponsePacket::isMassActionReportIDValid> (d, MassActionReportID, packet);
    xetra::setInteger<int16_t, xetraQuoteActivationResponsePacket, &xetraQuoteActivationResponsePacket::getNoNotAffectedSecurities, &xetraQuoteActivationResponsePacket::isNoNotAffectedSecuritiesValid> (d, NoNotAffectedSecurities, packet);
    xetra::setString<xetraQuoteActivationResponsePacket, &xetraQuoteActivationResponsePacket::getPad6, &xetraQuoteActivationResponsePacket::isPad6Valid> (d, Pad6, packet);
    const vector<xetraNotAffectedSecuritiesGrpCompPacket>& vNotAffectedSecuritiesGrp = packet.getNotAffectedSecuritiesGrp ();
    for (size_t i = 0; i < vNotAffectedSecuritiesGrp.size (); i++)
    {
        cdr c;
        getNotAffectedSecuritiesGrpComp (c, vNotAffectedSecuritiesGrp[i]);
        d.appendArray (NotAffectedSecuritiesGrp, c);
    }
}

void
xetraCodec::getQuoteExecutionReport (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraQuoteExecutionReportPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize QuoteExecutionReport");
    d.setString (MessageName, "QuoteExecutionReport");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::getExecID, &xetraQuoteExecutionReportPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setInteger<int32_t, xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::getMarketSegmentID, &xetraQuoteExecutionReportPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int8_t, xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::getNoQuoteEvents, &xetraQuoteExecutionReportPacket::isNoQuoteEventsValid> (d, NoQuoteEvents, packet);
    xetra::setString<xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::getPad3, &xetraQuoteExecutionReportPacket::isPad3Valid> (d, Pad3, packet);
    const vector<xetraQuoteEventGrpCompPacket>& vQuoteEventGrp = packet.getQuoteEventGrp ();
    for (size_t i = 0; i < vQuoteEventGrp.size (); i++)
    {
        cdr c;
        getQuoteEventGrpComp (c, vQuoteEventGrp[i]);
        d.appendArray (QuoteEventGrp, c);
    }
}

void
xetraCodec::getRFQBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRFQBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RFQBroadcast");
    d.setString (MessageName, "RFQBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<int64_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getSecurityID, &xetraRFQBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getExecID, &xetraRFQBroadcastPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getOrderQty, &xetraRFQBroadcastPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setInteger<int32_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getMarketSegmentID, &xetraRFQBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int8_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getSide, &xetraRFQBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getPartyExecutingFirm, &xetraRFQBroadcastPacket::isPartyExecutingFirmValid> (d, PartyExecutingFirm, packet);
    xetra::setString<xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::getPad6, &xetraRFQBroadcastPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getRFQRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRFQRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RFQRequest");
    d.setString (MessageName, "RFQRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int64_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::getSecurityID, &xetraRFQRequestPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraRFQRequestPacket, &xetraRFQRequestPacket::getOrderQty, &xetraRFQRequestPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setInteger<int32_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::getMarketSegmentID, &xetraRFQRequestPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int8_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::getRFQPublishIndicator, &xetraRFQRequestPacket::isRFQPublishIndicatorValid> (d, RFQPublishIndicator, packet);
    xetra::setInteger<int8_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::getRFQRequesterDisclosureInstruction, &xetraRFQRequestPacket::isRFQRequesterDisclosureInstructionValid> (d, RFQRequesterDisclosureInstruction, packet);
    xetra::setInteger<int8_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::getSide, &xetraRFQRequestPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraRFQRequestPacket, &xetraRFQRequestPacket::getPad1, &xetraRFQRequestPacket::isPad1Valid> (d, Pad1, packet);
}

void
xetraCodec::getRFQResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRFQResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RFQResponse");
    d.setString (MessageName, "RFQResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint64_t, xetraRFQResponsePacket, &xetraRFQResponsePacket::getExecID, &xetraRFQResponsePacket::isExecIDValid> (d, ExecID, packet);
}

void
xetraCodec::getReject (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRejectPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize Reject");
    d.setString (MessageName, "Reject");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRResponseHeaderMEComp (d, packet.getNRResponseHeaderME ());
    xetra::setInteger<uint32_t, xetraRejectPacket, &xetraRejectPacket::getSessionRejectReason, &xetraRejectPacket::isSessionRejectReasonValid> (d, SessionRejectReason, packet);
    xetra::setInteger<int16_t, xetraRejectPacket, &xetraRejectPacket::getVarTextLen, &xetraRejectPacket::isVarTextLenValid> (d, VarTextLen, packet);
    xetra::setInteger<int8_t, xetraRejectPacket, &xetraRejectPacket::getSessionStatus, &xetraRejectPacket::isSessionStatusValid> (d, SessionStatus, packet);
    xetra::setString<xetraRejectPacket, &xetraRejectPacket::getPad1, &xetraRejectPacket::isPad1Valid> (d, Pad1, packet);
    xetra::setString<xetraRejectPacket, &xetraRejectPacket::getVarText, &xetraRejectPacket::isVarTextValid> (d, VarText, packet);
}

void
xetraCodec::getRetransmitMEMessageRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRetransmitMEMessageRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RetransmitMEMessageRequest");
    d.setString (MessageName, "RetransmitMEMessageRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint32_t, xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::getSubscriptionScope, &xetraRetransmitMEMessageRequestPacket::isSubscriptionScopeValid> (d, SubscriptionScope, packet);
    xetra::setInteger<uint16_t, xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::getPartitionID, &xetraRetransmitMEMessageRequestPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setInteger<int8_t, xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::getRefApplID, &xetraRetransmitMEMessageRequestPacket::isRefApplIDValid> (d, RefApplID, packet);
    xetra::setString<xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::getApplBegMsgID, &xetraRetransmitMEMessageRequestPacket::isApplBegMsgIDValid> (d, ApplBegMsgID, packet);
    xetra::setString<xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::getApplEndMsgID, &xetraRetransmitMEMessageRequestPacket::isApplEndMsgIDValid> (d, ApplEndMsgID, packet);
    xetra::setString<xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::getPad1, &xetraRetransmitMEMessageRequestPacket::isPad1Valid> (d, Pad1, packet);
}

void
xetraCodec::getRetransmitMEMessageResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRetransmitMEMessageResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RetransmitMEMessageResponse");
    d.setString (MessageName, "RetransmitMEMessageResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setInteger<uint16_t, xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::getApplTotalMessageCount, &xetraRetransmitMEMessageResponsePacket::isApplTotalMessageCountValid> (d, ApplTotalMessageCount, packet);
    xetra::setString<xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::getApplEndMsgID, &xetraRetransmitMEMessageResponsePacket::isApplEndMsgIDValid> (d, ApplEndMsgID, packet);
    xetra::setString<xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::getRefApplLastMsgID, &xetraRetransmitMEMessageResponsePacket::isRefApplLastMsgIDValid> (d, RefApplLastMsgID, packet);
    xetra::setString<xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::getPad6, &xetraRetransmitMEMessageResponsePacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getRetransmitRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRetransmitRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RetransmitRequest");
    d.setString (MessageName, "RetransmitRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint64_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::getApplBegSeqNum, &xetraRetransmitRequestPacket::isApplBegSeqNumValid> (d, ApplBegSeqNum, packet);
    xetra::setInteger<uint64_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::getApplEndSeqNum, &xetraRetransmitRequestPacket::isApplEndSeqNumValid> (d, ApplEndSeqNum, packet);
    xetra::setInteger<uint16_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::getPartitionID, &xetraRetransmitRequestPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setInteger<int8_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::getRefApplID, &xetraRetransmitRequestPacket::isRefApplIDValid> (d, RefApplID, packet);
    xetra::setString<xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::getPad5, &xetraRetransmitRequestPacket::isPad5Valid> (d, Pad5, packet);
}

void
xetraCodec::getRetransmitResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraRetransmitResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize RetransmitResponse");
    d.setString (MessageName, "RetransmitResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setInteger<uint64_t, xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::getApplEndSeqNum, &xetraRetransmitResponsePacket::isApplEndSeqNumValid> (d, ApplEndSeqNum, packet);
    xetra::setInteger<uint64_t, xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::getRefApplLastSeqNum, &xetraRetransmitResponsePacket::isRefApplLastSeqNumValid> (d, RefApplLastSeqNum, packet);
    xetra::setInteger<uint16_t, xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::getApplTotalMessageCount, &xetraRetransmitResponsePacket::isApplTotalMessageCountValid> (d, ApplTotalMessageCount, packet);
    xetra::setString<xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::getPad6, &xetraRetransmitResponsePacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getServiceAvailabilityBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraServiceAvailabilityBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ServiceAvailabilityBroadcast");
    d.setString (MessageName, "ServiceAvailabilityBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNRBCHeaderComp (d, packet.getNRBCHeader ());
    xetra::setInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getMatchingEngineTradeDate, &xetraServiceAvailabilityBroadcastPacket::isMatchingEngineTradeDateValid> (d, MatchingEngineTradeDate, packet);
    xetra::setInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getTradeManagerTradeDate, &xetraServiceAvailabilityBroadcastPacket::isTradeManagerTradeDateValid> (d, TradeManagerTradeDate, packet);
    xetra::setInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getApplSeqTradeDate, &xetraServiceAvailabilityBroadcastPacket::isApplSeqTradeDateValid> (d, ApplSeqTradeDate, packet);
    xetra::setInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getT7EntryServiceTradeDate, &xetraServiceAvailabilityBroadcastPacket::isT7EntryServiceTradeDateValid> (d, T7EntryServiceTradeDate, packet);
    xetra::setInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getT7EntryServiceRtmTradeDate, &xetraServiceAvailabilityBroadcastPacket::isT7EntryServiceRtmTradeDateValid> (d, T7EntryServiceRtmTradeDate, packet);
    xetra::setInteger<uint16_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getPartitionID, &xetraServiceAvailabilityBroadcastPacket::isPartitionIDValid> (d, PartitionID, packet);
    xetra::setInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getMatchingEngineStatus, &xetraServiceAvailabilityBroadcastPacket::isMatchingEngineStatusValid> (d, MatchingEngineStatus, packet);
    xetra::setInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getTradeManagerStatus, &xetraServiceAvailabilityBroadcastPacket::isTradeManagerStatusValid> (d, TradeManagerStatus, packet);
    xetra::setInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getApplSeqStatus, &xetraServiceAvailabilityBroadcastPacket::isApplSeqStatusValid> (d, ApplSeqStatus, packet);
    xetra::setInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getT7EntryServiceStatus, &xetraServiceAvailabilityBroadcastPacket::isT7EntryServiceStatusValid> (d, T7EntryServiceStatus, packet);
    xetra::setInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getT7EntryServiceRtmStatus, &xetraServiceAvailabilityBroadcastPacket::isT7EntryServiceRtmStatusValid> (d, T7EntryServiceRtmStatus, packet);
    xetra::setString<xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::getPad5, &xetraServiceAvailabilityBroadcastPacket::isPad5Valid> (d, Pad5, packet);
}

void
xetraCodec::getSubscribeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraSubscribeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize SubscribeRequest");
    d.setString (MessageName, "SubscribeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint32_t, xetraSubscribeRequestPacket, &xetraSubscribeRequestPacket::getSubscriptionScope, &xetraSubscribeRequestPacket::isSubscriptionScopeValid> (d, SubscriptionScope, packet);
    xetra::setInteger<int8_t, xetraSubscribeRequestPacket, &xetraSubscribeRequestPacket::getRefApplID, &xetraSubscribeRequestPacket::isRefApplIDValid> (d, RefApplID, packet);
    xetra::setString<xetraSubscribeRequestPacket, &xetraSubscribeRequestPacket::getPad3, &xetraSubscribeRequestPacket::isPad3Valid> (d, Pad3, packet);
}

void
xetraCodec::getSubscribeResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraSubscribeResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize SubscribeResponse");
    d.setString (MessageName, "SubscribeResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setInteger<uint32_t, xetraSubscribeResponsePacket, &xetraSubscribeResponsePacket::getApplSubID, &xetraSubscribeResponsePacket::isApplSubIDValid> (d, ApplSubID, packet);
    xetra::setString<xetraSubscribeResponsePacket, &xetraSubscribeResponsePacket::getPad4, &xetraSubscribeResponsePacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getTESApproveBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESApproveBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESApproveBroadcast");
    d.setString (MessageName, "TESApproveBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<int64_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getSecurityID, &xetraTESApproveBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getLastPx, &xetraTESApproveBroadcastPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setDouble<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getAllocQty, &xetraTESApproveBroadcastPacket::isAllocQtyValid> (d, AllocQty, packet);
    xetra::setInteger<uint64_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTransactTime, &xetraTESApproveBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<uint64_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTransBkdTime, &xetraTESApproveBroadcastPacket::isTransBkdTimeValid> (d, TransBkdTime, packet);
    xetra::setDouble<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getSettlCurrFxRate, &xetraTESApproveBroadcastPacket::isSettlCurrFxRateValid> (d, SettlCurrFxRate, packet);
    xetra::setInteger<int32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getMarketSegmentID, &xetraTESApproveBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getPackageID, &xetraTESApproveBroadcastPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<uint32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTESExecID, &xetraTESApproveBroadcastPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<uint32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getAllocID, &xetraTESApproveBroadcastPacket::isAllocIDValid> (d, AllocID, packet);
    xetra::setInteger<int32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getSettlDate, &xetraTESApproveBroadcastPacket::isSettlDateValid> (d, SettlDate, packet);
    xetra::setInteger<int16_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTrdType, &xetraTESApproveBroadcastPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getSide, &xetraTESApproveBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getValueCheckTypeValue, &xetraTESApproveBroadcastPacket::isValueCheckTypeValueValid> (d, ValueCheckTypeValue, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getValueCheckTypeQuantity, &xetraTESApproveBroadcastPacket::isValueCheckTypeQuantityValid> (d, ValueCheckTypeQuantity, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTradeReportType, &xetraTESApproveBroadcastPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTradingCapacity, &xetraTESApproveBroadcastPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTradeAllocStatus, &xetraTESApproveBroadcastPacket::isTradeAllocStatusValid> (d, TradeAllocStatus, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getMessageEventSource, &xetraTESApproveBroadcastPacket::isMessageEventSourceValid> (d, MessageEventSource, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getTradeReportID, &xetraTESApproveBroadcastPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getPartyExecutingFirm, &xetraTESApproveBroadcastPacket::isPartyExecutingFirmValid> (d, PartyExecutingFirm, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getPartyExecutingTrader, &xetraTESApproveBroadcastPacket::isPartyExecutingTraderValid> (d, PartyExecutingTrader, packet);
    xetra::setInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getPartyIDEnteringFirm, &xetraTESApproveBroadcastPacket::isPartyIDEnteringFirmValid> (d, PartyIDEnteringFirm, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getPartyEnteringTrader, &xetraTESApproveBroadcastPacket::isPartyEnteringTraderValid> (d, PartyEnteringTrader, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getRootPartyExecutingFirm, &xetraTESApproveBroadcastPacket::isRootPartyExecutingFirmValid> (d, RootPartyExecutingFirm, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getRootPartyExecutingTrader, &xetraTESApproveBroadcastPacket::isRootPartyExecutingTraderValid> (d, RootPartyExecutingTrader, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getFreeText1, &xetraTESApproveBroadcastPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getFreeText2, &xetraTESApproveBroadcastPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getFreeText4, &xetraTESApproveBroadcastPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::getPad2, &xetraTESApproveBroadcastPacket::isPad2Valid> (d, Pad2, packet);
}

void
xetraCodec::getTESBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESBroadcast");
    d.setString (MessageName, "TESBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<int64_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getSecurityID, &xetraTESBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getLastPx, &xetraTESBroadcastPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setInteger<uint64_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTransactTime, &xetraTESBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<uint64_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTransBkdTime, &xetraTESBroadcastPacket::isTransBkdTimeValid> (d, TransBkdTime, packet);
    xetra::setDouble<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getSettlCurrFxRate, &xetraTESBroadcastPacket::isSettlCurrFxRateValid> (d, SettlCurrFxRate, packet);
    xetra::setInteger<int32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getMarketSegmentID, &xetraTESBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getPackageID, &xetraTESBroadcastPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<uint32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTESExecID, &xetraTESBroadcastPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<int32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getSettlDate, &xetraTESBroadcastPacket::isSettlDateValid> (d, SettlDate, packet);
    xetra::setInteger<int16_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTrdType, &xetraTESBroadcastPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTradeReportType, &xetraTESBroadcastPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getNoSideAllocs, &xetraTESBroadcastPacket::isNoSideAllocsValid> (d, NoSideAllocs, packet);
    xetra::setString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getMessageEventSource, &xetraTESBroadcastPacket::isMessageEventSourceValid> (d, MessageEventSource, packet);
    xetra::setString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTradeReportText, &xetraTESBroadcastPacket::isTradeReportTextValid> (d, TradeReportText, packet);
    xetra::setString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getTradeReportID, &xetraTESBroadcastPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getRootPartyExecutingFirm, &xetraTESBroadcastPacket::isRootPartyExecutingFirmValid> (d, RootPartyExecutingFirm, packet);
    xetra::setString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::getRootPartyExecutingTrader, &xetraTESBroadcastPacket::isRootPartyExecutingTraderValid> (d, RootPartyExecutingTrader, packet);
    const vector<xetraSideAllocGrpBCCompPacket>& vSideAllocGrpBC = packet.getSideAllocGrpBC ();
    for (size_t i = 0; i < vSideAllocGrpBC.size (); i++)
    {
        cdr c;
        getSideAllocGrpBCComp (c, vSideAllocGrpBC[i]);
        d.appendArray (SideAllocGrpBC, c);
    }
}

void
xetraCodec::getTESDeleteBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESDeleteBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESDeleteBroadcast");
    d.setString (MessageName, "TESDeleteBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<uint64_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getTransactTime, &xetraTESDeleteBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<int32_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getMarketSegmentID, &xetraTESDeleteBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getPackageID, &xetraTESDeleteBroadcastPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<uint32_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getTESExecID, &xetraTESDeleteBroadcastPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<int16_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getTrdType, &xetraTESDeleteBroadcastPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getDeleteReason, &xetraTESDeleteBroadcastPacket::isDeleteReasonValid> (d, DeleteReason, packet);
    xetra::setInteger<int8_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getTradeReportType, &xetraTESDeleteBroadcastPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setString<xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getMessageEventSource, &xetraTESDeleteBroadcastPacket::isMessageEventSourceValid> (d, MessageEventSource, packet);
    xetra::setString<xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getTradeReportID, &xetraTESDeleteBroadcastPacket::isTradeReportIDValid> (d, TradeReportID, packet);
    xetra::setString<xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::getPad3, &xetraTESDeleteBroadcastPacket::isPad3Valid> (d, Pad3, packet);
}

void
xetraCodec::getTESExecutionBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESExecutionBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESExecutionBroadcast");
    d.setString (MessageName, "TESExecutionBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<uint64_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getTransactTime, &xetraTESExecutionBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<int32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getMarketSegmentID, &xetraTESExecutionBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getPackageID, &xetraTESExecutionBroadcastPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<uint32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getTESExecID, &xetraTESExecutionBroadcastPacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setInteger<uint32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getAllocID, &xetraTESExecutionBroadcastPacket::isAllocIDValid> (d, AllocID, packet);
    xetra::setInteger<int16_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getTrdType, &xetraTESExecutionBroadcastPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int8_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getTradeReportType, &xetraTESExecutionBroadcastPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getSide, &xetraTESExecutionBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getMessageEventSource, &xetraTESExecutionBroadcastPacket::isMessageEventSourceValid> (d, MessageEventSource, packet);
    xetra::setString<xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::getPad3, &xetraTESExecutionBroadcastPacket::isPad3Valid> (d, Pad3, packet);
}

void
xetraCodec::getTESResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESResponse");
    d.setString (MessageName, "TESResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
    xetra::setInteger<uint32_t, xetraTESResponsePacket, &xetraTESResponsePacket::getTESExecID, &xetraTESResponsePacket::isTESExecIDValid> (d, TESExecID, packet);
    xetra::setString<xetraTESResponsePacket, &xetraTESResponsePacket::getTradeReportID, &xetraTESResponsePacket::isTradeReportIDValid> (d, TradeReportID, packet);
}

void
xetraCodec::getTESTradeBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESTradeBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESTradeBroadcast");
    d.setString (MessageName, "TESTradeBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<int64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSecurityID, &xetraTESTradeBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getLastPx, &xetraTESTradeBroadcastPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getLastQty, &xetraTESTradeBroadcastPacket::isLastQtyValid> (d, LastQty, packet);
    xetra::setInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTransactTime, &xetraTESTradeBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSettlCurrAmt, &xetraTESTradeBroadcastPacket::isSettlCurrAmtValid> (d, SettlCurrAmt, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSideGrossTradeAmt, &xetraTESTradeBroadcastPacket::isSideGrossTradeAmtValid> (d, SideGrossTradeAmt, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSettlCurrFxRate, &xetraTESTradeBroadcastPacket::isSettlCurrFxRateValid> (d, SettlCurrFxRate, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getAccruedInteresAmt, &xetraTESTradeBroadcastPacket::isAccruedInteresAmtValid> (d, AccruedInteresAmt, packet);
    xetra::setDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getCouponRate, &xetraTESTradeBroadcastPacket::isCouponRateValid> (d, CouponRate, packet);
    xetra::setInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDClientID, &xetraTESTradeBroadcastPacket::isRootPartyIDClientIDValid> (d, RootPartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getExecutingTrader, &xetraTESTradeBroadcastPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDInvestmentDecisionMaker, &xetraTESTradeBroadcastPacket::isRootPartyIDInvestmentDecisionMakerValid> (d, RootPartyIDInvestmentDecisionMaker, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getPackageID, &xetraTESTradeBroadcastPacket::isPackageIDValid> (d, PackageID, packet);
    xetra::setInteger<int32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getMarketSegmentID, &xetraTESTradeBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTradeID, &xetraTESTradeBroadcastPacket::isTradeIDValid> (d, TradeID, packet);
    xetra::setInteger<int32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTradeDate, &xetraTESTradeBroadcastPacket::isTradeDateValid> (d, TradeDate, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSideTradeID, &xetraTESTradeBroadcastPacket::isSideTradeIDValid> (d, SideTradeID, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDSessionID, &xetraTESTradeBroadcastPacket::isRootPartyIDSessionIDValid> (d, RootPartyIDSessionID, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDSettlementUnit, &xetraTESTradeBroadcastPacket::isRootPartyIDSettlementUnitValid> (d, RootPartyIDSettlementUnit, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDContraUnit, &xetraTESTradeBroadcastPacket::isRootPartyIDContraUnitValid> (d, RootPartyIDContraUnit, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDContraSettlementUnit, &xetraTESTradeBroadcastPacket::isRootPartyIDContraSettlementUnitValid> (d, RootPartyIDContraSettlementUnit, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getOrigTradeID, &xetraTESTradeBroadcastPacket::isOrigTradeIDValid> (d, OrigTradeID, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDExecutingUnit, &xetraTESTradeBroadcastPacket::isRootPartyIDExecutingUnitValid> (d, RootPartyIDExecutingUnit, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDExecutingTrader, &xetraTESTradeBroadcastPacket::isRootPartyIDExecutingTraderValid> (d, RootPartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDClearingUnit, &xetraTESTradeBroadcastPacket::isRootPartyIDClearingUnitValid> (d, RootPartyIDClearingUnit, packet);
    xetra::setInteger<int32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSettlDate, &xetraTESTradeBroadcastPacket::isSettlDateValid> (d, SettlDate, packet);
    xetra::setInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getNumDaysInterest, &xetraTESTradeBroadcastPacket::isNumDaysInterestValid> (d, NumDaysInterest, packet);
    xetra::setInteger<int16_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTrdType, &xetraTESTradeBroadcastPacket::isTrdTypeValid> (d, TrdType, packet);
    xetra::setInteger<int16_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getLastMkt, &xetraTESTradeBroadcastPacket::isLastMktValid> (d, LastMkt, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSide, &xetraTESTradeBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTradingCapacity, &xetraTESTradeBroadcastPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTradeReportType, &xetraTESTradeBroadcastPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTransferReason, &xetraTESTradeBroadcastPacket::isTransferReasonValid> (d, TransferReason, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getTradePublishIndicator, &xetraTESTradeBroadcastPacket::isTradePublishIndicatorValid> (d, TradePublishIndicator, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getLastCouponDeviationIndicator, &xetraTESTradeBroadcastPacket::isLastCouponDeviationIndicatorValid> (d, LastCouponDeviationIndicator, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRefinancingEligibilityIndicator, &xetraTESTradeBroadcastPacket::isRefinancingEligibilityIndicatorValid> (d, RefinancingEligibilityIndicator, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getOrderAttributeLiquidityProvision, &xetraTESTradeBroadcastPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getExecutingTraderQualifier, &xetraTESTradeBroadcastPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyIDInvestmentDecisionMakerQualifier, &xetraTESTradeBroadcastPacket::isRootPartyIDInvestmentDecisionMakerQualifierValid> (d, RootPartyIDInvestmentDecisionMakerQualifier, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getAccount, &xetraTESTradeBroadcastPacket::isAccountValid> (d, Account, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getFreeText1, &xetraTESTradeBroadcastPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getFreeText2, &xetraTESTradeBroadcastPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getFreeText4, &xetraTESTradeBroadcastPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getSettlCurrency, &xetraTESTradeBroadcastPacket::isSettlCurrencyValid> (d, SettlCurrency, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyExecutingFirm, &xetraTESTradeBroadcastPacket::isRootPartyExecutingFirmValid> (d, RootPartyExecutingFirm, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyExecutingTrader, &xetraTESTradeBroadcastPacket::isRootPartyExecutingTraderValid> (d, RootPartyExecutingTrader, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyClearingFirm, &xetraTESTradeBroadcastPacket::isRootPartyClearingFirmValid> (d, RootPartyClearingFirm, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyClearingOrganization, &xetraTESTradeBroadcastPacket::isRootPartyClearingOrganizationValid> (d, RootPartyClearingOrganization, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyExecutingFirmKVNumber, &xetraTESTradeBroadcastPacket::isRootPartyExecutingFirmKVNumberValid> (d, RootPartyExecutingFirmKVNumber, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartySettlementAccount, &xetraTESTradeBroadcastPacket::isRootPartySettlementAccountValid> (d, RootPartySettlementAccount, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartySettlementLocation, &xetraTESTradeBroadcastPacket::isRootPartySettlementLocationValid> (d, RootPartySettlementLocation, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartySettlementFirm, &xetraTESTradeBroadcastPacket::isRootPartySettlementFirmValid> (d, RootPartySettlementFirm, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyContraFirm, &xetraTESTradeBroadcastPacket::isRootPartyContraFirmValid> (d, RootPartyContraFirm, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyContraSettlementFirm, &xetraTESTradeBroadcastPacket::isRootPartyContraSettlementFirmValid> (d, RootPartyContraSettlementFirm, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyContraFirmKVNumber, &xetraTESTradeBroadcastPacket::isRootPartyContraFirmKVNumberValid> (d, RootPartyContraFirmKVNumber, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyContraSettlementAccount, &xetraTESTradeBroadcastPacket::isRootPartyContraSettlementAccountValid> (d, RootPartyContraSettlementAccount, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRootPartyContraSettlementLocation, &xetraTESTradeBroadcastPacket::isRootPartyContraSettlementLocationValid> (d, RootPartyContraSettlementLocation, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getRegulatoryTradeID, &xetraTESTradeBroadcastPacket::isRegulatoryTradeIDValid> (d, RegulatoryTradeID, packet);
    xetra::setString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::getPad6, &xetraTESTradeBroadcastPacket::isPad6Valid> (d, Pad6, packet);
}

void
xetraCodec::getTESTradingSessionStatusBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTESTradingSessionStatusBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TESTradingSessionStatusBroadcast");
    d.setString (MessageName, "TESTradingSessionStatusBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<int32_t, xetraTESTradingSessionStatusBroadcastPacket, &xetraTESTradingSessionStatusBroadcastPacket::getTradeDate, &xetraTESTradingSessionStatusBroadcastPacket::isTradeDateValid> (d, TradeDate, packet);
    xetra::setInteger<int8_t, xetraTESTradingSessionStatusBroadcastPacket, &xetraTESTradingSessionStatusBroadcastPacket::getTradSesEvent, &xetraTESTradingSessionStatusBroadcastPacket::isTradSesEventValid> (d, TradSesEvent, packet);
    xetra::setString<xetraTESTradingSessionStatusBroadcastPacket, &xetraTESTradingSessionStatusBroadcastPacket::getPad3, &xetraTESTradingSessionStatusBroadcastPacket::isPad3Valid> (d, Pad3, packet);
}

void
xetraCodec::getTMTradingSessionStatusBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTMTradingSessionStatusBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TMTradingSessionStatusBroadcast");
    d.setString (MessageName, "TMTradingSessionStatusBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<int8_t, xetraTMTradingSessionStatusBroadcastPacket, &xetraTMTradingSessionStatusBroadcastPacket::getTradSesEvent, &xetraTMTradingSessionStatusBroadcastPacket::isTradSesEventValid> (d, TradSesEvent, packet);
    xetra::setString<xetraTMTradingSessionStatusBroadcastPacket, &xetraTMTradingSessionStatusBroadcastPacket::getPad7, &xetraTMTradingSessionStatusBroadcastPacket::isPad7Valid> (d, Pad7, packet);
}

void
xetraCodec::getThrottleUpdateNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraThrottleUpdateNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize ThrottleUpdateNotification");
    d.setString (MessageName, "ThrottleUpdateNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getNotifHeaderComp (d, packet.getNotifHeader ());
    xetra::setInteger<int64_t, xetraThrottleUpdateNotificationPacket, &xetraThrottleUpdateNotificationPacket::getThrottleTimeInterval, &xetraThrottleUpdateNotificationPacket::isThrottleTimeIntervalValid> (d, ThrottleTimeInterval, packet);
    xetra::setInteger<uint32_t, xetraThrottleUpdateNotificationPacket, &xetraThrottleUpdateNotificationPacket::getThrottleNoMsgs, &xetraThrottleUpdateNotificationPacket::isThrottleNoMsgsValid> (d, ThrottleNoMsgs, packet);
    xetra::setInteger<uint32_t, xetraThrottleUpdateNotificationPacket, &xetraThrottleUpdateNotificationPacket::getThrottleDisconnectLimit, &xetraThrottleUpdateNotificationPacket::isThrottleDisconnectLimitValid> (d, ThrottleDisconnectLimit, packet);
}

void
xetraCodec::getTradeBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTradeBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TradeBroadcast");
    d.setString (MessageName, "TradeBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderComp (d, packet.getRBCHeader ());
    xetra::setInteger<int64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSecurityID, &xetraTradeBroadcastPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getPrice, &xetraTradeBroadcastPacket::isPriceValid> (d, Price, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getLastPx, &xetraTradeBroadcastPacket::isLastPxValid> (d, LastPx, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getLastQty, &xetraTradeBroadcastPacket::isLastQtyValid> (d, LastQty, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSettlCurrAmt, &xetraTradeBroadcastPacket::isSettlCurrAmtValid> (d, SettlCurrAmt, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSettlCurrFxRate, &xetraTradeBroadcastPacket::isSettlCurrFxRateValid> (d, SettlCurrFxRate, packet);
    xetra::setInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTransactTime, &xetraTradeBroadcastPacket::isTransactTimeValid> (d, TransactTime, packet);
    xetra::setInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getOrderID, &xetraTradeBroadcastPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getClOrdID, &xetraTradeBroadcastPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getLeavesQty, &xetraTradeBroadcastPacket::isLeavesQtyValid> (d, LeavesQty, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getCumQty, &xetraTradeBroadcastPacket::isCumQtyValid> (d, CumQty, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSideGrossTradeAmt, &xetraTradeBroadcastPacket::isSideGrossTradeAmtValid> (d, SideGrossTradeAmt, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getAccruedInteresAmt, &xetraTradeBroadcastPacket::isAccruedInteresAmtValid> (d, AccruedInteresAmt, packet);
    xetra::setDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getCouponRate, &xetraTradeBroadcastPacket::isCouponRateValid> (d, CouponRate, packet);
    xetra::setInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDClientID, &xetraTradeBroadcastPacket::isRootPartyIDClientIDValid> (d, RootPartyIDClientID, packet);
    xetra::setInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getExecutingTrader, &xetraTradeBroadcastPacket::isExecutingTraderValid> (d, ExecutingTrader, packet);
    xetra::setInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDInvestmentDecisionMaker, &xetraTradeBroadcastPacket::isRootPartyIDInvestmentDecisionMakerValid> (d, RootPartyIDInvestmentDecisionMaker, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTradeID, &xetraTradeBroadcastPacket::isTradeIDValid> (d, TradeID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getOrigTradeID, &xetraTradeBroadcastPacket::isOrigTradeIDValid> (d, OrigTradeID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDExecutingUnit, &xetraTradeBroadcastPacket::isRootPartyIDExecutingUnitValid> (d, RootPartyIDExecutingUnit, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDSessionID, &xetraTradeBroadcastPacket::isRootPartyIDSessionIDValid> (d, RootPartyIDSessionID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDExecutingTrader, &xetraTradeBroadcastPacket::isRootPartyIDExecutingTraderValid> (d, RootPartyIDExecutingTrader, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDSettlementUnit, &xetraTradeBroadcastPacket::isRootPartyIDSettlementUnitValid> (d, RootPartyIDSettlementUnit, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDClearingUnit, &xetraTradeBroadcastPacket::isRootPartyIDClearingUnitValid> (d, RootPartyIDClearingUnit, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDContraUnit, &xetraTradeBroadcastPacket::isRootPartyIDContraUnitValid> (d, RootPartyIDContraUnit, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDContraSettlementUnit, &xetraTradeBroadcastPacket::isRootPartyIDContraSettlementUnitValid> (d, RootPartyIDContraSettlementUnit, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getOrderIDSfx, &xetraTradeBroadcastPacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getMarketSegmentID, &xetraTradeBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSideTradeID, &xetraTradeBroadcastPacket::isSideTradeIDValid> (d, SideTradeID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSideTradeReportID, &xetraTradeBroadcastPacket::isSideTradeReportIDValid> (d, SideTradeReportID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTradeNumber, &xetraTradeBroadcastPacket::isTradeNumberValid> (d, TradeNumber, packet);
    xetra::setInteger<int32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getMatchDate, &xetraTradeBroadcastPacket::isMatchDateValid> (d, MatchDate, packet);
    xetra::setInteger<int32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSettlDate, &xetraTradeBroadcastPacket::isSettlDateValid> (d, SettlDate, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTrdMatchID, &xetraTradeBroadcastPacket::isTrdMatchIDValid> (d, TrdMatchID, packet);
    xetra::setInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getNumDaysInterest, &xetraTradeBroadcastPacket::isNumDaysInterestValid> (d, NumDaysInterest, packet);
    xetra::setInteger<int16_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getLastMkt, &xetraTradeBroadcastPacket::isLastMktValid> (d, LastMkt, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTradeReportType, &xetraTradeBroadcastPacket::isTradeReportTypeValid> (d, TradeReportType, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTransferReason, &xetraTradeBroadcastPacket::isTransferReasonValid> (d, TransferReason, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getMatchType, &xetraTradeBroadcastPacket::isMatchTypeValid> (d, MatchType, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getMatchSubType, &xetraTradeBroadcastPacket::isMatchSubTypeValid> (d, MatchSubType, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSide, &xetraTradeBroadcastPacket::isSideValid> (d, Side, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSideLiquidityInd, &xetraTradeBroadcastPacket::isSideLiquidityIndValid> (d, SideLiquidityInd, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getDeliveryType, &xetraTradeBroadcastPacket::isDeliveryTypeValid> (d, DeliveryType, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getTradingCapacity, &xetraTradeBroadcastPacket::isTradingCapacityValid> (d, TradingCapacity, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getLastCouponDeviationIndicator, &xetraTradeBroadcastPacket::isLastCouponDeviationIndicatorValid> (d, LastCouponDeviationIndicator, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRefinancingEligibilityIndicator, &xetraTradeBroadcastPacket::isRefinancingEligibilityIndicatorValid> (d, RefinancingEligibilityIndicator, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getOrderAttributeLiquidityProvision, &xetraTradeBroadcastPacket::isOrderAttributeLiquidityProvisionValid> (d, OrderAttributeLiquidityProvision, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getExecutingTraderQualifier, &xetraTradeBroadcastPacket::isExecutingTraderQualifierValid> (d, ExecutingTraderQualifier, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyIDInvestmentDecisionMakerQualifier, &xetraTradeBroadcastPacket::isRootPartyIDInvestmentDecisionMakerQualifierValid> (d, RootPartyIDInvestmentDecisionMakerQualifier, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getAccount, &xetraTradeBroadcastPacket::isAccountValid> (d, Account, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getSettlCurrency, &xetraTradeBroadcastPacket::isSettlCurrencyValid> (d, SettlCurrency, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getCurrency, &xetraTradeBroadcastPacket::isCurrencyValid> (d, Currency, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getFreeText1, &xetraTradeBroadcastPacket::isFreeText1Valid> (d, FreeText1, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getFreeText2, &xetraTradeBroadcastPacket::isFreeText2Valid> (d, FreeText2, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getFreeText4, &xetraTradeBroadcastPacket::isFreeText4Valid> (d, FreeText4, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getOrderCategory, &xetraTradeBroadcastPacket::isOrderCategoryValid> (d, OrderCategory, packet);
    xetra::setInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getOrdType, &xetraTradeBroadcastPacket::isOrdTypeValid> (d, OrdType, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyExecutingFirm, &xetraTradeBroadcastPacket::isRootPartyExecutingFirmValid> (d, RootPartyExecutingFirm, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyExecutingTrader, &xetraTradeBroadcastPacket::isRootPartyExecutingTraderValid> (d, RootPartyExecutingTrader, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyClearingFirm, &xetraTradeBroadcastPacket::isRootPartyClearingFirmValid> (d, RootPartyClearingFirm, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyExecutingFirmKVNumber, &xetraTradeBroadcastPacket::isRootPartyExecutingFirmKVNumberValid> (d, RootPartyExecutingFirmKVNumber, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartySettlementAccount, &xetraTradeBroadcastPacket::isRootPartySettlementAccountValid> (d, RootPartySettlementAccount, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartySettlementLocation, &xetraTradeBroadcastPacket::isRootPartySettlementLocationValid> (d, RootPartySettlementLocation, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartySettlementFirm, &xetraTradeBroadcastPacket::isRootPartySettlementFirmValid> (d, RootPartySettlementFirm, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyContraFirm, &xetraTradeBroadcastPacket::isRootPartyContraFirmValid> (d, RootPartyContraFirm, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyContraSettlementFirm, &xetraTradeBroadcastPacket::isRootPartyContraSettlementFirmValid> (d, RootPartyContraSettlementFirm, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyContraFirmKVNumber, &xetraTradeBroadcastPacket::isRootPartyContraFirmKVNumberValid> (d, RootPartyContraFirmKVNumber, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyContraSettlementAccount, &xetraTradeBroadcastPacket::isRootPartyContraSettlementAccountValid> (d, RootPartyContraSettlementAccount, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRootPartyContraSettlementLocation, &xetraTradeBroadcastPacket::isRootPartyContraSettlementLocationValid> (d, RootPartyContraSettlementLocation, packet);
    xetra::setString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::getRegulatoryTradeID, &xetraTradeBroadcastPacket::isRegulatoryTradeIDValid> (d, RegulatoryTradeID, packet);
}

void
xetraCodec::getTradingSessionStatusBroadcast (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTradingSessionStatusBroadcastPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TradingSessionStatusBroadcast");
    d.setString (MessageName, "TradingSessionStatusBroadcast");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<int32_t, xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::getMarketSegmentID, &xetraTradingSessionStatusBroadcastPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int32_t, xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::getTradeDate, &xetraTradingSessionStatusBroadcastPacket::isTradeDateValid> (d, TradeDate, packet);
    xetra::setInteger<int8_t, xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::getTradSesEvent, &xetraTradingSessionStatusBroadcastPacket::isTradSesEventValid> (d, TradSesEvent, packet);
    xetra::setString<xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::getRefApplLastMsgID, &xetraTradingSessionStatusBroadcastPacket::isRefApplLastMsgIDValid> (d, RefApplLastMsgID, packet);
    xetra::setString<xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::getPad7, &xetraTradingSessionStatusBroadcastPacket::isPad7Valid> (d, Pad7, packet);
}

void
xetraCodec::getTrailingStopUpdateNotification (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraTrailingStopUpdateNotificationPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize TrailingStopUpdateNotification");
    d.setString (MessageName, "TrailingStopUpdateNotification");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getRBCHeaderMEComp (d, packet.getRBCHeaderME ());
    xetra::setInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getOrderID, &xetraTrailingStopUpdateNotificationPacket::isOrderIDValid> (d, OrderID, packet);
    xetra::setInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getClOrdID, &xetraTrailingStopUpdateNotificationPacket::isClOrdIDValid> (d, ClOrdID, packet);
    xetra::setInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getOrigClOrdID, &xetraTrailingStopUpdateNotificationPacket::isOrigClOrdIDValid> (d, OrigClOrdID, packet);
    xetra::setInteger<int64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getSecurityID, &xetraTrailingStopUpdateNotificationPacket::isSecurityIDValid> (d, SecurityID, packet);
    xetra::setInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getExecID, &xetraTrailingStopUpdateNotificationPacket::isExecIDValid> (d, ExecID, packet);
    xetra::setDouble<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getStopPx, &xetraTrailingStopUpdateNotificationPacket::isStopPxValid> (d, StopPx, packet);
    xetra::setDouble<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getOrderQty, &xetraTrailingStopUpdateNotificationPacket::isOrderQtyValid> (d, OrderQty, packet);
    xetra::setInteger<uint32_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getOrderIDSfx, &xetraTrailingStopUpdateNotificationPacket::isOrderIDSfxValid> (d, OrderIDSfx, packet);
    xetra::setInteger<int32_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getMarketSegmentID, &xetraTrailingStopUpdateNotificationPacket::isMarketSegmentIDValid> (d, MarketSegmentID, packet);
    xetra::setInteger<int16_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getExecRestatementReason, &xetraTrailingStopUpdateNotificationPacket::isExecRestatementReasonValid> (d, ExecRestatementReason, packet);
    xetra::setString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getOrdStatus, &xetraTrailingStopUpdateNotificationPacket::isOrdStatusValid> (d, OrdStatus, packet);
    xetra::setString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getExecType, &xetraTrailingStopUpdateNotificationPacket::isExecTypeValid> (d, ExecType, packet);
    xetra::setInteger<int8_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getSide, &xetraTrailingStopUpdateNotificationPacket::isSideValid> (d, Side, packet);
    xetra::setString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getFIXClOrdID, &xetraTrailingStopUpdateNotificationPacket::isFIXClOrdIDValid> (d, FIXClOrdID, packet);
    xetra::setString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::getPad7, &xetraTrailingStopUpdateNotificationPacket::isPad7Valid> (d, Pad7, packet);
}

void
xetraCodec::getUnsubscribeRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraUnsubscribeRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize UnsubscribeRequest");
    d.setString (MessageName, "UnsubscribeRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<uint32_t, xetraUnsubscribeRequestPacket, &xetraUnsubscribeRequestPacket::getRefApplSubID, &xetraUnsubscribeRequestPacket::isRefApplSubIDValid> (d, RefApplSubID, packet);
    xetra::setString<xetraUnsubscribeRequestPacket, &xetraUnsubscribeRequestPacket::getPad4, &xetraUnsubscribeRequestPacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getUnsubscribeResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraUnsubscribeResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize UnsubscribeResponse");
    d.setString (MessageName, "UnsubscribeResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
}

void
xetraCodec::getUserLoginRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraUserLoginRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize UserLoginRequest");
    d.setString (MessageName, "UserLoginRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int32_t, xetraUserLoginRequestPacket, &xetraUserLoginRequestPacket::getUsername, &xetraUserLoginRequestPacket::isUsernameValid> (d, Username, packet);
    xetra::setString<xetraUserLoginRequestPacket, &xetraUserLoginRequestPacket::getPassword, &xetraUserLoginRequestPacket::isPasswordValid> (d, Password, packet);
    xetra::setString<xetraUserLoginRequestPacket, &xetraUserLoginRequestPacket::getPad4, &xetraUserLoginRequestPacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getUserLoginResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraUserLoginResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize UserLoginResponse");
    d.setString (MessageName, "UserLoginResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
}

void
xetraCodec::getUserLogoutRequest (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraUserLogoutRequestPacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize UserLogoutRequest");
    d.setString (MessageName, "UserLogoutRequest");
    getMessageHeaderInComp (d, packet.getMessageHeaderIn ());
    getRequestHeaderComp (d, packet.getRequestHeader ());
    xetra::setInteger<int32_t, xetraUserLogoutRequestPacket, &xetraUserLogoutRequestPacket::getUsername, &xetraUserLogoutRequestPacket::isUsernameValid> (d, Username, packet);
    xetra::setString<xetraUserLogoutRequestPacket, &xetraUserLogoutRequestPacket::getPad4, &xetraUserLogoutRequestPacket::isPad4Valid> (d, Pad4, packet);
}

void
xetraCodec::getUserLogoutResponse (cdr &d, const void *buf, size_t len, size_t& used)
{
    xetraUserLogoutResponsePacket packet;
    codecState state = packet.deserialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot deserialize UserLogoutResponse");
    d.setString (MessageName, "UserLogoutResponse");
    getMessageHeaderOutComp (d, packet.getMessageHeaderOut ());
    getResponseHeaderComp (d, packet.getResponseHeader ());
}


static void
putResponseHeaderMEComp (const cdr &d, xetraResponseHeaderMECompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setRequestTime, &xetraResponseHeaderMECompPacket::resetRequestTime> (d, RequestTime, packet);
    xetra::getInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setTrdRegTSTimeIn, &xetraResponseHeaderMECompPacket::resetTrdRegTSTimeIn> (d, TrdRegTSTimeIn, packet);
    xetra::getInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setTrdRegTSTimeOut, &xetraResponseHeaderMECompPacket::resetTrdRegTSTimeOut> (d, TrdRegTSTimeOut, packet);
    xetra::getInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setResponseIn, &xetraResponseHeaderMECompPacket::resetResponseIn> (d, ResponseIn, packet);
    xetra::getInteger<uint64_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setSendingTime, &xetraResponseHeaderMECompPacket::resetSendingTime> (d, SendingTime, packet);
    xetra::getInteger<uint32_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setMsgSeqNum, &xetraResponseHeaderMECompPacket::resetMsgSeqNum> (d, MsgSeqNum, packet);
    xetra::getInteger<uint16_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setPartitionID, &xetraResponseHeaderMECompPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getInteger<int8_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setApplID, &xetraResponseHeaderMECompPacket::resetApplID> (d, ApplID, packet);
    xetra::getString<xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setApplMsgID, &xetraResponseHeaderMECompPacket::resetApplMsgID> (d, ApplMsgID, packet);
    xetra::getInteger<int8_t, xetraResponseHeaderMECompPacket, &xetraResponseHeaderMECompPacket::setLastFragment, &xetraResponseHeaderMECompPacket::resetLastFragment> (d, LastFragment, packet);
}

static void
putOrderBookItemGrpComp (const cdr &d, xetraOrderBookItemGrpCompPacket& packet)
{
    xetra::getInteger<int64_t, xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setSecurityID, &xetraOrderBookItemGrpCompPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setBestBidPx, &xetraOrderBookItemGrpCompPacket::resetBestBidPx> (d, BestBidPx, packet);
    xetra::getDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setBestBidSize, &xetraOrderBookItemGrpCompPacket::resetBestBidSize> (d, BestBidSize, packet);
    xetra::getDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setBestOfferPx, &xetraOrderBookItemGrpCompPacket::resetBestOfferPx> (d, BestOfferPx, packet);
    xetra::getDouble<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setBestOfferSize, &xetraOrderBookItemGrpCompPacket::resetBestOfferSize> (d, BestOfferSize, packet);
    xetra::getInteger<int8_t, xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setMDBookType, &xetraOrderBookItemGrpCompPacket::resetMDBookType> (d, MDBookType, packet);
    xetra::getString<xetraOrderBookItemGrpCompPacket, &xetraOrderBookItemGrpCompPacket::setPad7, &xetraOrderBookItemGrpCompPacket::resetPad7> (d, Pad7, packet);
}

static void
putQuoteEntryGrpComp (const cdr &d, xetraQuoteEntryGrpCompPacket& packet)
{
    xetra::getInteger<int64_t, xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::setSecurityID, &xetraQuoteEntryGrpCompPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::setBidPx, &xetraQuoteEntryGrpCompPacket::resetBidPx> (d, BidPx, packet);
    xetra::getDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::setBidSize, &xetraQuoteEntryGrpCompPacket::resetBidSize> (d, BidSize, packet);
    xetra::getDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::setOfferPx, &xetraQuoteEntryGrpCompPacket::resetOfferPx> (d, OfferPx, packet);
    xetra::getDouble<xetraQuoteEntryGrpCompPacket, &xetraQuoteEntryGrpCompPacket::setOfferSize, &xetraQuoteEntryGrpCompPacket::resetOfferSize> (d, OfferSize, packet);
}

static void
putResponseHeaderComp (const cdr &d, xetraResponseHeaderCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::setRequestTime, &xetraResponseHeaderCompPacket::resetRequestTime> (d, RequestTime, packet);
    xetra::getInteger<uint64_t, xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::setSendingTime, &xetraResponseHeaderCompPacket::resetSendingTime> (d, SendingTime, packet);
    xetra::getInteger<uint32_t, xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::setMsgSeqNum, &xetraResponseHeaderCompPacket::resetMsgSeqNum> (d, MsgSeqNum, packet);
    xetra::getString<xetraResponseHeaderCompPacket, &xetraResponseHeaderCompPacket::setPad4, &xetraResponseHeaderCompPacket::resetPad4> (d, Pad4, packet);
}

static void
putNotAffectedOrdersGrpComp (const cdr &d, xetraNotAffectedOrdersGrpCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraNotAffectedOrdersGrpCompPacket, &xetraNotAffectedOrdersGrpCompPacket::setNotAffectedOrderID, &xetraNotAffectedOrdersGrpCompPacket::resetNotAffectedOrderID> (d, NotAffectedOrderID, packet);
    xetra::getInteger<uint64_t, xetraNotAffectedOrdersGrpCompPacket, &xetraNotAffectedOrdersGrpCompPacket::setNotAffOrigClOrdID, &xetraNotAffectedOrdersGrpCompPacket::resetNotAffOrigClOrdID> (d, NotAffOrigClOrdID, packet);
}

static void
putMessageHeaderInComp (const cdr &d, xetraMessageHeaderInCompPacket& packet)
{
    xetra::getInteger<uint32_t, xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::setBodyLen, &xetraMessageHeaderInCompPacket::resetBodyLen> (d, BodyLen, packet);
    xetra::getInteger<uint16_t, xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::setTemplateID, &xetraMessageHeaderInCompPacket::resetTemplateID> (d, TemplateID, packet);
    xetra::getString<xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::setNetworkMsgID, &xetraMessageHeaderInCompPacket::resetNetworkMsgID> (d, NetworkMsgID, packet);
    xetra::getString<xetraMessageHeaderInCompPacket, &xetraMessageHeaderInCompPacket::setPad2, &xetraMessageHeaderInCompPacket::resetPad2> (d, Pad2, packet);
}

static void
putRequestHeaderComp (const cdr &d, xetraRequestHeaderCompPacket& packet)
{
    xetra::getInteger<uint32_t, xetraRequestHeaderCompPacket, &xetraRequestHeaderCompPacket::setMsgSeqNum, &xetraRequestHeaderCompPacket::resetMsgSeqNum> (d, MsgSeqNum, packet);
    xetra::getInteger<int32_t, xetraRequestHeaderCompPacket, &xetraRequestHeaderCompPacket::setSenderSubID, &xetraRequestHeaderCompPacket::resetSenderSubID> (d, SenderSubID, packet);
}

static void
putNotAffectedSecuritiesGrpComp (const cdr &d, xetraNotAffectedSecuritiesGrpCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraNotAffectedSecuritiesGrpCompPacket, &xetraNotAffectedSecuritiesGrpCompPacket::setNotAffectedSecurityID, &xetraNotAffectedSecuritiesGrpCompPacket::resetNotAffectedSecurityID> (d, NotAffectedSecurityID, packet);
}

static void
putPartyDetailsGrpComp (const cdr &d, xetraPartyDetailsGrpCompPacket& packet)
{
    xetra::getInteger<uint32_t, xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::setPartyDetailIDExecutingTrader, &xetraPartyDetailsGrpCompPacket::resetPartyDetailIDExecutingTrader> (d, PartyDetailIDExecutingTrader, packet);
    xetra::getString<xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::setPartyDetailExecutingTrader, &xetraPartyDetailsGrpCompPacket::resetPartyDetailExecutingTrader> (d, PartyDetailExecutingTrader, packet);
    xetra::getInteger<int8_t, xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::setPartyDetailRoleQualifier, &xetraPartyDetailsGrpCompPacket::resetPartyDetailRoleQualifier> (d, PartyDetailRoleQualifier, packet);
    xetra::getInteger<int8_t, xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::setPartyDetailStatus, &xetraPartyDetailsGrpCompPacket::resetPartyDetailStatus> (d, PartyDetailStatus, packet);
    xetra::getString<xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::setPartyDetailDeskID, &xetraPartyDetailsGrpCompPacket::resetPartyDetailDeskID> (d, PartyDetailDeskID, packet);
    xetra::getString<xetraPartyDetailsGrpCompPacket, &xetraPartyDetailsGrpCompPacket::setPad1, &xetraPartyDetailsGrpCompPacket::resetPad1> (d, Pad1, packet);
}

static void
putNRResponseHeaderMEComp (const cdr &d, xetraNRResponseHeaderMECompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setRequestTime, &xetraNRResponseHeaderMECompPacket::resetRequestTime> (d, RequestTime, packet);
    xetra::getInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setTrdRegTSTimeIn, &xetraNRResponseHeaderMECompPacket::resetTrdRegTSTimeIn> (d, TrdRegTSTimeIn, packet);
    xetra::getInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setTrdRegTSTimeOut, &xetraNRResponseHeaderMECompPacket::resetTrdRegTSTimeOut> (d, TrdRegTSTimeOut, packet);
    xetra::getInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setResponseIn, &xetraNRResponseHeaderMECompPacket::resetResponseIn> (d, ResponseIn, packet);
    xetra::getInteger<uint64_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setSendingTime, &xetraNRResponseHeaderMECompPacket::resetSendingTime> (d, SendingTime, packet);
    xetra::getInteger<uint32_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setMsgSeqNum, &xetraNRResponseHeaderMECompPacket::resetMsgSeqNum> (d, MsgSeqNum, packet);
    xetra::getInteger<int8_t, xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setLastFragment, &xetraNRResponseHeaderMECompPacket::resetLastFragment> (d, LastFragment, packet);
    xetra::getString<xetraNRResponseHeaderMECompPacket, &xetraNRResponseHeaderMECompPacket::setPad3, &xetraNRResponseHeaderMECompPacket::resetPad3> (d, Pad3, packet);
}

static void
putRBCHeaderMEComp (const cdr &d, xetraRBCHeaderMECompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setTrdRegTSTimeOut, &xetraRBCHeaderMECompPacket::resetTrdRegTSTimeOut> (d, TrdRegTSTimeOut, packet);
    xetra::getInteger<uint64_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setNotificationIn, &xetraRBCHeaderMECompPacket::resetNotificationIn> (d, NotificationIn, packet);
    xetra::getInteger<uint64_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setSendingTime, &xetraRBCHeaderMECompPacket::resetSendingTime> (d, SendingTime, packet);
    xetra::getInteger<uint32_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setApplSubID, &xetraRBCHeaderMECompPacket::resetApplSubID> (d, ApplSubID, packet);
    xetra::getInteger<uint16_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setPartitionID, &xetraRBCHeaderMECompPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getString<xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setApplMsgID, &xetraRBCHeaderMECompPacket::resetApplMsgID> (d, ApplMsgID, packet);
    xetra::getInteger<int8_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setApplID, &xetraRBCHeaderMECompPacket::resetApplID> (d, ApplID, packet);
    xetra::getInteger<int8_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setApplResendFlag, &xetraRBCHeaderMECompPacket::resetApplResendFlag> (d, ApplResendFlag, packet);
    xetra::getInteger<int8_t, xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setLastFragment, &xetraRBCHeaderMECompPacket::resetLastFragment> (d, LastFragment, packet);
    xetra::getString<xetraRBCHeaderMECompPacket, &xetraRBCHeaderMECompPacket::setPad7, &xetraRBCHeaderMECompPacket::resetPad7> (d, Pad7, packet);
}

static void
putEnrichmentRulesGrpComp (const cdr &d, xetraEnrichmentRulesGrpCompPacket& packet)
{
    xetra::getInteger<int16_t, xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::setEnrichmentRuleID, &xetraEnrichmentRulesGrpCompPacket::resetEnrichmentRuleID> (d, EnrichmentRuleID, packet);
    xetra::getString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::setFreeText1, &xetraEnrichmentRulesGrpCompPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::setFreeText2, &xetraEnrichmentRulesGrpCompPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::setFreeText4, &xetraEnrichmentRulesGrpCompPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraEnrichmentRulesGrpCompPacket, &xetraEnrichmentRulesGrpCompPacket::setPad6, &xetraEnrichmentRulesGrpCompPacket::resetPad6> (d, Pad6, packet);
}

static void
putSessionsGrpComp (const cdr &d, xetraSessionsGrpCompPacket& packet)
{
    xetra::getInteger<uint32_t, xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::setPartyIDSessionID, &xetraSessionsGrpCompPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getInteger<int8_t, xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::setSessionMode, &xetraSessionsGrpCompPacket::resetSessionMode> (d, SessionMode, packet);
    xetra::getInteger<int8_t, xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::setSessionSubMode, &xetraSessionsGrpCompPacket::resetSessionSubMode> (d, SessionSubMode, packet);
    xetra::getString<xetraSessionsGrpCompPacket, &xetraSessionsGrpCompPacket::setPad2, &xetraSessionsGrpCompPacket::resetPad2> (d, Pad2, packet);
}

static void
putAffectedOrdGrpComp (const cdr &d, xetraAffectedOrdGrpCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraAffectedOrdGrpCompPacket, &xetraAffectedOrdGrpCompPacket::setAffectedOrderID, &xetraAffectedOrdGrpCompPacket::resetAffectedOrderID> (d, AffectedOrderID, packet);
    xetra::getInteger<uint64_t, xetraAffectedOrdGrpCompPacket, &xetraAffectedOrdGrpCompPacket::setAffectedOrigClOrdID, &xetraAffectedOrdGrpCompPacket::resetAffectedOrigClOrdID> (d, AffectedOrigClOrdID, packet);
}

static void
putRBCHeaderComp (const cdr &d, xetraRBCHeaderCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setSendingTime, &xetraRBCHeaderCompPacket::resetSendingTime> (d, SendingTime, packet);
    xetra::getInteger<uint64_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setApplSeqNum, &xetraRBCHeaderCompPacket::resetApplSeqNum> (d, ApplSeqNum, packet);
    xetra::getInteger<uint32_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setApplSubID, &xetraRBCHeaderCompPacket::resetApplSubID> (d, ApplSubID, packet);
    xetra::getInteger<uint16_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setPartitionID, &xetraRBCHeaderCompPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getInteger<int8_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setApplResendFlag, &xetraRBCHeaderCompPacket::resetApplResendFlag> (d, ApplResendFlag, packet);
    xetra::getInteger<int8_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setApplID, &xetraRBCHeaderCompPacket::resetApplID> (d, ApplID, packet);
    xetra::getInteger<int8_t, xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setLastFragment, &xetraRBCHeaderCompPacket::resetLastFragment> (d, LastFragment, packet);
    xetra::getString<xetraRBCHeaderCompPacket, &xetraRBCHeaderCompPacket::setPad7, &xetraRBCHeaderCompPacket::resetPad7> (d, Pad7, packet);
}

static void
putTargetPartiesComp (const cdr &d, xetraTargetPartiesCompPacket& packet)
{
    xetra::getInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setSideDisclosureInstruction, &xetraTargetPartiesCompPacket::resetSideDisclosureInstruction> (d, SideDisclosureInstruction, packet);
    xetra::getInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setPriceDisclosureInstruction, &xetraTargetPartiesCompPacket::resetPriceDisclosureInstruction> (d, PriceDisclosureInstruction, packet);
    xetra::getInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setLeavesQtyDisclosureInstruction, &xetraTargetPartiesCompPacket::resetLeavesQtyDisclosureInstruction> (d, LeavesQtyDisclosureInstruction, packet);
    xetra::getInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setLastPxDisclosureInstruction, &xetraTargetPartiesCompPacket::resetLastPxDisclosureInstruction> (d, LastPxDisclosureInstruction, packet);
    xetra::getInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setLastQtyDisclosureInstruction, &xetraTargetPartiesCompPacket::resetLastQtyDisclosureInstruction> (d, LastQtyDisclosureInstruction, packet);
    xetra::getInteger<int8_t, xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setQuoteInstruction, &xetraTargetPartiesCompPacket::resetQuoteInstruction> (d, QuoteInstruction, packet);
    xetra::getString<xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setTargetPartyExecutingFirm, &xetraTargetPartiesCompPacket::resetTargetPartyExecutingFirm> (d, TargetPartyExecutingFirm, packet);
    xetra::getString<xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setTargetPartyExecutingTrader, &xetraTargetPartiesCompPacket::resetTargetPartyExecutingTrader> (d, TargetPartyExecutingTrader, packet);
    xetra::getString<xetraTargetPartiesCompPacket, &xetraTargetPartiesCompPacket::setPad7, &xetraTargetPartiesCompPacket::resetPad7> (d, Pad7, packet);
}

static void
putNotifHeaderComp (const cdr &d, xetraNotifHeaderCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraNotifHeaderCompPacket, &xetraNotifHeaderCompPacket::setSendingTime, &xetraNotifHeaderCompPacket::resetSendingTime> (d, SendingTime, packet);
}

static void
putMessageHeaderOutComp (const cdr &d, xetraMessageHeaderOutCompPacket& packet)
{
    xetra::getInteger<uint32_t, xetraMessageHeaderOutCompPacket, &xetraMessageHeaderOutCompPacket::setBodyLen, &xetraMessageHeaderOutCompPacket::resetBodyLen> (d, BodyLen, packet);
    xetra::getInteger<uint16_t, xetraMessageHeaderOutCompPacket, &xetraMessageHeaderOutCompPacket::setTemplateID, &xetraMessageHeaderOutCompPacket::resetTemplateID> (d, TemplateID, packet);
    xetra::getString<xetraMessageHeaderOutCompPacket, &xetraMessageHeaderOutCompPacket::setPad2, &xetraMessageHeaderOutCompPacket::resetPad2> (d, Pad2, packet);
}

static void
putNRBCHeaderComp (const cdr &d, xetraNRBCHeaderCompPacket& packet)
{
    xetra::getInteger<uint64_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::setSendingTime, &xetraNRBCHeaderCompPacket::resetSendingTime> (d, SendingTime, packet);
    xetra::getInteger<uint32_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::setApplSubID, &xetraNRBCHeaderCompPacket::resetApplSubID> (d, ApplSubID, packet);
    xetra::getInteger<int8_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::setApplID, &xetraNRBCHeaderCompPacket::resetApplID> (d, ApplID, packet);
    xetra::getInteger<int8_t, xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::setLastFragment, &xetraNRBCHeaderCompPacket::resetLastFragment> (d, LastFragment, packet);
    xetra::getString<xetraNRBCHeaderCompPacket, &xetraNRBCHeaderCompPacket::setPad2, &xetraNRBCHeaderCompPacket::resetPad2> (d, Pad2, packet);
}

static void
putSideAllocGrpBCComp (const cdr &d, xetraSideAllocGrpBCCompPacket& packet)
{
    xetra::getDouble<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setAllocQty, &xetraSideAllocGrpBCCompPacket::resetAllocQty> (d, AllocQty, packet);
    xetra::getInteger<uint32_t, xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setIndividualAllocID, &xetraSideAllocGrpBCCompPacket::resetIndividualAllocID> (d, IndividualAllocID, packet);
    xetra::getString<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setPartyExecutingFirm, &xetraSideAllocGrpBCCompPacket::resetPartyExecutingFirm> (d, PartyExecutingFirm, packet);
    xetra::getString<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setPartyExecutingTrader, &xetraSideAllocGrpBCCompPacket::resetPartyExecutingTrader> (d, PartyExecutingTrader, packet);
    xetra::getInteger<int8_t, xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setSide, &xetraSideAllocGrpBCCompPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setTradeAllocStatus, &xetraSideAllocGrpBCCompPacket::resetTradeAllocStatus> (d, TradeAllocStatus, packet);
    xetra::getString<xetraSideAllocGrpBCCompPacket, &xetraSideAllocGrpBCCompPacket::setPad7, &xetraSideAllocGrpBCCompPacket::resetPad7> (d, Pad7, packet);
}

static void
putSideAllocGrpComp (const cdr &d, xetraSideAllocGrpCompPacket& packet)
{
    xetra::getDouble<xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::setAllocQty, &xetraSideAllocGrpCompPacket::resetAllocQty> (d, AllocQty, packet);
    xetra::getInteger<uint32_t, xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::setIndividualAllocID, &xetraSideAllocGrpCompPacket::resetIndividualAllocID> (d, IndividualAllocID, packet);
    xetra::getInteger<int8_t, xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::setSide, &xetraSideAllocGrpCompPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::setPartyExecutingFirm, &xetraSideAllocGrpCompPacket::resetPartyExecutingFirm> (d, PartyExecutingFirm, packet);
    xetra::getString<xetraSideAllocGrpCompPacket, &xetraSideAllocGrpCompPacket::setPartyExecutingTrader, &xetraSideAllocGrpCompPacket::resetPartyExecutingTrader> (d, PartyExecutingTrader, packet);
}

static void
putFillsGrpComp (const cdr &d, xetraFillsGrpCompPacket& packet)
{
    xetra::getDouble<xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::setFillPx, &xetraFillsGrpCompPacket::resetFillPx> (d, FillPx, packet);
    xetra::getDouble<xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::setFillQty, &xetraFillsGrpCompPacket::resetFillQty> (d, FillQty, packet);
    xetra::getInteger<uint32_t, xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::setFillMatchID, &xetraFillsGrpCompPacket::resetFillMatchID> (d, FillMatchID, packet);
    xetra::getInteger<int32_t, xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::setFillExecID, &xetraFillsGrpCompPacket::resetFillExecID> (d, FillExecID, packet);
    xetra::getInteger<int8_t, xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::setFillLiquidityInd, &xetraFillsGrpCompPacket::resetFillLiquidityInd> (d, FillLiquidityInd, packet);
    xetra::getString<xetraFillsGrpCompPacket, &xetraFillsGrpCompPacket::setPad7, &xetraFillsGrpCompPacket::resetPad7> (d, Pad7, packet);
}

static void
putQuoteEntryAckGrpComp (const cdr &d, xetraQuoteEntryAckGrpCompPacket& packet)
{
    xetra::getInteger<int64_t, xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::setSecurityID, &xetraQuoteEntryAckGrpCompPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::setBidCxlSize, &xetraQuoteEntryAckGrpCompPacket::resetBidCxlSize> (d, BidCxlSize, packet);
    xetra::getDouble<xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::setOfferCxlSize, &xetraQuoteEntryAckGrpCompPacket::resetOfferCxlSize> (d, OfferCxlSize, packet);
    xetra::getInteger<int32_t, xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::setQuoteEntryRejectReason, &xetraQuoteEntryAckGrpCompPacket::resetQuoteEntryRejectReason> (d, QuoteEntryRejectReason, packet);
    xetra::getInteger<int8_t, xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::setQuoteEntryStatus, &xetraQuoteEntryAckGrpCompPacket::resetQuoteEntryStatus> (d, QuoteEntryStatus, packet);
    xetra::getString<xetraQuoteEntryAckGrpCompPacket, &xetraQuoteEntryAckGrpCompPacket::setPad3, &xetraQuoteEntryAckGrpCompPacket::resetPad3> (d, Pad3, packet);
}

static void
putQuoteEventGrpComp (const cdr &d, xetraQuoteEventGrpCompPacket& packet)
{
    xetra::getInteger<int64_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setSecurityID, &xetraQuoteEventGrpCompPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventPx, &xetraQuoteEventGrpCompPacket::resetQuoteEventPx> (d, QuoteEventPx, packet);
    xetra::getDouble<xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventQty, &xetraQuoteEventGrpCompPacket::resetQuoteEventQty> (d, QuoteEventQty, packet);
    xetra::getInteger<uint64_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteMsgID, &xetraQuoteEventGrpCompPacket::resetQuoteMsgID> (d, QuoteMsgID, packet);
    xetra::getInteger<uint32_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventMatchID, &xetraQuoteEventGrpCompPacket::resetQuoteEventMatchID> (d, QuoteEventMatchID, packet);
    xetra::getInteger<int32_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventExecID, &xetraQuoteEventGrpCompPacket::resetQuoteEventExecID> (d, QuoteEventExecID, packet);
    xetra::getInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventType, &xetraQuoteEventGrpCompPacket::resetQuoteEventType> (d, QuoteEventType, packet);
    xetra::getInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventSide, &xetraQuoteEventGrpCompPacket::resetQuoteEventSide> (d, QuoteEventSide, packet);
    xetra::getInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventLiquidityInd, &xetraQuoteEventGrpCompPacket::resetQuoteEventLiquidityInd> (d, QuoteEventLiquidityInd, packet);
    xetra::getInteger<int8_t, xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setQuoteEventReason, &xetraQuoteEventGrpCompPacket::resetQuoteEventReason> (d, QuoteEventReason, packet);
    xetra::getString<xetraQuoteEventGrpCompPacket, &xetraQuoteEventGrpCompPacket::setPad4, &xetraQuoteEventGrpCompPacket::resetPad4> (d, Pad4, packet);
}

static void
putSecurityStatusEventGrpComp (const cdr &d, xetraSecurityStatusEventGrpCompPacket& packet)
{
    xetra::getDouble<xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::setEventPx, &xetraSecurityStatusEventGrpCompPacket::resetEventPx> (d, EventPx, packet);
    xetra::getInteger<int32_t, xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::setEventDate, &xetraSecurityStatusEventGrpCompPacket::resetEventDate> (d, EventDate, packet);
    xetra::getInteger<int8_t, xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::setEventType, &xetraSecurityStatusEventGrpCompPacket::resetEventType> (d, EventType, packet);
    xetra::getString<xetraSecurityStatusEventGrpCompPacket, &xetraSecurityStatusEventGrpCompPacket::setPad3, &xetraSecurityStatusEventGrpCompPacket::resetPad3> (d, Pad3, packet);
}


void
xetraCodec::putApproveTESTradeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraApproveTESTradeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPartyIDClientID, &xetraApproveTESTradeRequestPacket::resetPartyIDClientID> (d, PartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraApproveTESTradeRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setExecutingTrader, &xetraApproveTESTradeRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getDouble<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setAllocQty, &xetraApproveTESTradeRequestPacket::resetAllocQty> (d, AllocQty, packet);
    xetra::getInteger<uint32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPackageID, &xetraApproveTESTradeRequestPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<uint32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setAllocID, &xetraApproveTESTradeRequestPacket::resetAllocID> (d, AllocID, packet);
    xetra::getInteger<uint32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setTESExecID, &xetraApproveTESTradeRequestPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<int32_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setMarketSegmentID, &xetraApproveTESTradeRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int16_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setTrdType, &xetraApproveTESTradeRequestPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setTradingCapacity, &xetraApproveTESTradeRequestPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setTradeReportType, &xetraApproveTESTradeRequestPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setSide, &xetraApproveTESTradeRequestPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setValueCheckTypeValue, &xetraApproveTESTradeRequestPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setValueCheckTypeQuantity, &xetraApproveTESTradeRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setOrderAttributeLiquidityProvision, &xetraApproveTESTradeRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraApproveTESTradeRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setExecutingTraderQualifier, &xetraApproveTESTradeRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setTradeReportID, &xetraApproveTESTradeRequestPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPartyExecutingFirm, &xetraApproveTESTradeRequestPacket::resetPartyExecutingFirm> (d, PartyExecutingFirm, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPartyExecutingTrader, &xetraApproveTESTradeRequestPacket::resetPartyExecutingTrader> (d, PartyExecutingTrader, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setFreeText1, &xetraApproveTESTradeRequestPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setFreeText2, &xetraApproveTESTradeRequestPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setFreeText4, &xetraApproveTESTradeRequestPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraApproveTESTradeRequestPacket, &xetraApproveTESTradeRequestPacket::setPad7, &xetraApproveTESTradeRequestPacket::resetPad7> (d, Pad7, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ApproveTESTradeRequest");
}

void
xetraCodec::putBESTQuoteExecutionReport (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraBESTQuoteExecutionReportPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setExecID, &xetraBESTQuoteExecutionReportPacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<uint64_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteMsgID, &xetraBESTQuoteExecutionReportPacket::resetQuoteMsgID> (d, QuoteMsgID, packet);
    xetra::getInteger<int64_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setSecurityID, &xetraBESTQuoteExecutionReportPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteEventPx, &xetraBESTQuoteExecutionReportPacket::resetQuoteEventPx> (d, QuoteEventPx, packet);
    xetra::getDouble<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteEventQty, &xetraBESTQuoteExecutionReportPacket::resetQuoteEventQty> (d, QuoteEventQty, packet);
    xetra::getDouble<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setReservedSize, &xetraBESTQuoteExecutionReportPacket::resetReservedSize> (d, ReservedSize, packet);
    xetra::getInteger<int32_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setMarketSegmentID, &xetraBESTQuoteExecutionReportPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteEventMatchID, &xetraBESTQuoteExecutionReportPacket::resetQuoteEventMatchID> (d, QuoteEventMatchID, packet);
    xetra::getInteger<int32_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteEventExecID, &xetraBESTQuoteExecutionReportPacket::resetQuoteEventExecID> (d, QuoteEventExecID, packet);
    xetra::getInteger<int8_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteEventType, &xetraBESTQuoteExecutionReportPacket::resetQuoteEventType> (d, QuoteEventType, packet);
    xetra::getInteger<int8_t, xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setQuoteEventSide, &xetraBESTQuoteExecutionReportPacket::resetQuoteEventSide> (d, QuoteEventSide, packet);
    xetra::getString<xetraBESTQuoteExecutionReportPacket, &xetraBESTQuoteExecutionReportPacket::setPad2, &xetraBESTQuoteExecutionReportPacket::resetPad2> (d, Pad2, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize BESTQuoteExecutionReport");
}

void
xetraCodec::putBESTQuoteResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraBESTQuoteResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setQuoteID, &xetraBESTQuoteResponsePacket::resetQuoteID> (d, QuoteID, packet);
    xetra::getInteger<uint64_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setQuoteResponseID, &xetraBESTQuoteResponsePacket::resetQuoteResponseID> (d, QuoteResponseID, packet);
    xetra::getInteger<int64_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setSecurityID, &xetraBESTQuoteResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setBidCxlSize, &xetraBESTQuoteResponsePacket::resetBidCxlSize> (d, BidCxlSize, packet);
    xetra::getDouble<xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setOfferCxlSize, &xetraBESTQuoteResponsePacket::resetOfferCxlSize> (d, OfferCxlSize, packet);
    xetra::getInteger<int32_t, xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setMarketSegmentID, &xetraBESTQuoteResponsePacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getString<xetraBESTQuoteResponsePacket, &xetraBESTQuoteResponsePacket::setPad4, &xetraBESTQuoteResponsePacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize BESTQuoteResponse");
}

void
xetraCodec::putBroadcastErrorNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraBroadcastErrorNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNotifHeaderComp (d, packet.mNotifHeader);
    xetra::getInteger<uint32_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setApplIDStatus, &xetraBroadcastErrorNotificationPacket::resetApplIDStatus> (d, ApplIDStatus, packet);
    xetra::getInteger<uint32_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setRefApplSubID, &xetraBroadcastErrorNotificationPacket::resetRefApplSubID> (d, RefApplSubID, packet);
    xetra::getInteger<int16_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setVarTextLen, &xetraBroadcastErrorNotificationPacket::resetVarTextLen> (d, VarTextLen, packet);
    xetra::getInteger<int8_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setRefApplID, &xetraBroadcastErrorNotificationPacket::resetRefApplID> (d, RefApplID, packet);
    xetra::getInteger<int8_t, xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setSessionStatus, &xetraBroadcastErrorNotificationPacket::resetSessionStatus> (d, SessionStatus, packet);
    xetra::getString<xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setPad4, &xetraBroadcastErrorNotificationPacket::resetPad4> (d, Pad4, packet);
    xetra::getString<xetraBroadcastErrorNotificationPacket, &xetraBroadcastErrorNotificationPacket::setVarText, &xetraBroadcastErrorNotificationPacket::resetVarText> (d, VarText, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize BroadcastErrorNotification");
}

void
xetraCodec::putCrossRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraCrossRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int64_t, xetraCrossRequestPacket, &xetraCrossRequestPacket::setSecurityID, &xetraCrossRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraCrossRequestPacket, &xetraCrossRequestPacket::setOrderQty, &xetraCrossRequestPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getInteger<int32_t, xetraCrossRequestPacket, &xetraCrossRequestPacket::setMarketSegmentID, &xetraCrossRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getString<xetraCrossRequestPacket, &xetraCrossRequestPacket::setPad4, &xetraCrossRequestPacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize CrossRequest");
}

void
xetraCodec::putCrossRequestResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraCrossRequestResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraCrossRequestResponsePacket, &xetraCrossRequestResponsePacket::setExecID, &xetraCrossRequestResponsePacket::resetExecID> (d, ExecID, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize CrossRequestResponse");
}

void
xetraCodec::putDeleteAllOrderBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setMassActionReportID, &xetraDeleteAllOrderBroadcastPacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int64_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setSecurityID, &xetraDeleteAllOrderBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setPrice, &xetraDeleteAllOrderBroadcastPacket::resetPrice> (d, Price, packet);
    xetra::getInteger<int32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setMarketSegmentID, &xetraDeleteAllOrderBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setTargetPartyIDSessionID, &xetraDeleteAllOrderBroadcastPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<int32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setTargetPartyIDExecutingTrader, &xetraDeleteAllOrderBroadcastPacket::resetTargetPartyIDExecutingTrader> (d, TargetPartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setPartyIDEnteringTrader, &xetraDeleteAllOrderBroadcastPacket::resetPartyIDEnteringTrader> (d, PartyIDEnteringTrader, packet);
    xetra::getInteger<int16_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setNoNotAffectedOrders, &xetraDeleteAllOrderBroadcastPacket::resetNoNotAffectedOrders> (d, NoNotAffectedOrders, packet);
    xetra::getInteger<int16_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setNoAffectedOrders, &xetraDeleteAllOrderBroadcastPacket::resetNoAffectedOrders> (d, NoAffectedOrders, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setPartyIDEnteringFirm, &xetraDeleteAllOrderBroadcastPacket::resetPartyIDEnteringFirm> (d, PartyIDEnteringFirm, packet);
    xetra::getInteger<uint8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setMassActionReason, &xetraDeleteAllOrderBroadcastPacket::resetMassActionReason> (d, MassActionReason, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setExecInst, &xetraDeleteAllOrderBroadcastPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderBroadcastPacket, &xetraDeleteAllOrderBroadcastPacket::setSide, &xetraDeleteAllOrderBroadcastPacket::resetSide> (d, Side, packet);
    const cdrArray* vNotAffectedOrdersGrp;
    bool bNotAffectedOrdersGrp = d.getArray (NotAffectedOrdersGrp, &vNotAffectedOrdersGrp);
    for (size_t i = 0; bNotAffectedOrdersGrp && i < vNotAffectedOrdersGrp->size (); i++)
    {
        xetraNotAffectedOrdersGrpCompPacket group;
        putNotAffectedOrdersGrpComp ((*vNotAffectedOrdersGrp)[i], group);
        packet.mNotAffectedOrdersGrp.push_back (group);
    }
    const cdrArray* vAffectedOrdGrp;
    bool bAffectedOrdGrp = d.getArray (AffectedOrdGrp, &vAffectedOrdGrp);
    for (size_t i = 0; bAffectedOrdGrp && i < vAffectedOrdGrp->size (); i++)
    {
        xetraAffectedOrdGrpCompPacket group;
        putAffectedOrdGrpComp ((*vAffectedOrdGrp)[i], group);
        packet.mAffectedOrdGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllOrderBroadcast");
}

void
xetraCodec::putDeleteAllOrderNRResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderNRResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteAllOrderNRResponsePacket, &xetraDeleteAllOrderNRResponsePacket::setMassActionReportID, &xetraDeleteAllOrderNRResponsePacket::resetMassActionReportID> (d, MassActionReportID, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllOrderNRResponse");
}

void
xetraCodec::putDeleteAllOrderQuoteEventBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderQuoteEventBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::setMassActionReportID, &xetraDeleteAllOrderQuoteEventBroadcastPacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int64_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::setSecurityID, &xetraDeleteAllOrderQuoteEventBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<int32_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::setMarketSegmentID, &xetraDeleteAllOrderQuoteEventBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint8_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::setMassActionReason, &xetraDeleteAllOrderQuoteEventBroadcastPacket::resetMassActionReason> (d, MassActionReason, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::setExecInst, &xetraDeleteAllOrderQuoteEventBroadcastPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getString<xetraDeleteAllOrderQuoteEventBroadcastPacket, &xetraDeleteAllOrderQuoteEventBroadcastPacket::setPad2, &xetraDeleteAllOrderQuoteEventBroadcastPacket::resetPad2> (d, Pad2, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllOrderQuoteEventBroadcast");
}

void
xetraCodec::putDeleteAllOrderRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int64_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setSecurityID, &xetraDeleteAllOrderRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setPrice, &xetraDeleteAllOrderRequestPacket::resetPrice> (d, Price, packet);
    xetra::getInteger<uint64_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraDeleteAllOrderRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setExecutingTrader, &xetraDeleteAllOrderRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setMarketSegmentID, &xetraDeleteAllOrderRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setTargetPartyIDSessionID, &xetraDeleteAllOrderRequestPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<int32_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setTargetPartyIDExecutingTrader, &xetraDeleteAllOrderRequestPacket::resetTargetPartyIDExecutingTrader> (d, TargetPartyIDExecutingTrader, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setSide, &xetraDeleteAllOrderRequestPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraDeleteAllOrderRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setExecutingTraderQualifier, &xetraDeleteAllOrderRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraDeleteAllOrderRequestPacket, &xetraDeleteAllOrderRequestPacket::setPad1, &xetraDeleteAllOrderRequestPacket::resetPad1> (d, Pad1, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllOrderRequest");
}

void
xetraCodec::putDeleteAllOrderResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllOrderResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderMEComp (d, packet.mResponseHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::setMassActionReportID, &xetraDeleteAllOrderResponsePacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int16_t, xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::setNoNotAffectedOrders, &xetraDeleteAllOrderResponsePacket::resetNoNotAffectedOrders> (d, NoNotAffectedOrders, packet);
    xetra::getInteger<int16_t, xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::setNoAffectedOrders, &xetraDeleteAllOrderResponsePacket::resetNoAffectedOrders> (d, NoAffectedOrders, packet);
    xetra::getString<xetraDeleteAllOrderResponsePacket, &xetraDeleteAllOrderResponsePacket::setPad4, &xetraDeleteAllOrderResponsePacket::resetPad4> (d, Pad4, packet);
    const cdrArray* vNotAffectedOrdersGrp;
    bool bNotAffectedOrdersGrp = d.getArray (NotAffectedOrdersGrp, &vNotAffectedOrdersGrp);
    for (size_t i = 0; bNotAffectedOrdersGrp && i < vNotAffectedOrdersGrp->size (); i++)
    {
        xetraNotAffectedOrdersGrpCompPacket group;
        putNotAffectedOrdersGrpComp ((*vNotAffectedOrdersGrp)[i], group);
        packet.mNotAffectedOrdersGrp.push_back (group);
    }
    const cdrArray* vAffectedOrdGrp;
    bool bAffectedOrdGrp = d.getArray (AffectedOrdGrp, &vAffectedOrdGrp);
    for (size_t i = 0; bAffectedOrdGrp && i < vAffectedOrdGrp->size (); i++)
    {
        xetraAffectedOrdGrpCompPacket group;
        putAffectedOrdGrpComp ((*vAffectedOrdGrp)[i], group);
        packet.mAffectedOrdGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllOrderResponse");
}

void
xetraCodec::putDeleteAllQuoteBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllQuoteBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setMassActionReportID, &xetraDeleteAllQuoteBroadcastPacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int64_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setSecurityID, &xetraDeleteAllQuoteBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<int32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setMarketSegmentID, &xetraDeleteAllQuoteBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setTargetPartyIDSessionID, &xetraDeleteAllQuoteBroadcastPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<uint32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setPartyIDEnteringTrader, &xetraDeleteAllQuoteBroadcastPacket::resetPartyIDEnteringTrader> (d, PartyIDEnteringTrader, packet);
    xetra::getInteger<int32_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setTargetPartyIDExecutingTrader, &xetraDeleteAllQuoteBroadcastPacket::resetTargetPartyIDExecutingTrader> (d, TargetPartyIDExecutingTrader, packet);
    xetra::getInteger<int16_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setNoNotAffectedSecurities, &xetraDeleteAllQuoteBroadcastPacket::resetNoNotAffectedSecurities> (d, NoNotAffectedSecurities, packet);
    xetra::getInteger<uint8_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setMassActionReason, &xetraDeleteAllQuoteBroadcastPacket::resetMassActionReason> (d, MassActionReason, packet);
    xetra::getInteger<int8_t, xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setPartyIDEnteringFirm, &xetraDeleteAllQuoteBroadcastPacket::resetPartyIDEnteringFirm> (d, PartyIDEnteringFirm, packet);
    xetra::getString<xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setTargetPartyIDDeskID, &xetraDeleteAllQuoteBroadcastPacket::resetTargetPartyIDDeskID> (d, TargetPartyIDDeskID, packet);
    xetra::getString<xetraDeleteAllQuoteBroadcastPacket, &xetraDeleteAllQuoteBroadcastPacket::setPad1, &xetraDeleteAllQuoteBroadcastPacket::resetPad1> (d, Pad1, packet);
    const cdrArray* vNotAffectedSecuritiesGrp;
    bool bNotAffectedSecuritiesGrp = d.getArray (NotAffectedSecuritiesGrp, &vNotAffectedSecuritiesGrp);
    for (size_t i = 0; bNotAffectedSecuritiesGrp && i < vNotAffectedSecuritiesGrp->size (); i++)
    {
        xetraNotAffectedSecuritiesGrpCompPacket group;
        putNotAffectedSecuritiesGrpComp ((*vNotAffectedSecuritiesGrp)[i], group);
        packet.mNotAffectedSecuritiesGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllQuoteBroadcast");
}

void
xetraCodec::putDeleteAllQuoteRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllQuoteRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraDeleteAllQuoteRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setExecutingTrader, &xetraDeleteAllQuoteRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setMarketSegmentID, &xetraDeleteAllQuoteRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setTargetPartyIDSessionID, &xetraDeleteAllQuoteRequestPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<int8_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraDeleteAllQuoteRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setExecutingTraderQualifier, &xetraDeleteAllQuoteRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraDeleteAllQuoteRequestPacket, &xetraDeleteAllQuoteRequestPacket::setPad6, &xetraDeleteAllQuoteRequestPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllQuoteRequest");
}

void
xetraCodec::putDeleteAllQuoteResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteAllQuoteResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteAllQuoteResponsePacket, &xetraDeleteAllQuoteResponsePacket::setMassActionReportID, &xetraDeleteAllQuoteResponsePacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int16_t, xetraDeleteAllQuoteResponsePacket, &xetraDeleteAllQuoteResponsePacket::setNoNotAffectedSecurities, &xetraDeleteAllQuoteResponsePacket::resetNoNotAffectedSecurities> (d, NoNotAffectedSecurities, packet);
    xetra::getString<xetraDeleteAllQuoteResponsePacket, &xetraDeleteAllQuoteResponsePacket::setPad6, &xetraDeleteAllQuoteResponsePacket::resetPad6> (d, Pad6, packet);
    const cdrArray* vNotAffectedSecuritiesGrp;
    bool bNotAffectedSecuritiesGrp = d.getArray (NotAffectedSecuritiesGrp, &vNotAffectedSecuritiesGrp);
    for (size_t i = 0; bNotAffectedSecuritiesGrp && i < vNotAffectedSecuritiesGrp->size (); i++)
    {
        xetraNotAffectedSecuritiesGrpCompPacket group;
        putNotAffectedSecuritiesGrpComp ((*vNotAffectedSecuritiesGrp)[i], group);
        packet.mNotAffectedSecuritiesGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteAllQuoteResponse");
}

void
xetraCodec::putDeleteOrderBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setOrderID, &xetraDeleteOrderBroadcastPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setClOrdID, &xetraDeleteOrderBroadcastPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setOrigClOrdID, &xetraDeleteOrderBroadcastPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setSecurityID, &xetraDeleteOrderBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setExecID, &xetraDeleteOrderBroadcastPacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setCumQty, &xetraDeleteOrderBroadcastPacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setCxlQty, &xetraDeleteOrderBroadcastPacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getInteger<uint32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setOrderIDSfx, &xetraDeleteOrderBroadcastPacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setMarketSegmentID, &xetraDeleteOrderBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setPartyIDEnteringTrader, &xetraDeleteOrderBroadcastPacket::resetPartyIDEnteringTrader> (d, PartyIDEnteringTrader, packet);
    xetra::getInteger<uint32_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setPartyIDSessionID, &xetraDeleteOrderBroadcastPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getInteger<int16_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setExecRestatementReason, &xetraDeleteOrderBroadcastPacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setPartyIDEnteringFirm, &xetraDeleteOrderBroadcastPacket::resetPartyIDEnteringFirm> (d, PartyIDEnteringFirm, packet);
    xetra::getString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setOrdStatus, &xetraDeleteOrderBroadcastPacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setExecType, &xetraDeleteOrderBroadcastPacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int8_t, xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setSide, &xetraDeleteOrderBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setFIXClOrdID, &xetraDeleteOrderBroadcastPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getString<xetraDeleteOrderBroadcastPacket, &xetraDeleteOrderBroadcastPacket::setPad6, &xetraDeleteOrderBroadcastPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteOrderBroadcast");
}

void
xetraCodec::putDeleteOrderNRResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderNRResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setOrderID, &xetraDeleteOrderNRResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setClOrdID, &xetraDeleteOrderNRResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setOrigClOrdID, &xetraDeleteOrderNRResponsePacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setSecurityID, &xetraDeleteOrderNRResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setExecID, &xetraDeleteOrderNRResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setCumQty, &xetraDeleteOrderNRResponsePacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setCxlQty, &xetraDeleteOrderNRResponsePacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getInteger<uint32_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setOrderIDSfx, &xetraDeleteOrderNRResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getString<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setOrdStatus, &xetraDeleteOrderNRResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setExecType, &xetraDeleteOrderNRResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int16_t, xetraDeleteOrderNRResponsePacket, &xetraDeleteOrderNRResponsePacket::setExecRestatementReason, &xetraDeleteOrderNRResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteOrderNRResponse");
}

void
xetraCodec::putDeleteOrderResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderMEComp (d, packet.mResponseHeaderME);
    xetra::getInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setOrderID, &xetraDeleteOrderResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setClOrdID, &xetraDeleteOrderResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setOrigClOrdID, &xetraDeleteOrderResponsePacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setSecurityID, &xetraDeleteOrderResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setExecID, &xetraDeleteOrderResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setCumQty, &xetraDeleteOrderResponsePacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setCxlQty, &xetraDeleteOrderResponsePacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getInteger<uint32_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setOrderIDSfx, &xetraDeleteOrderResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getString<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setOrdStatus, &xetraDeleteOrderResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setExecType, &xetraDeleteOrderResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int16_t, xetraDeleteOrderResponsePacket, &xetraDeleteOrderResponsePacket::setExecRestatementReason, &xetraDeleteOrderResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteOrderResponse");
}

void
xetraCodec::putDeleteOrderSingleRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteOrderSingleRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setOrderID, &xetraDeleteOrderSingleRequestPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setClOrdID, &xetraDeleteOrderSingleRequestPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setOrigClOrdID, &xetraDeleteOrderSingleRequestPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setSecurityID, &xetraDeleteOrderSingleRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraDeleteOrderSingleRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setExecutingTrader, &xetraDeleteOrderSingleRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setMarketSegmentID, &xetraDeleteOrderSingleRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setTargetPartyIDSessionID, &xetraDeleteOrderSingleRequestPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<int8_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraDeleteOrderSingleRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setExecutingTraderQualifier, &xetraDeleteOrderSingleRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setFIXClOrdID, &xetraDeleteOrderSingleRequestPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getString<xetraDeleteOrderSingleRequestPacket, &xetraDeleteOrderSingleRequestPacket::setPad2, &xetraDeleteOrderSingleRequestPacket::resetPad2> (d, Pad2, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteOrderSingleRequest");
}

void
xetraCodec::putDeleteTESTradeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraDeleteTESTradeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint32_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setPackageID, &xetraDeleteTESTradeRequestPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<int32_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setMarketSegmentID, &xetraDeleteTESTradeRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setTESExecID, &xetraDeleteTESTradeRequestPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<int16_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setTrdType, &xetraDeleteTESTradeRequestPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setTradeReportType, &xetraDeleteTESTradeRequestPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getString<xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setTradeReportID, &xetraDeleteTESTradeRequestPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraDeleteTESTradeRequestPacket, &xetraDeleteTESTradeRequestPacket::setPad5, &xetraDeleteTESTradeRequestPacket::resetPad5> (d, Pad5, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize DeleteTESTradeRequest");
}

void
xetraCodec::putEnterBESTQuoteRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraEnterBESTQuoteRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setQuoteID, &xetraEnterBESTQuoteRequestPacket::resetQuoteID> (d, QuoteID, packet);
    xetra::getInteger<int64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setSecurityID, &xetraEnterBESTQuoteRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setBidPx, &xetraEnterBESTQuoteRequestPacket::resetBidPx> (d, BidPx, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setBidSize, &xetraEnterBESTQuoteRequestPacket::resetBidSize> (d, BidSize, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setReservedBidSize, &xetraEnterBESTQuoteRequestPacket::resetReservedBidSize> (d, ReservedBidSize, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setOfferPx, &xetraEnterBESTQuoteRequestPacket::resetOfferPx> (d, OfferPx, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setOfferSize, &xetraEnterBESTQuoteRequestPacket::resetOfferSize> (d, OfferSize, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setReservedOfferSize, &xetraEnterBESTQuoteRequestPacket::resetReservedOfferSize> (d, ReservedOfferSize, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setPegOffsetValueBidPx, &xetraEnterBESTQuoteRequestPacket::resetPegOffsetValueBidPx> (d, PegOffsetValueBidPx, packet);
    xetra::getDouble<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setPegOffsetValueOfferPx, &xetraEnterBESTQuoteRequestPacket::resetPegOffsetValueOfferPx> (d, PegOffsetValueOfferPx, packet);
    xetra::getInteger<uint64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraEnterBESTQuoteRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setExecutingTrader, &xetraEnterBESTQuoteRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setMarketSegmentID, &xetraEnterBESTQuoteRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int16_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setEnrichmentRuleID, &xetraEnterBESTQuoteRequestPacket::resetEnrichmentRuleID> (d, EnrichmentRuleID, packet);
    xetra::getInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setOrderAttributeLiquidityProvision, &xetraEnterBESTQuoteRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setValueCheckTypeQuantity, &xetraEnterBESTQuoteRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraEnterBESTQuoteRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setExecutingTraderQualifier, &xetraEnterBESTQuoteRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraEnterBESTQuoteRequestPacket, &xetraEnterBESTQuoteRequestPacket::setPad6, &xetraEnterBESTQuoteRequestPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize EnterBESTQuoteRequest");
}

void
xetraCodec::putEnterTESTradeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraEnterTESTradeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int64_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setSecurityID, &xetraEnterTESTradeRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setLastPx, &xetraEnterTESTradeRequestPacket::resetLastPx> (d, LastPx, packet);
    xetra::getInteger<uint64_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setTransBkdTime, &xetraEnterTESTradeRequestPacket::resetTransBkdTime> (d, TransBkdTime, packet);
    xetra::getDouble<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setSettlCurrFxRate, &xetraEnterTESTradeRequestPacket::resetSettlCurrFxRate> (d, SettlCurrFxRate, packet);
    xetra::getInteger<int32_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setMarketSegmentID, &xetraEnterTESTradeRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int32_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setSettlDate, &xetraEnterTESTradeRequestPacket::resetSettlDate> (d, SettlDate, packet);
    xetra::getInteger<int16_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setTrdType, &xetraEnterTESTradeRequestPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setTradeReportType, &xetraEnterTESTradeRequestPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setNoSideAllocs, &xetraEnterTESTradeRequestPacket::resetNoSideAllocs> (d, NoSideAllocs, packet);
    xetra::getString<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setTradeReportText, &xetraEnterTESTradeRequestPacket::resetTradeReportText> (d, TradeReportText, packet);
    xetra::getString<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setTradeReportID, &xetraEnterTESTradeRequestPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraEnterTESTradeRequestPacket, &xetraEnterTESTradeRequestPacket::setPad4, &xetraEnterTESTradeRequestPacket::resetPad4> (d, Pad4, packet);
    const cdrArray* vSideAllocGrp;
    bool bSideAllocGrp = d.getArray (SideAllocGrp, &vSideAllocGrp);
    for (size_t i = 0; bSideAllocGrp && i < vSideAllocGrp->size (); i++)
    {
        xetraSideAllocGrpCompPacket group;
        putSideAllocGrpComp ((*vSideAllocGrp)[i], group);
        packet.mSideAllocGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize EnterTESTradeRequest");
}

void
xetraCodec::putExtendedDeletionReport (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraExtendedDeletionReportPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setOrderID, &xetraExtendedDeletionReportPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setClOrdID, &xetraExtendedDeletionReportPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setOrigClOrdID, &xetraExtendedDeletionReportPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setSecurityID, &xetraExtendedDeletionReportPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setExecID, &xetraExtendedDeletionReportPacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<uint64_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setTrdRegTSEntryTime, &xetraExtendedDeletionReportPacket::resetTrdRegTSEntryTime> (d, TrdRegTSEntryTime, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPrice, &xetraExtendedDeletionReportPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setLeavesQty, &xetraExtendedDeletionReportPacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setCumQty, &xetraExtendedDeletionReportPacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setCxlQty, &xetraExtendedDeletionReportPacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setOrderQty, &xetraExtendedDeletionReportPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setDisplayQty, &xetraExtendedDeletionReportPacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setDisplayLowQty, &xetraExtendedDeletionReportPacket::resetDisplayLowQty> (d, DisplayLowQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setDisplayHighQty, &xetraExtendedDeletionReportPacket::resetDisplayHighQty> (d, DisplayHighQty, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setStopPx, &xetraExtendedDeletionReportPacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setVolumeDiscoveryPrice, &xetraExtendedDeletionReportPacket::resetVolumeDiscoveryPrice> (d, VolumeDiscoveryPrice, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPegOffsetValueAbs, &xetraExtendedDeletionReportPacket::resetPegOffsetValueAbs> (d, PegOffsetValueAbs, packet);
    xetra::getDouble<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPegOffsetValuePct, &xetraExtendedDeletionReportPacket::resetPegOffsetValuePct> (d, PegOffsetValuePct, packet);
    xetra::getInteger<int32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setMarketSegmentID, &xetraExtendedDeletionReportPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setOrderIDSfx, &xetraExtendedDeletionReportPacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setExpireDate, &xetraExtendedDeletionReportPacket::resetExpireDate> (d, ExpireDate, packet);
    xetra::getInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setMatchInstCrossID, &xetraExtendedDeletionReportPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPartyIDExecutingUnit, &xetraExtendedDeletionReportPacket::resetPartyIDExecutingUnit> (d, PartyIDExecutingUnit, packet);
    xetra::getInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPartyIDSessionID, &xetraExtendedDeletionReportPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPartyIDExecutingTrader, &xetraExtendedDeletionReportPacket::resetPartyIDExecutingTrader> (d, PartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPartyIDEnteringTrader, &xetraExtendedDeletionReportPacket::resetPartyIDEnteringTrader> (d, PartyIDEnteringTrader, packet);
    xetra::getInteger<int16_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setExecRestatementReason, &xetraExtendedDeletionReportPacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setOrdStatus, &xetraExtendedDeletionReportPacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setExecType, &xetraExtendedDeletionReportPacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setSide, &xetraExtendedDeletionReportPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setOrdType, &xetraExtendedDeletionReportPacket::resetOrdType> (d, OrdType, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setTradingCapacity, &xetraExtendedDeletionReportPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setTimeInForce, &xetraExtendedDeletionReportPacket::resetTimeInForce> (d, TimeInForce, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setExecInst, &xetraExtendedDeletionReportPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setTradingSessionSubID, &xetraExtendedDeletionReportPacket::resetTradingSessionSubID> (d, TradingSessionSubID, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setApplSeqIndicator, &xetraExtendedDeletionReportPacket::resetApplSeqIndicator> (d, ApplSeqIndicator, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setExDestinationType, &xetraExtendedDeletionReportPacket::resetExDestinationType> (d, ExDestinationType, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setFreeText1, &xetraExtendedDeletionReportPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setFreeText2, &xetraExtendedDeletionReportPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setFreeText4, &xetraExtendedDeletionReportPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setFIXClOrdID, &xetraExtendedDeletionReportPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getInteger<int8_t, xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setTriggered, &xetraExtendedDeletionReportPacket::resetTriggered> (d, Triggered, packet);
    xetra::getString<xetraExtendedDeletionReportPacket, &xetraExtendedDeletionReportPacket::setPad7, &xetraExtendedDeletionReportPacket::resetPad7> (d, Pad7, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ExtendedDeletionReport");
}

void
xetraCodec::putForcedLogoutNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraForcedLogoutNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNotifHeaderComp (d, packet.mNotifHeader);
    xetra::getInteger<int16_t, xetraForcedLogoutNotificationPacket, &xetraForcedLogoutNotificationPacket::setVarTextLen, &xetraForcedLogoutNotificationPacket::resetVarTextLen> (d, VarTextLen, packet);
    xetra::getString<xetraForcedLogoutNotificationPacket, &xetraForcedLogoutNotificationPacket::setPad6, &xetraForcedLogoutNotificationPacket::resetPad6> (d, Pad6, packet);
    xetra::getString<xetraForcedLogoutNotificationPacket, &xetraForcedLogoutNotificationPacket::setVarText, &xetraForcedLogoutNotificationPacket::resetVarText> (d, VarText, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ForcedLogoutNotification");
}

void
xetraCodec::putForcedUserLogoutNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraForcedUserLogoutNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNotifHeaderComp (d, packet.mNotifHeader);
    xetra::getInteger<int8_t, xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::setUserStatus, &xetraForcedUserLogoutNotificationPacket::resetUserStatus> (d, UserStatus, packet);
    xetra::getString<xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::setPad3, &xetraForcedUserLogoutNotificationPacket::resetPad3> (d, Pad3, packet);
    xetra::getInteger<int32_t, xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::setUsername, &xetraForcedUserLogoutNotificationPacket::resetUsername> (d, Username, packet);
    xetra::getInteger<int16_t, xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::setVarTextLen, &xetraForcedUserLogoutNotificationPacket::resetVarTextLen> (d, VarTextLen, packet);
    xetra::getString<xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::setPad6, &xetraForcedUserLogoutNotificationPacket::resetPad6> (d, Pad6, packet);
    xetra::getString<xetraForcedUserLogoutNotificationPacket, &xetraForcedUserLogoutNotificationPacket::setVarText, &xetraForcedUserLogoutNotificationPacket::resetVarText> (d, VarText, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ForcedUserLogoutNotification");
}

void
xetraCodec::putGatewayRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraGatewayRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint32_t, xetraGatewayRequestPacket, &xetraGatewayRequestPacket::setPartyIDSessionID, &xetraGatewayRequestPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getInteger<uint16_t, xetraGatewayRequestPacket, &xetraGatewayRequestPacket::setPartitionID, &xetraGatewayRequestPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getString<xetraGatewayRequestPacket, &xetraGatewayRequestPacket::setDefaultCstmApplVerID, &xetraGatewayRequestPacket::resetDefaultCstmApplVerID> (d, DefaultCstmApplVerID, packet);
    xetra::getString<xetraGatewayRequestPacket, &xetraGatewayRequestPacket::setPassword, &xetraGatewayRequestPacket::resetPassword> (d, Password, packet);
    xetra::getString<xetraGatewayRequestPacket, &xetraGatewayRequestPacket::setPad4, &xetraGatewayRequestPacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize GatewayRequest");
}

void
xetraCodec::putHeartbeat (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraHeartbeatPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize Heartbeat");
}

void
xetraCodec::putHeartbeatNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraHeartbeatNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNotifHeaderComp (d, packet.mNotifHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize HeartbeatNotification");
}

void
xetraCodec::putInquireEnrichmentRuleIDListRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraInquireEnrichmentRuleIDListRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getString<xetraInquireEnrichmentRuleIDListRequestPacket, &xetraInquireEnrichmentRuleIDListRequestPacket::setLastEntityProcessed, &xetraInquireEnrichmentRuleIDListRequestPacket::resetLastEntityProcessed> (d, LastEntityProcessed, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize InquireEnrichmentRuleIDListRequest");
}

void
xetraCodec::putInquireEnrichmentRuleIDListResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraInquireEnrichmentRuleIDListResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getString<xetraInquireEnrichmentRuleIDListResponsePacket, &xetraInquireEnrichmentRuleIDListResponsePacket::setLastEntityProcessed, &xetraInquireEnrichmentRuleIDListResponsePacket::resetLastEntityProcessed> (d, LastEntityProcessed, packet);
    xetra::getInteger<int16_t, xetraInquireEnrichmentRuleIDListResponsePacket, &xetraInquireEnrichmentRuleIDListResponsePacket::setNoEnrichmentRules, &xetraInquireEnrichmentRuleIDListResponsePacket::resetNoEnrichmentRules> (d, NoEnrichmentRules, packet);
    xetra::getString<xetraInquireEnrichmentRuleIDListResponsePacket, &xetraInquireEnrichmentRuleIDListResponsePacket::setPad6, &xetraInquireEnrichmentRuleIDListResponsePacket::resetPad6> (d, Pad6, packet);
    const cdrArray* vEnrichmentRulesGrp;
    bool bEnrichmentRulesGrp = d.getArray (EnrichmentRulesGrp, &vEnrichmentRulesGrp);
    for (size_t i = 0; bEnrichmentRulesGrp && i < vEnrichmentRulesGrp->size (); i++)
    {
        xetraEnrichmentRulesGrpCompPacket group;
        putEnrichmentRulesGrpComp ((*vEnrichmentRulesGrp)[i], group);
        packet.mEnrichmentRulesGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize InquireEnrichmentRuleIDListResponse");
}

void
xetraCodec::putInquireSessionListRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraInquireSessionListRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize InquireSessionListRequest");
}

void
xetraCodec::putInquireSessionListResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraInquireSessionListResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getInteger<int16_t, xetraInquireSessionListResponsePacket, &xetraInquireSessionListResponsePacket::setNoSessions, &xetraInquireSessionListResponsePacket::resetNoSessions> (d, NoSessions, packet);
    xetra::getString<xetraInquireSessionListResponsePacket, &xetraInquireSessionListResponsePacket::setPad6, &xetraInquireSessionListResponsePacket::resetPad6> (d, Pad6, packet);
    const cdrArray* vSessionsGrp;
    bool bSessionsGrp = d.getArray (SessionsGrp, &vSessionsGrp);
    for (size_t i = 0; bSessionsGrp && i < vSessionsGrp->size (); i++)
    {
        xetraSessionsGrpCompPacket group;
        putSessionsGrpComp ((*vSessionsGrp)[i], group);
        packet.mSessionsGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize InquireSessionListResponse");
}

void
xetraCodec::putInquireUserRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraInquireUserRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getString<xetraInquireUserRequestPacket, &xetraInquireUserRequestPacket::setLastEntityProcessed, &xetraInquireUserRequestPacket::resetLastEntityProcessed> (d, LastEntityProcessed, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize InquireUserRequest");
}

void
xetraCodec::putInquireUserResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraInquireUserResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getString<xetraInquireUserResponsePacket, &xetraInquireUserResponsePacket::setLastEntityProcessed, &xetraInquireUserResponsePacket::resetLastEntityProcessed> (d, LastEntityProcessed, packet);
    xetra::getInteger<int16_t, xetraInquireUserResponsePacket, &xetraInquireUserResponsePacket::setNoPartyDetails, &xetraInquireUserResponsePacket::resetNoPartyDetails> (d, NoPartyDetails, packet);
    xetra::getString<xetraInquireUserResponsePacket, &xetraInquireUserResponsePacket::setPad6, &xetraInquireUserResponsePacket::resetPad6> (d, Pad6, packet);
    const cdrArray* vPartyDetailsGrp;
    bool bPartyDetailsGrp = d.getArray (PartyDetailsGrp, &vPartyDetailsGrp);
    for (size_t i = 0; bPartyDetailsGrp && i < vPartyDetailsGrp->size (); i++)
    {
        xetraPartyDetailsGrpCompPacket group;
        putPartyDetailsGrpComp ((*vPartyDetailsGrp)[i], group);
        packet.mPartyDetailsGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize InquireUserResponse");
}

void
xetraCodec::putIssuerNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraIssuerNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<int64_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setSecurityID, &xetraIssuerNotificationPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setTransactTime, &xetraIssuerNotificationPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setLastPx, &xetraIssuerNotificationPacket::resetLastPx> (d, LastPx, packet);
    xetra::getDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setPotentialExecVolume, &xetraIssuerNotificationPacket::resetPotentialExecVolume> (d, PotentialExecVolume, packet);
    xetra::getDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setLastQty, &xetraIssuerNotificationPacket::resetLastQty> (d, LastQty, packet);
    xetra::getDouble<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setImbalanceQty, &xetraIssuerNotificationPacket::resetImbalanceQty> (d, ImbalanceQty, packet);
    xetra::getInteger<int32_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setMarketSegmentID, &xetraIssuerNotificationPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setPartyIDSessionID, &xetraIssuerNotificationPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getInteger<int8_t, xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setSecurityTradingStatus, &xetraIssuerNotificationPacket::resetSecurityTradingStatus> (d, SecurityTradingStatus, packet);
    xetra::getString<xetraIssuerNotificationPacket, &xetraIssuerNotificationPacket::setPad7, &xetraIssuerNotificationPacket::resetPad7> (d, Pad7, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize IssuerNotification");
}

void
xetraCodec::putIssuerSecurityStateChangeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraIssuerSecurityStateChangeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int64_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setSecurityID, &xetraIssuerSecurityStateChangeRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setTransactTime, &xetraIssuerSecurityStateChangeRequestPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<int32_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setMarketSegmentID, &xetraIssuerSecurityStateChangeRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int8_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setNoEvents, &xetraIssuerSecurityStateChangeRequestPacket::resetNoEvents> (d, NoEvents, packet);
    xetra::getInteger<int8_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setSecurityStatus, &xetraIssuerSecurityStateChangeRequestPacket::resetSecurityStatus> (d, SecurityStatus, packet);
    xetra::getInteger<int8_t, xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setSoldOutIndicator, &xetraIssuerSecurityStateChangeRequestPacket::resetSoldOutIndicator> (d, SoldOutIndicator, packet);
    xetra::getString<xetraIssuerSecurityStateChangeRequestPacket, &xetraIssuerSecurityStateChangeRequestPacket::setPad1, &xetraIssuerSecurityStateChangeRequestPacket::resetPad1> (d, Pad1, packet);
    const cdrArray* vSecurityStatusEventGrp;
    bool bSecurityStatusEventGrp = d.getArray (SecurityStatusEventGrp, &vSecurityStatusEventGrp);
    for (size_t i = 0; bSecurityStatusEventGrp && i < vSecurityStatusEventGrp->size (); i++)
    {
        xetraSecurityStatusEventGrpCompPacket group;
        putSecurityStatusEventGrpComp ((*vSecurityStatusEventGrp)[i], group);
        packet.mSecurityStatusEventGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize IssuerSecurityStateChangeRequest");
}

void
xetraCodec::putIssuerSecurityStateChangeResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraIssuerSecurityStateChangeResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraIssuerSecurityStateChangeResponsePacket, &xetraIssuerSecurityStateChangeResponsePacket::setSecurityStatusReportID, &xetraIssuerSecurityStateChangeResponsePacket::resetSecurityStatusReportID> (d, SecurityStatusReportID, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize IssuerSecurityStateChangeResponse");
}

void
xetraCodec::putLegalNotificationBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraLegalNotificationBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<uint64_t, xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::setTransactTime, &xetraLegalNotificationBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<int16_t, xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::setVarTextLen, &xetraLegalNotificationBroadcastPacket::resetVarTextLen> (d, VarTextLen, packet);
    xetra::getInteger<int8_t, xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::setUserStatus, &xetraLegalNotificationBroadcastPacket::resetUserStatus> (d, UserStatus, packet);
    xetra::getString<xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::setPad5, &xetraLegalNotificationBroadcastPacket::resetPad5> (d, Pad5, packet);
    xetra::getString<xetraLegalNotificationBroadcastPacket, &xetraLegalNotificationBroadcastPacket::setVarText, &xetraLegalNotificationBroadcastPacket::resetVarText> (d, VarText, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize LegalNotificationBroadcast");
}

void
xetraCodec::putLogonRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraLogonRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint32_t, xetraLogonRequestPacket, &xetraLogonRequestPacket::setHeartBtInt, &xetraLogonRequestPacket::resetHeartBtInt> (d, HeartBtInt, packet);
    xetra::getInteger<uint32_t, xetraLogonRequestPacket, &xetraLogonRequestPacket::setPartyIDSessionID, &xetraLogonRequestPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setDefaultCstmApplVerID, &xetraLogonRequestPacket::resetDefaultCstmApplVerID> (d, DefaultCstmApplVerID, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setPassword, &xetraLogonRequestPacket::resetPassword> (d, Password, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setApplUsageOrders, &xetraLogonRequestPacket::resetApplUsageOrders> (d, ApplUsageOrders, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setApplUsageQuotes, &xetraLogonRequestPacket::resetApplUsageQuotes> (d, ApplUsageQuotes, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setOrderRoutingIndicator, &xetraLogonRequestPacket::resetOrderRoutingIndicator> (d, OrderRoutingIndicator, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setFIXEngineName, &xetraLogonRequestPacket::resetFIXEngineName> (d, FIXEngineName, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setFIXEngineVersion, &xetraLogonRequestPacket::resetFIXEngineVersion> (d, FIXEngineVersion, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setFIXEngineVendor, &xetraLogonRequestPacket::resetFIXEngineVendor> (d, FIXEngineVendor, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setApplicationSystemName, &xetraLogonRequestPacket::resetApplicationSystemName> (d, ApplicationSystemName, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setApplicationSystemVersion, &xetraLogonRequestPacket::resetApplicationSystemVersion> (d, ApplicationSystemVersion, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setApplicationSystemVendor, &xetraLogonRequestPacket::resetApplicationSystemVendor> (d, ApplicationSystemVendor, packet);
    xetra::getString<xetraLogonRequestPacket, &xetraLogonRequestPacket::setPad3, &xetraLogonRequestPacket::resetPad3> (d, Pad3, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize LogonRequest");
}

void
xetraCodec::putLogonResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraLogonResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getInteger<int64_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setThrottleTimeInterval, &xetraLogonResponsePacket::resetThrottleTimeInterval> (d, ThrottleTimeInterval, packet);
    xetra::getInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setThrottleNoMsgs, &xetraLogonResponsePacket::resetThrottleNoMsgs> (d, ThrottleNoMsgs, packet);
    xetra::getInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setThrottleDisconnectLimit, &xetraLogonResponsePacket::resetThrottleDisconnectLimit> (d, ThrottleDisconnectLimit, packet);
    xetra::getInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setHeartBtInt, &xetraLogonResponsePacket::resetHeartBtInt> (d, HeartBtInt, packet);
    xetra::getInteger<uint32_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setSessionInstanceID, &xetraLogonResponsePacket::resetSessionInstanceID> (d, SessionInstanceID, packet);
    xetra::getInteger<int16_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setMarketID, &xetraLogonResponsePacket::resetMarketID> (d, MarketID, packet);
    xetra::getInteger<int8_t, xetraLogonResponsePacket, &xetraLogonResponsePacket::setTradSesMode, &xetraLogonResponsePacket::resetTradSesMode> (d, TradSesMode, packet);
    xetra::getString<xetraLogonResponsePacket, &xetraLogonResponsePacket::setDefaultCstmApplVerID, &xetraLogonResponsePacket::resetDefaultCstmApplVerID> (d, DefaultCstmApplVerID, packet);
    xetra::getString<xetraLogonResponsePacket, &xetraLogonResponsePacket::setDefaultCstmApplVerSubID, &xetraLogonResponsePacket::resetDefaultCstmApplVerSubID> (d, DefaultCstmApplVerSubID, packet);
    xetra::getString<xetraLogonResponsePacket, &xetraLogonResponsePacket::setPad2, &xetraLogonResponsePacket::resetPad2> (d, Pad2, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize LogonResponse");
}

void
xetraCodec::putLogoutRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraLogoutRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize LogoutRequest");
}

void
xetraCodec::putLogoutResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraLogoutResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize LogoutResponse");
}

void
xetraCodec::putMassQuoteRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraMassQuoteRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setQuoteID, &xetraMassQuoteRequestPacket::resetQuoteID> (d, QuoteID, packet);
    xetra::getInteger<uint64_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraMassQuoteRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setExecutingTrader, &xetraMassQuoteRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setMarketSegmentID, &xetraMassQuoteRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setMatchInstCrossID, &xetraMassQuoteRequestPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<int16_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setEnrichmentRuleID, &xetraMassQuoteRequestPacket::resetEnrichmentRuleID> (d, EnrichmentRuleID, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setPriceValidityCheckType, &xetraMassQuoteRequestPacket::resetPriceValidityCheckType> (d, PriceValidityCheckType, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setValueCheckTypeValue, &xetraMassQuoteRequestPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setValueCheckTypeQuantity, &xetraMassQuoteRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setQuoteSizeType, &xetraMassQuoteRequestPacket::resetQuoteSizeType> (d, QuoteSizeType, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setQuoteType, &xetraMassQuoteRequestPacket::resetQuoteType> (d, QuoteType, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setOrderAttributeLiquidityProvision, &xetraMassQuoteRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setNoQuoteEntries, &xetraMassQuoteRequestPacket::resetNoQuoteEntries> (d, NoQuoteEntries, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraMassQuoteRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setExecutingTraderQualifier, &xetraMassQuoteRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraMassQuoteRequestPacket, &xetraMassQuoteRequestPacket::setPad5, &xetraMassQuoteRequestPacket::resetPad5> (d, Pad5, packet);
    const cdrArray* vQuoteEntryGrp;
    bool bQuoteEntryGrp = d.getArray (QuoteEntryGrp, &vQuoteEntryGrp);
    for (size_t i = 0; bQuoteEntryGrp && i < vQuoteEntryGrp->size (); i++)
    {
        xetraQuoteEntryGrpCompPacket group;
        putQuoteEntryGrpComp ((*vQuoteEntryGrp)[i], group);
        packet.mQuoteEntryGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize MassQuoteRequest");
}

void
xetraCodec::putMassQuoteResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraMassQuoteResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::setQuoteID, &xetraMassQuoteResponsePacket::resetQuoteID> (d, QuoteID, packet);
    xetra::getInteger<uint64_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::setQuoteResponseID, &xetraMassQuoteResponsePacket::resetQuoteResponseID> (d, QuoteResponseID, packet);
    xetra::getInteger<int32_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::setMarketSegmentID, &xetraMassQuoteResponsePacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int8_t, xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::setNoQuoteEntries, &xetraMassQuoteResponsePacket::resetNoQuoteEntries> (d, NoQuoteEntries, packet);
    xetra::getString<xetraMassQuoteResponsePacket, &xetraMassQuoteResponsePacket::setPad3, &xetraMassQuoteResponsePacket::resetPad3> (d, Pad3, packet);
    const cdrArray* vQuoteEntryAckGrp;
    bool bQuoteEntryAckGrp = d.getArray (QuoteEntryAckGrp, &vQuoteEntryAckGrp);
    for (size_t i = 0; bQuoteEntryAckGrp && i < vQuoteEntryAckGrp->size (); i++)
    {
        xetraQuoteEntryAckGrpCompPacket group;
        putQuoteEntryAckGrpComp ((*vQuoteEntryAckGrp)[i], group);
        packet.mQuoteEntryAckGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize MassQuoteResponse");
}

void
xetraCodec::putModifyOrderNRResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraModifyOrderNRResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setOrderID, &xetraModifyOrderNRResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setClOrdID, &xetraModifyOrderNRResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setOrigClOrdID, &xetraModifyOrderNRResponsePacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setSecurityID, &xetraModifyOrderNRResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setExecID, &xetraModifyOrderNRResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setStopPx, &xetraModifyOrderNRResponsePacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setLeavesQty, &xetraModifyOrderNRResponsePacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setCumQty, &xetraModifyOrderNRResponsePacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setCxlQty, &xetraModifyOrderNRResponsePacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getDouble<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setDisplayQty, &xetraModifyOrderNRResponsePacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getInteger<uint32_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setOrderIDSfx, &xetraModifyOrderNRResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getString<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setOrdStatus, &xetraModifyOrderNRResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setExecType, &xetraModifyOrderNRResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int16_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setExecRestatementReason, &xetraModifyOrderNRResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setCrossedIndicator, &xetraModifyOrderNRResponsePacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getInteger<int8_t, xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setTriggered, &xetraModifyOrderNRResponsePacket::resetTriggered> (d, Triggered, packet);
    xetra::getString<xetraModifyOrderNRResponsePacket, &xetraModifyOrderNRResponsePacket::setPad6, &xetraModifyOrderNRResponsePacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ModifyOrderNRResponse");
}

void
xetraCodec::putModifyOrderResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraModifyOrderResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderMEComp (d, packet.mResponseHeaderME);
    xetra::getInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setOrderID, &xetraModifyOrderResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setClOrdID, &xetraModifyOrderResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setOrigClOrdID, &xetraModifyOrderResponsePacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setSecurityID, &xetraModifyOrderResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setExecID, &xetraModifyOrderResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setStopPx, &xetraModifyOrderResponsePacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setLeavesQty, &xetraModifyOrderResponsePacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setCumQty, &xetraModifyOrderResponsePacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setCxlQty, &xetraModifyOrderResponsePacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getDouble<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setDisplayQty, &xetraModifyOrderResponsePacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setTrdRegTSTimePriority, &xetraModifyOrderResponsePacket::resetTrdRegTSTimePriority> (d, TrdRegTSTimePriority, packet);
    xetra::getInteger<uint32_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setOrderIDSfx, &xetraModifyOrderResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getString<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setOrdStatus, &xetraModifyOrderResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setExecType, &xetraModifyOrderResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int16_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setExecRestatementReason, &xetraModifyOrderResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setCrossedIndicator, &xetraModifyOrderResponsePacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getInteger<int8_t, xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setTriggered, &xetraModifyOrderResponsePacket::resetTriggered> (d, Triggered, packet);
    xetra::getString<xetraModifyOrderResponsePacket, &xetraModifyOrderResponsePacket::setPad6, &xetraModifyOrderResponsePacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ModifyOrderResponse");
}

void
xetraCodec::putModifyOrderSingleRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraModifyOrderSingleRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setOrderID, &xetraModifyOrderSingleRequestPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setClOrdID, &xetraModifyOrderSingleRequestPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setOrigClOrdID, &xetraModifyOrderSingleRequestPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setSecurityID, &xetraModifyOrderSingleRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPrice, &xetraModifyOrderSingleRequestPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setOrderQty, &xetraModifyOrderSingleRequestPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setDisplayQty, &xetraModifyOrderSingleRequestPacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setDisplayLowQty, &xetraModifyOrderSingleRequestPacket::resetDisplayLowQty> (d, DisplayLowQty, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setDisplayHighQty, &xetraModifyOrderSingleRequestPacket::resetDisplayHighQty> (d, DisplayHighQty, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setStopPx, &xetraModifyOrderSingleRequestPacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setVolumeDiscoveryPrice, &xetraModifyOrderSingleRequestPacket::resetVolumeDiscoveryPrice> (d, VolumeDiscoveryPrice, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPegOffsetValueAbs, &xetraModifyOrderSingleRequestPacket::resetPegOffsetValueAbs> (d, PegOffsetValueAbs, packet);
    xetra::getDouble<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPegOffsetValuePct, &xetraModifyOrderSingleRequestPacket::resetPegOffsetValuePct> (d, PegOffsetValuePct, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPartyIDClientID, &xetraModifyOrderSingleRequestPacket::resetPartyIDClientID> (d, PartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraModifyOrderSingleRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setExecutingTrader, &xetraModifyOrderSingleRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setExpireDate, &xetraModifyOrderSingleRequestPacket::resetExpireDate> (d, ExpireDate, packet);
    xetra::getInteger<int32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setMarketSegmentID, &xetraModifyOrderSingleRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setMatchInstCrossID, &xetraModifyOrderSingleRequestPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<uint32_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setTargetPartyIDSessionID, &xetraModifyOrderSingleRequestPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setApplSeqIndicator, &xetraModifyOrderSingleRequestPacket::resetApplSeqIndicator> (d, ApplSeqIndicator, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setSide, &xetraModifyOrderSingleRequestPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setOrdType, &xetraModifyOrderSingleRequestPacket::resetOrdType> (d, OrdType, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPriceValidityCheckType, &xetraModifyOrderSingleRequestPacket::resetPriceValidityCheckType> (d, PriceValidityCheckType, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setValueCheckTypeValue, &xetraModifyOrderSingleRequestPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setValueCheckTypeQuantity, &xetraModifyOrderSingleRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setOrderAttributeLiquidityProvision, &xetraModifyOrderSingleRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setTimeInForce, &xetraModifyOrderSingleRequestPacket::resetTimeInForce> (d, TimeInForce, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setExecInst, &xetraModifyOrderSingleRequestPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setTradingSessionSubID, &xetraModifyOrderSingleRequestPacket::resetTradingSessionSubID> (d, TradingSessionSubID, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setStopPxIndicator, &xetraModifyOrderSingleRequestPacket::resetStopPxIndicator> (d, StopPxIndicator, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setTradingCapacity, &xetraModifyOrderSingleRequestPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setExDestinationType, &xetraModifyOrderSingleRequestPacket::resetExDestinationType> (d, ExDestinationType, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraModifyOrderSingleRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setExecutingTraderQualifier, &xetraModifyOrderSingleRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setOwnershipIndicator, &xetraModifyOrderSingleRequestPacket::resetOwnershipIndicator> (d, OwnershipIndicator, packet);
    xetra::getString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setFreeText1, &xetraModifyOrderSingleRequestPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setFreeText2, &xetraModifyOrderSingleRequestPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setFreeText4, &xetraModifyOrderSingleRequestPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setFIXClOrdID, &xetraModifyOrderSingleRequestPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getString<xetraModifyOrderSingleRequestPacket, &xetraModifyOrderSingleRequestPacket::setPad4, &xetraModifyOrderSingleRequestPacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ModifyOrderSingleRequest");
}

void
xetraCodec::putModifyOrderSingleShortRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraModifyOrderSingleShortRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setClOrdID, &xetraModifyOrderSingleShortRequestPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setOrigClOrdID, &xetraModifyOrderSingleShortRequestPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setSecurityID, &xetraModifyOrderSingleShortRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setPrice, &xetraModifyOrderSingleShortRequestPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setOrderQty, &xetraModifyOrderSingleShortRequestPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setPartyIDClientID, &xetraModifyOrderSingleShortRequestPacket::resetPartyIDClientID> (d, PartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraModifyOrderSingleShortRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setExecutingTrader, &xetraModifyOrderSingleShortRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setMatchInstCrossID, &xetraModifyOrderSingleShortRequestPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<int16_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setEnrichmentRuleID, &xetraModifyOrderSingleShortRequestPacket::resetEnrichmentRuleID> (d, EnrichmentRuleID, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setSide, &xetraModifyOrderSingleShortRequestPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setPriceValidityCheckType, &xetraModifyOrderSingleShortRequestPacket::resetPriceValidityCheckType> (d, PriceValidityCheckType, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setValueCheckTypeValue, &xetraModifyOrderSingleShortRequestPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setValueCheckTypeQuantity, &xetraModifyOrderSingleShortRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setOrderAttributeLiquidityProvision, &xetraModifyOrderSingleShortRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setTimeInForce, &xetraModifyOrderSingleShortRequestPacket::resetTimeInForce> (d, TimeInForce, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setApplSeqIndicator, &xetraModifyOrderSingleShortRequestPacket::resetApplSeqIndicator> (d, ApplSeqIndicator, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setExecInst, &xetraModifyOrderSingleShortRequestPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setTradingCapacity, &xetraModifyOrderSingleShortRequestPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setExDestinationType, &xetraModifyOrderSingleShortRequestPacket::resetExDestinationType> (d, ExDestinationType, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraModifyOrderSingleShortRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setExecutingTraderQualifier, &xetraModifyOrderSingleShortRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraModifyOrderSingleShortRequestPacket, &xetraModifyOrderSingleShortRequestPacket::setPad6, &xetraModifyOrderSingleShortRequestPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ModifyOrderSingleShortRequest");
}

void
xetraCodec::putModifyTESTradeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraModifyTESTradeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getDouble<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setLastPx, &xetraModifyTESTradeRequestPacket::resetLastPx> (d, LastPx, packet);
    xetra::getInteger<uint64_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setTransBkdTime, &xetraModifyTESTradeRequestPacket::resetTransBkdTime> (d, TransBkdTime, packet);
    xetra::getInteger<int32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setMarketSegmentID, &xetraModifyTESTradeRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setPackageID, &xetraModifyTESTradeRequestPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<uint32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setTESExecID, &xetraModifyTESTradeRequestPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<int32_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setSettlDate, &xetraModifyTESTradeRequestPacket::resetSettlDate> (d, SettlDate, packet);
    xetra::getInteger<int16_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setTrdType, &xetraModifyTESTradeRequestPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setTradeReportType, &xetraModifyTESTradeRequestPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setNoSideAllocs, &xetraModifyTESTradeRequestPacket::resetNoSideAllocs> (d, NoSideAllocs, packet);
    xetra::getString<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setTradeReportText, &xetraModifyTESTradeRequestPacket::resetTradeReportText> (d, TradeReportText, packet);
    xetra::getString<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setTradeReportID, &xetraModifyTESTradeRequestPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraModifyTESTradeRequestPacket, &xetraModifyTESTradeRequestPacket::setPad4, &xetraModifyTESTradeRequestPacket::resetPad4> (d, Pad4, packet);
    const cdrArray* vSideAllocGrp;
    bool bSideAllocGrp = d.getArray (SideAllocGrp, &vSideAllocGrp);
    for (size_t i = 0; bSideAllocGrp && i < vSideAllocGrp->size (); i++)
    {
        xetraSideAllocGrpCompPacket group;
        putSideAllocGrpComp ((*vSideAllocGrp)[i], group);
        packet.mSideAllocGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ModifyTESTradeRequest");
}

void
xetraCodec::putNewOrderNRResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraNewOrderNRResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setOrderID, &xetraNewOrderNRResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setClOrdID, &xetraNewOrderNRResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<int64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setSecurityID, &xetraNewOrderNRResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setExecID, &xetraNewOrderNRResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<uint32_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setOrderIDSfx, &xetraNewOrderNRResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getString<xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setOrdStatus, &xetraNewOrderNRResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setExecType, &xetraNewOrderNRResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int16_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setExecRestatementReason, &xetraNewOrderNRResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setCrossedIndicator, &xetraNewOrderNRResponsePacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getInteger<int8_t, xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setTriggered, &xetraNewOrderNRResponsePacket::resetTriggered> (d, Triggered, packet);
    xetra::getString<xetraNewOrderNRResponsePacket, &xetraNewOrderNRResponsePacket::setPad6, &xetraNewOrderNRResponsePacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize NewOrderNRResponse");
}

void
xetraCodec::putNewOrderResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraNewOrderResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderMEComp (d, packet.mResponseHeaderME);
    xetra::getInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setOrderID, &xetraNewOrderResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setClOrdID, &xetraNewOrderResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<int64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setSecurityID, &xetraNewOrderResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setExecID, &xetraNewOrderResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setTrdRegTSEntryTime, &xetraNewOrderResponsePacket::resetTrdRegTSEntryTime> (d, TrdRegTSEntryTime, packet);
    xetra::getInteger<uint64_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setTrdRegTSTimePriority, &xetraNewOrderResponsePacket::resetTrdRegTSTimePriority> (d, TrdRegTSTimePriority, packet);
    xetra::getInteger<uint32_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setOrderIDSfx, &xetraNewOrderResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getString<xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setOrdStatus, &xetraNewOrderResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setExecType, &xetraNewOrderResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int16_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setExecRestatementReason, &xetraNewOrderResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setCrossedIndicator, &xetraNewOrderResponsePacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getInteger<int8_t, xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setTriggered, &xetraNewOrderResponsePacket::resetTriggered> (d, Triggered, packet);
    xetra::getString<xetraNewOrderResponsePacket, &xetraNewOrderResponsePacket::setPad6, &xetraNewOrderResponsePacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize NewOrderResponse");
}

void
xetraCodec::putNewOrderSingleRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraNewOrderSingleRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPrice, &xetraNewOrderSingleRequestPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setOrderQty, &xetraNewOrderSingleRequestPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setDisplayQty, &xetraNewOrderSingleRequestPacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setDisplayLowQty, &xetraNewOrderSingleRequestPacket::resetDisplayLowQty> (d, DisplayLowQty, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setDisplayHighQty, &xetraNewOrderSingleRequestPacket::resetDisplayHighQty> (d, DisplayHighQty, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setStopPx, &xetraNewOrderSingleRequestPacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setVolumeDiscoveryPrice, &xetraNewOrderSingleRequestPacket::resetVolumeDiscoveryPrice> (d, VolumeDiscoveryPrice, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPegOffsetValueAbs, &xetraNewOrderSingleRequestPacket::resetPegOffsetValueAbs> (d, PegOffsetValueAbs, packet);
    xetra::getDouble<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPegOffsetValuePct, &xetraNewOrderSingleRequestPacket::resetPegOffsetValuePct> (d, PegOffsetValuePct, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setClOrdID, &xetraNewOrderSingleRequestPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<int64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setSecurityID, &xetraNewOrderSingleRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPartyIDClientID, &xetraNewOrderSingleRequestPacket::resetPartyIDClientID> (d, PartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraNewOrderSingleRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setExecutingTrader, &xetraNewOrderSingleRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setExpireDate, &xetraNewOrderSingleRequestPacket::resetExpireDate> (d, ExpireDate, packet);
    xetra::getInteger<int32_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setMarketSegmentID, &xetraNewOrderSingleRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setMatchInstCrossID, &xetraNewOrderSingleRequestPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setApplSeqIndicator, &xetraNewOrderSingleRequestPacket::resetApplSeqIndicator> (d, ApplSeqIndicator, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setSide, &xetraNewOrderSingleRequestPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setOrdType, &xetraNewOrderSingleRequestPacket::resetOrdType> (d, OrdType, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPriceValidityCheckType, &xetraNewOrderSingleRequestPacket::resetPriceValidityCheckType> (d, PriceValidityCheckType, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setValueCheckTypeValue, &xetraNewOrderSingleRequestPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setValueCheckTypeQuantity, &xetraNewOrderSingleRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setOrderAttributeLiquidityProvision, &xetraNewOrderSingleRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setTimeInForce, &xetraNewOrderSingleRequestPacket::resetTimeInForce> (d, TimeInForce, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setExecInst, &xetraNewOrderSingleRequestPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setTradingSessionSubID, &xetraNewOrderSingleRequestPacket::resetTradingSessionSubID> (d, TradingSessionSubID, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setTradingCapacity, &xetraNewOrderSingleRequestPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setExDestinationType, &xetraNewOrderSingleRequestPacket::resetExDestinationType> (d, ExDestinationType, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraNewOrderSingleRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setExecutingTraderQualifier, &xetraNewOrderSingleRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setFreeText1, &xetraNewOrderSingleRequestPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setFreeText2, &xetraNewOrderSingleRequestPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setFreeText4, &xetraNewOrderSingleRequestPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setFIXClOrdID, &xetraNewOrderSingleRequestPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getString<xetraNewOrderSingleRequestPacket, &xetraNewOrderSingleRequestPacket::setPad2, &xetraNewOrderSingleRequestPacket::resetPad2> (d, Pad2, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize NewOrderSingleRequest");
}

void
xetraCodec::putNewOrderSingleShortRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraNewOrderSingleShortRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setSecurityID, &xetraNewOrderSingleShortRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setPrice, &xetraNewOrderSingleShortRequestPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setOrderQty, &xetraNewOrderSingleShortRequestPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setClOrdID, &xetraNewOrderSingleShortRequestPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setPartyIDClientID, &xetraNewOrderSingleShortRequestPacket::resetPartyIDClientID> (d, PartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraNewOrderSingleShortRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setExecutingTrader, &xetraNewOrderSingleShortRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setMatchInstCrossID, &xetraNewOrderSingleShortRequestPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<int16_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setEnrichmentRuleID, &xetraNewOrderSingleShortRequestPacket::resetEnrichmentRuleID> (d, EnrichmentRuleID, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setSide, &xetraNewOrderSingleShortRequestPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setApplSeqIndicator, &xetraNewOrderSingleShortRequestPacket::resetApplSeqIndicator> (d, ApplSeqIndicator, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setPriceValidityCheckType, &xetraNewOrderSingleShortRequestPacket::resetPriceValidityCheckType> (d, PriceValidityCheckType, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setValueCheckTypeValue, &xetraNewOrderSingleShortRequestPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setValueCheckTypeQuantity, &xetraNewOrderSingleShortRequestPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setOrderAttributeLiquidityProvision, &xetraNewOrderSingleShortRequestPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setTimeInForce, &xetraNewOrderSingleShortRequestPacket::resetTimeInForce> (d, TimeInForce, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setExecInst, &xetraNewOrderSingleShortRequestPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setTradingCapacity, &xetraNewOrderSingleShortRequestPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setExDestinationType, &xetraNewOrderSingleShortRequestPacket::resetExDestinationType> (d, ExDestinationType, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraNewOrderSingleShortRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setExecutingTraderQualifier, &xetraNewOrderSingleShortRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraNewOrderSingleShortRequestPacket, &xetraNewOrderSingleShortRequestPacket::setPad6, &xetraNewOrderSingleShortRequestPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize NewOrderSingleShortRequest");
}

void
xetraCodec::putNewsBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraNewsBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<uint64_t, xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::setOrigTime, &xetraNewsBroadcastPacket::resetOrigTime> (d, OrigTime, packet);
    xetra::getInteger<int16_t, xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::setVarTextLen, &xetraNewsBroadcastPacket::resetVarTextLen> (d, VarTextLen, packet);
    xetra::getString<xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::setHeadline, &xetraNewsBroadcastPacket::resetHeadline> (d, Headline, packet);
    xetra::getString<xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::setPad6, &xetraNewsBroadcastPacket::resetPad6> (d, Pad6, packet);
    xetra::getString<xetraNewsBroadcastPacket, &xetraNewsBroadcastPacket::setVarText, &xetraNewsBroadcastPacket::resetVarText> (d, VarText, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize NewsBroadcast");
}

void
xetraCodec::putOrderExecNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraOrderExecNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setOrderID, &xetraOrderExecNotificationPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setClOrdID, &xetraOrderExecNotificationPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setOrigClOrdID, &xetraOrderExecNotificationPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setSecurityID, &xetraOrderExecNotificationPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setExecID, &xetraOrderExecNotificationPacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setLeavesQty, &xetraOrderExecNotificationPacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setCumQty, &xetraOrderExecNotificationPacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setCxlQty, &xetraOrderExecNotificationPacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getDouble<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setDisplayQty, &xetraOrderExecNotificationPacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getInteger<int32_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setMarketSegmentID, &xetraOrderExecNotificationPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setOrderIDSfx, &xetraOrderExecNotificationPacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int16_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setExecRestatementReason, &xetraOrderExecNotificationPacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setSide, &xetraOrderExecNotificationPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setOrdStatus, &xetraOrderExecNotificationPacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setExecType, &xetraOrderExecNotificationPacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setMatchType, &xetraOrderExecNotificationPacket::resetMatchType> (d, MatchType, packet);
    xetra::getInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setTriggered, &xetraOrderExecNotificationPacket::resetTriggered> (d, Triggered, packet);
    xetra::getInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setCrossedIndicator, &xetraOrderExecNotificationPacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setFIXClOrdID, &xetraOrderExecNotificationPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getInteger<int8_t, xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setNoFills, &xetraOrderExecNotificationPacket::resetNoFills> (d, NoFills, packet);
    xetra::getString<xetraOrderExecNotificationPacket, &xetraOrderExecNotificationPacket::setPad3, &xetraOrderExecNotificationPacket::resetPad3> (d, Pad3, packet);
    const cdrArray* vFillsGrp;
    bool bFillsGrp = d.getArray (FillsGrp, &vFillsGrp);
    for (size_t i = 0; bFillsGrp && i < vFillsGrp->size (); i++)
    {
        xetraFillsGrpCompPacket group;
        putFillsGrpComp ((*vFillsGrp)[i], group);
        packet.mFillsGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize OrderExecNotification");
}

void
xetraCodec::putOrderExecReportBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraOrderExecReportBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setOrderID, &xetraOrderExecReportBroadcastPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setClOrdID, &xetraOrderExecReportBroadcastPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setOrigClOrdID, &xetraOrderExecReportBroadcastPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setSecurityID, &xetraOrderExecReportBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setExecID, &xetraOrderExecReportBroadcastPacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setTrdRegTSEntryTime, &xetraOrderExecReportBroadcastPacket::resetTrdRegTSEntryTime> (d, TrdRegTSEntryTime, packet);
    xetra::getInteger<uint64_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setTrdRegTSTimePriority, &xetraOrderExecReportBroadcastPacket::resetTrdRegTSTimePriority> (d, TrdRegTSTimePriority, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPrice, &xetraOrderExecReportBroadcastPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setLeavesQty, &xetraOrderExecReportBroadcastPacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setCumQty, &xetraOrderExecReportBroadcastPacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setCxlQty, &xetraOrderExecReportBroadcastPacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setOrderQty, &xetraOrderExecReportBroadcastPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setDisplayQty, &xetraOrderExecReportBroadcastPacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setDisplayLowQty, &xetraOrderExecReportBroadcastPacket::resetDisplayLowQty> (d, DisplayLowQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setDisplayHighQty, &xetraOrderExecReportBroadcastPacket::resetDisplayHighQty> (d, DisplayHighQty, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setStopPx, &xetraOrderExecReportBroadcastPacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setVolumeDiscoveryPrice, &xetraOrderExecReportBroadcastPacket::resetVolumeDiscoveryPrice> (d, VolumeDiscoveryPrice, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPegOffsetValueAbs, &xetraOrderExecReportBroadcastPacket::resetPegOffsetValueAbs> (d, PegOffsetValueAbs, packet);
    xetra::getDouble<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPegOffsetValuePct, &xetraOrderExecReportBroadcastPacket::resetPegOffsetValuePct> (d, PegOffsetValuePct, packet);
    xetra::getInteger<int32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setMarketSegmentID, &xetraOrderExecReportBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setOrderIDSfx, &xetraOrderExecReportBroadcastPacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setExpireDate, &xetraOrderExecReportBroadcastPacket::resetExpireDate> (d, ExpireDate, packet);
    xetra::getInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setMatchInstCrossID, &xetraOrderExecReportBroadcastPacket::resetMatchInstCrossID> (d, MatchInstCrossID, packet);
    xetra::getInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPartyIDExecutingUnit, &xetraOrderExecReportBroadcastPacket::resetPartyIDExecutingUnit> (d, PartyIDExecutingUnit, packet);
    xetra::getInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPartyIDSessionID, &xetraOrderExecReportBroadcastPacket::resetPartyIDSessionID> (d, PartyIDSessionID, packet);
    xetra::getInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPartyIDExecutingTrader, &xetraOrderExecReportBroadcastPacket::resetPartyIDExecutingTrader> (d, PartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPartyIDEnteringTrader, &xetraOrderExecReportBroadcastPacket::resetPartyIDEnteringTrader> (d, PartyIDEnteringTrader, packet);
    xetra::getInteger<int16_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setExecRestatementReason, &xetraOrderExecReportBroadcastPacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPartyIDEnteringFirm, &xetraOrderExecReportBroadcastPacket::resetPartyIDEnteringFirm> (d, PartyIDEnteringFirm, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setOrdStatus, &xetraOrderExecReportBroadcastPacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setExecType, &xetraOrderExecReportBroadcastPacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setMatchType, &xetraOrderExecReportBroadcastPacket::resetMatchType> (d, MatchType, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setSide, &xetraOrderExecReportBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setOrdType, &xetraOrderExecReportBroadcastPacket::resetOrdType> (d, OrdType, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setTradingCapacity, &xetraOrderExecReportBroadcastPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setTimeInForce, &xetraOrderExecReportBroadcastPacket::resetTimeInForce> (d, TimeInForce, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setExecInst, &xetraOrderExecReportBroadcastPacket::resetExecInst> (d, ExecInst, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setTradingSessionSubID, &xetraOrderExecReportBroadcastPacket::resetTradingSessionSubID> (d, TradingSessionSubID, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setApplSeqIndicator, &xetraOrderExecReportBroadcastPacket::resetApplSeqIndicator> (d, ApplSeqIndicator, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setExDestinationType, &xetraOrderExecReportBroadcastPacket::resetExDestinationType> (d, ExDestinationType, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setFreeText1, &xetraOrderExecReportBroadcastPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setFreeText2, &xetraOrderExecReportBroadcastPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setFreeText4, &xetraOrderExecReportBroadcastPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setFIXClOrdID, &xetraOrderExecReportBroadcastPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setNoFills, &xetraOrderExecReportBroadcastPacket::resetNoFills> (d, NoFills, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setTriggered, &xetraOrderExecReportBroadcastPacket::resetTriggered> (d, Triggered, packet);
    xetra::getInteger<int8_t, xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setCrossedIndicator, &xetraOrderExecReportBroadcastPacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getString<xetraOrderExecReportBroadcastPacket, &xetraOrderExecReportBroadcastPacket::setPad3, &xetraOrderExecReportBroadcastPacket::resetPad3> (d, Pad3, packet);
    const cdrArray* vFillsGrp;
    bool bFillsGrp = d.getArray (FillsGrp, &vFillsGrp);
    for (size_t i = 0; bFillsGrp && i < vFillsGrp->size (); i++)
    {
        xetraFillsGrpCompPacket group;
        putFillsGrpComp ((*vFillsGrp)[i], group);
        packet.mFillsGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize OrderExecReportBroadcast");
}

void
xetraCodec::putOrderExecResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraOrderExecResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderMEComp (d, packet.mResponseHeaderME);
    xetra::getInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setOrderID, &xetraOrderExecResponsePacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setClOrdID, &xetraOrderExecResponsePacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setOrigClOrdID, &xetraOrderExecResponsePacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setSecurityID, &xetraOrderExecResponsePacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setExecID, &xetraOrderExecResponsePacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setTrdRegTSEntryTime, &xetraOrderExecResponsePacket::resetTrdRegTSEntryTime> (d, TrdRegTSEntryTime, packet);
    xetra::getInteger<uint64_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setTrdRegTSTimePriority, &xetraOrderExecResponsePacket::resetTrdRegTSTimePriority> (d, TrdRegTSTimePriority, packet);
    xetra::getDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setLeavesQty, &xetraOrderExecResponsePacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setCumQty, &xetraOrderExecResponsePacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setCxlQty, &xetraOrderExecResponsePacket::resetCxlQty> (d, CxlQty, packet);
    xetra::getDouble<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setDisplayQty, &xetraOrderExecResponsePacket::resetDisplayQty> (d, DisplayQty, packet);
    xetra::getInteger<int32_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setMarketSegmentID, &xetraOrderExecResponsePacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setOrderIDSfx, &xetraOrderExecResponsePacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int16_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setExecRestatementReason, &xetraOrderExecResponsePacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setSide, &xetraOrderExecResponsePacket::resetSide> (d, Side, packet);
    xetra::getString<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setOrdStatus, &xetraOrderExecResponsePacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setExecType, &xetraOrderExecResponsePacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setMatchType, &xetraOrderExecResponsePacket::resetMatchType> (d, MatchType, packet);
    xetra::getInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setTriggered, &xetraOrderExecResponsePacket::resetTriggered> (d, Triggered, packet);
    xetra::getInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setCrossedIndicator, &xetraOrderExecResponsePacket::resetCrossedIndicator> (d, CrossedIndicator, packet);
    xetra::getInteger<int8_t, xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setNoFills, &xetraOrderExecResponsePacket::resetNoFills> (d, NoFills, packet);
    xetra::getString<xetraOrderExecResponsePacket, &xetraOrderExecResponsePacket::setPad7, &xetraOrderExecResponsePacket::resetPad7> (d, Pad7, packet);
    const cdrArray* vFillsGrp;
    bool bFillsGrp = d.getArray (FillsGrp, &vFillsGrp);
    for (size_t i = 0; bFillsGrp && i < vFillsGrp->size (); i++)
    {
        xetraFillsGrpCompPacket group;
        putFillsGrpComp ((*vFillsGrp)[i], group);
        packet.mFillsGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize OrderExecResponse");
}

void
xetraCodec::putPartyActionReport (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraPartyActionReportPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<uint64_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setTransactTime, &xetraPartyActionReportPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<int32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setTradeDate, &xetraPartyActionReportPacket::resetTradeDate> (d, TradeDate, packet);
    xetra::getInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setRequestingPartyIDExecutingTrader, &xetraPartyActionReportPacket::resetRequestingPartyIDExecutingTrader> (d, RequestingPartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setPartyIDExecutingUnit, &xetraPartyActionReportPacket::resetPartyIDExecutingUnit> (d, PartyIDExecutingUnit, packet);
    xetra::getInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setPartyIDExecutingTrader, &xetraPartyActionReportPacket::resetPartyIDExecutingTrader> (d, PartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setRequestingPartyIDExecutingSystem, &xetraPartyActionReportPacket::resetRequestingPartyIDExecutingSystem> (d, RequestingPartyIDExecutingSystem, packet);
    xetra::getInteger<int16_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setMarketID, &xetraPartyActionReportPacket::resetMarketID> (d, MarketID, packet);
    xetra::getInteger<int8_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setPartyActionType, &xetraPartyActionReportPacket::resetPartyActionType> (d, PartyActionType, packet);
    xetra::getInteger<int8_t, xetraPartyActionReportPacket, &xetraPartyActionReportPacket::setRequestingPartyIDEnteringFirm, &xetraPartyActionReportPacket::resetRequestingPartyIDEnteringFirm> (d, RequestingPartyIDEnteringFirm, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize PartyActionReport");
}

void
xetraCodec::putPartyEntitlementsUpdateReport (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraPartyEntitlementsUpdateReportPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<uint64_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setTransactTime, &xetraPartyEntitlementsUpdateReportPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<int32_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setTradeDate, &xetraPartyEntitlementsUpdateReportPacket::resetTradeDate> (d, TradeDate, packet);
    xetra::getInteger<uint32_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setPartyDetailIDExecutingUnit, &xetraPartyEntitlementsUpdateReportPacket::resetPartyDetailIDExecutingUnit> (d, PartyDetailIDExecutingUnit, packet);
    xetra::getInteger<uint32_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setRequestingPartyIDExecutingSystem, &xetraPartyEntitlementsUpdateReportPacket::resetRequestingPartyIDExecutingSystem> (d, RequestingPartyIDExecutingSystem, packet);
    xetra::getInteger<int16_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setMarketID, &xetraPartyEntitlementsUpdateReportPacket::resetMarketID> (d, MarketID, packet);
    xetra::getString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setListUpdateAction, &xetraPartyEntitlementsUpdateReportPacket::resetListUpdateAction> (d, ListUpdateAction, packet);
    xetra::getString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setRequestingPartyEnteringFirm, &xetraPartyEntitlementsUpdateReportPacket::resetRequestingPartyEnteringFirm> (d, RequestingPartyEnteringFirm, packet);
    xetra::getString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setRequestingPartyClearingFirm, &xetraPartyEntitlementsUpdateReportPacket::resetRequestingPartyClearingFirm> (d, RequestingPartyClearingFirm, packet);
    xetra::getInteger<int8_t, xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setPartyDetailStatus, &xetraPartyEntitlementsUpdateReportPacket::resetPartyDetailStatus> (d, PartyDetailStatus, packet);
    xetra::getString<xetraPartyEntitlementsUpdateReportPacket, &xetraPartyEntitlementsUpdateReportPacket::setPad6, &xetraPartyEntitlementsUpdateReportPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize PartyEntitlementsUpdateReport");
}

void
xetraCodec::putQuoteActivationNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraQuoteActivationNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setMassActionReportID, &xetraQuoteActivationNotificationPacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int32_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setMarketSegmentID, &xetraQuoteActivationNotificationPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setPartyIDEnteringTrader, &xetraQuoteActivationNotificationPacket::resetPartyIDEnteringTrader> (d, PartyIDEnteringTrader, packet);
    xetra::getInteger<int16_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setNoNotAffectedSecurities, &xetraQuoteActivationNotificationPacket::resetNoNotAffectedSecurities> (d, NoNotAffectedSecurities, packet);
    xetra::getInteger<int8_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setPartyIDEnteringFirm, &xetraQuoteActivationNotificationPacket::resetPartyIDEnteringFirm> (d, PartyIDEnteringFirm, packet);
    xetra::getInteger<int8_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setMassActionType, &xetraQuoteActivationNotificationPacket::resetMassActionType> (d, MassActionType, packet);
    xetra::getInteger<uint8_t, xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setMassActionReason, &xetraQuoteActivationNotificationPacket::resetMassActionReason> (d, MassActionReason, packet);
    xetra::getString<xetraQuoteActivationNotificationPacket, &xetraQuoteActivationNotificationPacket::setPad3, &xetraQuoteActivationNotificationPacket::resetPad3> (d, Pad3, packet);
    const cdrArray* vNotAffectedSecuritiesGrp;
    bool bNotAffectedSecuritiesGrp = d.getArray (NotAffectedSecuritiesGrp, &vNotAffectedSecuritiesGrp);
    for (size_t i = 0; bNotAffectedSecuritiesGrp && i < vNotAffectedSecuritiesGrp->size (); i++)
    {
        xetraNotAffectedSecuritiesGrpCompPacket group;
        putNotAffectedSecuritiesGrpComp ((*vNotAffectedSecuritiesGrp)[i], group);
        packet.mNotAffectedSecuritiesGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize QuoteActivationNotification");
}

void
xetraCodec::putQuoteActivationRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraQuoteActivationRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setPartyIdInvestmentDecisionMaker, &xetraQuoteActivationRequestPacket::resetPartyIdInvestmentDecisionMaker> (d, PartyIdInvestmentDecisionMaker, packet);
    xetra::getInteger<uint64_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setExecutingTrader, &xetraQuoteActivationRequestPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<int32_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setMarketSegmentID, &xetraQuoteActivationRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setTargetPartyIDSessionID, &xetraQuoteActivationRequestPacket::resetTargetPartyIDSessionID> (d, TargetPartyIDSessionID, packet);
    xetra::getInteger<int8_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setMassActionType, &xetraQuoteActivationRequestPacket::resetMassActionType> (d, MassActionType, packet);
    xetra::getInteger<int8_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setPartyIdInvestmentDecisionMakerQualifier, &xetraQuoteActivationRequestPacket::resetPartyIdInvestmentDecisionMakerQualifier> (d, PartyIdInvestmentDecisionMakerQualifier, packet);
    xetra::getInteger<int8_t, xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setExecutingTraderQualifier, &xetraQuoteActivationRequestPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getString<xetraQuoteActivationRequestPacket, &xetraQuoteActivationRequestPacket::setPad5, &xetraQuoteActivationRequestPacket::resetPad5> (d, Pad5, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize QuoteActivationRequest");
}

void
xetraCodec::putQuoteActivationResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraQuoteActivationResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraQuoteActivationResponsePacket, &xetraQuoteActivationResponsePacket::setMassActionReportID, &xetraQuoteActivationResponsePacket::resetMassActionReportID> (d, MassActionReportID, packet);
    xetra::getInteger<int16_t, xetraQuoteActivationResponsePacket, &xetraQuoteActivationResponsePacket::setNoNotAffectedSecurities, &xetraQuoteActivationResponsePacket::resetNoNotAffectedSecurities> (d, NoNotAffectedSecurities, packet);
    xetra::getString<xetraQuoteActivationResponsePacket, &xetraQuoteActivationResponsePacket::setPad6, &xetraQuoteActivationResponsePacket::resetPad6> (d, Pad6, packet);
    const cdrArray* vNotAffectedSecuritiesGrp;
    bool bNotAffectedSecuritiesGrp = d.getArray (NotAffectedSecuritiesGrp, &vNotAffectedSecuritiesGrp);
    for (size_t i = 0; bNotAffectedSecuritiesGrp && i < vNotAffectedSecuritiesGrp->size (); i++)
    {
        xetraNotAffectedSecuritiesGrpCompPacket group;
        putNotAffectedSecuritiesGrpComp ((*vNotAffectedSecuritiesGrp)[i], group);
        packet.mNotAffectedSecuritiesGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize QuoteActivationResponse");
}

void
xetraCodec::putQuoteExecutionReport (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraQuoteExecutionReportPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::setExecID, &xetraQuoteExecutionReportPacket::resetExecID> (d, ExecID, packet);
    xetra::getInteger<int32_t, xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::setMarketSegmentID, &xetraQuoteExecutionReportPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int8_t, xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::setNoQuoteEvents, &xetraQuoteExecutionReportPacket::resetNoQuoteEvents> (d, NoQuoteEvents, packet);
    xetra::getString<xetraQuoteExecutionReportPacket, &xetraQuoteExecutionReportPacket::setPad3, &xetraQuoteExecutionReportPacket::resetPad3> (d, Pad3, packet);
    const cdrArray* vQuoteEventGrp;
    bool bQuoteEventGrp = d.getArray (QuoteEventGrp, &vQuoteEventGrp);
    for (size_t i = 0; bQuoteEventGrp && i < vQuoteEventGrp->size (); i++)
    {
        xetraQuoteEventGrpCompPacket group;
        putQuoteEventGrpComp ((*vQuoteEventGrp)[i], group);
        packet.mQuoteEventGrp.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize QuoteExecutionReport");
}

void
xetraCodec::putRFQBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRFQBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<int64_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setSecurityID, &xetraRFQBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setExecID, &xetraRFQBroadcastPacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setOrderQty, &xetraRFQBroadcastPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getInteger<int32_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setMarketSegmentID, &xetraRFQBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int8_t, xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setSide, &xetraRFQBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setPartyExecutingFirm, &xetraRFQBroadcastPacket::resetPartyExecutingFirm> (d, PartyExecutingFirm, packet);
    xetra::getString<xetraRFQBroadcastPacket, &xetraRFQBroadcastPacket::setPad6, &xetraRFQBroadcastPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RFQBroadcast");
}

void
xetraCodec::putRFQRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRFQRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int64_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::setSecurityID, &xetraRFQRequestPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraRFQRequestPacket, &xetraRFQRequestPacket::setOrderQty, &xetraRFQRequestPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getInteger<int32_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::setMarketSegmentID, &xetraRFQRequestPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int8_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::setRFQPublishIndicator, &xetraRFQRequestPacket::resetRFQPublishIndicator> (d, RFQPublishIndicator, packet);
    xetra::getInteger<int8_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::setRFQRequesterDisclosureInstruction, &xetraRFQRequestPacket::resetRFQRequesterDisclosureInstruction> (d, RFQRequesterDisclosureInstruction, packet);
    xetra::getInteger<int8_t, xetraRFQRequestPacket, &xetraRFQRequestPacket::setSide, &xetraRFQRequestPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraRFQRequestPacket, &xetraRFQRequestPacket::setPad1, &xetraRFQRequestPacket::resetPad1> (d, Pad1, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RFQRequest");
}

void
xetraCodec::putRFQResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRFQResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint64_t, xetraRFQResponsePacket, &xetraRFQResponsePacket::setExecID, &xetraRFQResponsePacket::resetExecID> (d, ExecID, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RFQResponse");
}

void
xetraCodec::putReject (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRejectPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRResponseHeaderMEComp (d, packet.mNRResponseHeaderME);
    xetra::getInteger<uint32_t, xetraRejectPacket, &xetraRejectPacket::setSessionRejectReason, &xetraRejectPacket::resetSessionRejectReason> (d, SessionRejectReason, packet);
    xetra::getInteger<int16_t, xetraRejectPacket, &xetraRejectPacket::setVarTextLen, &xetraRejectPacket::resetVarTextLen> (d, VarTextLen, packet);
    xetra::getInteger<int8_t, xetraRejectPacket, &xetraRejectPacket::setSessionStatus, &xetraRejectPacket::resetSessionStatus> (d, SessionStatus, packet);
    xetra::getString<xetraRejectPacket, &xetraRejectPacket::setPad1, &xetraRejectPacket::resetPad1> (d, Pad1, packet);
    xetra::getString<xetraRejectPacket, &xetraRejectPacket::setVarText, &xetraRejectPacket::resetVarText> (d, VarText, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize Reject");
}

void
xetraCodec::putRetransmitMEMessageRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRetransmitMEMessageRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint32_t, xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::setSubscriptionScope, &xetraRetransmitMEMessageRequestPacket::resetSubscriptionScope> (d, SubscriptionScope, packet);
    xetra::getInteger<uint16_t, xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::setPartitionID, &xetraRetransmitMEMessageRequestPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getInteger<int8_t, xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::setRefApplID, &xetraRetransmitMEMessageRequestPacket::resetRefApplID> (d, RefApplID, packet);
    xetra::getString<xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::setApplBegMsgID, &xetraRetransmitMEMessageRequestPacket::resetApplBegMsgID> (d, ApplBegMsgID, packet);
    xetra::getString<xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::setApplEndMsgID, &xetraRetransmitMEMessageRequestPacket::resetApplEndMsgID> (d, ApplEndMsgID, packet);
    xetra::getString<xetraRetransmitMEMessageRequestPacket, &xetraRetransmitMEMessageRequestPacket::setPad1, &xetraRetransmitMEMessageRequestPacket::resetPad1> (d, Pad1, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RetransmitMEMessageRequest");
}

void
xetraCodec::putRetransmitMEMessageResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRetransmitMEMessageResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getInteger<uint16_t, xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::setApplTotalMessageCount, &xetraRetransmitMEMessageResponsePacket::resetApplTotalMessageCount> (d, ApplTotalMessageCount, packet);
    xetra::getString<xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::setApplEndMsgID, &xetraRetransmitMEMessageResponsePacket::resetApplEndMsgID> (d, ApplEndMsgID, packet);
    xetra::getString<xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::setRefApplLastMsgID, &xetraRetransmitMEMessageResponsePacket::resetRefApplLastMsgID> (d, RefApplLastMsgID, packet);
    xetra::getString<xetraRetransmitMEMessageResponsePacket, &xetraRetransmitMEMessageResponsePacket::setPad6, &xetraRetransmitMEMessageResponsePacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RetransmitMEMessageResponse");
}

void
xetraCodec::putRetransmitRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRetransmitRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint64_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::setApplBegSeqNum, &xetraRetransmitRequestPacket::resetApplBegSeqNum> (d, ApplBegSeqNum, packet);
    xetra::getInteger<uint64_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::setApplEndSeqNum, &xetraRetransmitRequestPacket::resetApplEndSeqNum> (d, ApplEndSeqNum, packet);
    xetra::getInteger<uint16_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::setPartitionID, &xetraRetransmitRequestPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getInteger<int8_t, xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::setRefApplID, &xetraRetransmitRequestPacket::resetRefApplID> (d, RefApplID, packet);
    xetra::getString<xetraRetransmitRequestPacket, &xetraRetransmitRequestPacket::setPad5, &xetraRetransmitRequestPacket::resetPad5> (d, Pad5, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RetransmitRequest");
}

void
xetraCodec::putRetransmitResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraRetransmitResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getInteger<uint64_t, xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::setApplEndSeqNum, &xetraRetransmitResponsePacket::resetApplEndSeqNum> (d, ApplEndSeqNum, packet);
    xetra::getInteger<uint64_t, xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::setRefApplLastSeqNum, &xetraRetransmitResponsePacket::resetRefApplLastSeqNum> (d, RefApplLastSeqNum, packet);
    xetra::getInteger<uint16_t, xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::setApplTotalMessageCount, &xetraRetransmitResponsePacket::resetApplTotalMessageCount> (d, ApplTotalMessageCount, packet);
    xetra::getString<xetraRetransmitResponsePacket, &xetraRetransmitResponsePacket::setPad6, &xetraRetransmitResponsePacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize RetransmitResponse");
}

void
xetraCodec::putServiceAvailabilityBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraServiceAvailabilityBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNRBCHeaderComp (d, packet.mNRBCHeader);
    xetra::getInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setMatchingEngineTradeDate, &xetraServiceAvailabilityBroadcastPacket::resetMatchingEngineTradeDate> (d, MatchingEngineTradeDate, packet);
    xetra::getInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setTradeManagerTradeDate, &xetraServiceAvailabilityBroadcastPacket::resetTradeManagerTradeDate> (d, TradeManagerTradeDate, packet);
    xetra::getInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setApplSeqTradeDate, &xetraServiceAvailabilityBroadcastPacket::resetApplSeqTradeDate> (d, ApplSeqTradeDate, packet);
    xetra::getInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setT7EntryServiceTradeDate, &xetraServiceAvailabilityBroadcastPacket::resetT7EntryServiceTradeDate> (d, T7EntryServiceTradeDate, packet);
    xetra::getInteger<int32_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setT7EntryServiceRtmTradeDate, &xetraServiceAvailabilityBroadcastPacket::resetT7EntryServiceRtmTradeDate> (d, T7EntryServiceRtmTradeDate, packet);
    xetra::getInteger<uint16_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setPartitionID, &xetraServiceAvailabilityBroadcastPacket::resetPartitionID> (d, PartitionID, packet);
    xetra::getInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setMatchingEngineStatus, &xetraServiceAvailabilityBroadcastPacket::resetMatchingEngineStatus> (d, MatchingEngineStatus, packet);
    xetra::getInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setTradeManagerStatus, &xetraServiceAvailabilityBroadcastPacket::resetTradeManagerStatus> (d, TradeManagerStatus, packet);
    xetra::getInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setApplSeqStatus, &xetraServiceAvailabilityBroadcastPacket::resetApplSeqStatus> (d, ApplSeqStatus, packet);
    xetra::getInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setT7EntryServiceStatus, &xetraServiceAvailabilityBroadcastPacket::resetT7EntryServiceStatus> (d, T7EntryServiceStatus, packet);
    xetra::getInteger<int8_t, xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setT7EntryServiceRtmStatus, &xetraServiceAvailabilityBroadcastPacket::resetT7EntryServiceRtmStatus> (d, T7EntryServiceRtmStatus, packet);
    xetra::getString<xetraServiceAvailabilityBroadcastPacket, &xetraServiceAvailabilityBroadcastPacket::setPad5, &xetraServiceAvailabilityBroadcastPacket::resetPad5> (d, Pad5, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ServiceAvailabilityBroadcast");
}

void
xetraCodec::putSubscribeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraSubscribeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint32_t, xetraSubscribeRequestPacket, &xetraSubscribeRequestPacket::setSubscriptionScope, &xetraSubscribeRequestPacket::resetSubscriptionScope> (d, SubscriptionScope, packet);
    xetra::getInteger<int8_t, xetraSubscribeRequestPacket, &xetraSubscribeRequestPacket::setRefApplID, &xetraSubscribeRequestPacket::resetRefApplID> (d, RefApplID, packet);
    xetra::getString<xetraSubscribeRequestPacket, &xetraSubscribeRequestPacket::setPad3, &xetraSubscribeRequestPacket::resetPad3> (d, Pad3, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize SubscribeRequest");
}

void
xetraCodec::putSubscribeResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraSubscribeResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getInteger<uint32_t, xetraSubscribeResponsePacket, &xetraSubscribeResponsePacket::setApplSubID, &xetraSubscribeResponsePacket::resetApplSubID> (d, ApplSubID, packet);
    xetra::getString<xetraSubscribeResponsePacket, &xetraSubscribeResponsePacket::setPad4, &xetraSubscribeResponsePacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize SubscribeResponse");
}

void
xetraCodec::putTESApproveBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESApproveBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<int64_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setSecurityID, &xetraTESApproveBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setLastPx, &xetraTESApproveBroadcastPacket::resetLastPx> (d, LastPx, packet);
    xetra::getDouble<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setAllocQty, &xetraTESApproveBroadcastPacket::resetAllocQty> (d, AllocQty, packet);
    xetra::getInteger<uint64_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTransactTime, &xetraTESApproveBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<uint64_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTransBkdTime, &xetraTESApproveBroadcastPacket::resetTransBkdTime> (d, TransBkdTime, packet);
    xetra::getDouble<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setSettlCurrFxRate, &xetraTESApproveBroadcastPacket::resetSettlCurrFxRate> (d, SettlCurrFxRate, packet);
    xetra::getInteger<int32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setMarketSegmentID, &xetraTESApproveBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setPackageID, &xetraTESApproveBroadcastPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<uint32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTESExecID, &xetraTESApproveBroadcastPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<uint32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setAllocID, &xetraTESApproveBroadcastPacket::resetAllocID> (d, AllocID, packet);
    xetra::getInteger<int32_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setSettlDate, &xetraTESApproveBroadcastPacket::resetSettlDate> (d, SettlDate, packet);
    xetra::getInteger<int16_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTrdType, &xetraTESApproveBroadcastPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setSide, &xetraTESApproveBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setValueCheckTypeValue, &xetraTESApproveBroadcastPacket::resetValueCheckTypeValue> (d, ValueCheckTypeValue, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setValueCheckTypeQuantity, &xetraTESApproveBroadcastPacket::resetValueCheckTypeQuantity> (d, ValueCheckTypeQuantity, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTradeReportType, &xetraTESApproveBroadcastPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTradingCapacity, &xetraTESApproveBroadcastPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTradeAllocStatus, &xetraTESApproveBroadcastPacket::resetTradeAllocStatus> (d, TradeAllocStatus, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setMessageEventSource, &xetraTESApproveBroadcastPacket::resetMessageEventSource> (d, MessageEventSource, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setTradeReportID, &xetraTESApproveBroadcastPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setPartyExecutingFirm, &xetraTESApproveBroadcastPacket::resetPartyExecutingFirm> (d, PartyExecutingFirm, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setPartyExecutingTrader, &xetraTESApproveBroadcastPacket::resetPartyExecutingTrader> (d, PartyExecutingTrader, packet);
    xetra::getInteger<int8_t, xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setPartyIDEnteringFirm, &xetraTESApproveBroadcastPacket::resetPartyIDEnteringFirm> (d, PartyIDEnteringFirm, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setPartyEnteringTrader, &xetraTESApproveBroadcastPacket::resetPartyEnteringTrader> (d, PartyEnteringTrader, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setRootPartyExecutingFirm, &xetraTESApproveBroadcastPacket::resetRootPartyExecutingFirm> (d, RootPartyExecutingFirm, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setRootPartyExecutingTrader, &xetraTESApproveBroadcastPacket::resetRootPartyExecutingTrader> (d, RootPartyExecutingTrader, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setFreeText1, &xetraTESApproveBroadcastPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setFreeText2, &xetraTESApproveBroadcastPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setFreeText4, &xetraTESApproveBroadcastPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraTESApproveBroadcastPacket, &xetraTESApproveBroadcastPacket::setPad2, &xetraTESApproveBroadcastPacket::resetPad2> (d, Pad2, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESApproveBroadcast");
}

void
xetraCodec::putTESBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<int64_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setSecurityID, &xetraTESBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setLastPx, &xetraTESBroadcastPacket::resetLastPx> (d, LastPx, packet);
    xetra::getInteger<uint64_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTransactTime, &xetraTESBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<uint64_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTransBkdTime, &xetraTESBroadcastPacket::resetTransBkdTime> (d, TransBkdTime, packet);
    xetra::getDouble<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setSettlCurrFxRate, &xetraTESBroadcastPacket::resetSettlCurrFxRate> (d, SettlCurrFxRate, packet);
    xetra::getInteger<int32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setMarketSegmentID, &xetraTESBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setPackageID, &xetraTESBroadcastPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<uint32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTESExecID, &xetraTESBroadcastPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<int32_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setSettlDate, &xetraTESBroadcastPacket::resetSettlDate> (d, SettlDate, packet);
    xetra::getInteger<int16_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTrdType, &xetraTESBroadcastPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTradeReportType, &xetraTESBroadcastPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setNoSideAllocs, &xetraTESBroadcastPacket::resetNoSideAllocs> (d, NoSideAllocs, packet);
    xetra::getString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setMessageEventSource, &xetraTESBroadcastPacket::resetMessageEventSource> (d, MessageEventSource, packet);
    xetra::getString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTradeReportText, &xetraTESBroadcastPacket::resetTradeReportText> (d, TradeReportText, packet);
    xetra::getString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setTradeReportID, &xetraTESBroadcastPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setRootPartyExecutingFirm, &xetraTESBroadcastPacket::resetRootPartyExecutingFirm> (d, RootPartyExecutingFirm, packet);
    xetra::getString<xetraTESBroadcastPacket, &xetraTESBroadcastPacket::setRootPartyExecutingTrader, &xetraTESBroadcastPacket::resetRootPartyExecutingTrader> (d, RootPartyExecutingTrader, packet);
    const cdrArray* vSideAllocGrpBC;
    bool bSideAllocGrpBC = d.getArray (SideAllocGrpBC, &vSideAllocGrpBC);
    for (size_t i = 0; bSideAllocGrpBC && i < vSideAllocGrpBC->size (); i++)
    {
        xetraSideAllocGrpBCCompPacket group;
        putSideAllocGrpBCComp ((*vSideAllocGrpBC)[i], group);
        packet.mSideAllocGrpBC.push_back (group);
    }
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESBroadcast");
}

void
xetraCodec::putTESDeleteBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESDeleteBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<uint64_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setTransactTime, &xetraTESDeleteBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<int32_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setMarketSegmentID, &xetraTESDeleteBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setPackageID, &xetraTESDeleteBroadcastPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<uint32_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setTESExecID, &xetraTESDeleteBroadcastPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<int16_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setTrdType, &xetraTESDeleteBroadcastPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setDeleteReason, &xetraTESDeleteBroadcastPacket::resetDeleteReason> (d, DeleteReason, packet);
    xetra::getInteger<int8_t, xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setTradeReportType, &xetraTESDeleteBroadcastPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getString<xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setMessageEventSource, &xetraTESDeleteBroadcastPacket::resetMessageEventSource> (d, MessageEventSource, packet);
    xetra::getString<xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setTradeReportID, &xetraTESDeleteBroadcastPacket::resetTradeReportID> (d, TradeReportID, packet);
    xetra::getString<xetraTESDeleteBroadcastPacket, &xetraTESDeleteBroadcastPacket::setPad3, &xetraTESDeleteBroadcastPacket::resetPad3> (d, Pad3, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESDeleteBroadcast");
}

void
xetraCodec::putTESExecutionBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESExecutionBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<uint64_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setTransactTime, &xetraTESExecutionBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<int32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setMarketSegmentID, &xetraTESExecutionBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setPackageID, &xetraTESExecutionBroadcastPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<uint32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setTESExecID, &xetraTESExecutionBroadcastPacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getInteger<uint32_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setAllocID, &xetraTESExecutionBroadcastPacket::resetAllocID> (d, AllocID, packet);
    xetra::getInteger<int16_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setTrdType, &xetraTESExecutionBroadcastPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int8_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setTradeReportType, &xetraTESExecutionBroadcastPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setSide, &xetraTESExecutionBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setMessageEventSource, &xetraTESExecutionBroadcastPacket::resetMessageEventSource> (d, MessageEventSource, packet);
    xetra::getString<xetraTESExecutionBroadcastPacket, &xetraTESExecutionBroadcastPacket::setPad3, &xetraTESExecutionBroadcastPacket::resetPad3> (d, Pad3, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESExecutionBroadcast");
}

void
xetraCodec::putTESResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    xetra::getInteger<uint32_t, xetraTESResponsePacket, &xetraTESResponsePacket::setTESExecID, &xetraTESResponsePacket::resetTESExecID> (d, TESExecID, packet);
    xetra::getString<xetraTESResponsePacket, &xetraTESResponsePacket::setTradeReportID, &xetraTESResponsePacket::resetTradeReportID> (d, TradeReportID, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESResponse");
}

void
xetraCodec::putTESTradeBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESTradeBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<int64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSecurityID, &xetraTESTradeBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setLastPx, &xetraTESTradeBroadcastPacket::resetLastPx> (d, LastPx, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setLastQty, &xetraTESTradeBroadcastPacket::resetLastQty> (d, LastQty, packet);
    xetra::getInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTransactTime, &xetraTESTradeBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSettlCurrAmt, &xetraTESTradeBroadcastPacket::resetSettlCurrAmt> (d, SettlCurrAmt, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSideGrossTradeAmt, &xetraTESTradeBroadcastPacket::resetSideGrossTradeAmt> (d, SideGrossTradeAmt, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSettlCurrFxRate, &xetraTESTradeBroadcastPacket::resetSettlCurrFxRate> (d, SettlCurrFxRate, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setAccruedInteresAmt, &xetraTESTradeBroadcastPacket::resetAccruedInteresAmt> (d, AccruedInteresAmt, packet);
    xetra::getDouble<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setCouponRate, &xetraTESTradeBroadcastPacket::resetCouponRate> (d, CouponRate, packet);
    xetra::getInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDClientID, &xetraTESTradeBroadcastPacket::resetRootPartyIDClientID> (d, RootPartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setExecutingTrader, &xetraTESTradeBroadcastPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<uint64_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDInvestmentDecisionMaker, &xetraTESTradeBroadcastPacket::resetRootPartyIDInvestmentDecisionMaker> (d, RootPartyIDInvestmentDecisionMaker, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setPackageID, &xetraTESTradeBroadcastPacket::resetPackageID> (d, PackageID, packet);
    xetra::getInteger<int32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setMarketSegmentID, &xetraTESTradeBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTradeID, &xetraTESTradeBroadcastPacket::resetTradeID> (d, TradeID, packet);
    xetra::getInteger<int32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTradeDate, &xetraTESTradeBroadcastPacket::resetTradeDate> (d, TradeDate, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSideTradeID, &xetraTESTradeBroadcastPacket::resetSideTradeID> (d, SideTradeID, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDSessionID, &xetraTESTradeBroadcastPacket::resetRootPartyIDSessionID> (d, RootPartyIDSessionID, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDSettlementUnit, &xetraTESTradeBroadcastPacket::resetRootPartyIDSettlementUnit> (d, RootPartyIDSettlementUnit, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDContraUnit, &xetraTESTradeBroadcastPacket::resetRootPartyIDContraUnit> (d, RootPartyIDContraUnit, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDContraSettlementUnit, &xetraTESTradeBroadcastPacket::resetRootPartyIDContraSettlementUnit> (d, RootPartyIDContraSettlementUnit, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setOrigTradeID, &xetraTESTradeBroadcastPacket::resetOrigTradeID> (d, OrigTradeID, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDExecutingUnit, &xetraTESTradeBroadcastPacket::resetRootPartyIDExecutingUnit> (d, RootPartyIDExecutingUnit, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDExecutingTrader, &xetraTESTradeBroadcastPacket::resetRootPartyIDExecutingTrader> (d, RootPartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDClearingUnit, &xetraTESTradeBroadcastPacket::resetRootPartyIDClearingUnit> (d, RootPartyIDClearingUnit, packet);
    xetra::getInteger<int32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSettlDate, &xetraTESTradeBroadcastPacket::resetSettlDate> (d, SettlDate, packet);
    xetra::getInteger<uint32_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setNumDaysInterest, &xetraTESTradeBroadcastPacket::resetNumDaysInterest> (d, NumDaysInterest, packet);
    xetra::getInteger<int16_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTrdType, &xetraTESTradeBroadcastPacket::resetTrdType> (d, TrdType, packet);
    xetra::getInteger<int16_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setLastMkt, &xetraTESTradeBroadcastPacket::resetLastMkt> (d, LastMkt, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSide, &xetraTESTradeBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTradingCapacity, &xetraTESTradeBroadcastPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTradeReportType, &xetraTESTradeBroadcastPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTransferReason, &xetraTESTradeBroadcastPacket::resetTransferReason> (d, TransferReason, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setTradePublishIndicator, &xetraTESTradeBroadcastPacket::resetTradePublishIndicator> (d, TradePublishIndicator, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setLastCouponDeviationIndicator, &xetraTESTradeBroadcastPacket::resetLastCouponDeviationIndicator> (d, LastCouponDeviationIndicator, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRefinancingEligibilityIndicator, &xetraTESTradeBroadcastPacket::resetRefinancingEligibilityIndicator> (d, RefinancingEligibilityIndicator, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setOrderAttributeLiquidityProvision, &xetraTESTradeBroadcastPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setExecutingTraderQualifier, &xetraTESTradeBroadcastPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getInteger<int8_t, xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyIDInvestmentDecisionMakerQualifier, &xetraTESTradeBroadcastPacket::resetRootPartyIDInvestmentDecisionMakerQualifier> (d, RootPartyIDInvestmentDecisionMakerQualifier, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setAccount, &xetraTESTradeBroadcastPacket::resetAccount> (d, Account, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setFreeText1, &xetraTESTradeBroadcastPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setFreeText2, &xetraTESTradeBroadcastPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setFreeText4, &xetraTESTradeBroadcastPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setSettlCurrency, &xetraTESTradeBroadcastPacket::resetSettlCurrency> (d, SettlCurrency, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyExecutingFirm, &xetraTESTradeBroadcastPacket::resetRootPartyExecutingFirm> (d, RootPartyExecutingFirm, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyExecutingTrader, &xetraTESTradeBroadcastPacket::resetRootPartyExecutingTrader> (d, RootPartyExecutingTrader, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyClearingFirm, &xetraTESTradeBroadcastPacket::resetRootPartyClearingFirm> (d, RootPartyClearingFirm, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyClearingOrganization, &xetraTESTradeBroadcastPacket::resetRootPartyClearingOrganization> (d, RootPartyClearingOrganization, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyExecutingFirmKVNumber, &xetraTESTradeBroadcastPacket::resetRootPartyExecutingFirmKVNumber> (d, RootPartyExecutingFirmKVNumber, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartySettlementAccount, &xetraTESTradeBroadcastPacket::resetRootPartySettlementAccount> (d, RootPartySettlementAccount, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartySettlementLocation, &xetraTESTradeBroadcastPacket::resetRootPartySettlementLocation> (d, RootPartySettlementLocation, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartySettlementFirm, &xetraTESTradeBroadcastPacket::resetRootPartySettlementFirm> (d, RootPartySettlementFirm, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyContraFirm, &xetraTESTradeBroadcastPacket::resetRootPartyContraFirm> (d, RootPartyContraFirm, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyContraSettlementFirm, &xetraTESTradeBroadcastPacket::resetRootPartyContraSettlementFirm> (d, RootPartyContraSettlementFirm, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyContraFirmKVNumber, &xetraTESTradeBroadcastPacket::resetRootPartyContraFirmKVNumber> (d, RootPartyContraFirmKVNumber, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyContraSettlementAccount, &xetraTESTradeBroadcastPacket::resetRootPartyContraSettlementAccount> (d, RootPartyContraSettlementAccount, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRootPartyContraSettlementLocation, &xetraTESTradeBroadcastPacket::resetRootPartyContraSettlementLocation> (d, RootPartyContraSettlementLocation, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setRegulatoryTradeID, &xetraTESTradeBroadcastPacket::resetRegulatoryTradeID> (d, RegulatoryTradeID, packet);
    xetra::getString<xetraTESTradeBroadcastPacket, &xetraTESTradeBroadcastPacket::setPad6, &xetraTESTradeBroadcastPacket::resetPad6> (d, Pad6, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESTradeBroadcast");
}

void
xetraCodec::putTESTradingSessionStatusBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTESTradingSessionStatusBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<int32_t, xetraTESTradingSessionStatusBroadcastPacket, &xetraTESTradingSessionStatusBroadcastPacket::setTradeDate, &xetraTESTradingSessionStatusBroadcastPacket::resetTradeDate> (d, TradeDate, packet);
    xetra::getInteger<int8_t, xetraTESTradingSessionStatusBroadcastPacket, &xetraTESTradingSessionStatusBroadcastPacket::setTradSesEvent, &xetraTESTradingSessionStatusBroadcastPacket::resetTradSesEvent> (d, TradSesEvent, packet);
    xetra::getString<xetraTESTradingSessionStatusBroadcastPacket, &xetraTESTradingSessionStatusBroadcastPacket::setPad3, &xetraTESTradingSessionStatusBroadcastPacket::resetPad3> (d, Pad3, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TESTradingSessionStatusBroadcast");
}

void
xetraCodec::putTMTradingSessionStatusBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTMTradingSessionStatusBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<int8_t, xetraTMTradingSessionStatusBroadcastPacket, &xetraTMTradingSessionStatusBroadcastPacket::setTradSesEvent, &xetraTMTradingSessionStatusBroadcastPacket::resetTradSesEvent> (d, TradSesEvent, packet);
    xetra::getString<xetraTMTradingSessionStatusBroadcastPacket, &xetraTMTradingSessionStatusBroadcastPacket::setPad7, &xetraTMTradingSessionStatusBroadcastPacket::resetPad7> (d, Pad7, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TMTradingSessionStatusBroadcast");
}

void
xetraCodec::putThrottleUpdateNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraThrottleUpdateNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putNotifHeaderComp (d, packet.mNotifHeader);
    xetra::getInteger<int64_t, xetraThrottleUpdateNotificationPacket, &xetraThrottleUpdateNotificationPacket::setThrottleTimeInterval, &xetraThrottleUpdateNotificationPacket::resetThrottleTimeInterval> (d, ThrottleTimeInterval, packet);
    xetra::getInteger<uint32_t, xetraThrottleUpdateNotificationPacket, &xetraThrottleUpdateNotificationPacket::setThrottleNoMsgs, &xetraThrottleUpdateNotificationPacket::resetThrottleNoMsgs> (d, ThrottleNoMsgs, packet);
    xetra::getInteger<uint32_t, xetraThrottleUpdateNotificationPacket, &xetraThrottleUpdateNotificationPacket::setThrottleDisconnectLimit, &xetraThrottleUpdateNotificationPacket::resetThrottleDisconnectLimit> (d, ThrottleDisconnectLimit, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize ThrottleUpdateNotification");
}

void
xetraCodec::putTradeBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTradeBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderComp (d, packet.mRBCHeader);
    xetra::getInteger<int64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSecurityID, &xetraTradeBroadcastPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setPrice, &xetraTradeBroadcastPacket::resetPrice> (d, Price, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setLastPx, &xetraTradeBroadcastPacket::resetLastPx> (d, LastPx, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setLastQty, &xetraTradeBroadcastPacket::resetLastQty> (d, LastQty, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSettlCurrAmt, &xetraTradeBroadcastPacket::resetSettlCurrAmt> (d, SettlCurrAmt, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSettlCurrFxRate, &xetraTradeBroadcastPacket::resetSettlCurrFxRate> (d, SettlCurrFxRate, packet);
    xetra::getInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTransactTime, &xetraTradeBroadcastPacket::resetTransactTime> (d, TransactTime, packet);
    xetra::getInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setOrderID, &xetraTradeBroadcastPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setClOrdID, &xetraTradeBroadcastPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setLeavesQty, &xetraTradeBroadcastPacket::resetLeavesQty> (d, LeavesQty, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setCumQty, &xetraTradeBroadcastPacket::resetCumQty> (d, CumQty, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSideGrossTradeAmt, &xetraTradeBroadcastPacket::resetSideGrossTradeAmt> (d, SideGrossTradeAmt, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setAccruedInteresAmt, &xetraTradeBroadcastPacket::resetAccruedInteresAmt> (d, AccruedInteresAmt, packet);
    xetra::getDouble<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setCouponRate, &xetraTradeBroadcastPacket::resetCouponRate> (d, CouponRate, packet);
    xetra::getInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDClientID, &xetraTradeBroadcastPacket::resetRootPartyIDClientID> (d, RootPartyIDClientID, packet);
    xetra::getInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setExecutingTrader, &xetraTradeBroadcastPacket::resetExecutingTrader> (d, ExecutingTrader, packet);
    xetra::getInteger<uint64_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDInvestmentDecisionMaker, &xetraTradeBroadcastPacket::resetRootPartyIDInvestmentDecisionMaker> (d, RootPartyIDInvestmentDecisionMaker, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTradeID, &xetraTradeBroadcastPacket::resetTradeID> (d, TradeID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setOrigTradeID, &xetraTradeBroadcastPacket::resetOrigTradeID> (d, OrigTradeID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDExecutingUnit, &xetraTradeBroadcastPacket::resetRootPartyIDExecutingUnit> (d, RootPartyIDExecutingUnit, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDSessionID, &xetraTradeBroadcastPacket::resetRootPartyIDSessionID> (d, RootPartyIDSessionID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDExecutingTrader, &xetraTradeBroadcastPacket::resetRootPartyIDExecutingTrader> (d, RootPartyIDExecutingTrader, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDSettlementUnit, &xetraTradeBroadcastPacket::resetRootPartyIDSettlementUnit> (d, RootPartyIDSettlementUnit, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDClearingUnit, &xetraTradeBroadcastPacket::resetRootPartyIDClearingUnit> (d, RootPartyIDClearingUnit, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDContraUnit, &xetraTradeBroadcastPacket::resetRootPartyIDContraUnit> (d, RootPartyIDContraUnit, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDContraSettlementUnit, &xetraTradeBroadcastPacket::resetRootPartyIDContraSettlementUnit> (d, RootPartyIDContraSettlementUnit, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setOrderIDSfx, &xetraTradeBroadcastPacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setMarketSegmentID, &xetraTradeBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSideTradeID, &xetraTradeBroadcastPacket::resetSideTradeID> (d, SideTradeID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSideTradeReportID, &xetraTradeBroadcastPacket::resetSideTradeReportID> (d, SideTradeReportID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTradeNumber, &xetraTradeBroadcastPacket::resetTradeNumber> (d, TradeNumber, packet);
    xetra::getInteger<int32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setMatchDate, &xetraTradeBroadcastPacket::resetMatchDate> (d, MatchDate, packet);
    xetra::getInteger<int32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSettlDate, &xetraTradeBroadcastPacket::resetSettlDate> (d, SettlDate, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTrdMatchID, &xetraTradeBroadcastPacket::resetTrdMatchID> (d, TrdMatchID, packet);
    xetra::getInteger<uint32_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setNumDaysInterest, &xetraTradeBroadcastPacket::resetNumDaysInterest> (d, NumDaysInterest, packet);
    xetra::getInteger<int16_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setLastMkt, &xetraTradeBroadcastPacket::resetLastMkt> (d, LastMkt, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTradeReportType, &xetraTradeBroadcastPacket::resetTradeReportType> (d, TradeReportType, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTransferReason, &xetraTradeBroadcastPacket::resetTransferReason> (d, TransferReason, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setMatchType, &xetraTradeBroadcastPacket::resetMatchType> (d, MatchType, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setMatchSubType, &xetraTradeBroadcastPacket::resetMatchSubType> (d, MatchSubType, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSide, &xetraTradeBroadcastPacket::resetSide> (d, Side, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSideLiquidityInd, &xetraTradeBroadcastPacket::resetSideLiquidityInd> (d, SideLiquidityInd, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setDeliveryType, &xetraTradeBroadcastPacket::resetDeliveryType> (d, DeliveryType, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setTradingCapacity, &xetraTradeBroadcastPacket::resetTradingCapacity> (d, TradingCapacity, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setLastCouponDeviationIndicator, &xetraTradeBroadcastPacket::resetLastCouponDeviationIndicator> (d, LastCouponDeviationIndicator, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRefinancingEligibilityIndicator, &xetraTradeBroadcastPacket::resetRefinancingEligibilityIndicator> (d, RefinancingEligibilityIndicator, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setOrderAttributeLiquidityProvision, &xetraTradeBroadcastPacket::resetOrderAttributeLiquidityProvision> (d, OrderAttributeLiquidityProvision, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setExecutingTraderQualifier, &xetraTradeBroadcastPacket::resetExecutingTraderQualifier> (d, ExecutingTraderQualifier, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyIDInvestmentDecisionMakerQualifier, &xetraTradeBroadcastPacket::resetRootPartyIDInvestmentDecisionMakerQualifier> (d, RootPartyIDInvestmentDecisionMakerQualifier, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setAccount, &xetraTradeBroadcastPacket::resetAccount> (d, Account, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setSettlCurrency, &xetraTradeBroadcastPacket::resetSettlCurrency> (d, SettlCurrency, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setCurrency, &xetraTradeBroadcastPacket::resetCurrency> (d, Currency, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setFreeText1, &xetraTradeBroadcastPacket::resetFreeText1> (d, FreeText1, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setFreeText2, &xetraTradeBroadcastPacket::resetFreeText2> (d, FreeText2, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setFreeText4, &xetraTradeBroadcastPacket::resetFreeText4> (d, FreeText4, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setOrderCategory, &xetraTradeBroadcastPacket::resetOrderCategory> (d, OrderCategory, packet);
    xetra::getInteger<int8_t, xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setOrdType, &xetraTradeBroadcastPacket::resetOrdType> (d, OrdType, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyExecutingFirm, &xetraTradeBroadcastPacket::resetRootPartyExecutingFirm> (d, RootPartyExecutingFirm, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyExecutingTrader, &xetraTradeBroadcastPacket::resetRootPartyExecutingTrader> (d, RootPartyExecutingTrader, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyClearingFirm, &xetraTradeBroadcastPacket::resetRootPartyClearingFirm> (d, RootPartyClearingFirm, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyExecutingFirmKVNumber, &xetraTradeBroadcastPacket::resetRootPartyExecutingFirmKVNumber> (d, RootPartyExecutingFirmKVNumber, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartySettlementAccount, &xetraTradeBroadcastPacket::resetRootPartySettlementAccount> (d, RootPartySettlementAccount, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartySettlementLocation, &xetraTradeBroadcastPacket::resetRootPartySettlementLocation> (d, RootPartySettlementLocation, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartySettlementFirm, &xetraTradeBroadcastPacket::resetRootPartySettlementFirm> (d, RootPartySettlementFirm, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyContraFirm, &xetraTradeBroadcastPacket::resetRootPartyContraFirm> (d, RootPartyContraFirm, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyContraSettlementFirm, &xetraTradeBroadcastPacket::resetRootPartyContraSettlementFirm> (d, RootPartyContraSettlementFirm, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyContraFirmKVNumber, &xetraTradeBroadcastPacket::resetRootPartyContraFirmKVNumber> (d, RootPartyContraFirmKVNumber, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyContraSettlementAccount, &xetraTradeBroadcastPacket::resetRootPartyContraSettlementAccount> (d, RootPartyContraSettlementAccount, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRootPartyContraSettlementLocation, &xetraTradeBroadcastPacket::resetRootPartyContraSettlementLocation> (d, RootPartyContraSettlementLocation, packet);
    xetra::getString<xetraTradeBroadcastPacket, &xetraTradeBroadcastPacket::setRegulatoryTradeID, &xetraTradeBroadcastPacket::resetRegulatoryTradeID> (d, RegulatoryTradeID, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TradeBroadcast");
}

void
xetraCodec::putTradingSessionStatusBroadcast (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTradingSessionStatusBroadcastPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<int32_t, xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::setMarketSegmentID, &xetraTradingSessionStatusBroadcastPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int32_t, xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::setTradeDate, &xetraTradingSessionStatusBroadcastPacket::resetTradeDate> (d, TradeDate, packet);
    xetra::getInteger<int8_t, xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::setTradSesEvent, &xetraTradingSessionStatusBroadcastPacket::resetTradSesEvent> (d, TradSesEvent, packet);
    xetra::getString<xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::setRefApplLastMsgID, &xetraTradingSessionStatusBroadcastPacket::resetRefApplLastMsgID> (d, RefApplLastMsgID, packet);
    xetra::getString<xetraTradingSessionStatusBroadcastPacket, &xetraTradingSessionStatusBroadcastPacket::setPad7, &xetraTradingSessionStatusBroadcastPacket::resetPad7> (d, Pad7, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TradingSessionStatusBroadcast");
}

void
xetraCodec::putTrailingStopUpdateNotification (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraTrailingStopUpdateNotificationPacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putRBCHeaderMEComp (d, packet.mRBCHeaderME);
    xetra::getInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setOrderID, &xetraTrailingStopUpdateNotificationPacket::resetOrderID> (d, OrderID, packet);
    xetra::getInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setClOrdID, &xetraTrailingStopUpdateNotificationPacket::resetClOrdID> (d, ClOrdID, packet);
    xetra::getInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setOrigClOrdID, &xetraTrailingStopUpdateNotificationPacket::resetOrigClOrdID> (d, OrigClOrdID, packet);
    xetra::getInteger<int64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setSecurityID, &xetraTrailingStopUpdateNotificationPacket::resetSecurityID> (d, SecurityID, packet);
    xetra::getInteger<uint64_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setExecID, &xetraTrailingStopUpdateNotificationPacket::resetExecID> (d, ExecID, packet);
    xetra::getDouble<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setStopPx, &xetraTrailingStopUpdateNotificationPacket::resetStopPx> (d, StopPx, packet);
    xetra::getDouble<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setOrderQty, &xetraTrailingStopUpdateNotificationPacket::resetOrderQty> (d, OrderQty, packet);
    xetra::getInteger<uint32_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setOrderIDSfx, &xetraTrailingStopUpdateNotificationPacket::resetOrderIDSfx> (d, OrderIDSfx, packet);
    xetra::getInteger<int32_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setMarketSegmentID, &xetraTrailingStopUpdateNotificationPacket::resetMarketSegmentID> (d, MarketSegmentID, packet);
    xetra::getInteger<int16_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setExecRestatementReason, &xetraTrailingStopUpdateNotificationPacket::resetExecRestatementReason> (d, ExecRestatementReason, packet);
    xetra::getString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setOrdStatus, &xetraTrailingStopUpdateNotificationPacket::resetOrdStatus> (d, OrdStatus, packet);
    xetra::getString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setExecType, &xetraTrailingStopUpdateNotificationPacket::resetExecType> (d, ExecType, packet);
    xetra::getInteger<int8_t, xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setSide, &xetraTrailingStopUpdateNotificationPacket::resetSide> (d, Side, packet);
    xetra::getString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setFIXClOrdID, &xetraTrailingStopUpdateNotificationPacket::resetFIXClOrdID> (d, FIXClOrdID, packet);
    xetra::getString<xetraTrailingStopUpdateNotificationPacket, &xetraTrailingStopUpdateNotificationPacket::setPad7, &xetraTrailingStopUpdateNotificationPacket::resetPad7> (d, Pad7, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize TrailingStopUpdateNotification");
}

void
xetraCodec::putUnsubscribeRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraUnsubscribeRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<uint32_t, xetraUnsubscribeRequestPacket, &xetraUnsubscribeRequestPacket::setRefApplSubID, &xetraUnsubscribeRequestPacket::resetRefApplSubID> (d, RefApplSubID, packet);
    xetra::getString<xetraUnsubscribeRequestPacket, &xetraUnsubscribeRequestPacket::setPad4, &xetraUnsubscribeRequestPacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize UnsubscribeRequest");
}

void
xetraCodec::putUnsubscribeResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraUnsubscribeResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize UnsubscribeResponse");
}

void
xetraCodec::putUserLoginRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraUserLoginRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int32_t, xetraUserLoginRequestPacket, &xetraUserLoginRequestPacket::setUsername, &xetraUserLoginRequestPacket::resetUsername> (d, Username, packet);
    xetra::getString<xetraUserLoginRequestPacket, &xetraUserLoginRequestPacket::setPassword, &xetraUserLoginRequestPacket::resetPassword> (d, Password, packet);
    xetra::getString<xetraUserLoginRequestPacket, &xetraUserLoginRequestPacket::setPad4, &xetraUserLoginRequestPacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize UserLoginRequest");
}

void
xetraCodec::putUserLoginResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraUserLoginResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize UserLoginResponse");
}

void
xetraCodec::putUserLogoutRequest (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraUserLogoutRequestPacket packet;
    putMessageHeaderInComp (d, packet.mMessageHeaderIn);
    putRequestHeaderComp (d, packet.mRequestHeader);
    xetra::getInteger<int32_t, xetraUserLogoutRequestPacket, &xetraUserLogoutRequestPacket::setUsername, &xetraUserLogoutRequestPacket::resetUsername> (d, Username, packet);
    xetra::getString<xetraUserLogoutRequestPacket, &xetraUserLogoutRequestPacket::setPad4, &xetraUserLogoutRequestPacket::resetPad4> (d, Pad4, packet);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize UserLogoutRequest");
}

void
xetraCodec::putUserLogoutResponse (const cdr &d, void *buf, size_t len, size_t& used)
{
    xetraUserLogoutResponsePacket packet;
    putMessageHeaderOutComp (d, packet.mMessageHeaderOut);
    putResponseHeaderComp (d, packet.mResponseHeader);
    codecState state = packet.serialize (buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        throw xetra::codecError(state, "cannot serialize UserLogoutResponse");
}


codecState
xetraCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    xetraHeaderPacket* hdr = (xetraHeaderPacket *) buf;
    if (len < sizeof (*hdr) || len < (size_t) hdr->mBodyLen)
        return GW_CODEC_SHORT;

    codecState state = GW_CODEC_SUCCESS;
    try
    {
        switch (hdr->mTemplateID)
        {
        case 10603:
            getApproveTESTradeRequest (d, buf, len, used);
            break;
        case 10414:
            getBESTQuoteExecutionReport (d, buf, len, used);
            break;
        case 10413:
            getBESTQuoteResponse (d, buf, len, used);
            break;
        case 10032:
            getBroadcastErrorNotification (d, buf, len, used);
            break;
        case 10118:
            getCrossRequest (d, buf, len, used);
            break;
        case 10119:
            getCrossRequestResponse (d, buf, len, used);
            break;
        case 10122:
            getDeleteAllOrderBroadcast (d, buf, len, used);
            break;
        case 10124:
            getDeleteAllOrderNRResponse (d, buf, len, used);
            break;
        case 10308:
            getDeleteAllOrderQuoteEventBroadcast (d, buf, len, used);
            break;
        case 10120:
            getDeleteAllOrderRequest (d, buf, len, used);
            break;
        case 10121:
            getDeleteAllOrderResponse (d, buf, len, used);
            break;
        case 10410:
            getDeleteAllQuoteBroadcast (d, buf, len, used);
            break;
        case 10408:
            getDeleteAllQuoteRequest (d, buf, len, used);
            break;
        case 10409:
            getDeleteAllQuoteResponse (d, buf, len, used);
            break;
        case 10112:
            getDeleteOrderBroadcast (d, buf, len, used);
            break;
        case 10111:
            getDeleteOrderNRResponse (d, buf, len, used);
            break;
        case 10110:
            getDeleteOrderResponse (d, buf, len, used);
            break;
        case 10109:
            getDeleteOrderSingleRequest (d, buf, len, used);
            break;
        case 10602:
            getDeleteTESTradeRequest (d, buf, len, used);
            break;
        case 10412:
            getEnterBESTQuoteRequest (d, buf, len, used);
            break;
        case 10600:
            getEnterTESTradeRequest (d, buf, len, used);
            break;
        case 10128:
            getExtendedDeletionReport (d, buf, len, used);
            break;
        case 10012:
            getForcedLogoutNotification (d, buf, len, used);
            break;
        case 10043:
            getForcedUserLogoutNotification (d, buf, len, used);
            break;
        case 10020:
            getGatewayRequest (d, buf, len, used);
            break;
        case 10011:
            getHeartbeat (d, buf, len, used);
            break;
        case 10023:
            getHeartbeatNotification (d, buf, len, used);
            break;
        case 10040:
            getInquireEnrichmentRuleIDListRequest (d, buf, len, used);
            break;
        case 10041:
            getInquireEnrichmentRuleIDListResponse (d, buf, len, used);
            break;
        case 10035:
            getInquireSessionListRequest (d, buf, len, used);
            break;
        case 10036:
            getInquireSessionListResponse (d, buf, len, used);
            break;
        case 10038:
            getInquireUserRequest (d, buf, len, used);
            break;
        case 10039:
            getInquireUserResponse (d, buf, len, used);
            break;
        case 10316:
            getIssuerNotification (d, buf, len, used);
            break;
        case 10314:
            getIssuerSecurityStateChangeRequest (d, buf, len, used);
            break;
        case 10315:
            getIssuerSecurityStateChangeResponse (d, buf, len, used);
            break;
        case 10037:
            getLegalNotificationBroadcast (d, buf, len, used);
            break;
        case 10000:
            getLogonRequest (d, buf, len, used);
            break;
        case 10001:
            getLogonResponse (d, buf, len, used);
            break;
        case 10002:
            getLogoutRequest (d, buf, len, used);
            break;
        case 10003:
            getLogoutResponse (d, buf, len, used);
            break;
        case 10405:
            getMassQuoteRequest (d, buf, len, used);
            break;
        case 10406:
            getMassQuoteResponse (d, buf, len, used);
            break;
        case 10108:
            getModifyOrderNRResponse (d, buf, len, used);
            break;
        case 10107:
            getModifyOrderResponse (d, buf, len, used);
            break;
        case 10106:
            getModifyOrderSingleRequest (d, buf, len, used);
            break;
        case 10126:
            getModifyOrderSingleShortRequest (d, buf, len, used);
            break;
        case 10601:
            getModifyTESTradeRequest (d, buf, len, used);
            break;
        case 10102:
            getNewOrderNRResponse (d, buf, len, used);
            break;
        case 10101:
            getNewOrderResponse (d, buf, len, used);
            break;
        case 10100:
            getNewOrderSingleRequest (d, buf, len, used);
            break;
        case 10125:
            getNewOrderSingleShortRequest (d, buf, len, used);
            break;
        case 10031:
            getNewsBroadcast (d, buf, len, used);
            break;
        case 10104:
            getOrderExecNotification (d, buf, len, used);
            break;
        case 10117:
            getOrderExecReportBroadcast (d, buf, len, used);
            break;
        case 10103:
            getOrderExecResponse (d, buf, len, used);
            break;
        case 10042:
            getPartyActionReport (d, buf, len, used);
            break;
        case 10034:
            getPartyEntitlementsUpdateReport (d, buf, len, used);
            break;
        case 10411:
            getQuoteActivationNotification (d, buf, len, used);
            break;
        case 10403:
            getQuoteActivationRequest (d, buf, len, used);
            break;
        case 10404:
            getQuoteActivationResponse (d, buf, len, used);
            break;
        case 10407:
            getQuoteExecutionReport (d, buf, len, used);
            break;
        case 10415:
            getRFQBroadcast (d, buf, len, used);
            break;
        case 10401:
            getRFQRequest (d, buf, len, used);
            break;
        case 10402:
            getRFQResponse (d, buf, len, used);
            break;
        case 10010:
            getReject (d, buf, len, used);
            break;
        case 10026:
            getRetransmitMEMessageRequest (d, buf, len, used);
            break;
        case 10027:
            getRetransmitMEMessageResponse (d, buf, len, used);
            break;
        case 10008:
            getRetransmitRequest (d, buf, len, used);
            break;
        case 10009:
            getRetransmitResponse (d, buf, len, used);
            break;
        case 10030:
            getServiceAvailabilityBroadcast (d, buf, len, used);
            break;
        case 10025:
            getSubscribeRequest (d, buf, len, used);
            break;
        case 10005:
            getSubscribeResponse (d, buf, len, used);
            break;
        case 10607:
            getTESApproveBroadcast (d, buf, len, used);
            break;
        case 10604:
            getTESBroadcast (d, buf, len, used);
            break;
        case 10606:
            getTESDeleteBroadcast (d, buf, len, used);
            break;
        case 10610:
            getTESExecutionBroadcast (d, buf, len, used);
            break;
        case 10611:
            getTESResponse (d, buf, len, used);
            break;
        case 10614:
            getTESTradeBroadcast (d, buf, len, used);
            break;
        case 10615:
            getTESTradingSessionStatusBroadcast (d, buf, len, used);
            break;
        case 10501:
            getTMTradingSessionStatusBroadcast (d, buf, len, used);
            break;
        case 10028:
            getThrottleUpdateNotification (d, buf, len, used);
            break;
        case 10500:
            getTradeBroadcast (d, buf, len, used);
            break;
        case 10307:
            getTradingSessionStatusBroadcast (d, buf, len, used);
            break;
        case 10127:
            getTrailingStopUpdateNotification (d, buf, len, used);
            break;
        case 10006:
            getUnsubscribeRequest (d, buf, len, used);
            break;
        case 10007:
            getUnsubscribeResponse (d, buf, len, used);
            break;
        case 10018:
            getUserLoginRequest (d, buf, len, used);
            break;
        case 10019:
            getUserLoginResponse (d, buf, len, used);
            break;
        case 10029:
            getUserLogoutRequest (d, buf, len, used);
            break;
        case 10024:
            getUserLogoutResponse (d, buf, len, used);
            break;
            default:
                stringstream ss;
                ss << "unknown message type " << hdr->mTemplateID;
                throw xetra::codecError (GW_CODEC_ERROR, ss.str ());
        }
    }
    catch (xetra::codecError &e)
    {
        setLastError (e.mMessage);
        state = e.mState;
    }
    catch (...)
    {
        setLastError ("unknown error while encoding");
        state = GW_CODEC_ERROR;
    }
    return state;
}

codecState
xetraCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    xetraHeaderPacket* hdr = (xetraHeaderPacket *)buf;
    if (len < sizeof (* hdr))
        return GW_CODEC_SHORT;
    if (!d.isType (TemplateID, CDR_INTEGER, 1))
    {
        setLastError ("TemplateID missing or not integer");
        return GW_CODEC_ERROR;
    }

    codecState state = GW_CODEC_SUCCESS;
    try
    {
        uint16_t templateID;
        d.getInteger (TemplateID, templateID);
        switch (templateID)
        {
        case 10603:
            putApproveTESTradeRequest (d, buf, len, used);
            break;
        case 10414:
            putBESTQuoteExecutionReport (d, buf, len, used);
            break;
        case 10413:
            putBESTQuoteResponse (d, buf, len, used);
            break;
        case 10032:
            putBroadcastErrorNotification (d, buf, len, used);
            break;
        case 10118:
            putCrossRequest (d, buf, len, used);
            break;
        case 10119:
            putCrossRequestResponse (d, buf, len, used);
            break;
        case 10122:
            putDeleteAllOrderBroadcast (d, buf, len, used);
            break;
        case 10124:
            putDeleteAllOrderNRResponse (d, buf, len, used);
            break;
        case 10308:
            putDeleteAllOrderQuoteEventBroadcast (d, buf, len, used);
            break;
        case 10120:
            putDeleteAllOrderRequest (d, buf, len, used);
            break;
        case 10121:
            putDeleteAllOrderResponse (d, buf, len, used);
            break;
        case 10410:
            putDeleteAllQuoteBroadcast (d, buf, len, used);
            break;
        case 10408:
            putDeleteAllQuoteRequest (d, buf, len, used);
            break;
        case 10409:
            putDeleteAllQuoteResponse (d, buf, len, used);
            break;
        case 10112:
            putDeleteOrderBroadcast (d, buf, len, used);
            break;
        case 10111:
            putDeleteOrderNRResponse (d, buf, len, used);
            break;
        case 10110:
            putDeleteOrderResponse (d, buf, len, used);
            break;
        case 10109:
            putDeleteOrderSingleRequest (d, buf, len, used);
            break;
        case 10602:
            putDeleteTESTradeRequest (d, buf, len, used);
            break;
        case 10412:
            putEnterBESTQuoteRequest (d, buf, len, used);
            break;
        case 10600:
            putEnterTESTradeRequest (d, buf, len, used);
            break;
        case 10128:
            putExtendedDeletionReport (d, buf, len, used);
            break;
        case 10012:
            putForcedLogoutNotification (d, buf, len, used);
            break;
        case 10043:
            putForcedUserLogoutNotification (d, buf, len, used);
            break;
        case 10020:
            putGatewayRequest (d, buf, len, used);
            break;
        case 10011:
            putHeartbeat (d, buf, len, used);
            break;
        case 10023:
            putHeartbeatNotification (d, buf, len, used);
            break;
        case 10040:
            putInquireEnrichmentRuleIDListRequest (d, buf, len, used);
            break;
        case 10041:
            putInquireEnrichmentRuleIDListResponse (d, buf, len, used);
            break;
        case 10035:
            putInquireSessionListRequest (d, buf, len, used);
            break;
        case 10036:
            putInquireSessionListResponse (d, buf, len, used);
            break;
        case 10038:
            putInquireUserRequest (d, buf, len, used);
            break;
        case 10039:
            putInquireUserResponse (d, buf, len, used);
            break;
        case 10316:
            putIssuerNotification (d, buf, len, used);
            break;
        case 10314:
            putIssuerSecurityStateChangeRequest (d, buf, len, used);
            break;
        case 10315:
            putIssuerSecurityStateChangeResponse (d, buf, len, used);
            break;
        case 10037:
            putLegalNotificationBroadcast (d, buf, len, used);
            break;
        case 10000:
            putLogonRequest (d, buf, len, used);
            break;
        case 10001:
            putLogonResponse (d, buf, len, used);
            break;
        case 10002:
            putLogoutRequest (d, buf, len, used);
            break;
        case 10003:
            putLogoutResponse (d, buf, len, used);
            break;
        case 10405:
            putMassQuoteRequest (d, buf, len, used);
            break;
        case 10406:
            putMassQuoteResponse (d, buf, len, used);
            break;
        case 10108:
            putModifyOrderNRResponse (d, buf, len, used);
            break;
        case 10107:
            putModifyOrderResponse (d, buf, len, used);
            break;
        case 10106:
            putModifyOrderSingleRequest (d, buf, len, used);
            break;
        case 10126:
            putModifyOrderSingleShortRequest (d, buf, len, used);
            break;
        case 10601:
            putModifyTESTradeRequest (d, buf, len, used);
            break;
        case 10102:
            putNewOrderNRResponse (d, buf, len, used);
            break;
        case 10101:
            putNewOrderResponse (d, buf, len, used);
            break;
        case 10100:
            putNewOrderSingleRequest (d, buf, len, used);
            break;
        case 10125:
            putNewOrderSingleShortRequest (d, buf, len, used);
            break;
        case 10031:
            putNewsBroadcast (d, buf, len, used);
            break;
        case 10104:
            putOrderExecNotification (d, buf, len, used);
            break;
        case 10117:
            putOrderExecReportBroadcast (d, buf, len, used);
            break;
        case 10103:
            putOrderExecResponse (d, buf, len, used);
            break;
        case 10042:
            putPartyActionReport (d, buf, len, used);
            break;
        case 10034:
            putPartyEntitlementsUpdateReport (d, buf, len, used);
            break;
        case 10411:
            putQuoteActivationNotification (d, buf, len, used);
            break;
        case 10403:
            putQuoteActivationRequest (d, buf, len, used);
            break;
        case 10404:
            putQuoteActivationResponse (d, buf, len, used);
            break;
        case 10407:
            putQuoteExecutionReport (d, buf, len, used);
            break;
        case 10415:
            putRFQBroadcast (d, buf, len, used);
            break;
        case 10401:
            putRFQRequest (d, buf, len, used);
            break;
        case 10402:
            putRFQResponse (d, buf, len, used);
            break;
        case 10010:
            putReject (d, buf, len, used);
            break;
        case 10026:
            putRetransmitMEMessageRequest (d, buf, len, used);
            break;
        case 10027:
            putRetransmitMEMessageResponse (d, buf, len, used);
            break;
        case 10008:
            putRetransmitRequest (d, buf, len, used);
            break;
        case 10009:
            putRetransmitResponse (d, buf, len, used);
            break;
        case 10030:
            putServiceAvailabilityBroadcast (d, buf, len, used);
            break;
        case 10025:
            putSubscribeRequest (d, buf, len, used);
            break;
        case 10005:
            putSubscribeResponse (d, buf, len, used);
            break;
        case 10607:
            putTESApproveBroadcast (d, buf, len, used);
            break;
        case 10604:
            putTESBroadcast (d, buf, len, used);
            break;
        case 10606:
            putTESDeleteBroadcast (d, buf, len, used);
            break;
        case 10610:
            putTESExecutionBroadcast (d, buf, len, used);
            break;
        case 10611:
            putTESResponse (d, buf, len, used);
            break;
        case 10614:
            putTESTradeBroadcast (d, buf, len, used);
            break;
        case 10615:
            putTESTradingSessionStatusBroadcast (d, buf, len, used);
            break;
        case 10501:
            putTMTradingSessionStatusBroadcast (d, buf, len, used);
            break;
        case 10028:
            putThrottleUpdateNotification (d, buf, len, used);
            break;
        case 10500:
            putTradeBroadcast (d, buf, len, used);
            break;
        case 10307:
            putTradingSessionStatusBroadcast (d, buf, len, used);
            break;
        case 10127:
            putTrailingStopUpdateNotification (d, buf, len, used);
            break;
        case 10006:
            putUnsubscribeRequest (d, buf, len, used);
            break;
        case 10007:
            putUnsubscribeResponse (d, buf, len, used);
            break;
        case 10018:
            putUserLoginRequest (d, buf, len, used);
            break;
        case 10019:
            putUserLoginResponse (d, buf, len, used);
            break;
        case 10029:
            putUserLogoutRequest (d, buf, len, used);
            break;
        case 10024:
            putUserLogoutResponse (d, buf, len, used);
            break;
            default:
                stringstream ss;
                ss << "unknown message type " << templateID;
                throw xetra::codecError (GW_CODEC_ERROR, ss.str ());
        }
    }
    catch (xetra::codecError &e)
    {
        setLastError (e.mMessage);
        state = e.mState;
    }
    catch (...)
    {
        setLastError ("unknown error while encoding");
        state = GW_CODEC_ERROR;
    }

    return state;
}

} // namespace neueda
