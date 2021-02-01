#include <jni.h>
#include <string>
#include<iostream>
#include <android/log.h>
using namespace std;

//structure of defining a method
extern "C" JNIEXPORT jstring JNICALL
//first word is Java
//second is package name , here "com_example_myapplication"
//third is MainActivity
// fourth is method name , here "stringFromJNI"
// in c++ , we are defining the function that was declared in MainActivity.java file
Java_com_example_myapplication_MainActivity_stringFromJNI(
        //JNI Environment - env = environment variable
        JNIEnv* env,
        //jni object
        jobject /* this */) {
     //defining a string
    string hello = "Hello World with Android NDK(Native Development Kit)";
    //string bye = "Bye from C++";
    return env->NewStringUTF(hello.c_str());
}