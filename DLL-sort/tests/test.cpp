#include <cassert>
#include <cstdint>
#include <algorithm>
#include <vector>
#include <random>
#include <iostream>
#include "Libsort.h"

void test_empty() {
    int a[1] = {0};
    sort_int(a, 0);
    sort_uint64(reinterpret_cast<uint64_t*>(a), 0);
}

void test_simple_int() {
    int a[] = {3, 1, 2};
    sort_int(a, 3);
    assert(a[0] == 1 && a[1] == 2 && a[2] == 3);
}

void test_uint64_extremes() {
    uint64_t a[] = {UINT64_MAX, 0, 42};
    sort_uint64(a, 3);
    assert(a[0] == 0 && a[1] == 42 && a[2] == UINT64_MAX);
}

void test_random_vs_std() {
    std::mt19937 rng(42);
    std::uniform_int_distribution<int> dist(-1000, 1000);
    for (int t = 0; t < 100; t++) {
        size_t n = rng() % 500;
        std::vector<int> a(n);
        for (auto& x : a) x = dist(rng);
        auto expected = a;
        std::sort(expected.begin(), expected.end());
        sort_int(a.data(), n);
        assert(a == expected);
    }
}

int main() {
    test_empty();
    test_simple_int();
    test_uint64_extremes();
    test_random_vs_std();
    std::cout << "All tests passed\n";
    return 0;
}