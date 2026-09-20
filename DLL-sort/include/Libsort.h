#pragma once

#include <cstdint>
#include <cstddef>

// Определяем макрос для экспорта/импорта символов
#ifdef _WIN32
    #ifdef LIBSORT_EXPORTS
        #define LIBSORT_API __declspec(dllexport)
    #else
        #define LIBSORT_API __declspec(dllimport)
    #endif
#else
    // На Linux (и macOS) используем атрибут видимости
    #define LIBSORT_API __attribute__((visibility("default")))
#endif

// extern "C" предотвращает искажение имён (name mangling),
// что упрощает использование из других языков
extern "C" {
    LIBSORT_API void sort_int(int* arr, size_t n);
    LIBSORT_API void sort_double(double* arr, size_t n);
    LIBSORT_API void sort_float(float* arr, size_t n);
    LIBSORT_API void sort_strings(char** arr, size_t n);
    LIBSORT_API void sort_uint64(uint64_t* arr, size_t n);
    LIBSORT_API void sort_generic(void* base, size_t n, size_t elem_size,
                                  int (*cmp)(const void*, const void*));
}