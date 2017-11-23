// Sum of Even Fibonacci Numbers
// This program takes the sum of even Fibonacci
// numbers less than sum specified value
// Author: Paul Stey
// Date: 2017-03-25
// CXXFLAGS: -Wall -Wpedantic
// Status:

#include <iostream>
#include <algorithm>    // std::swap()
#include <ctime>



bool is_even(int n) {
    bool res = false;
    
    if (n % 2 == 0) {
	res = true;
    }
    return res;
}


int64_t sum_even_fib(int n) {
    int64_t a, b, tmp;
    a = 1;
    b = 1;
    int64_t runsum = 0;
    for (size_t i = 3; b <= n; i++) {
	tmp = b;                
	b = a + b;

	std::swap(a, tmp);
	if (is_even(b)) {
	    runsum += b;
	}
    }
    return runsum;
}


int get_input() {
    int n;
    std::cout << "Max Fibonacci number: ";
    std::cin >> n;
    return n;
}


int main() {
    int n = get_input();

    clock_t t0 = clock();
    int64_t res = sum_even_fib(n);
    clock_t runtime = clock() - t0;

    std::cout << res << std::endl;
    std::cout << "Total running time: "<< static_cast<float>(runtime)/CLOCKS_PER_SEC << " seconds" << std::endl;
}

