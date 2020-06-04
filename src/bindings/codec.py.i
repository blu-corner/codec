/*
 * Copyright 2014-2018 Neueda
 */
// binary interfaces
%include "cstring.i"

%feature("autodoc");

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

%extend neueda::Buffer {
    void getByteArray (char** oData, size_t* oLength)
    {
        *oLength = self->getLength ();
        *oData = (char*)malloc (*oLength);
        
        memcpy (*oData, self->getPointer (), *oLength);
    }     
}

%extend neueda::codec {
    static PyObject* toNamedDict (PyObject* v)
    {
        PyGILState_STATE gil = PyGILState_Ensure ();
        if (PyDict_Check (v))
        {
            PyObject* ret  = PyDict_New ();
            PyObject* keys = PyDict_Keys (v);
            Py_ssize_t len = PyList_Size (keys);

            for (Py_ssize_t idx = 0; idx < len; ++idx)
            {
                PyObject* key     = PyList_GetItem (keys, idx);
                PyObject* value   = PyDict_GetItem (v, key);

                cdrKey_t key_t    = PyLong_AsSsize_t (key);
                std::string key_s = neueda::FieldUtils::getFieldName (key_t);

                if (PyList_Check (value))
                {
                    Py_ssize_t len    = PyList_Size (value);
                    PyObject* nl = PyList_New (len);

                    for (Py_ssize_t idx = 0; idx < len; ++idx)
                    {
                        PyObject* py_obj = PyList_GetItem (value, idx);
                        if (!PyDict_Check (py_obj))
                        {
                            PyGILState_Release (gil);
                            return NULL;
                        }
                        PyObject* d = neueda_codec_toNamedDict (py_obj);
                        PyList_SetItem (nl, idx, d);
                    }
                    PyDict_SetItem (ret, PyString_FromString (key_s.c_str ()), nl);
                }
                else
                {
                    cdrKey_t key_t    = PyLong_AsSsize_t (key);
                    std::string key_s = neueda::FieldUtils::getFieldName (key_t);

                    PyDict_SetItem (ret, PyString_FromString (key_s.c_str ()), value);
                }
            }

            PyGILState_Release (gil);
            return ret;
        }

        PyGILState_Release (gil);
        return NULL;
    }
}

%apply (char *STRING, int LENGTH) { (void* bytes, size_t length) }
%apply (char *STRING, int LENGTH) { (const char* buffer, size_t length) }
%cstring_output_allocate_size(char** oData, size_t* oLength, free(*$1));

%include "codec.i"
