/*
 * Copyright 2014-2018 Neueda
 */
@require(venue, message_data)

@for m in message_data:
%extend neueda::@{venue}@{m} {
    neueda::Buffer* getBuffer() {
        return new neueda::Buffer((void*)self, sizeof(neueda::@{venue}@{m}), false);
    }
}
%newobject neueda::@{m}::getBuffer;

@end

%extend neueda::@{venue.lower()}Codec {

    @for m in message_data:
    static const @{venue}@{m}* bufferTo@{m}(neueda::Buffer* buffer) {
        return reinterpret_cast<const neueda::@{venue}@{m}*>(buffer->getPointer ());
    }
    @end

    static neueda::codec* get () {
        neueda::@{venue.lower()}Codec* instance = new neueda::@{venue.lower()}Codec();
        return instance;
    }
}

%newobject neueda::@{venue.lower()}Codec::get;

@for m in message_data:
%include "@{venue}@{m}Packet.h"
@end
%include "@{venue.lower()}Codec.h"