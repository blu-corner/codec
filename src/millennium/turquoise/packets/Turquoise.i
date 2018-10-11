/*
 * Copyright 2014-2018 Neueda
 */

%extend neueda::TurquoiseOrderCancelReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseOrderCancelReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseOrderCancelReject);
    }
}
%newobject neueda::OrderCancelReject::getBuffer;

%extend neueda::TurquoiseMissedMessageRequestAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseMissedMessageRequestAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseMissedMessageRequestAck);
    }
}
%newobject neueda::MissedMessageRequestAck::getBuffer;

%extend neueda::TurquoiseOrderCancelReplaceRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseOrderCancelReplaceRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseOrderCancelReplaceRequest);
    }
}
%newobject neueda::OrderCancelReplaceRequest::getBuffer;

%extend neueda::TurquoiseOrderCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseOrderCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseOrderCancelRequest);
    }
}
%newobject neueda::OrderCancelRequest::getBuffer;

%extend neueda::TurquoiseOrderMassCancelReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseOrderMassCancelReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseOrderMassCancelReport);
    }
}
%newobject neueda::OrderMassCancelReport::getBuffer;

%extend neueda::TurquoiseMissedMessageRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseMissedMessageRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseMissedMessageRequest);
    }
}
%newobject neueda::MissedMessageRequest::getBuffer;

%extend neueda::TurquoiseExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseExecutionReport);
    }
}
%newobject neueda::ExecutionReport::getBuffer;

%extend neueda::TurquoiseHeader {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseHeader), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseHeader);
    }
}
%newobject neueda::Header::getBuffer;

%extend neueda::TurquoiseOrderMassCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseOrderMassCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseOrderMassCancelRequest);
    }
}
%newobject neueda::OrderMassCancelRequest::getBuffer;

%extend neueda::TurquoiseLogout {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseLogout), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseLogout);
    }
}
%newobject neueda::Logout::getBuffer;

%extend neueda::TurquoiseLogonReply {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseLogonReply), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseLogonReply);
    }
}
%newobject neueda::LogonReply::getBuffer;

%extend neueda::TurquoiseReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseReject);
    }
}
%newobject neueda::Reject::getBuffer;

%extend neueda::TurquoiseSystemStatus {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseSystemStatus), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseSystemStatus);
    }
}
%newobject neueda::SystemStatus::getBuffer;

%extend neueda::TurquoiseHeartbeat {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseHeartbeat), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseHeartbeat);
    }
}
%newobject neueda::Heartbeat::getBuffer;

%extend neueda::TurquoiseNewOrder {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseNewOrder), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseNewOrder);
    }
}
%newobject neueda::NewOrder::getBuffer;

%extend neueda::TurquoiseLogon {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseLogon), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseLogon);
    }
}
%newobject neueda::Logon::getBuffer;

%extend neueda::TurquoiseMissedMessageReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseMissedMessageReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseMissedMessageReport);
    }
}
%newobject neueda::MissedMessageReport::getBuffer;

%extend neueda::TurquoiseBusinessReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::TurquoiseBusinessReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::TurquoiseBusinessReject);
    }
}
%newobject neueda::BusinessReject::getBuffer;


