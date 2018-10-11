/*
 * Copyright 2014-2018 Neueda
 */
import com.neueda.cdr.Cdr;
import com.neueda.codec.Codec;
import com.neueda.codec.Fields;
import com.neueda.codec.lseCodec;
import com.neueda.codec.Buffer;

public class example
{
    public static void main(String[] args)
    {
        Cdr d = new Cdr();
        d.setString(Fields.MessageType, "A");
        d.setString(Fields.UserName, "Phil");
        d.setString(Fields.Password, "Phil-is-awesome");
        d.setString(Fields.NewPassword, "godmode");
        d.setInteger(Fields.MessageVersion, 0);
        System.out.println(d.toString());

        Codec lse = lseCodec.get();

        Buffer logonMessageBuffer = lse.encode(d);
        byte[] bytes = logonMessageBuffer.getByteArray();

        Cdr decodedCdr = lse.decodeBuffer(logonMessageBuffer).getCdr();
        System.out.println(decodedCdr.toString());
    }
}
