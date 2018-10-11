@require(uvenue, venue, message_data, generation)
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation}
 */
#ifndef @{uvenue}_PACKETS_H
#define @{uvenue}_PACKETS_H

@for m in message_data:
#include "@{venue}@{m}Packet.h"
@end

#endif // @{uvenue}_PACKETS_H
