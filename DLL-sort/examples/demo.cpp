#include <iostream>
#include <cstdint>
#include "Libsort.h"

template <typename T>
void print(const char* pref, const T* arr, size_t n) {
    std::cout << pref << ": {";
    for (size_t i = 0; i < n-1; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << arr[n-1] << "}" << std::endl;
}

int main(int argc, char** argv) {
    int arr_int[] = {9, 8, 7, 3, 1};
    print("before", arr_int, 5);
    sort_int(arr_int, 5);
    print("after", arr_int, 5);

    uint64_t arr_uint[] = {60ULL, 5ULL, 7ULL, 2ULL, 80ULL};
    print("before", arr_uint, 5);
    sort_uint64(arr_uint, 5);
    print("after", arr_uint, 5);

    double arr_double[] = {0.1, 0.000005, 15.8, 80.9, 0.03};
    print("before", arr_double, 5);
    sort_double(arr_double, 5);
    print("after", arr_double, 5);

    return 0;
}
