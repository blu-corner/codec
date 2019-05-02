/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 12:26:55 02/05/19
 */
#ifndef OPTIQ_CODEC_H
#define OPTIQ_CODEC_H

#include <stdint.h>
#include "cdr.h"
#include "codec.h"

namespace neueda
{

class optiqCodec: public codec
{
    public:
        optiqCodec()
        {
            mMsgTypes.insert(std::make_pair("1", "NewOrder"));
            mMsgTypes.insert(std::make_pair("3", "Ack"));
            mMsgTypes.insert(std::make_pair("4", "Fill"));
            mMsgTypes.insert(std::make_pair("5", "Kill"));
            mMsgTypes.insert(std::make_pair("6", "CancelReplace"));
            mMsgTypes.insert(std::make_pair("7", "Reject"));
            mMsgTypes.insert(std::make_pair("8", "Quotes"));
            mMsgTypes.insert(std::make_pair("9", "QuoteAck"));
            mMsgTypes.insert(std::make_pair("10", "QuoteRequest"));
            mMsgTypes.insert(std::make_pair("12", "CancelRequest"));
            mMsgTypes.insert(std::make_pair("13", "MassCancel"));
            mMsgTypes.insert(std::make_pair("14", "MassCancelAck"));
            mMsgTypes.insert(std::make_pair("15", "OpenOrderRequest"));
            mMsgTypes.insert(std::make_pair("17", "OwnershipRequestAck"));
            mMsgTypes.insert(std::make_pair("18", "OwnershipRequest"));
            mMsgTypes.insert(std::make_pair("19", "TradeBustNotification"));
            mMsgTypes.insert(std::make_pair("20", "CollarBreachConfirmation"));
            mMsgTypes.insert(std::make_pair("28", "PriceInput"));
            mMsgTypes.insert(std::make_pair("32", "LiquidityProviderCommand"));
            mMsgTypes.insert(std::make_pair("33", "AskForQuote"));
            mMsgTypes.insert(std::make_pair("34", "RequestForExecution"));
            mMsgTypes.insert(std::make_pair("35", "RFQNotification"));
            mMsgTypes.insert(std::make_pair("36", "RFQMatchingStatus"));
            mMsgTypes.insert(std::make_pair("37", "RFQLPMatchingStatus"));
            mMsgTypes.insert(std::make_pair("39", "UserNotification"));
            mMsgTypes.insert(std::make_pair("50", "InstrumentSynchronizationList"));
            mMsgTypes.insert(std::make_pair("51", "SynchronizationTime"));
            mMsgTypes.insert(std::make_pair("100", "Logon"));
            mMsgTypes.insert(std::make_pair("101", "LogonAck"));
            mMsgTypes.insert(std::make_pair("102", "LogonReject"));
            mMsgTypes.insert(std::make_pair("103", "Logout"));
            mMsgTypes.insert(std::make_pair("106", "Heartbeat"));
            mMsgTypes.insert(std::make_pair("107", "TestRequest"));
            mMsgTypes.insert(std::make_pair("108", "TechnicalReject"));
            mMsgTypes.insert(std::make_pair("40", "DeclarationEntry"));
            mMsgTypes.insert(std::make_pair("41", "DeclarationEntryAck"));
            mMsgTypes.insert(std::make_pair("42", "DeclarationNotice"));
            mMsgTypes.insert(std::make_pair("43", "DeclarationCancelAndRefusal"));
            mMsgTypes.insert(std::make_pair("44", "FundPriceInput"));
            mMsgTypes.insert(std::make_pair("45", "FundPriceInputAck"));
            mMsgTypes.insert(std::make_pair("46", "DeclarationEntryReject"));
        }

        codecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        codecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "optiq"; }

    private:
        codecState getNewOrder (cdr& d, const void* hdr);
        codecState getAck (cdr& d, const void* hdr);
        codecState getFill (cdr& d, const void* hdr);
        codecState getKill (cdr& d, const void* hdr);
        codecState getCancelReplace (cdr& d, const void* hdr);
        codecState getReject (cdr& d, const void* hdr);
        codecState getQuotes (cdr& d, const void* hdr);
        codecState getQuoteAck (cdr& d, const void* hdr);
        codecState getQuoteRequest (cdr& d, const void* hdr);
        codecState getCancelRequest (cdr& d, const void* hdr);
        codecState getMassCancel (cdr& d, const void* hdr);
        codecState getMassCancelAck (cdr& d, const void* hdr);
        codecState getOpenOrderRequest (cdr& d, const void* hdr);
        codecState getOwnershipRequestAck (cdr& d, const void* hdr);
        codecState getOwnershipRequest (cdr& d, const void* hdr);
        codecState getTradeBustNotification (cdr& d, const void* hdr);
        codecState getCollarBreachConfirmation (cdr& d, const void* hdr);
        codecState getPriceInput (cdr& d, const void* hdr);
        codecState getLiquidityProviderCommand (cdr& d, const void* hdr);
        codecState getAskForQuote (cdr& d, const void* hdr);
        codecState getRequestForExecution (cdr& d, const void* hdr);
        codecState getRFQNotification (cdr& d, const void* hdr);
        codecState getRFQMatchingStatus (cdr& d, const void* hdr);
        codecState getRFQLPMatchingStatus (cdr& d, const void* hdr);
        codecState getUserNotification (cdr& d, const void* hdr);
        codecState getInstrumentSynchronizationList (cdr& d, const void* hdr);
        codecState getSynchronizationTime (cdr& d, const void* hdr);
        codecState getLogon (cdr& d, const void* hdr);
        codecState getLogonAck (cdr& d, const void* hdr);
        codecState getLogonReject (cdr& d, const void* hdr);
        codecState getLogout (cdr& d, const void* hdr);
        codecState getHeartbeat (cdr& d, const void* hdr);
        codecState getTestRequest (cdr& d, const void* hdr);
        codecState getTechnicalReject (cdr& d, const void* hdr);
        codecState getDeclarationEntry (cdr& d, const void* hdr);
        codecState getDeclarationEntryAck (cdr& d, const void* hdr);
        codecState getDeclarationNotice (cdr& d, const void* hdr);
        codecState getDeclarationCancelAndRefusal (cdr& d, const void* hdr);
        codecState getFundPriceInput (cdr& d, const void* hdr);
        codecState getFundPriceInputAck (cdr& d, const void* hdr);
        codecState getDeclarationEntryReject (cdr& d, const void* hdr);

        codecState putNewOrder (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putFill (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putKill (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putCancelReplace (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putReject (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putQuotes (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putQuoteAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putQuoteRequest (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putCancelRequest (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putMassCancel (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putMassCancelAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putOpenOrderRequest (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putOwnershipRequestAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putOwnershipRequest (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putTradeBustNotification (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putCollarBreachConfirmation (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putPriceInput (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putLiquidityProviderCommand (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putAskForQuote (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putRequestForExecution (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putRFQNotification (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putRFQMatchingStatus (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putRFQLPMatchingStatus (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putUserNotification (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putInstrumentSynchronizationList (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putSynchronizationTime (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putLogon (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putLogonAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putLogonReject (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putLogout (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putHeartbeat (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putTestRequest (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putTechnicalReject (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putDeclarationEntry (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putDeclarationEntryAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putDeclarationNotice (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putDeclarationCancelAndRefusal (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putFundPriceInput (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putFundPriceInputAck (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
        codecState putDeclarationEntryReject (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
};

} // namespace neueda

#endif /* OPTIQ_CODEC_H */
