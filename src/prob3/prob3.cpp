// Project Euler: Problem 3
// Author: Paul Stey
// Date: 2017-05-21
// CXXFLAGS: -std=c++11
// Status: in progress...

#include <iostream>
#include <vector>


std::vector<int> primes(int n) {
    std::vector<bool> prime_flag(n + 1, true);   // init vector of all trues    

    // Cross out non-primes by removing all multiples of our existing primes.
    // The incrementing of the loop index `j` gives us multiples of our primes
    for (int i = 2; i*i <= n; i++) {
	if (prime_flag[i] == true) {
	    for (int j = i*2; j <= n; j += i) {
		prime_flag[j] = false;
	    }
	}
    }

    std::vector<int> res;
    for (int i = 2; i <= n; i++) {
	if (prime_flag[i] == true) {
	    res.push_back(i);
	}
    }
    return res;
}


int get_input() {
    int n;
    std::cout << "Enter maximum integer to check for primality: ";
    std::cin >> n;
    std::cout << "Checking up to " << n << std::endl;
    return n;
}



int main() {
    int n = get_input();
    std::vector<int> prime_vec;
    prime_vec = primes(n);

    int nprimes = prime_vec.size();

    for (int p : prime_vec) {
	std::cout << p << std::endl;
    }

    std::cout << "Found " << nprimes << " primes less than " << n << std::endl;
}

    
