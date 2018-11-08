/*
 * Copyright 2014-2018 Neueda
 */
using System;
using Neueda.Codecs;
using Neueda.Cdr;

class example
{
    static void Main(string[] args)
    {
        Cdr d = new Cdr ();
        d.setString (codecBinding.MessageType, "A");
        d.setString (codecBinding.UserName, "username");
        d.setString (codecBinding.Password, "password");
        d.setString (codecBinding.NewPassword, "password1");
        d.setInteger (codecBinding.MessageVersion, 0);

        Console.WriteLine (d.toString ());

        CodecFactory cf = new CodecFactory();
        Codec lseCodec = cf.getCodec ("lse");
        Neueda.Codecs.Buffer b = lseCodec.encode (d);

        Console.WriteLine (b);

        Cdr decoded = lseCodec.decodeBuffer (b).getCdr ();
        Console.WriteLine (decoded.toString ());
    }
}
