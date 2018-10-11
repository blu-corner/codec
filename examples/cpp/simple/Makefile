INSTALL_PREFIX=../../../../
CXX=g++

CFLAGS=-I${INSTALL_PREFIX}/include/logger -I${INSTALL_PREFIX}/include/cdr -I${INSTALL_PREFIX}/include/codec -I${INSTALL_PREFIX}/include/codec/fields -I${INSTALL_PREFIX}/include/codec/millennium/lse -I${INSTALL_PREFIX}/include/codec/millennium/lse/packets -I${INSTALL_PREFIX}/include/codec/millennium
LDFLAGS=-L$(INSTALL_PREFIX)/lib 
LIBS=-llogger -lcdr -lcodec -lfields

all: simple

simple: simple.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LIBS)

simple.o: simple.cpp
	$(CXX) -c $(CFLAGS) $<

clean:
	rm *.o simple
