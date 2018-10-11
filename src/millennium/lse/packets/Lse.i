/*
 * Copyright 2014-2018 Neueda
 */

%extend neueda::LseBusinessReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseBusinessReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseBusinessReject);
    }
}
%newobject neueda::BusinessReject::getBuffer;

%extend neueda::LseOrderCancelReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseOrderCancelReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseOrderCancelReject);
    }
}
%newobject neueda::OrderCancelReject::getBuffer;

%extend neueda::LseMissedMessageRequestAck {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseMissedMessageRequestAck), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseMissedMessageRequestAck);
    }
}
%newobject neueda::MissedMessageRequestAck::getBuffer;

%extend neueda::LseOrderCancelReplaceRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseOrderCancelReplaceRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseOrderCancelReplaceRequest);
    }
}
%newobject neueda::OrderCancelReplaceRequest::getBuffer;

%extend neueda::LseCrossOrderCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseCrossOrderCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseCrossOrderCancelRequest);
    }
}
%newobject neueda::CrossOrderCancelRequest::getBuffer;

%extend neueda::LseOrderCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseOrderCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseOrderCancelRequest);
    }
}
%newobject neueda::OrderCancelRequest::getBuffer;

%extend neueda::LseOrderMassCancelReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseOrderMassCancelReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseOrderMassCancelReport);
    }
}
%newobject neueda::OrderMassCancelReport::getBuffer;

%extend neueda::LseMissedMessageRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseMissedMessageRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseMissedMessageRequest);
    }
}
%newobject neueda::MissedMessageRequest::getBuffer;

%extend neueda::LseExecutionReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseExecutionReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseExecutionReport);
    }
}
%newobject neueda::ExecutionReport::getBuffer;

%extend neueda::LseHeader {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseHeader), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseHeader);
    }
}
%newobject neueda::Header::getBuffer;

%extend neueda::LseOrderMassCancelRequest {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseOrderMassCancelRequest), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseOrderMassCancelRequest);
    }
}
%newobject neueda::OrderMassCancelRequest::getBuffer;

%extend neueda::LseLogout {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseLogout), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseLogout);
    }
}
%newobject neueda::Logout::getBuffer;

%extend neueda::LseLogonReply {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseLogonReply), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseLogonReply);
    }
}
%newobject neueda::LogonReply::getBuffer;

%extend neueda::LseReject {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseReject), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseReject);
    }
}
%newobject neueda::Reject::getBuffer;

%extend neueda::LseSystemStatus {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseSystemStatus), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseSystemStatus);
    }
}
%newobject neueda::SystemStatus::getBuffer;

%extend neueda::LseHeartbeat {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseHeartbeat), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseHeartbeat);
    }
}
%newobject neueda::Heartbeat::getBuffer;

%extend neueda::LseNewOrder {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseNewOrder), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseNewOrder);
    }
}
%newobject neueda::NewOrder::getBuffer;

%extend neueda::LseLogon {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseLogon), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseLogon);
    }
}
%newobject neueda::Logon::getBuffer;

%extend neueda::LseMissedMessageReport {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseMissedMessageReport), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseMissedMessageReport);
    }
}
%newobject neueda::MissedMessageReport::getBuffer;

%extend neueda::LseNewOrderCross {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::LseNewOrderCross), false);
    }

    static size_t getRawSize() {
        return sizeof(neueda::LseNewOrderCross);
    }
}
%newobject neueda::NewOrderCross::getBuffer;