%extend neueda::turquoiseCodec {

    static const TurquoiseOrderCancelReject* pointerToOrderCancelReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseOrderCancelReject)
        return reinterpret_cast<const neueda::TurquoiseOrderCancelReject*>(buffer);
    }
    static const TurquoiseOrderCancelReject* bufferToOrderCancelReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseOrderCancelReject*>(buffer->getPointer ());
    }
    static const TurquoiseMissedMessageRequestAck* pointerToMissedMessageRequestAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseMissedMessageRequestAck)
        return reinterpret_cast<const neueda::TurquoiseMissedMessageRequestAck*>(buffer);
    }
    static const TurquoiseMissedMessageRequestAck* bufferToMissedMessageRequestAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseMissedMessageRequestAck*>(buffer->getPointer ());
    }
    static const TurquoiseOrderCancelReplaceRequest* pointerToOrderCancelReplaceRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseOrderCancelReplaceRequest)
        return reinterpret_cast<const neueda::TurquoiseOrderCancelReplaceRequest*>(buffer);
    }
    static const TurquoiseOrderCancelReplaceRequest* bufferToOrderCancelReplaceRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseOrderCancelReplaceRequest*>(buffer->getPointer ());
    }
    static const TurquoiseOrderCancelRequest* pointerToOrderCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseOrderCancelRequest)
        return reinterpret_cast<const neueda::TurquoiseOrderCancelRequest*>(buffer);
    }
    static const TurquoiseOrderCancelRequest* bufferToOrderCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseOrderCancelRequest*>(buffer->getPointer ());
    }
    static const TurquoiseOrderMassCancelReport* pointerToOrderMassCancelReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseOrderMassCancelReport)
        return reinterpret_cast<const neueda::TurquoiseOrderMassCancelReport*>(buffer);
    }
    static const TurquoiseOrderMassCancelReport* bufferToOrderMassCancelReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseOrderMassCancelReport*>(buffer->getPointer ());
    }
    static const TurquoiseMissedMessageRequest* pointerToMissedMessageRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseMissedMessageRequest)
        return reinterpret_cast<const neueda::TurquoiseMissedMessageRequest*>(buffer);
    }
    static const TurquoiseMissedMessageRequest* bufferToMissedMessageRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseMissedMessageRequest*>(buffer->getPointer ());
    }
    static const TurquoiseExecutionReport* pointerToExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseExecutionReport)
        return reinterpret_cast<const neueda::TurquoiseExecutionReport*>(buffer);
    }
    static const TurquoiseExecutionReport* bufferToExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseExecutionReport*>(buffer->getPointer ());
    }
    static const TurquoiseHeader* pointerToHeader(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseHeader)
        return reinterpret_cast<const neueda::TurquoiseHeader*>(buffer);
    }
    static const TurquoiseHeader* bufferToHeader(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseHeader*>(buffer->getPointer ());
    }
    static const TurquoiseOrderMassCancelRequest* pointerToOrderMassCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseOrderMassCancelRequest)
        return reinterpret_cast<const neueda::TurquoiseOrderMassCancelRequest*>(buffer);
    }
    static const TurquoiseOrderMassCancelRequest* bufferToOrderMassCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseOrderMassCancelRequest*>(buffer->getPointer ());
    }
    static const TurquoiseLogout* pointerToLogout(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseLogout)
        return reinterpret_cast<const neueda::TurquoiseLogout*>(buffer);
    }
    static const TurquoiseLogout* bufferToLogout(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseLogout*>(buffer->getPointer ());
    }
    static const TurquoiseLogonReply* pointerToLogonReply(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseLogonReply)
        return reinterpret_cast<const neueda::TurquoiseLogonReply*>(buffer);
    }
    static const TurquoiseLogonReply* bufferToLogonReply(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseLogonReply*>(buffer->getPointer ());
    }
    static const TurquoiseReject* pointerToReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseReject)
        return reinterpret_cast<const neueda::TurquoiseReject*>(buffer);
    }
    static const TurquoiseReject* bufferToReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseReject*>(buffer->getPointer ());
    }
    static const TurquoiseSystemStatus* pointerToSystemStatus(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseSystemStatus)
        return reinterpret_cast<const neueda::TurquoiseSystemStatus*>(buffer);
    }
    static const TurquoiseSystemStatus* bufferToSystemStatus(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseSystemStatus*>(buffer->getPointer ());
    }
    static const TurquoiseHeartbeat* pointerToHeartbeat(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseHeartbeat)
        return reinterpret_cast<const neueda::TurquoiseHeartbeat*>(buffer);
    }
    static const TurquoiseHeartbeat* bufferToHeartbeat(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseHeartbeat*>(buffer->getPointer ());
    }
    static const TurquoiseNewOrder* pointerToNewOrder(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseNewOrder)
        return reinterpret_cast<const neueda::TurquoiseNewOrder*>(buffer);
    }
    static const TurquoiseNewOrder* bufferToNewOrder(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseNewOrder*>(buffer->getPointer ());
    }
    static const TurquoiseLogon* pointerToLogon(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseLogon)
        return reinterpret_cast<const neueda::TurquoiseLogon*>(buffer);
    }
    static const TurquoiseLogon* bufferToLogon(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseLogon*>(buffer->getPointer ());
    }
    static const TurquoiseMissedMessageReport* pointerToMissedMessageReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseMissedMessageReport)
        return reinterpret_cast<const neueda::TurquoiseMissedMessageReport*>(buffer);
    }
    static const TurquoiseMissedMessageReport* bufferToMissedMessageReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseMissedMessageReport*>(buffer->getPointer ());
    }
    static const TurquoiseBusinessReject* pointerToBusinessReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (TurquoiseBusinessReject)
        return reinterpret_cast<const neueda::TurquoiseBusinessReject*>(buffer);
    }
    static const TurquoiseBusinessReject* bufferToBusinessReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::TurquoiseBusinessReject*>(buffer->getPointer ());
    }

    static neueda::codec* get () {
        neueda::turquoiseCodec* instance = new neueda::turquoiseCodec();
        return instance;
    }
}

%newobject neueda::turquoiseCodec::get;

%include "TurquoiseOrderCancelRejectPacket.h"
%include "TurquoiseMissedMessageRequestAckPacket.h"
%include "TurquoiseOrderCancelReplaceRequestPacket.h"
%include "TurquoiseOrderCancelRequestPacket.h"
%include "TurquoiseOrderMassCancelReportPacket.h"
%include "TurquoiseMissedMessageRequestPacket.h"
%include "TurquoiseExecutionReportPacket.h"
%include "TurquoiseHeaderPacket.h"
%include "TurquoiseOrderMassCancelRequestPacket.h"
%include "TurquoiseLogoutPacket.h"
%include "TurquoiseLogonReplyPacket.h"
%include "TurquoiseRejectPacket.h"
%include "TurquoiseSystemStatusPacket.h"
%include "TurquoiseHeartbeatPacket.h"
%include "TurquoiseNewOrderPacket.h"
%include "TurquoiseLogonPacket.h"
%include "TurquoiseMissedMessageReportPacket.h"
%include "TurquoiseBusinessRejectPacket.h"
%include "turquoiseCodec.h"