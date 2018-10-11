/*
 * Copyright 2014-2018 Neueda
 */
package com.neueda.codec.example;

import com.neueda.cdr.Cdr;
import com.neueda.codec.Codec;
import com.neueda.codec.Fields;
import com.neueda.codec.lseCodec;
import com.neueda.codec.Buffer;

public class App
{
    public static void main(String[] args)
    {
        Cdr d = new Cdr();
        d.setString(Fields.MessageType, "A");
        d.setString(Fields.UserName, "username");
        d.setString(Fields.Password, "password");
        d.setString(Fields.NewPassword, "password1");
        d.setInteger(Fields.MessageVersion, 0);
        System.out.println(d.toString());

        Codec lse = lseCodec.get();

        Buffer logonMessageBuffer = lse.encode(d);

        Cdr decodedCdr = lse.decodeBuffer(logonMessageBuffer).getCdr();
        System.out.println(decodedCdr.toString());
    }
}
