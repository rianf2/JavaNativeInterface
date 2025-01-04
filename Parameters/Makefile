CXX=g++
INCLUDE_PATH=/usr/lib/jvm/java-17-openjdk-armhf/include/
LNX_INCLUDE_PATH=/usr/lib/jvm/java-17-openjdk-armhf/include/linux
CXX_FLAGS=-c -fPIC -I$(INCLUDE_PATH) -I$(LNX_INCLUDE_PATH)
CXX_SO_FLAGS=-shared -fPIC -o libparameters.so ExamplePatametersJNI.o -lc

all: header ExamplePatametersJNI javac

ExamplePatametersJNI: ExamplePatametersJNI.cpp
	$(CXX) $(CXX_FLAGS) ExamplePatametersJNI.cpp -o ExamplePatametersJNI.o
	$(CXX) $(CXX_SO_FLAGS)

header:
	javac -h . ExamplePatametersJNI.java

clean:
	rm *.so
	rm ExamplePatametersJNI.class
	rm ExamplePatametersJNI.o
	rm ExamplePatametersJNI.h

javac:
	javac ExamplePatametersJNI.java
