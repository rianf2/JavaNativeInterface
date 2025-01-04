#include <iostream>

#include "ExamplePatametersJNI.h"

JNIEXPORT jlong JNICALL Java_ExamplePatametersJNI_sumIntegers(JNIEnv *, jobject, jint first, jint second)
{   
    return (long) first + (long) second;
}

JNIEXPORT jstring JNICALL Java_ExamplePatametersJNI_sayHelloTo(JNIEnv *env, jobject thisObj, jstring name, jboolean isFemale)
{
    const char *namePtr = env->GetStringUTFChars(name, NULL);

    std::string title;

    if(isFemale)
    {
        title = "Ms. ";
    }
    else
    {
        title = "Mr. ";
    }

    std::string fullname = title + namePtr;
    
    return env->NewStringUTF(fullname.c_str());
}