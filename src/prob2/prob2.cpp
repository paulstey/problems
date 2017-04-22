// Sum of Even Fibonacci Numbers
// This program takes the sum of even Fibonacci
// numbers less than sum specified value
// Author: Paul Stey
// Date: 2017-03-25

#include<iostream>
#include<algorithm>    // std::swap()
#include<ctime>

bool is_even(int n) {
    bool res = false;
    if (n % 2 == 0) {
	res = true;
    }
    return res;
}


long long int sum_even_fib(int n) {
    long long int a, b, tmp;
    int i;
    a = 1;
    b = 1;
    long long int runsum = 0;
    for (i = 3; b <= n; i++) {
	tmp = b;                
	b = a + b;

	std::swap(a, tmp);
	if (is_even(b)) {
	    //std::cout << runsum << std::endl;
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
    long long int res = sum_even_fib(n);
    clock_t runtime = clock() - t0;

    std::cout << res << std::endl;
    std::cout << "Total running time: "<< static_cast<float>(runtime)/CLOCKS_PER_SEC << " seconds" << std::endl;
}

