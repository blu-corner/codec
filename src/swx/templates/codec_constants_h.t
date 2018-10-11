/*
 * Copyright 2014-2018 Neueda
 */
@require(name, messages, message_data, remove_space, replace_space, camel_case, constants, duplicate_messages)
#ifndef @name.upper()_CODEC_CONSTANTS_H
#define @name.upper()_CODEC_CONSTANTS_H

#include <stdint.h>


namespace neueda
{

#define @name.upper()_SEQUENCED_MESSAGE_TYPE 'S'
#define @name.upper()_UNSEQUENCED_MESSAGE_TYPE 'U'
@for msg in messages:
@if message_data[msg]['msgtype'] not in duplicate_messages.keys():
#define @name.upper()_@{msg.upper() !! replace_space}_TYPE '@{message_data[msg]['msgtype'].upper()}'
@else:
#define @name.upper()_@{msg.upper() !! replace_space}_TYPE '@{message_data[msg]['type'].upper()}'
@end
@end

@for constant in constants.keys():
@for constantValue in constants[constant]:
@if constantValue['type'] == 'char':
#define @name.upper()_@{constant.upper() !! remove_space}_@{constantValue['name'].upper() !! remove_space} '@{ constantValue['value'] }'
@else:
#define @name.upper()_@{constant.upper() !! remove_space}_@{constantValue['name'].upper() !! remove_space} @{ constantValue['value'] }
@end
@end

@end

} // namespace neueda

#endif /* @name.upper()_CODEC_CONSTANTS_H */