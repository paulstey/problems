#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

double order_of_magnitude(uint64_t n) {
    double logval = log10(n);
    double order = floor(logval);
    return order;
}


uint64_t concat_primes(uint64_t a, uint64_t b) {
    double ord_b = order_of_magnitude(b);
    uint64_t multiplier = (uint64_t)pow(10, (1.0 + ord_b));
    uint64_t res = (a * multiplier) + b;
    return res;
}


int main(int argc, char* argv[]) {
    uint64_t a = atoi(argv[1]);
    uint64_t b = atoi(argv[2]);
    uint64_t res = concat_primes(a, b);

    printf("%llu", res);
}

