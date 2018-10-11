#
# Copyright 2014-2018 Neueda Ltd.
#
from cdr import Cdr
import codec

# LSE
d = Cdr()
d.setString(codec.MessageType, "A")
d.setString(codec.UserName, "username")
d.setString(codec.Password, "password")
d.setString(codec.NewPassword, "password1")
d.setInteger(codec.MessageVersion, 0)
print(d.toString())

lseCodec = codec.lseCodec.get()

logonMessageBuffer = lseCodec.encode(d)
bytes = logonMessageBuffer.getByteArray()
print(bytes)

result = lseCodec.decodeBuffer(logonMessageBuffer)
print(result.getCdr().toString())
