@require(venue, uvenue, message_data, msg_name, header_guard, msg_members,\
msg_get_set, default_constructor, to_string, generation)
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation}
 */
@{header_guard(venue, msg_name)}

#include <string>
#include <sstream>
#include <stdint.h>
#include "@{venue}PacketUtils.h"

namespace @{venue}Packets
{

PACKED(class @{venue}@{msg_name}
{
    public:
@{msg_members(message_data[msg_name], "        ")}

        @{venue}@{msg_name} ()
        {
@{default_constructor(message_data[msg_name], "            ")}
        }

@{msg_get_set(message_data[msg_name], "        ")}

        string toString ()
        {
@{to_string(msg_name, message_data[msg_name], "            ")}
        }
});

}

#endif
