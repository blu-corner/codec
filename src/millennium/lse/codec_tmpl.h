@require(name, messages, remove_space)
#ifndef GW_@name.upper()_CODEC_H
#define GW_@name.upper()_CODEC_H
#include <stdint.h>
#include "cdr.h"
#include "gwCodec.h"
#include "gwCodecHelpers.h"

namespace LseCodec
{

struct gw@{name}Header;

class gw@{name}Codec: public gwCodec
{
    public:
        gwCodecState decode (cdr& d,
                             const void* buf,
                             size_t len,
                             size_t& used);
        gwCodecState encode (const cdr& d,
                             void* buf,
                             size_t len,
                             size_t& used);
        std::string getType () const { return "@name.lower()"; }
    private:
        bool putString (const cdr& d, const char* name, char* s, size_t slen);
        bool putPrice (const cdr& d, const std::string& key, int64_t* price);
        bool putCharacter (const cdr& d, const std::string& key, char* c);

@for msg in messages:
        gwCodecState get@{ msg !! remove_space } (cdr& d, gw@{name}Header* hdr);
@end

@for msg in messages:
        gwCodecState put@{ msg !! remove_space } (const cdr& d, gw@{name}Header* hdr,
                                    size_t len, size_t& used);
@end
};

}

#endif /* GW_@name.upper()_CODEC_H */
