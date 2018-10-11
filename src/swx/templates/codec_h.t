/*
 * Copyright 2014-2018 Neueda
 */
@require(name, messages, message_data, remove_space, constants, duplicate_messages)
#ifndef @name.upper()_CODEC_H
#define @name.upper()_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "@{name.lower()}Packets.h"
#include "fields.h"

namespace neueda
{

class @{name.lower()}Codec: public codec
{
    public:
        @{name.lower()}Codec()
        {
            mMsgTypes.insert (std::make_pair ("S", "Sequenced Message"));
            mMsgTypes.insert (std::make_pair ("U", "Unsequenced Message"));
@for msg in messages:
@if message_data[msg]['msgtype'] not in duplicate_messages.keys():
            mMsgTypes.insert (std::make_pair ("@{message_data[msg]['msgtype']}", "@msg"));
@end
@end
        }

        codecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        codecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "@name.lower()"; }
        
    private:
        bool setLeftPaddedString (const cdr& d, cdrKey_t name, char* s, size_t slen, unsigned char paddingByte);
        bool setRightPaddedString (const cdr& d, cdrKey_t name, char* s, size_t slen, unsigned char paddingByte);
        bool putCharacter (const cdr& d, cdrKey_t key, char* c);
        bool putIntegerBigEndian (const cdr& d, cdrKey_t key, void* vp, size_t size);
        bool putIntegerLittleEndian (const cdr& d, cdrKey_t key, void* vp, size_t size);


@for msg in messages:
        codecState get@{ msg !! remove_space } (cdr& d, @{name}Header* hdr);
@end

@for msg in messages:
        codecState put@{ msg !! remove_space } (const cdr& d, @{name}Header* hdr,
                                    size_t len, size_t& used);
@end
};

} // namespace neueda

#endif /* @name.upper()_CODEC_H */
