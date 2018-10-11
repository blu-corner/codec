#
# Copyright 2014-2018 Neueda Ltd.
#
import CommonDataRepresentation as Cdr
import Codecs as Codec

# LSE
d = Cdr.cdr()
d.setString(Codec.MessageType, "A")
d.setString(Codec.UserName, "Phil")
d.setString(Codec.Password, "Phil-is-awesome")
d.setString(Codec.NewPassword, "godmode")
d.setInteger(Codec.MessageVersion, 0)
print d.toString()

lseCodec = Codec.lseCodec.get()

logonMessageBuffer = lseCodec.encode(d)
print logonMessageBuffer
print logonMessageBuffer.getByteArray()

decodedCdr = lseCodec.decodeBuffer(logonMessageBuffer)
print decodedCdr.toString()

# fix
d = Cdr.cdr()
d.setString(Codec.MsgType, "A")
d.setString(Codec.BeginString, "FIX.4.2")
print d.toString()

fixCodec = Codec.fixCodec.get()
print fixCodec.encode(d).getByteArray()
