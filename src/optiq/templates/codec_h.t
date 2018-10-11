@require(venue, generation_date, messages)
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation_date}
 */
#ifndef @venue.upper()_CODEC_H
#define @venue.upper()_CODEC_H

#include <stdint.h>
#include "cdr.h"
#include "codec.h"

namespace neueda
{

class @{venue}Codec: public codec
{
    public:
        @{venue}Codec()
        {
@for msg in messages:
            mMsgTypes.insert(std::make_pair("@{msg['id']}", "@{msg['name']}"));
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
        std::string getType () const { return "@{venue}"; }

    private:
@for msg in messages:
        codecState get@{msg['name']} (cdr& d, const void* hdr);
@end

@for msg in messages:
        codecState put@{msg['name']} (const cdr& d,
                                    void* hdr,
                                    size_t len,
                                    size_t& used);
@end
};

} // namespace neueda

#endif /* @venue.upper()_CODEC_H */
