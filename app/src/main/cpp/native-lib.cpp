#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_usuario_myappopencv_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

    cv::Mat output = cv::Mat::zeros( 120, 350, CV_8UC3 );

    return env->NewStringUTF(hello.c_str());
}
