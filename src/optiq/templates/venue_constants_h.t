@require(Venue, generation_date, messages, enum_data, sets)
/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated @{generation_date}
 */
#pragma once

namespace neueda
{

@for msg in messages:
#define @{Venue}@{msg['name']}TemplateId @{msg['id']}
@end

@for name, data in enum_data.items():
// enum for @{name}
@for v in data:
#define OPTIQ_@{name.upper()}_@{v['name'].upper()} @{v['text']}
@end

@end
@for name, data in sets.items():
// set for @{data['new_name']}
@for choice in data['choices']:
#define OPTIQ_@{data['new_name'].upper()}_@{choice['name'].upper()} @{choice['text']}
@end

@end
}; // namespace neueda
