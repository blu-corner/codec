from libc.stdint cimport uint64_t
from libcpp.string cimport string
from libcpp cimport bool


cdef extern from "guid.h":

    struct simGuid:
        uint64_t mSubGuids[4];

    void simGuid_init(simGuid* guid, uint64_t seed)
    simGuid* simGuid_increment(simGuid* guid, int cnt)
    string simGuid_toString(simGuid* guid)
    bool simGuid_strToGuid(string str, simGuid* guid)

cdef class Guid:
    cdef simGuid _thisptr
    cdef void __attach__(Guid self, simGuid d)
