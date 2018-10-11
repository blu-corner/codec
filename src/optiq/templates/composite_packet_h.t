@require(get_field_type, comp_name, composite_data, Venue, venue, generation_date, types, packet_get_set, get_default_value, get_comp_field_type, get_field_initialise) 
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation_date}
 */
#ifndef _@{venue.upper()}_@{comp_name.upper()}_PACKET_H_
#define _@{venue.upper()}_@{comp_name.upper()}_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "@{venue}Constants.h"
#include "@{venue}PacketUtils.h"


namespace neueda
{

PACKED(class @{comp_name}
{
public:
@for field in composite_data[comp_name]:
    @if not field.is_group():
    @get_field_initialise(field)
    @end
@end

    @{comp_name} ()
    {
@for field in composite_data[comp_name]:
    @if not field.is_group():
        @get_default_value(field, field_type=get_comp_field_type(field))
    @end
@end
    }

@for field in composite_data[comp_name]:
    @if not field.is_group():
    @packet_get_set(field, field_type=get_comp_field_type(field))
    @end
@end

});

} // namespace neueda

#endif
