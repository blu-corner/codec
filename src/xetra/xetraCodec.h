/*
 * Copyright 2014-2018 Neueda
 */
#ifndef XETRA_CODEC_H
#define XETRA_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "fields.h"

namespace neueda
{

class xetraCodec: public codec
{
    public:
        xetraCodec()
        {
            mMsgTypes.insert (std::make_pair ("10603", "Approve TES Trade Request"));
            mMsgTypes.insert (std::make_pair ("10414", "BEST Quote Execution Report"));
            mMsgTypes.insert (std::make_pair ("10413", "BEST Quote Response"));
            mMsgTypes.insert (std::make_pair ("10032", "Broadcast Error Notification"));
            mMsgTypes.insert (std::make_pair ("10118", "Cross Request"));
            mMsgTypes.insert (std::make_pair ("10119", "Cross Request Response"));
            mMsgTypes.insert (std::make_pair ("10122", "Delete All Order Broadcast"));
            mMsgTypes.insert (std::make_pair ("10124", "Delete All Order NR Response"));
            mMsgTypes.insert (std::make_pair ("10308", "Delete All Order Quote Event Broadcast"));
            mMsgTypes.insert (std::make_pair ("10120", "Delete All Order Request"));
            mMsgTypes.insert (std::make_pair ("10121", "Delete All Order Response"));
            mMsgTypes.insert (std::make_pair ("10410", "Delete All Quote Broadcast"));
            mMsgTypes.insert (std::make_pair ("10408", "Delete All Quote Request"));
            mMsgTypes.insert (std::make_pair ("10409", "Delete All Quote Response"));
            mMsgTypes.insert (std::make_pair ("10112", "Delete Order Broadcast"));
            mMsgTypes.insert (std::make_pair ("10111", "Delete Order NR Response"));
            mMsgTypes.insert (std::make_pair ("10110", "Delete Order Response"));
            mMsgTypes.insert (std::make_pair ("10109", "Delete Order Single Request"));
            mMsgTypes.insert (std::make_pair ("10602", "Delete TES Trade Request"));
            mMsgTypes.insert (std::make_pair ("10412", "Enter BEST Quote Request"));
            mMsgTypes.insert (std::make_pair ("10600", "Enter TES Trade Request"));
            mMsgTypes.insert (std::make_pair ("10128", "Extended Deletion Report"));
            mMsgTypes.insert (std::make_pair ("10012", "Forced Logout Notification"));
            mMsgTypes.insert (std::make_pair ("10043", "Forced User Logout Notification"));
            mMsgTypes.insert (std::make_pair ("10020", "Gateway Request"));
            mMsgTypes.insert (std::make_pair ("10011", "Heartbeat"));
            mMsgTypes.insert (std::make_pair ("10023", "Heartbeat Notification"));
            mMsgTypes.insert (std::make_pair ("10040", "Inquire Enrichment Rule ID List Request"));
            mMsgTypes.insert (std::make_pair ("10041", "Inquire Enrichment Rule ID List Response"));
            mMsgTypes.insert (std::make_pair ("10035", "Inquire Session List Request"));
            mMsgTypes.insert (std::make_pair ("10036", "Inquire Session List Response"));
            mMsgTypes.insert (std::make_pair ("10038", "Inquire User Request"));
            mMsgTypes.insert (std::make_pair ("10039", "Inquire User Response"));
            mMsgTypes.insert (std::make_pair ("10316", "Issuer Notification"));
            mMsgTypes.insert (std::make_pair ("10314", "Issuer Security State Change Request"));
            mMsgTypes.insert (std::make_pair ("10315", "Issuer Security State Change Response"));
            mMsgTypes.insert (std::make_pair ("10037", "Legal Notification Broadcast"));
            mMsgTypes.insert (std::make_pair ("10000", "Logon Request"));
            mMsgTypes.insert (std::make_pair ("10001", "Logon Response"));
            mMsgTypes.insert (std::make_pair ("10002", "Logout Request"));
            mMsgTypes.insert (std::make_pair ("10003", "Logout Response"));
            mMsgTypes.insert (std::make_pair ("10405", "Mass Quote Request"));
            mMsgTypes.insert (std::make_pair ("10406", "Mass Quote Response"));
            mMsgTypes.insert (std::make_pair ("10108", "Modify Order NR Response"));
            mMsgTypes.insert (std::make_pair ("10107", "Modify Order Response"));
            mMsgTypes.insert (std::make_pair ("10106", "Modify Order Single Request"));
            mMsgTypes.insert (std::make_pair ("10126", "Modify Order Single Short Request"));
            mMsgTypes.insert (std::make_pair ("10601", "Modify TES Trade Request"));
            mMsgTypes.insert (std::make_pair ("10102", "New Order NR Response"));
            mMsgTypes.insert (std::make_pair ("10101", "New Order Response"));
            mMsgTypes.insert (std::make_pair ("10100", "New Order Single Request"));
            mMsgTypes.insert (std::make_pair ("10125", "New Order Single Short Request"));
            mMsgTypes.insert (std::make_pair ("10031", "News Broadcast"));
            mMsgTypes.insert (std::make_pair ("10104", "Order Exec Notification"));
            mMsgTypes.insert (std::make_pair ("10117", "Order Exec Report Broadcast"));
            mMsgTypes.insert (std::make_pair ("10103", "Order Exec Response"));
            mMsgTypes.insert (std::make_pair ("10042", "Party Action Report"));
            mMsgTypes.insert (std::make_pair ("10034", "Party Entitlements Update Report"));
            mMsgTypes.insert (std::make_pair ("10411", "Quote Activation Notification"));
            mMsgTypes.insert (std::make_pair ("10403", "Quote Activation Request"));
            mMsgTypes.insert (std::make_pair ("10404", "Quote Activation Response"));
            mMsgTypes.insert (std::make_pair ("10407", "Quote Execution Report"));
            mMsgTypes.insert (std::make_pair ("10415", "RFQ Broadcast"));
            mMsgTypes.insert (std::make_pair ("10401", "RFQ Request"));
            mMsgTypes.insert (std::make_pair ("10402", "RFQ Response"));
            mMsgTypes.insert (std::make_pair ("10010", "Reject"));
            mMsgTypes.insert (std::make_pair ("10026", "Retransmit ME Message Request"));
            mMsgTypes.insert (std::make_pair ("10027", "Retransmit ME Message Response"));
            mMsgTypes.insert (std::make_pair ("10008", "Retransmit Request"));
            mMsgTypes.insert (std::make_pair ("10009", "Retransmit Response"));
            mMsgTypes.insert (std::make_pair ("10030", "Service Availability Broadcast"));
            mMsgTypes.insert (std::make_pair ("10025", "Subscribe Request"));
            mMsgTypes.insert (std::make_pair ("10005", "Subscribe Response"));
            mMsgTypes.insert (std::make_pair ("10607", "TES Approve Broadcast"));
            mMsgTypes.insert (std::make_pair ("10604", "TES Broadcast"));
            mMsgTypes.insert (std::make_pair ("10606", "TES Delete Broadcast"));
            mMsgTypes.insert (std::make_pair ("10610", "TES Execution Broadcast"));
            mMsgTypes.insert (std::make_pair ("10611", "TES Response"));
            mMsgTypes.insert (std::make_pair ("10614", "TES Trade Broadcast"));
            mMsgTypes.insert (std::make_pair ("10615", "TES Trading Session Status Broadcast"));
            mMsgTypes.insert (std::make_pair ("10501", "TM Trading Session Status Broadcast"));
            mMsgTypes.insert (std::make_pair ("10028", "Throttle Update Notification"));
            mMsgTypes.insert (std::make_pair ("10500", "Trade Broadcast"));
            mMsgTypes.insert (std::make_pair ("10307", "Trading Session Status Broadcast"));
            mMsgTypes.insert (std::make_pair ("10127", "Trailing Stop Update Notification"));
            mMsgTypes.insert (std::make_pair ("10006", "Unsubscribe Request"));
            mMsgTypes.insert (std::make_pair ("10007", "Unsubscribe Response"));
            mMsgTypes.insert (std::make_pair ("10018", "User Login Request"));
            mMsgTypes.insert (std::make_pair ("10019", "User Login Response"));
            mMsgTypes.insert (std::make_pair ("10029", "User Logout Request"));
            mMsgTypes.insert (std::make_pair ("10024", "User Logout Response"));
        }

