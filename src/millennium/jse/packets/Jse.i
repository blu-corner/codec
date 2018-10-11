/*
 * Copyright 2014-2018 Neueda
 */

%extend neueda::JseTransmissionComplete {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseTransmissionComplete), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseTransmissionComplete);
    }
}
%newobject neueda::TransmissionComplete::getBuffer;

%extend neueda::JseSecurityDefinitionResponse {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseSecurityDefinitionResponse), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseSecurityDefinitionResponse);
    }
}
%newobject neueda::SecurityDefinitionResponse::getBuffer;

%extend neueda::JseOrderStatusReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseOrderStatusReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseOrderStatusReport);
    }
}
%newobject neueda::OrderStatusReport::getBuffer;

%extend neueda::JseOrderMassCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseOrderMassCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseOrderMassCancelRequest);
    }
}
%newobject neueda::OrderMassCancelRequest::getBuffer;

%extend neueda::JseReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseReject);
    }
}
%newobject neueda::Reject::getBuffer;

%extend neueda::JseSecurityDefinitionRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseSecurityDefinitionRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseSecurityDefinitionRequest);
    }
}
%newobject neueda::SecurityDefinitionRequest::getBuffer;

%extend neueda::JseOrderMassCancelReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseOrderMassCancelReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseOrderMassCancelReport);
    }
}
%newobject neueda::OrderMassCancelReport::getBuffer;

%extend neueda::JseMissedMessageRequestAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseMissedMessageRequestAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseMissedMessageRequestAck);
    }
}
%newobject neueda::MissedMessageRequestAck::getBuffer;

%extend neueda::JseQuoteAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseQuoteAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseQuoteAck);
    }
}
%newobject neueda::QuoteAck::getBuffer;

%extend neueda::JseQuoteRequestReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseQuoteRequestReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseQuoteRequestReject);
    }
}
%newobject neueda::QuoteRequestReject::getBuffer;

%extend neueda::JseQuote {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseQuote), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseQuote);
    }
}
%newobject neueda::Quote::getBuffer;

%extend neueda::JseQuoteResponse {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseQuoteResponse), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseQuoteResponse);
    }
}
%newobject neueda::QuoteResponse::getBuffer;

%extend neueda::JseRFQExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseRFQExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseRFQExecutionReport);
    }
}
%newobject neueda::RFQExecutionReport::getBuffer;

%extend neueda::JseExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseExecutionReport);
    }
}
%newobject neueda::ExecutionReport::getBuffer;

%extend neueda::JseLogout {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseLogout), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseLogout);
    }
}
%newobject neueda::Logout::getBuffer;

%extend neueda::JseNews {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseNews), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseNews);
    }
}
%newobject neueda::News::getBuffer;

%extend neueda::JseSystemStatus {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseSystemStatus), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseSystemStatus);
    }
}
%newobject neueda::SystemStatus::getBuffer;

%extend neueda::JseOrderCancelReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseOrderCancelReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseOrderCancelReject);
    }
}
%newobject neueda::OrderCancelReject::getBuffer;

%extend neueda::JseLogonResponse {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseLogonResponse), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseLogonResponse);
    }
}
%newobject neueda::LogonResponse::getBuffer;

%extend neueda::JseOrderCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseOrderCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseOrderCancelRequest);
    }
}
%newobject neueda::OrderCancelRequest::getBuffer;

%extend neueda::JseHeartbeat {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseHeartbeat), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseHeartbeat);
    }
}
%newobject neueda::Heartbeat::getBuffer;

%extend neueda::JseLogon {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseLogon), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseLogon);
    }
}
%newobject neueda::Logon::getBuffer;

%extend neueda::JseOrderCancelReplaceRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseOrderCancelReplaceRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseOrderCancelReplaceRequest);
    }
}
%newobject neueda::OrderCancelReplaceRequest::getBuffer;

