#include "lib.h"

unsigned long long factorial(unsigned long long n) {
    unsigned long long result = 1;
    for (unsigned long long i = 1; i <= n; ++i)
        result *= i;
    return result;
}