        codecState decode (cdr& d, const void* buf, size_t len, size_t& used);
        codecState encode (const cdr& d, void* buf, size_t len, size_t& used);
        std::string getType () const { return "xetra"; }

    private:
        // get messages
        void getApproveTESTradeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getBESTQuoteExecutionReport (cdr& d, const void *buf, size_t len, size_t& used);
        void getBESTQuoteResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getBroadcastErrorNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getCrossRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getCrossRequestResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllOrderBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllOrderNRResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllOrderQuoteEventBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllOrderRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllOrderResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllQuoteBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllQuoteRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteAllQuoteResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteOrderBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteOrderNRResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteOrderResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteOrderSingleRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getDeleteTESTradeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getEnterBESTQuoteRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getEnterTESTradeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getExtendedDeletionReport (cdr& d, const void *buf, size_t len, size_t& used);
        void getForcedLogoutNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getForcedUserLogoutNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getGatewayRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getHeartbeat (cdr& d, const void *buf, size_t len, size_t& used);
        void getHeartbeatNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getInquireEnrichmentRuleIDListRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getInquireEnrichmentRuleIDListResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getInquireSessionListRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getInquireSessionListResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getInquireUserRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getInquireUserResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getIssuerNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getIssuerSecurityStateChangeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getIssuerSecurityStateChangeResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getLegalNotificationBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getLogonRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getLogonResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getLogoutRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getLogoutResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getMassQuoteRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getMassQuoteResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getModifyOrderNRResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getModifyOrderResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getModifyOrderSingleRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getModifyOrderSingleShortRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getModifyTESTradeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getNewOrderNRResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getNewOrderResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getNewOrderSingleRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getNewOrderSingleShortRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getNewsBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getOrderExecNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getOrderExecReportBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getOrderExecResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getPartyActionReport (cdr& d, const void *buf, size_t len, size_t& used);
        void getPartyEntitlementsUpdateReport (cdr& d, const void *buf, size_t len, size_t& used);
        void getQuoteActivationNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getQuoteActivationRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getQuoteActivationResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getQuoteExecutionReport (cdr& d, const void *buf, size_t len, size_t& used);
        void getRFQBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getRFQRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getRFQResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getReject (cdr& d, const void *buf, size_t len, size_t& used);
        void getRetransmitMEMessageRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getRetransmitMEMessageResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getRetransmitRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getRetransmitResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getServiceAvailabilityBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getSubscribeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getSubscribeResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESApproveBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESDeleteBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESExecutionBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESTradeBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTESTradingSessionStatusBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTMTradingSessionStatusBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getThrottleUpdateNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getTradeBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTradingSessionStatusBroadcast (cdr& d, const void *buf, size_t len, size_t& used);
        void getTrailingStopUpdateNotification (cdr& d, const void *buf, size_t len, size_t& used);
        void getUnsubscribeRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getUnsubscribeResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getUserLoginRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getUserLoginResponse (cdr& d, const void *buf, size_t len, size_t& used);
        void getUserLogoutRequest (cdr& d, const void *buf, size_t len, size_t& used);
        void getUserLogoutResponse (cdr& d, const void *buf, size_t len, size_t& used);

