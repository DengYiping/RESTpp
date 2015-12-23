CXX=g++-4.9
CXXFLAGS=-c -Wall -std=c++11 -I/usr/include/jsoncpp
LDFLAGS=-v
LIBS=  -L/usr/local/lib -lcurl -lstdc++ -ljsoncpp

all: RESTpp

RESTpp: main.o curl.o
	$(CXX) $(LDFLAGS) main.o curl.o -o RESTpp $(LIBS)

main.o: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp

curl.o: curl.cpp
	$(CXX) $(CXXFLAGS) curl.cpp

clean:
	rm -f *.o RESTpp
