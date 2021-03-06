/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_mozilla_universalchardet_UniversalDetector */

#ifndef _Included_org_mozilla_universalchardet_UniversalDetector
#define _Included_org_mozilla_universalchardet_UniversalDetector
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_mozilla_universalchardet_UniversalDetector
 * Method:    chardet_create
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_mozilla_universalchardet_UniversalDetector_chardet_1create
  (JNIEnv *, jclass);

/*
 * Class:     org_mozilla_universalchardet_UniversalDetector
 * Method:    chardet_destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_mozilla_universalchardet_UniversalDetector_chardet_1destroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_mozilla_universalchardet_UniversalDetector
 * Method:    chardet_handle_data
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_org_mozilla_universalchardet_UniversalDetector_chardet_1handle_1data
  (JNIEnv *, jclass, jlong, jbyteArray,jint,jint);

/*
 * Class:     org_mozilla_universalchardet_UniversalDetector
 * Method:    chardet_data_end
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_mozilla_universalchardet_UniversalDetector_chardet_1data_1end
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_mozilla_universalchardet_UniversalDetector
 * Method:    chardet_reset
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_mozilla_universalchardet_UniversalDetector_chardet_1reset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_mozilla_universalchardet_UniversalDetector
 * Method:    chardet_get_charset
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_mozilla_universalchardet_UniversalDetector_chardet_1get_1charset
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
