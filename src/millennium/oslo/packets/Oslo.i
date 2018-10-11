/*
 * Copyright 2014-2018 Neueda
 */

%extend neueda::OsloMassCancelReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloMassCancelReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloMassCancelReport);
    }
}
%newobject neueda::MassCancelReport::getBuffer;

%extend neueda::OsloLogonResponse {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloLogonResponse), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloLogonResponse);
    }
}
%newobject neueda::LogonResponse::getBuffer;

%extend neueda::OsloCancelReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloCancelReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloCancelReject);
    }
}
%newobject neueda::CancelReject::getBuffer;

%extend neueda::OsloTransmissionComplete {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloTransmissionComplete), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloTransmissionComplete);
    }
}
%newobject neueda::TransmissionComplete::getBuffer;

%extend neueda::OsloMassCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloMassCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloMassCancelRequest);
    }
}
%newobject neueda::MassCancelRequest::getBuffer;

%extend neueda::OsloOrderModificationRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloOrderModificationRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloOrderModificationRequest);
    }
}
%newobject neueda::OrderModificationRequest::getBuffer;

%extend neueda::OsloMissedMessageRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloMissedMessageRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloMissedMessageRequest);
    }
}
%newobject neueda::MissedMessageRequest::getBuffer;

%extend neueda::OsloCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloCancelRequest);
    }
}
%newobject neueda::CancelRequest::getBuffer;

%extend neueda::OsloHeader {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloHeader), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloHeader);
    }
}
%newobject neueda::Header::getBuffer;

%extend neueda::OsloExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloExecutionReport);
    }
}
%newobject neueda::ExecutionReport::getBuffer;

%extend neueda::OsloLogout {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloLogout), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloLogout);
    }
}
%newobject neueda::Logout::getBuffer;

%extend neueda::OsloBusinessReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloBusinessReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloBusinessReject);
    }
}
%newobject neueda::BusinessReject::getBuffer;

%extend neueda::OsloReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloReject);
    }
}
%newobject neueda::Reject::getBuffer;

%extend neueda::OsloHeartbeat {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloHeartbeat), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloHeartbeat);
    }
}
%newobject neueda::Heartbeat::getBuffer;

%extend neueda::OsloNewOrder {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloNewOrder), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloNewOrder);
    }
}
%newobject neueda::NewOrder::getBuffer;

%extend neueda::OsloLogon {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloLogon), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloLogon);
    }
}
%newobject neueda::Logon::getBuffer;

%extend neueda::OsloSystemStatus {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloSystemStatus), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloSystemStatus);
    }
}
%newobject neueda::SystemStatus::getBuffer;

%extend neueda::OsloMissedMessageRequestAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::OsloMissedMessageRequestAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::OsloMissedMessageRequestAck);
    }
}
%newobject neueda::MissedMessageRequestAck::getBuffer;