        // put messages
        void putApproveTESTradeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putBESTQuoteExecutionReport (const cdr& d, void *buf, size_t len, size_t& used);
        void putBESTQuoteResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putBroadcastErrorNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putCrossRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putCrossRequestResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllOrderBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllOrderNRResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllOrderQuoteEventBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllOrderRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllOrderResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllQuoteBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllQuoteRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteAllQuoteResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteOrderBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteOrderNRResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteOrderResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteOrderSingleRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putDeleteTESTradeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putEnterBESTQuoteRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putEnterTESTradeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putExtendedDeletionReport (const cdr& d, void *buf, size_t len, size_t& used);
        void putForcedLogoutNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putForcedUserLogoutNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putGatewayRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putHeartbeat (const cdr& d, void *buf, size_t len, size_t& used);
        void putHeartbeatNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putInquireEnrichmentRuleIDListRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putInquireEnrichmentRuleIDListResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putInquireSessionListRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putInquireSessionListResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putInquireUserRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putInquireUserResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putIssuerNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putIssuerSecurityStateChangeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putIssuerSecurityStateChangeResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putLegalNotificationBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putLogonRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putLogonResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putLogoutRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putLogoutResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putMassQuoteRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putMassQuoteResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putModifyOrderNRResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putModifyOrderResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putModifyOrderSingleRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putModifyOrderSingleShortRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putModifyTESTradeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putNewOrderNRResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putNewOrderResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putNewOrderSingleRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putNewOrderSingleShortRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putNewsBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putOrderExecNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putOrderExecReportBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putOrderExecResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putPartyActionReport (const cdr& d, void *buf, size_t len, size_t& used);
        void putPartyEntitlementsUpdateReport (const cdr& d, void *buf, size_t len, size_t& used);
        void putQuoteActivationNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putQuoteActivationRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putQuoteActivationResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putQuoteExecutionReport (const cdr& d, void *buf, size_t len, size_t& used);
        void putRFQBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putRFQRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putRFQResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putReject (const cdr& d, void *buf, size_t len, size_t& used);
        void putRetransmitMEMessageRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putRetransmitMEMessageResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putRetransmitRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putRetransmitResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putServiceAvailabilityBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putSubscribeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putSubscribeResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESApproveBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESDeleteBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESExecutionBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESTradeBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTESTradingSessionStatusBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTMTradingSessionStatusBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putThrottleUpdateNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putTradeBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTradingSessionStatusBroadcast (const cdr& d, void *buf, size_t len, size_t& used);
        void putTrailingStopUpdateNotification (const cdr& d, void *buf, size_t len, size_t& used);
        void putUnsubscribeRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putUnsubscribeResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putUserLoginRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putUserLoginResponse (const cdr& d, void *buf, size_t len, size_t& used);
        void putUserLogoutRequest (const cdr& d, void *buf, size_t len, size_t& used);
        void putUserLogoutResponse (const cdr& d, void *buf, size_t len, size_t& used);
};

} // namespace neueda

#endif /* XETRA_CODEC_H */
