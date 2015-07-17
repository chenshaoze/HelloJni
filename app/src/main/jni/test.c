#include <string.h>
#include <jni.h>

int innerAdd(int a, int b) {
    return a + b;
}

jint Java_com_example_hellojni_HelloJni_add( JNIEnv* env, jint a, jint b ) {

    return innerAdd(a, b);
}