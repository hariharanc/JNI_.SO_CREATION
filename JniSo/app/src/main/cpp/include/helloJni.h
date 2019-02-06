//
// Created by hari on 6/2/19.
//

#ifndef HELLOJNI_HELLOJNI_H
#define HELLOJNI_HELLOJNI_H

#include <jni.h>

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     HelloJNI
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT jstring JNICALL Java_com_hello_jni_JniUtil_sayHello(JNIEnv *, jobject);
std::string operation();
#ifdef __cplusplus
}
#endif


#endif //HELLOJNI_HELLOJNI_H
