#include "main.h"

#include <iostream>

int main() {
    computeFactorial(std::cin, std::cout);
    return 0;
}

void computeFactorial(std::istream &in, std::ostream &out) {
    unsigned long long n;
    in >> n;
    out << factorial(n);
}
