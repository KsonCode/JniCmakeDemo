# include <jni.h>
# include <stdio.h>

extern "C"
{

    JNIEXPORT jstring JNICALL Java_com_bwie_jnindkdemo_MainActivity_getString(JNIEnv *env, jobject obj ){
       // 参数说明
       // 1. JNIEnv：代表了VM里面的环境，本地的代码可以通过该参数与Java代码进行操作
       // 2. obj：定义JNI方法的类的一个本地引用（this）
    return env -> NewStringUTF("xxxxxxxxxxxxxxxx");
    // 上述代码是返回一个String类型的"Hello i am from JNI!"字符串
    }
}extern "C"
JNIEXPORT jstring JNICALL
Java_com_bwie_jnicmakedemo_JniUtils_getString(JNIEnv *env, jobject instance) {

    // TODO


    return env->NewStringUTF(returnValue);
}