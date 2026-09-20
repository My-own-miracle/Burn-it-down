#include "Libsort.h"
#include <algorithm>
#include <cstdlib>
#include <cstring>

extern "C" {

LIBSORT_API void sort_int(int* arr, size_t n) { 
    return std::sort(arr, arr + n); 
}

LIBSORT_API void sort_double(double* arr, size_t n) { 
    return std::sort(arr, arr + n); 
}

LIBSORT_API void sort_float(float* arr, size_t n) { 
    return std::sort(arr, arr + n); 
}

LIBSORT_API void sort_strings(char** arr, size_t n) { 
    std::sort(arr, arr + n, [](const char* a, const char* b) {
        return std::strcmp(a, b);
    });
}

LIBSORT_API void sort_uint64(uint64_t* arr, size_t n) { 
    return std::sort(arr, arr + n);
}
    
LIBSORT_API void sort_generic(void* base, size_t n, size_t elem_size,
                                  int (*cmp)(const void*, const void*)) { 
    return std::qsort(base, n, elem_size, cmp); 
}

}