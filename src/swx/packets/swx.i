/*
 * Copyright 2014-2018 Neueda
 */

%extend neueda::swxLoginRejectedMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxLoginRejectedMessage), false);
    }
}
%newobject neueda::LoginRejectedMessage::getBuffer;

%extend neueda::swxBrokenTradeMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxBrokenTradeMessage), false);
    }
}
%newobject neueda::BrokenTradeMessage::getBuffer;

%extend neueda::swxSystemEventMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxSystemEventMessage), false);
    }
}
%newobject neueda::SystemEventMessage::getBuffer;

%extend neueda::swxServerHeartbeatMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxServerHeartbeatMessage), false);
    }
}
%newobject neueda::ServerHeartbeatMessage::getBuffer;

%extend neueda::swxCancelOrderMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxCancelOrderMessage), false);
    }
}
%newobject neueda::CancelOrderMessage::getBuffer;

%extend neueda::swxCancelledMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxCancelledMessage), false);
    }
}
%newobject neueda::CancelledMessage::getBuffer;

%extend neueda::swxClientHeartbeatMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxClientHeartbeatMessage), false);
    }
}
%newobject neueda::ClientHeartbeatMessage::getBuffer;

%extend neueda::swxDebugMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxDebugMessage), false);
    }
}
%newobject neueda::DebugMessage::getBuffer;

%extend neueda::swxEndofSessionMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxEndofSessionMessage), false);
    }
}
%newobject neueda::EndofSessionMessage::getBuffer;

%extend neueda::swxReplaceOrderMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxReplaceOrderMessage), false);
    }
}
%newobject neueda::ReplaceOrderMessage::getBuffer;

%extend neueda::swxAcceptedMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxAcceptedMessage), false);
    }
}
%newobject neueda::AcceptedMessage::getBuffer;

%extend neueda::swxHeader {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxHeader), false);
    }
}
%newobject neueda::Header::getBuffer;

%extend neueda::swxLogoutRequestMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxLogoutRequestMessage), false);
    }
}
%newobject neueda::LogoutRequestMessage::getBuffer;

%extend neueda::swxEnterOrderMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxEnterOrderMessage), false);
    }
}
%newobject neueda::EnterOrderMessage::getBuffer;

%extend neueda::swxLoginRequestMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxLoginRequestMessage), false);
    }
}
%newobject neueda::LoginRequestMessage::getBuffer;

%extend neueda::swxOrderPriorityUpdateChangeMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxOrderPriorityUpdateChangeMessage), false);
    }
}
%newobject neueda::OrderPriorityUpdateChangeMessage::getBuffer;

%extend neueda::swxExecutedOrderMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxExecutedOrderMessage), false);
    }
}
%newobject neueda::ExecutedOrderMessage::getBuffer;

%extend neueda::swxLoginAcceptedMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxLoginAcceptedMessage), false);
    }
}
%newobject neueda::LoginAcceptedMessage::getBuffer;

%extend neueda::swxReplacedMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxReplacedMessage), false);
    }
}
%newobject neueda::ReplacedMessage::getBuffer;

%extend neueda::swxRejectedOrderMessage {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::swxRejectedOrderMessage), false);
    }
}
%newobject neueda::RejectedOrderMessage::getBuffer;


%extend neueda::swxCodec {

    static const swxLoginRejectedMessage* bufferToLoginRejectedMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxLoginRejectedMessage*>(buffer->getPointer ());
    }
    static const swxBrokenTradeMessage* bufferToBrokenTradeMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxBrokenTradeMessage*>(buffer->getPointer ());
    }
    static const swxSystemEventMessage* bufferToSystemEventMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxSystemEventMessage*>(buffer->getPointer ());
    }
    static const swxServerHeartbeatMessage* bufferToServerHeartbeatMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxServerHeartbeatMessage*>(buffer->getPointer ());
    }
    static const swxCancelOrderMessage* bufferToCancelOrderMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxCancelOrderMessage*>(buffer->getPointer ());
    }
    static const swxCancelledMessage* bufferToCancelledMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxCancelledMessage*>(buffer->getPointer ());
    }
    static const swxClientHeartbeatMessage* bufferToClientHeartbeatMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxClientHeartbeatMessage*>(buffer->getPointer ());
    }
    static const swxDebugMessage* bufferToDebugMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxDebugMessage*>(buffer->getPointer ());
    }
    static const swxEndofSessionMessage* bufferToEndofSessionMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxEndofSessionMessage*>(buffer->getPointer ());
    }
    static const swxReplaceOrderMessage* bufferToReplaceOrderMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxReplaceOrderMessage*>(buffer->getPointer ());
    }
    static const swxAcceptedMessage* bufferToAcceptedMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxAcceptedMessage*>(buffer->getPointer ());
    }
    static const swxHeader* bufferToHeader(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxHeader*>(buffer->getPointer ());
    }
    static const swxLogoutRequestMessage* bufferToLogoutRequestMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxLogoutRequestMessage*>(buffer->getPointer ());
    }
    static const swxEnterOrderMessage* bufferToEnterOrderMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxEnterOrderMessage*>(buffer->getPointer ());
    }
    static const swxLoginRequestMessage* bufferToLoginRequestMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxLoginRequestMessage*>(buffer->getPointer ());
    }
    static const swxOrderPriorityUpdateChangeMessage* bufferToOrderPriorityUpdateChangeMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxOrderPriorityUpdateChangeMessage*>(buffer->getPointer ());
    }
    static const swxExecutedOrderMessage* bufferToExecutedOrderMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxExecutedOrderMessage*>(buffer->getPointer ());
    }
    static const swxLoginAcceptedMessage* bufferToLoginAcceptedMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxLoginAcceptedMessage*>(buffer->getPointer ());
    }
    static const swxReplacedMessage* bufferToReplacedMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxReplacedMessage*>(buffer->getPointer ());
    }
    static const swxRejectedOrderMessage* bufferToRejectedOrderMessage(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::swxRejectedOrderMessage*>(buffer->getPointer ());
    }

    static neueda::codec* get () {
        neueda::swxCodec* instance = new neueda::swxCodec();
        return instance;
    }
}

%newobject neueda::swxCodec::get;

%include "swxLoginRejectedMessagePacket.h"
%include "swxBrokenTradeMessagePacket.h"
%include "swxSystemEventMessagePacket.h"
%include "swxServerHeartbeatMessagePacket.h"
%include "swxCancelOrderMessagePacket.h"
%include "swxCancelledMessagePacket.h"
%include "swxClientHeartbeatMessagePacket.h"
%include "swxDebugMessagePacket.h"
%include "swxEndofSessionMessagePacket.h"
%include "swxReplaceOrderMessagePacket.h"
%include "swxAcceptedMessagePacket.h"
%include "swxHeaderPacket.h"
%include "swxLogoutRequestMessagePacket.h"
%include "swxEnterOrderMessagePacket.h"
%include "swxLoginRequestMessagePacket.h"
%include "swxOrderPriorityUpdateChangeMessagePacket.h"
%include "swxExecutedOrderMessagePacket.h"
%include "swxLoginAcceptedMessagePacket.h"
%include "swxReplacedMessagePacket.h"
%include "swxRejectedOrderMessagePacket.h"
%include "swxCodec.h"