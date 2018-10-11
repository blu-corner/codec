@require(venue, messages, composites)

@for message in messages:
@if messages[message].containsGroups:
%extend neueda::@{venue[0].upper() + venue[1:]}@{messages[message].name}PacketCodec {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self->getBuffer (), self->getLength (), false);
    }
@else:
%extend neueda::@{venue[0].upper() + venue[1:]}@{messages[message].name}Packet {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(@{venue[0].upper() + venue[1:]}@{messages[message].name}Packet), false);
    }
@end
}
@end

@for message in messages:
@if messages[message].containsGroups:
%newobject neueda::@{venue[0].upper() + venue[1:]}@{messages[message].name}PacketCodec::getBuffer;
@else:
%newobject neueda::@{venue[0].upper() + venue[1:]}@{messages[message].name}Packet::getBuffer;
@end
@end

%extend neueda::@{venue.lower()}Codec {

@for message in messages:
@if messages[message].containsGroups:
    static const @{venue[0].upper() + venue[1:]}@{messages[message].name}PacketCodec* bufferTo@{messages[message].name}(neueda::Buffer* buffer) {
           return new neueda::@{venue[0].upper() + venue[1:]}@{messages[message].name}PacketCodec ((unsigned char*)buffer->getPointer (), buffer->getLength(), false);
    }
@else:
    static const @{venue[0].upper() + venue[1:]}@{messages[message].name}Packet* bufferTo@{messages[message].name}(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::@{venue[0].upper() + venue[1:]}@{messages[message].name}Packet*>(buffer->getPointer ());
    }
@end
@end
    static neueda::codec* get () {
        neueda::@{venue.lower()}Codec* instance = new neueda::@{venue.lower()}Codec();
        return instance;
    }
}

%newobject neueda::@{venue.lower()}Codec::get;
@for message in messages:
@if messages[message].containsGroups:
%newobject neueda::@{venue.lower()}Codec::bufferTo@{messages[message].name};
@end
@end

@for composite in composites:
%include "@{venue[0].upper() + venue[1:]}@{composites[composite]['name'][0].upper() + composites[composite]['name'][1:]}Packet.h"
@end
@for message in messages:
%include "@{venue[0].upper() + venue[1:]}@{messages[message].name}Packet.h"
@if messages[message].containsGroups:
%include "@{venue[0].upper() + venue[1:]}@{messages[message].name}PacketCodec.h"
@end
@end
%include "@{venue.lower()}Codec.h"
