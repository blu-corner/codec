# codec Java Example

An example app showing use of the codec to encode a Cdr to a Buffer and
subsequently decode and log the Cdr.

```bash
$ mvn -Dinstall.dir=$INSTALL_PREFIX package
```

Where INSTALL_PREFIX points to the absolute path of the installation. To
execute the jar:

```bash
$ # export library path to ensure java can find shared libraries
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$INSTALL_PREFIX/lib:$INSTALL_PREFIX/lib/java
$ java -cp $INSTALL_PREFIX/lib/java/CdrJNI.jar:$INSTALL_PREFIX/lib/java/CodecJNI.jar:`pwd`/target/example-1.0-SNAPSHOT.jar com.neueda.codec.example.App
```

View the source [here](src/main/java/com/neueda/codec/example/App.java).
