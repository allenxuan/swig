//
// Created by Xuanyi on 2021/10/9.
//

#ifndef SWIG_SWIG_JNI_SIGNATURE_STRUCT_H
#define SWIG_SWIG_JNI_SIGNATURE_STRUCT_H
typedef struct {
    const char *javaFunName;
    const char *javaFunSignature;
    const char *nativeFunString;
} SwigJniSignatureStruct;
#endif //SWIG_SWIG_JNI_SIGNATURE_STRUCT_H