%extend neueda::JseMissedMessageRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseMissedMessageRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseMissedMessageRequest);
    }
}
%newobject neueda::MissedMessageRequest::getBuffer;

%extend neueda::JseHeader {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseHeader), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseHeader);
    }
}
%newobject neueda::Header::getBuffer;

%extend neueda::JseQuoteRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseQuoteRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseQuoteRequest);
    }
}
%newobject neueda::QuoteRequest::getBuffer;

%extend neueda::JseBusinessReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseBusinessReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseBusinessReject);
    }
}
%newobject neueda::BusinessReject::getBuffer;

%extend neueda::JseNewOrder {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseNewOrder), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseNewOrder);
    }
}
%newobject neueda::NewOrder::getBuffer;

%extend neueda::JseNewOrderCross {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseNewOrderCross), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseNewOrderCross);
    }
}
%newobject neueda::NewOrderCross::getBuffer;

%extend neueda::JseRFQQuote {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::JseRFQQuote), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::JseRFQQuote);
    }
}
%newobject neueda::RFQQuote::getBuffer;


%extend neueda::jseCodec {

    static const JseTransmissionComplete* pointerToTransmissionComplete(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseTransmissionComplete)
        return reinterpret_cast<const neueda::JseTransmissionComplete*>(buffer);
    }
    static const JseTransmissionComplete* bufferToTransmissionComplete(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseTransmissionComplete*>(buffer->getPointer ());
    }
    static const JseSecurityDefinitionResponse* pointerToSecurityDefinitionResponse(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseSecurityDefinitionResponse)
        return reinterpret_cast<const neueda::JseSecurityDefinitionResponse*>(buffer);
    }
    static const JseSecurityDefinitionResponse* bufferToSecurityDefinitionResponse(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseSecurityDefinitionResponse*>(buffer->getPointer ());
    }
    static const JseOrderStatusReport* pointerToOrderStatusReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseOrderStatusReport)
        return reinterpret_cast<const neueda::JseOrderStatusReport*>(buffer);
    }
    static const JseOrderStatusReport* bufferToOrderStatusReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseOrderStatusReport*>(buffer->getPointer ());
    }
    static const JseOrderMassCancelRequest* pointerToOrderMassCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseOrderMassCancelRequest)
        return reinterpret_cast<const neueda::JseOrderMassCancelRequest*>(buffer);
    }
    static const JseOrderMassCancelRequest* bufferToOrderMassCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseOrderMassCancelRequest*>(buffer->getPointer ());
    }
    static const JseReject* pointerToReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseReject)
        return reinterpret_cast<const neueda::JseReject*>(buffer);
    }
    static const JseReject* bufferToReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseReject*>(buffer->getPointer ());
    }
    static const JseSecurityDefinitionRequest* pointerToSecurityDefinitionRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseSecurityDefinitionRequest)
        return reinterpret_cast<const neueda::JseSecurityDefinitionRequest*>(buffer);
    }
    static const JseSecurityDefinitionRequest* bufferToSecurityDefinitionRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseSecurityDefinitionRequest*>(buffer->getPointer ());
    }
    static const JseOrderMassCancelReport* pointerToOrderMassCancelReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseOrderMassCancelReport)
        return reinterpret_cast<const neueda::JseOrderMassCancelReport*>(buffer);
    }
    static const JseOrderMassCancelReport* bufferToOrderMassCancelReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseOrderMassCancelReport*>(buffer->getPointer ());
    }
    static const JseMissedMessageRequestAck* pointerToMissedMessageRequestAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseMissedMessageRequestAck)
        return reinterpret_cast<const neueda::JseMissedMessageRequestAck*>(buffer);
    }
    static const JseMissedMessageRequestAck* bufferToMissedMessageRequestAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseMissedMessageRequestAck*>(buffer->getPointer ());
    }
    static const JseQuoteAck* pointerToQuoteAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseQuoteAck)
        return reinterpret_cast<const neueda::JseQuoteAck*>(buffer);
    }
    static const JseQuoteAck* bufferToQuoteAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseQuoteAck*>(buffer->getPointer ());
    }
    static const JseQuoteRequestReject* pointerToQuoteRequestReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseQuoteRequestReject)
        return reinterpret_cast<const neueda::JseQuoteRequestReject*>(buffer);
    }
    static const JseQuoteRequestReject* bufferToQuoteRequestReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseQuoteRequestReject*>(buffer->getPointer ());
    }
    static const JseQuote* pointerToQuote(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseQuote)
        return reinterpret_cast<const neueda::JseQuote*>(buffer);
    }
    static const JseQuote* bufferToQuote(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseQuote*>(buffer->getPointer ());
    }
    static const JseQuoteResponse* pointerToQuoteResponse(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseQuoteResponse)
        return reinterpret_cast<const neueda::JseQuoteResponse*>(buffer);
    }
    static const JseQuoteResponse* bufferToQuoteResponse(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseQuoteResponse*>(buffer->getPointer ());
    }
    static const JseRFQExecutionReport* pointerToRFQExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseRFQExecutionReport)
        return reinterpret_cast<const neueda::JseRFQExecutionReport*>(buffer);
    }
    static const JseRFQExecutionReport* bufferToRFQExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseRFQExecutionReport*>(buffer->getPointer ());
    }
    static const JseExecutionReport* pointerToExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseExecutionReport)
        return reinterpret_cast<const neueda::JseExecutionReport*>(buffer);
    }
    static const JseExecutionReport* bufferToExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseExecutionReport*>(buffer->getPointer ());
    }
    static const JseLogout* pointerToLogout(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseLogout)
        return reinterpret_cast<const neueda::JseLogout*>(buffer);
    }
    static const JseLogout* bufferToLogout(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseLogout*>(buffer->getPointer ());
    }
    static const JseNews* pointerToNews(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseNews)
        return reinterpret_cast<const neueda::JseNews*>(buffer);
    }
    static const JseNews* bufferToNews(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseNews*>(buffer->getPointer ());
    }
    static const JseSystemStatus* pointerToSystemStatus(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseSystemStatus)
        return reinterpret_cast<const neueda::JseSystemStatus*>(buffer);
    }
    static const JseSystemStatus* bufferToSystemStatus(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseSystemStatus*>(buffer->getPointer ());
    }
    static const JseOrderCancelReject* pointerToOrderCancelReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseOrderCancelReject)
        return reinterpret_cast<const neueda::JseOrderCancelReject*>(buffer);
    }
    static const JseOrderCancelReject* bufferToOrderCancelReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseOrderCancelReject*>(buffer->getPointer ());
    }
    static const JseLogonResponse* pointerToLogonResponse(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseLogonResponse)
        return reinterpret_cast<const neueda::JseLogonResponse*>(buffer);
    }
    static const JseLogonResponse* bufferToLogonResponse(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseLogonResponse*>(buffer->getPointer ());
    }
    static const JseOrderCancelRequest* pointerToOrderCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseOrderCancelRequest)
        return reinterpret_cast<const neueda::JseOrderCancelRequest*>(buffer);
    }
    static const JseOrderCancelRequest* bufferToOrderCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseOrderCancelRequest*>(buffer->getPointer ());
    }
    static const JseHeartbeat* pointerToHeartbeat(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseHeartbeat)
        return reinterpret_cast<const neueda::JseHeartbeat*>(buffer);
    }
    static const JseHeartbeat* bufferToHeartbeat(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseHeartbeat*>(buffer->getPointer ());
    }
    static const JseLogon* pointerToLogon(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseLogon)
        return reinterpret_cast<const neueda::JseLogon*>(buffer);
    }
    static const JseLogon* bufferToLogon(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseLogon*>(buffer->getPointer ());
    }
    static const JseOrderCancelReplaceRequest* pointerToOrderCancelReplaceRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseOrderCancelReplaceRequest)
        return reinterpret_cast<const neueda::JseOrderCancelReplaceRequest*>(buffer);
    }
    static const JseOrderCancelReplaceRequest* bufferToOrderCancelReplaceRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseOrderCancelReplaceRequest*>(buffer->getPointer ());
    }
    static const JseMissedMessageRequest* pointerToMissedMessageRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseMissedMessageRequest)
        return reinterpret_cast<const neueda::JseMissedMessageRequest*>(buffer);
    }
    static const JseMissedMessageRequest* bufferToMissedMessageRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseMissedMessageRequest*>(buffer->getPointer ());
    }
    static const JseHeader* pointerToHeader(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseHeader)
        return reinterpret_cast<const neueda::JseHeader*>(buffer);
    }
    static const JseHeader* bufferToHeader(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseHeader*>(buffer->getPointer ());
    }
    static const JseQuoteRequest* pointerToQuoteRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseQuoteRequest)
        return reinterpret_cast<const neueda::JseQuoteRequest*>(buffer);
    }
    static const JseQuoteRequest* bufferToQuoteRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseQuoteRequest*>(buffer->getPointer ());
    }
    static const JseBusinessReject* pointerToBusinessReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseBusinessReject)
        return reinterpret_cast<const neueda::JseBusinessReject*>(buffer);
    }
    static const JseBusinessReject* bufferToBusinessReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseBusinessReject*>(buffer->getPointer ());
    }
    static const JseNewOrder* pointerToNewOrder(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseNewOrder)
        return reinterpret_cast<const neueda::JseNewOrder*>(buffer);
    }
    static const JseNewOrder* bufferToNewOrder(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseNewOrder*>(buffer->getPointer ());
    }
    static const JseNewOrderCross* pointerToNewOrderCross(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseNewOrderCross)
        return reinterpret_cast<const neueda::JseNewOrderCross*>(buffer);
    }
    static const JseNewOrderCross* bufferToNewOrderCross(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseNewOrderCross*>(buffer->getPointer ());
    }
    static const JseRFQQuote* pointerToRFQQuote(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (JseRFQQuote)
        return reinterpret_cast<const neueda::JseRFQQuote*>(buffer);
    }
    static const JseRFQQuote* bufferToRFQQuote(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::JseRFQQuote*>(buffer->getPointer ());
    }

    static neueda::codec* get () {
        neueda::jseCodec* instance = new neueda::jseCodec();
        return instance;
    }
}

