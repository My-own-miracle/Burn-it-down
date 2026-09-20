#include <iostream>
#include <cstdint>
#include "Libsort.h"

int main() {
    int arr[] = {5, 2, 4, 8, 1};
    size_t n = sizeof(arr)/sizeof(arr[0]);

    sort_int(arr, n);

    std::cout << "int: " << "{";
    for (size_t i = 0; i < n - 1; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << arr[n-1] << "}" << std::endl;

    return 0;
}