//
// Created by hari on 6/2/19.
//

#include <jni.h>
#include <string>
#include "helloJni.h"



jstring JNICALL Java_com_hello_jni_JniUtil_sayHello(JNIEnv *env, jobject thisObj) {
//printf("Hello World!\n");
    std::string usernam;
    usernam=operation();
  // int count=caluation();


return env->NewStringUTF(usernam.c_str());
}

std::string operation() {
    std::string uname="admin";
    return uname;
}



