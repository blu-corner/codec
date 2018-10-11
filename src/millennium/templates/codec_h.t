/*
 * Copyright 2014-2018 Neueda
 */
@require(name, messages, message_data, remove_space)
#ifndef @name.upper()_CODEC_H
#define @name.upper()_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecHelpers.h"
#include "@{name}Packets.h"
#include "fields.h"
#include "MillenniumPacketUtils.h"

namespace neueda
{

class @{name.lower()}Codec: public codec
{
    public:
        @{name.lower()}Codec()
        {
            @for msg in messages:
            mMsgTypes.insert(std::make_pair("@{message_data[msg]["msgtype"]}", "@msg"));
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
