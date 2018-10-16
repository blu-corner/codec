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

In addition to the above, there is an example app showing how to read multiple 
Cdrs in from a file and subsequently decode and log them.

Ensure that you've built using the first command above and that you've exported
LD_LIBRARY_PATH. Then execute the jar:

```bash
$ java -cp $INSTALL_PREFIX/lib/java/CdrJNI.jar:$INSTALL_PREFIX/lib/java/CodecJNI.jar:`pwd`/target/example-1.0-SNAPSHOT.jar com.neueda.codec.example.FileReader
```

You must supply a file to read from (using -f <filename>) and a codec to use to
decode the file (using -v <codec>). View the source
[here](src/main/java/com/neueda/codec/example/FileReader.java).

# CodecReader Java Example

Provided for reference is another example which uses an iterator based approach
to reading from files. This performs just as the FileReader example above, but
is encapsulated in a single class and is in a more idiomatic style of Java.
View the source
[here](src/main/java/com/neueda/codec/example/ExampleIterator.java). An example
of the class's use is provided below it.