%newobject neueda::jseCodec::get;

%include "JseTransmissionCompletePacket.h"
%include "JseSecurityDefinitionResponsePacket.h"
%include "JseOrderStatusReportPacket.h"
%include "JseOrderMassCancelRequestPacket.h"
%include "JseRejectPacket.h"
%include "JseSecurityDefinitionRequestPacket.h"
%include "JseOrderMassCancelReportPacket.h"
%include "JseMissedMessageRequestAckPacket.h"
%include "JseQuoteAckPacket.h"
%include "JseQuoteRequestRejectPacket.h"
%include "JseQuotePacket.h"
%include "JseQuoteResponsePacket.h"
%include "JseRFQExecutionReportPacket.h"
%include "JseExecutionReportPacket.h"
%include "JseLogoutPacket.h"
%include "JseNewsPacket.h"
%include "JseSystemStatusPacket.h"
%include "JseOrderCancelRejectPacket.h"
%include "JseLogonResponsePacket.h"
%include "JseOrderCancelRequestPacket.h"
%include "JseHeartbeatPacket.h"
%include "JseLogonPacket.h"
%include "JseOrderCancelReplaceRequestPacket.h"
%include "JseMissedMessageRequestPacket.h"
%include "JseHeaderPacket.h"
%include "JseQuoteRequestPacket.h"
%include "JseBusinessRejectPacket.h"
%include "JseNewOrderPacket.h"
%include "JseNewOrderCrossPacket.h"
%include "JseRFQQuotePacket.h"
%include "jseCodec.h"