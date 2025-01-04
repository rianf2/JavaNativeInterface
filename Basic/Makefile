CXX=g++
INCLUDE_PATH=/usr/lib/jvm/java-17-openjdk-armhf/include/
LNX_INCLUDE_PATH=/usr/lib/jvm/java-17-openjdk-armhf/include/linux
CXX_FLAGS=-c -fPIC -I$(INCLUDE_PATH) -I$(LNX_INCLUDE_PATH)
CXX_SO_FLAGS=-shared -fPIC -o libhello.so HelloWorldJNI.o -lc

all: header HelloWorldJNI javac

HelloWorldJNI: HelloWorldJNI.cpp
	$(CXX) $(CXX_FLAGS) HelloWorldJNI.cpp -o HelloWorldJNI.o
	$(CXX) $(CXX_SO_FLAGS)

header:
	javac -h . HelloWorldJNI.java

clean:
	rm *.so
	rm HelloWorldJNI.class
	rm HelloWorldJNI.o
	rm HelloWorldJNI.h

javac:
	javac HelloWorldJNI.java
