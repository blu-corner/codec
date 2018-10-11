/*
 * Copyright 2014-2018 Neueda
 */

%extend neueda::BorsaItalianaTransmissionComplete {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaTransmissionComplete), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaTransmissionComplete);
    }
}
%newobject neueda::TransmissionComplete::getBuffer;

%extend neueda::BorsaItalianaCancelReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaCancelReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaCancelReject);
    }
}
%newobject neueda::CancelReject::getBuffer;

%extend neueda::BorsaItalianaReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaReject);
    }
}
%newobject neueda::Reject::getBuffer;

%extend neueda::BorsaItalianaRFQExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaRFQExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaRFQExecutionReport);
    }
}
%newobject neueda::RFQExecutionReport::getBuffer;

%extend neueda::BorsaItalianaMissedMessageRequestAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaMissedMessageRequestAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaMissedMessageRequestAck);
    }
}
%newobject neueda::MissedMessageRequestAck::getBuffer;

%extend neueda::BorsaItalianaQuoteAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaQuoteAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaQuoteAck);
    }
}
%newobject neueda::QuoteAck::getBuffer;

%extend neueda::BorsaItalianaQuoteRequestReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaQuoteRequestReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaQuoteRequestReject);
    }
}
%newobject neueda::QuoteRequestReject::getBuffer;

%extend neueda::BorsaItalianaQuoteResponse {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaQuoteResponse), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaQuoteResponse);
    }
}
%newobject neueda::QuoteResponse::getBuffer;

%extend neueda::BorsaItalianaOrderMassCancelReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaOrderMassCancelReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaOrderMassCancelReport);
    }
}
%newobject neueda::OrderMassCancelReport::getBuffer;

%extend neueda::BorsaItalianaExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaExecutionReport);
    }
}
%newobject neueda::ExecutionReport::getBuffer;

%extend neueda::BorsaItalianaLogout {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaLogout), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaLogout);
    }
}
%newobject neueda::Logout::getBuffer;

%extend neueda::BorsaItalianaMassCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaMassCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaMassCancelRequest);
    }
}
%newobject neueda::MassCancelRequest::getBuffer;

%extend neueda::BorsaItalianaSystemStatus {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaSystemStatus), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaSystemStatus);
    }
}
%newobject neueda::SystemStatus::getBuffer;

%extend neueda::BorsaItalianaNewQuote {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaNewQuote), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaNewQuote);
    }
}
%newobject neueda::NewQuote::getBuffer;

%extend neueda::BorsaItalianaLogonResponse {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaLogonResponse), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaLogonResponse);
    }
}
%newobject neueda::LogonResponse::getBuffer;

%extend neueda::BorsaItalianaCrossOrderCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaCrossOrderCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaCrossOrderCancelRequest);
    }
}
%newobject neueda::CrossOrderCancelRequest::getBuffer;

%extend neueda::BorsaItalianaCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaCancelRequest);
    }
}
%newobject neueda::CancelRequest::getBuffer;

%extend neueda::BorsaItalianaNewOrderCrossMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaNewOrderCrossMessage), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaNewOrderCrossMessage);
    }
}
%newobject neueda::NewOrderCrossMessage::getBuffer;

%extend neueda::BorsaItalianaQuoteStatusReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaQuoteStatusReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaQuoteStatusReport);
    }
}
%newobject neueda::QuoteStatusReport::getBuffer;

%extend neueda::BorsaItalianaHeartbeat {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaHeartbeat), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaHeartbeat);
    }
}
%newobject neueda::Heartbeat::getBuffer;

%extend neueda::BorsaItalianaLogon {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaLogon), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaLogon);
    }
}
%newobject neueda::Logon::getBuffer;

%extend neueda::BorsaItalianaMissedMessageRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaMissedMessageRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaMissedMessageRequest);
    }
}
%newobject neueda::MissedMessageRequest::getBuffer;

%extend neueda::BorsaItalianaHeader {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaHeader), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaHeader);
    }
}
%newobject neueda::Header::getBuffer;

%extend neueda::BorsaItalianaQuoteRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaQuoteRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaQuoteRequest);
    }
}
%newobject neueda::QuoteRequest::getBuffer;

%extend neueda::BorsaItalianaBusinessReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaBusinessReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaBusinessReject);
    }
}
%newobject neueda::BusinessReject::getBuffer;

%extend neueda::BorsaItalianaOrderModificationRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaOrderModificationRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaOrderModificationRequest);
    }
}
%newobject neueda::OrderModificationRequest::getBuffer;

%extend neueda::BorsaItalianaNewOrder {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaNewOrder), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaNewOrder);
    }
}
%newobject neueda::NewOrder::getBuffer;

%extend neueda::BorsaItalianaRFQQuote {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::BorsaItalianaRFQQuote), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::BorsaItalianaRFQQuote);
    }
}
%newobject neueda::RFQQuote::getBuffer;


%extend neueda::borsaitalianaCodec {

    static const BorsaItalianaTransmissionComplete* pointerToTransmissionComplete(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaTransmissionComplete)
        return reinterpret_cast<const neueda::BorsaItalianaTransmissionComplete*>(buffer);
    }
    static const BorsaItalianaTransmissionComplete* bufferToTransmissionComplete(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaTransmissionComplete*>(buffer->getPointer ());
    }
    static const BorsaItalianaCancelReject* pointerToCancelReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaCancelReject)
        return reinterpret_cast<const neueda::BorsaItalianaCancelReject*>(buffer);
    }
    static const BorsaItalianaCancelReject* bufferToCancelReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaCancelReject*>(buffer->getPointer ());
    }
    static const BorsaItalianaReject* pointerToReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaReject)
        return reinterpret_cast<const neueda::BorsaItalianaReject*>(buffer);
    }
    static const BorsaItalianaReject* bufferToReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaReject*>(buffer->getPointer ());
    }
    static const BorsaItalianaRFQExecutionReport* pointerToRFQExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaRFQExecutionReport)
        return reinterpret_cast<const neueda::BorsaItalianaRFQExecutionReport*>(buffer);
    }
    static const BorsaItalianaRFQExecutionReport* bufferToRFQExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaRFQExecutionReport*>(buffer->getPointer ());
    }
    static const BorsaItalianaMissedMessageRequestAck* pointerToMissedMessageRequestAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaMissedMessageRequestAck)
        return reinterpret_cast<const neueda::BorsaItalianaMissedMessageRequestAck*>(buffer);
    }
    static const BorsaItalianaMissedMessageRequestAck* bufferToMissedMessageRequestAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaMissedMessageRequestAck*>(buffer->getPointer ());
    }
    static const BorsaItalianaQuoteAck* pointerToQuoteAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaQuoteAck)
        return reinterpret_cast<const neueda::BorsaItalianaQuoteAck*>(buffer);
    }
    static const BorsaItalianaQuoteAck* bufferToQuoteAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaQuoteAck*>(buffer->getPointer ());
    }
    static const BorsaItalianaQuoteRequestReject* pointerToQuoteRequestReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaQuoteRequestReject)
        return reinterpret_cast<const neueda::BorsaItalianaQuoteRequestReject*>(buffer);
    }
    static const BorsaItalianaQuoteRequestReject* bufferToQuoteRequestReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaQuoteRequestReject*>(buffer->getPointer ());
    }
    static const BorsaItalianaQuoteResponse* pointerToQuoteResponse(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaQuoteResponse)
        return reinterpret_cast<const neueda::BorsaItalianaQuoteResponse*>(buffer);
    }
    static const BorsaItalianaQuoteResponse* bufferToQuoteResponse(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaQuoteResponse*>(buffer->getPointer ());
    }
    static const BorsaItalianaOrderMassCancelReport* pointerToOrderMassCancelReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaOrderMassCancelReport)
        return reinterpret_cast<const neueda::BorsaItalianaOrderMassCancelReport*>(buffer);
    }
    static const BorsaItalianaOrderMassCancelReport* bufferToOrderMassCancelReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaOrderMassCancelReport*>(buffer->getPointer ());
    }
    static const BorsaItalianaExecutionReport* pointerToExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaExecutionReport)
        return reinterpret_cast<const neueda::BorsaItalianaExecutionReport*>(buffer);
    }
    static const BorsaItalianaExecutionReport* bufferToExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaExecutionReport*>(buffer->getPointer ());
    }
    static const BorsaItalianaLogout* pointerToLogout(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaLogout)
        return reinterpret_cast<const neueda::BorsaItalianaLogout*>(buffer);
    }
    static const BorsaItalianaLogout* bufferToLogout(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaLogout*>(buffer->getPointer ());
    }
    static const BorsaItalianaMassCancelRequest* pointerToMassCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaMassCancelRequest)
        return reinterpret_cast<const neueda::BorsaItalianaMassCancelRequest*>(buffer);
    }
    static const BorsaItalianaMassCancelRequest* bufferToMassCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaMassCancelRequest*>(buffer->getPointer ());
    }
    static const BorsaItalianaSystemStatus* pointerToSystemStatus(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaSystemStatus)
        return reinterpret_cast<const neueda::BorsaItalianaSystemStatus*>(buffer);
    }
    static const BorsaItalianaSystemStatus* bufferToSystemStatus(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaSystemStatus*>(buffer->getPointer ());
    }
    static const BorsaItalianaNewQuote* pointerToNewQuote(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaNewQuote)
        return reinterpret_cast<const neueda::BorsaItalianaNewQuote*>(buffer);
    }
    static const BorsaItalianaNewQuote* bufferToNewQuote(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaNewQuote*>(buffer->getPointer ());
    }
    static const BorsaItalianaLogonResponse* pointerToLogonResponse(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaLogonResponse)
        return reinterpret_cast<const neueda::BorsaItalianaLogonResponse*>(buffer);
    }
    static const BorsaItalianaLogonResponse* bufferToLogonResponse(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaLogonResponse*>(buffer->getPointer ());
    }
    static const BorsaItalianaCrossOrderCancelRequest* pointerToCrossOrderCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaCrossOrderCancelRequest)
        return reinterpret_cast<const neueda::BorsaItalianaCrossOrderCancelRequest*>(buffer);
    }
    static const BorsaItalianaCrossOrderCancelRequest* bufferToCrossOrderCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaCrossOrderCancelRequest*>(buffer->getPointer ());
    }
    static const BorsaItalianaCancelRequest* pointerToCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaCancelRequest)
        return reinterpret_cast<const neueda::BorsaItalianaCancelRequest*>(buffer);
    }
    static const BorsaItalianaCancelRequest* bufferToCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaCancelRequest*>(buffer->getPointer ());
    }
    static const BorsaItalianaNewOrderCrossMessage* pointerToNewOrderCrossMessage(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaNewOrderCrossMessage)
        return reinterpret_cast<const neueda::BorsaItalianaNewOrderCrossMessage*>(buffer);
    }
    static const BorsaItalianaNewOrderCrossMessage* bufferToNewOrderCrossMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaNewOrderCrossMessage*>(buffer->getPointer ());
    }
    static const BorsaItalianaQuoteStatusReport* pointerToQuoteStatusReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaQuoteStatusReport)
        return reinterpret_cast<const neueda::BorsaItalianaQuoteStatusReport*>(buffer);
    }
    static const BorsaItalianaQuoteStatusReport* bufferToQuoteStatusReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaQuoteStatusReport*>(buffer->getPointer ());
    }
    static const BorsaItalianaHeartbeat* pointerToHeartbeat(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaHeartbeat)
        return reinterpret_cast<const neueda::BorsaItalianaHeartbeat*>(buffer);
    }
    static const BorsaItalianaHeartbeat* bufferToHeartbeat(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaHeartbeat*>(buffer->getPointer ());
    }
    static const BorsaItalianaLogon* pointerToLogon(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaLogon)
        return reinterpret_cast<const neueda::BorsaItalianaLogon*>(buffer);
    }
    static const BorsaItalianaLogon* bufferToLogon(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaLogon*>(buffer->getPointer ());
    }
    static const BorsaItalianaMissedMessageRequest* pointerToMissedMessageRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaMissedMessageRequest)
        return reinterpret_cast<const neueda::BorsaItalianaMissedMessageRequest*>(buffer);
    }
    static const BorsaItalianaMissedMessageRequest* bufferToMissedMessageRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaMissedMessageRequest*>(buffer->getPointer ());
    }
    static const BorsaItalianaHeader* pointerToHeader(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaHeader)
        return reinterpret_cast<const neueda::BorsaItalianaHeader*>(buffer);
    }
    static const BorsaItalianaHeader* bufferToHeader(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaHeader*>(buffer->getPointer ());
    }
    static const BorsaItalianaQuoteRequest* pointerToQuoteRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaQuoteRequest)
        return reinterpret_cast<const neueda::BorsaItalianaQuoteRequest*>(buffer);
    }
    static const BorsaItalianaQuoteRequest* bufferToQuoteRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaQuoteRequest*>(buffer->getPointer ());
    }
    static const BorsaItalianaBusinessReject* pointerToBusinessReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaBusinessReject)
        return reinterpret_cast<const neueda::BorsaItalianaBusinessReject*>(buffer);
    }
    static const BorsaItalianaBusinessReject* bufferToBusinessReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaBusinessReject*>(buffer->getPointer ());
    }
    static const BorsaItalianaOrderModificationRequest* pointerToOrderModificationRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaOrderModificationRequest)
        return reinterpret_cast<const neueda::BorsaItalianaOrderModificationRequest*>(buffer);
    }
    static const BorsaItalianaOrderModificationRequest* bufferToOrderModificationRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaOrderModificationRequest*>(buffer->getPointer ());
    }
    static const BorsaItalianaNewOrder* pointerToNewOrder(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaNewOrder)
        return reinterpret_cast<const neueda::BorsaItalianaNewOrder*>(buffer);
    }
    static const BorsaItalianaNewOrder* bufferToNewOrder(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaNewOrder*>(buffer->getPointer ());
    }
    static const BorsaItalianaRFQQuote* pointerToRFQQuote(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (BorsaItalianaRFQQuote)
        return reinterpret_cast<const neueda::BorsaItalianaRFQQuote*>(buffer);
    }
    static const BorsaItalianaRFQQuote* bufferToRFQQuote(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::BorsaItalianaRFQQuote*>(buffer->getPointer ());
    }

    static neueda::codec* get () {
        neueda::borsaitalianaCodec* instance = new neueda::borsaitalianaCodec();
        return instance;
    }
}

