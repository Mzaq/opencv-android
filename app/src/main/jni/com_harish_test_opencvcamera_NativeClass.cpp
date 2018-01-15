#include <com_harish_test_opencvcamera_NativeClass.h>

JNIEXPORT jstring JNICALL Java_com_harish_test_opencvcamera_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass obj){
    return env->NewStringUTF("This is message from JNI");
  }