%extend neueda::osloCodec {

    static const OsloMassCancelReport* pointerToMassCancelReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloMassCancelReport)
        return reinterpret_cast<const neueda::OsloMassCancelReport*>(buffer);
    }
    static const OsloMassCancelReport* bufferToMassCancelReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloMassCancelReport*>(buffer->getPointer ());
    }
    static const OsloLogonResponse* pointerToLogonResponse(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloLogonResponse)
        return reinterpret_cast<const neueda::OsloLogonResponse*>(buffer);
    }
    static const OsloLogonResponse* bufferToLogonResponse(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloLogonResponse*>(buffer->getPointer ());
    }
    static const OsloCancelReject* pointerToCancelReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloCancelReject)
        return reinterpret_cast<const neueda::OsloCancelReject*>(buffer);
    }
    static const OsloCancelReject* bufferToCancelReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloCancelReject*>(buffer->getPointer ());
    }
    static const OsloTransmissionComplete* pointerToTransmissionComplete(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloTransmissionComplete)
        return reinterpret_cast<const neueda::OsloTransmissionComplete*>(buffer);
    }
    static const OsloTransmissionComplete* bufferToTransmissionComplete(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloTransmissionComplete*>(buffer->getPointer ());
    }
    static const OsloMassCancelRequest* pointerToMassCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloMassCancelRequest)
        return reinterpret_cast<const neueda::OsloMassCancelRequest*>(buffer);
    }
    static const OsloMassCancelRequest* bufferToMassCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloMassCancelRequest*>(buffer->getPointer ());
    }
    static const OsloOrderModificationRequest* pointerToOrderModificationRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloOrderModificationRequest)
        return reinterpret_cast<const neueda::OsloOrderModificationRequest*>(buffer);
    }
    static const OsloOrderModificationRequest* bufferToOrderModificationRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloOrderModificationRequest*>(buffer->getPointer ());
    }
    static const OsloMissedMessageRequest* pointerToMissedMessageRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloMissedMessageRequest)
        return reinterpret_cast<const neueda::OsloMissedMessageRequest*>(buffer);
    }
    static const OsloMissedMessageRequest* bufferToMissedMessageRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloMissedMessageRequest*>(buffer->getPointer ());
    }
    static const OsloCancelRequest* pointerToCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloCancelRequest)
        return reinterpret_cast<const neueda::OsloCancelRequest*>(buffer);
    }
    static const OsloCancelRequest* bufferToCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloCancelRequest*>(buffer->getPointer ());
    }
    static const OsloHeader* pointerToHeader(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloHeader)
        return reinterpret_cast<const neueda::OsloHeader*>(buffer);
    }
    static const OsloHeader* bufferToHeader(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloHeader*>(buffer->getPointer ());
    }
    static const OsloExecutionReport* pointerToExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloExecutionReport)
        return reinterpret_cast<const neueda::OsloExecutionReport*>(buffer);
    }
    static const OsloExecutionReport* bufferToExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloExecutionReport*>(buffer->getPointer ());
    }
    static const OsloLogout* pointerToLogout(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloLogout)
        return reinterpret_cast<const neueda::OsloLogout*>(buffer);
    }
    static const OsloLogout* bufferToLogout(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloLogout*>(buffer->getPointer ());
    }
    static const OsloBusinessReject* pointerToBusinessReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloBusinessReject)
        return reinterpret_cast<const neueda::OsloBusinessReject*>(buffer);
    }
    static const OsloBusinessReject* bufferToBusinessReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloBusinessReject*>(buffer->getPointer ());
    }
    static const OsloReject* pointerToReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloReject)
        return reinterpret_cast<const neueda::OsloReject*>(buffer);
    }
    static const OsloReject* bufferToReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloReject*>(buffer->getPointer ());
    }
    static const OsloHeartbeat* pointerToHeartbeat(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloHeartbeat)
        return reinterpret_cast<const neueda::OsloHeartbeat*>(buffer);
    }
    static const OsloHeartbeat* bufferToHeartbeat(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloHeartbeat*>(buffer->getPointer ());
    }
    static const OsloNewOrder* pointerToNewOrder(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloNewOrder)
        return reinterpret_cast<const neueda::OsloNewOrder*>(buffer);
    }
    static const OsloNewOrder* bufferToNewOrder(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloNewOrder*>(buffer->getPointer ());
    }
    static const OsloLogon* pointerToLogon(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloLogon)
        return reinterpret_cast<const neueda::OsloLogon*>(buffer);
    }
    static const OsloLogon* bufferToLogon(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloLogon*>(buffer->getPointer ());
    }
    static const OsloSystemStatus* pointerToSystemStatus(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloSystemStatus)
        return reinterpret_cast<const neueda::OsloSystemStatus*>(buffer);
    }
    static const OsloSystemStatus* bufferToSystemStatus(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloSystemStatus*>(buffer->getPointer ());
    }
    static const OsloMissedMessageRequestAck* pointerToMissedMessageRequestAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (OsloMissedMessageRequestAck)
        return reinterpret_cast<const neueda::OsloMissedMessageRequestAck*>(buffer);
    }
    static const OsloMissedMessageRequestAck* bufferToMissedMessageRequestAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::OsloMissedMessageRequestAck*>(buffer->getPointer ());
    }

    static neueda::codec* get () {
        neueda::osloCodec* instance = new neueda::osloCodec();
        return instance;
    }
}

%newobject neueda::osloCodec::get;

%include "OsloMassCancelReportPacket.h"
%include "OsloLogonResponsePacket.h"
%include "OsloCancelRejectPacket.h"
%include "OsloTransmissionCompletePacket.h"
%include "OsloMassCancelRequestPacket.h"
%include "OsloOrderModificationRequestPacket.h"
%include "OsloMissedMessageRequestPacket.h"
%include "OsloCancelRequestPacket.h"
%include "OsloHeaderPacket.h"
%include "OsloExecutionReportPacket.h"
%include "OsloLogoutPacket.h"
%include "OsloBusinessRejectPacket.h"
%include "OsloRejectPacket.h"
%include "OsloHeartbeatPacket.h"
%include "OsloNewOrderPacket.h"
%include "OsloLogonPacket.h"
%include "OsloSystemStatusPacket.h"
%include "OsloMissedMessageRequestAckPacket.h"
%include "osloCodec.h"