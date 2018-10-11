@require(Venue, venue, generation_date, messages, groups, composites)
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation_date}
 */
#ifndef @venue.upper()_PACKETS_H
#define @venue.upper()_PACKETS_H

/* #include "@{venue}MessageHeaderPacket.h" */
@for comp in composites:
#include "@{comp}.h"
@end
@for msg in messages:
#include "@{venue}@{msg['name']}Packet.h"
@end
@for group in groups:
#include "@{venue}@{group.name}Packet.h"
@end

#endif
