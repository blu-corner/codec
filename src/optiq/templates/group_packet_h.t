@require(get_field_type, comp_name, composite_data, Venue, venue, generation_date, types, packet_get_set, get_default_value, get_comp_field_type, group_name, group, get_field_initialise) 
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation_date}
 */
#ifndef _@{venue.upper()}_@{group.name.upper()}_PACKET_H_
#define _@{venue.upper()}_@{group.name.upper()}_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "@{venue}Constants.h"
#include "@{venue}PacketUtils.h"
/* #include "@{Venue}MessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiq@{group.name}Packet
{
public:
@for field in group.fields:
    @if not field.is_group():
    @get_field_initialise(field)
    @end
@end

    optiq@{group.name}Packet ()
    {
@for field in group.fields:
    @if not field.is_group():
        @get_default_value(field)
    @end
@end
    }

@for field in group.fields:
    @if not field.is_group():
    @packet_get_set(field)
    @end
@end

});

} // namespace neueda

#endif