%newobject neueda::borsaitalianaCodec::get;

%include "BorsaItalianaTransmissionCompletePacket.h"
%include "BorsaItalianaCancelRejectPacket.h"
%include "BorsaItalianaRejectPacket.h"
%include "BorsaItalianaRFQExecutionReportPacket.h"
%include "BorsaItalianaMissedMessageRequestAckPacket.h"
%include "BorsaItalianaQuoteAckPacket.h"
%include "BorsaItalianaQuoteRequestRejectPacket.h"
%include "BorsaItalianaQuoteResponsePacket.h"
%include "BorsaItalianaOrderMassCancelReportPacket.h"
%include "BorsaItalianaExecutionReportPacket.h"
%include "BorsaItalianaLogoutPacket.h"
%include "BorsaItalianaMassCancelRequestPacket.h"
%include "BorsaItalianaSystemStatusPacket.h"
%include "BorsaItalianaNewQuotePacket.h"
%include "BorsaItalianaLogonResponsePacket.h"
%include "BorsaItalianaCrossOrderCancelRequestPacket.h"
%include "BorsaItalianaCancelRequestPacket.h"
%include "BorsaItalianaNewOrderCrossMessagePacket.h"
%include "BorsaItalianaQuoteStatusReportPacket.h"
%include "BorsaItalianaHeartbeatPacket.h"
%include "BorsaItalianaLogonPacket.h"
%include "BorsaItalianaMissedMessageRequestPacket.h"
%include "BorsaItalianaHeaderPacket.h"
%include "BorsaItalianaQuoteRequestPacket.h"
%include "BorsaItalianaBusinessRejectPacket.h"
%include "BorsaItalianaOrderModificationRequestPacket.h"
%include "BorsaItalianaNewOrderPacket.h"
%include "BorsaItalianaRFQQuotePacket.h"
%include "borsaitalianaCodec.h"