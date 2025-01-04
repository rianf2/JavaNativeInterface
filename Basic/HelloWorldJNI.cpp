#include <iostream>

#include "HelloWorldJNI.h"

JNIEXPORT void JNICALL Java_HelloWorldJNI_sayHello(JNIEnv *, jobject)
{
    std::cout << "Hello World from C++!\n";
}
