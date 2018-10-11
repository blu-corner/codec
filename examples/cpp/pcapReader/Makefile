INSTALL_PREFIX=../../../../
CXX=g++

CFLAGS=-I${INSTALL_PREFIX}/include/logger -I${INSTALL_PREFIX}/include/cdr -I${INSTALL_PREFIX}/include/codec -I${INSTALL_PREFIX}/include/codec/fields -I${INSTALL_PREFIX}/include/codec/millennium/lse -I${INSTALL_PREFIX}/include/codec/millennium/lse/packets -I${INSTALL_PREFIX}/include/codec/millennium -I${INSTALL_PREFIX}/include/properties -I${INSTALL_PREFIX}/include/utils -I${INSTALL_PREFIX}/include/sbf
LDFLAGS=-L$(INSTALL_PREFIX)/lib 
LIBS=-llogger -lcdr -lcodec -lfields -lproperties -lsbfcommon -lsbfcore -lutils -lpcap

all: pcapReader

pcapReader: pcapReader.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LIBS)

pcapReader.o: pcapReader.cpp
	$(CXX) -c $(CFLAGS) $<

clean:
	rm *.o pcapReader
