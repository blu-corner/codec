from cython.operator cimport dereference as deref
from pyutils cimport simGuid

cdef class Guid:
    def __cinit__(Guid self):
        pass

    def __init__(Guid self, int seed=1, create=True):
        if create:
            self._thisptr = simGuid ()
            simGuid_init(&(self._thisptr), seed)

    def __dealloc__(Guid self):
        pass

    def __repr__(Guid self):
        return simGuid_toString(&self._thisptr)

    def __add__(Guid self, int x):
        self._thisptr = deref(simGuid_increment(&self._thisptr, x))
        return self

    cdef void __attach__(Guid self, simGuid d):
        self._thisptr = d