%extend neueda::lseCodec {

    static const LseBusinessReject* pointerToBusinessReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseBusinessReject)
        return reinterpret_cast<const neueda::LseBusinessReject*>(buffer);
    }
    static const LseBusinessReject* bufferToBusinessReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseBusinessReject*>(buffer->getPointer ());
    }
    static const LseOrderCancelReject* pointerToOrderCancelReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseOrderCancelReject)
        return reinterpret_cast<const neueda::LseOrderCancelReject*>(buffer);
    }
    static const LseOrderCancelReject* bufferToOrderCancelReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseOrderCancelReject*>(buffer->getPointer ());
    }
    static const LseMissedMessageRequestAck* pointerToMissedMessageRequestAck(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseMissedMessageRequestAck)
        return reinterpret_cast<const neueda::LseMissedMessageRequestAck*>(buffer);
    }
    static const LseMissedMessageRequestAck* bufferToMissedMessageRequestAck(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseMissedMessageRequestAck*>(buffer->getPointer ());
    }
    static const LseOrderCancelReplaceRequest* pointerToOrderCancelReplaceRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseOrderCancelReplaceRequest)
        return reinterpret_cast<const neueda::LseOrderCancelReplaceRequest*>(buffer);
    }
    static const LseOrderCancelReplaceRequest* bufferToOrderCancelReplaceRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseOrderCancelReplaceRequest*>(buffer->getPointer ());
    }
    static const LseCrossOrderCancelRequest* pointerToCrossOrderCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseCrossOrderCancelRequest)
        return reinterpret_cast<const neueda::LseCrossOrderCancelRequest*>(buffer);
    }
    static const LseCrossOrderCancelRequest* bufferToCrossOrderCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseCrossOrderCancelRequest*>(buffer->getPointer ());
    }
    static const LseOrderCancelRequest* pointerToOrderCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseOrderCancelRequest)
        return reinterpret_cast<const neueda::LseOrderCancelRequest*>(buffer);
    }
    static const LseOrderCancelRequest* bufferToOrderCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseOrderCancelRequest*>(buffer->getPointer ());
    }
    static const LseOrderMassCancelReport* pointerToOrderMassCancelReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseOrderMassCancelReport)
        return reinterpret_cast<const neueda::LseOrderMassCancelReport*>(buffer);
    }
    static const LseOrderMassCancelReport* bufferToOrderMassCancelReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseOrderMassCancelReport*>(buffer->getPointer ());
    }
    static const LseMissedMessageRequest* pointerToMissedMessageRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseMissedMessageRequest)
        return reinterpret_cast<const neueda::LseMissedMessageRequest*>(buffer);
    }
    static const LseMissedMessageRequest* bufferToMissedMessageRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseMissedMessageRequest*>(buffer->getPointer ());
    }
    static const LseExecutionReport* pointerToExecutionReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseExecutionReport)
        return reinterpret_cast<const neueda::LseExecutionReport*>(buffer);
    }
    static const LseExecutionReport* bufferToExecutionReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseExecutionReport*>(buffer->getPointer ());
    }
    static const LseHeader* pointerToHeader(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseHeader)
        return reinterpret_cast<const neueda::LseHeader*>(buffer);
    }
    static const LseHeader* bufferToHeader(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseHeader*>(buffer->getPointer ());
    }
    static const LseOrderMassCancelRequest* pointerToOrderMassCancelRequest(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseOrderMassCancelRequest)
        return reinterpret_cast<const neueda::LseOrderMassCancelRequest*>(buffer);
    }
    static const LseOrderMassCancelRequest* bufferToOrderMassCancelRequest(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseOrderMassCancelRequest*>(buffer->getPointer ());
    }
    static const LseLogout* pointerToLogout(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseLogout)
        return reinterpret_cast<const neueda::LseLogout*>(buffer);
    }
    static const LseLogout* bufferToLogout(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseLogout*>(buffer->getPointer ());
    }
    static const LseLogonReply* pointerToLogonReply(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseLogonReply)
        return reinterpret_cast<const neueda::LseLogonReply*>(buffer);
    }
    static const LseLogonReply* bufferToLogonReply(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseLogonReply*>(buffer->getPointer ());
    }
    static const LseReject* pointerToReject(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseReject)
        return reinterpret_cast<const neueda::LseReject*>(buffer);
    }
    static const LseReject* bufferToReject(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseReject*>(buffer->getPointer ());
    }
    static const LseSystemStatus* pointerToSystemStatus(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseSystemStatus)
        return reinterpret_cast<const neueda::LseSystemStatus*>(buffer);
    }
    static const LseSystemStatus* bufferToSystemStatus(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseSystemStatus*>(buffer->getPointer ());
    }
    static const LseHeartbeat* pointerToHeartbeat(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseHeartbeat)
        return reinterpret_cast<const neueda::LseHeartbeat*>(buffer);
    }
    static const LseHeartbeat* bufferToHeartbeat(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseHeartbeat*>(buffer->getPointer ());
    }
    static const LseNewOrder* pointerToNewOrder(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseNewOrder)
        return reinterpret_cast<const neueda::LseNewOrder*>(buffer);
    }
    static const LseNewOrder* bufferToNewOrder(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseNewOrder*>(buffer->getPointer ());
    }
    static const LseLogon* pointerToLogon(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseLogon)
        return reinterpret_cast<const neueda::LseLogon*>(buffer);
    }
    static const LseLogon* bufferToLogon(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseLogon*>(buffer->getPointer ());
    }
    static const LseMissedMessageReport* pointerToMissedMessageReport(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseMissedMessageReport)
        return reinterpret_cast<const neueda::LseMissedMessageReport*>(buffer);
    }
    static const LseMissedMessageReport* bufferToMissedMessageReport(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseMissedMessageReport*>(buffer->getPointer ());
    }
    static const LseNewOrderCross* pointerToNewOrderCross(const void* buffer, size_t lenth) {
        // AUTO-GEN TODO
        // if length < sizeof (LseNewOrderCross)
        return reinterpret_cast<const neueda::LseNewOrderCross*>(buffer);
    }
    static const LseNewOrderCross* bufferToNewOrderCross(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::LseNewOrderCross*>(buffer->getPointer ());
    }

    static neueda::codec* get () {
        neueda::lseCodec* instance = new neueda::lseCodec();
        return instance;
    }
}

%newobject neueda::lseCodec::get;

%include "LseBusinessRejectPacket.h"
%include "LseOrderCancelRejectPacket.h"
%include "LseMissedMessageRequestAckPacket.h"
%include "LseOrderCancelReplaceRequestPacket.h"
%include "LseCrossOrderCancelRequestPacket.h"
%include "LseOrderCancelRequestPacket.h"
%include "LseOrderMassCancelReportPacket.h"
%include "LseMissedMessageRequestPacket.h"
%include "LseExecutionReportPacket.h"
%include "LseHeaderPacket.h"
%include "LseOrderMassCancelRequestPacket.h"
%include "LseLogoutPacket.h"
%include "LseLogonReplyPacket.h"
%include "LseRejectPacket.h"
%include "LseSystemStatusPacket.h"
%include "LseHeartbeatPacket.h"
%include "LseNewOrderPacket.h"
%include "LseLogonPacket.h"
%include "LseMissedMessageReportPacket.h"
%include "LseNewOrderCrossPacket.h"
%include "lseCodec.h"