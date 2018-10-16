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

# FileReader Java example

In addition to the above, there is an example app showing how to read a Cdr in
from a file and subsequently decode and log the Cdr.

As above:

```bash
$ mvn -Dinstall.dir=$INSTALL_PREFIX package
```

Where INSTALL_PREFIX points to the absolute path of the installation. To
execute the jar:

```bash
$ # export library path to ensure java can find shared libraries
$ export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$INSTALL_PREFIX/lib:$INSTALL_PREFIX/lib/java
$ java -cp $INSTALL_PREFIX/lib/java/CdrJNI.jar:$INSTALL_PREFIX/lib/java/CodecJNI.jar:`pwd`/target/example-1.0-SNAPSHOT.jar com.neueda.codec.example.FileReader
```

You must supply a file to read from (using -f <filename>) and a codec to use to
decode the file (using -v <codec>). View the source
[here](src/main/java/com/neueda/codec/example/FileReader.java).

There is also an additional example using an iterator based approach to reading
from a file and decoding - the source for this can be found
[here](src/main/java/com/neueda/codec/example/ExampleIterator.java).
