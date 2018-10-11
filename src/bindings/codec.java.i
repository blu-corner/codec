/*
 * Copyright 2014-2018 Neueda
 */
// binary interfaces
%include "cstring.i"

%pragma(java) jniclasscode=%{
     // jniclasscode pragma code: Static block so that the JNI class loads the C++ DLL/shared object when the class is loaded
     static {
         try {
             System.loadLibrary("Codec");
         } catch (UnsatisfiedLinkError e) {
             System.err.println("Native code library failed to load.\n" + e);
             System.exit(1);
         }
     }
%}

%include "exception.i"
%exception {
    try {
        $action
    } catch (std::exception &e) {
        std::string s("codec-error: "), s2(e.what());
        s = s + s2;
        SWIG_exception(SWIG_RuntimeError, s.c_str());
    }
}


%{
#include <stdexcept>
#include "jni.h"
    
static JavaVM *cached_jvm = 0;
    
JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *jvm, void *reserved) {
    cached_jvm = jvm;
    return JNI_VERSION_1_2;
}

static JNIEnv * JNU_GetEnv() {
    JNIEnv *env;
    jint rc = cached_jvm->GetEnv((void **)&env, JNI_VERSION_1_2);
    if (rc == JNI_EDETACHED)
        throw std::runtime_error("current thread not attached");
    if (rc == JNI_EVERSION)
        throw std::runtime_error("jni version not supported");
    return env;
}
%}
     
%extend neueda::Buffer {
    jbyteArray getByteArray()
    {
        JNIEnv* jenv = JNU_GetEnv();
        if (jenv != 0)
        {
            jbyteArray jb = (jenv)->NewByteArray (self->getLength());
            (jenv)->SetByteArrayRegion(jb,
                                       0,
                                       self->getLength (),
                                       (jbyte *)self->getPointer ());
            return jb;
        }
        return NULL;
    }

    /* jbyteBuffer getByteBuffer() */
    /* { */
    /*     JNIEnv* jenv = JNU_GetEnv(); */
    /*     if (jenv != 0) */
    /*     { */
    /*         return env->NewDirectByteBuffer(self->getPointer (), */
    /*                                         self->getLength ()); */
    /*     } */
    /*     return NULL; */
    /* } */
}

%apply (char *STRING, int LENGTH) { (void* bytes, size_t length) }
%apply (char *STRING, int LENGTH) { (const char* buffer, size_t length) }     

%pragma(java) moduleimports=%{
import com.neueda.cdr.Cdr;
%}

%pragma(java) jniclassimports=%{
import com.neueda.cdr.Cdr;
%}

%typemap(javaimports) SWIGTYPE %{
import com.neueda.cdr.Cdr;
%}

SWIG_JAVABODY_PROXY(public, public, SWIGTYPE)
SWIG_JAVABODY_TYPEWRAPPER(public, public, public, SWIGTYPE)

%include "codec.i"
