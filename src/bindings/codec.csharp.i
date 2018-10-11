/*
 * Copyright 2014-2018 Neueda
 */
%typemap(throws, canthrow=1) std::runtime_error {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpApplicationException, $1.what(), NULL);
    return $null;
}

%typemap(csimports) SWIGTYPE %{
using Neueda.Cdr;
%}

SWIG_CSBODY_PROXY(public, public, SWIGTYPE)
SWIG_CSBODY_TYPEWRAPPER(public, public, public, SWIGTYPE)

%include "typemaps.i";

%apply void *VOID_INT_PTR { void* bytes }
%apply void *VOID_INT_PTR { const void* getPointer() }

%include "codec.i"
