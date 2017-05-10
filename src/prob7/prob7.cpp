// Project Euler: Problem 7
// Generate 10001 prime number
// Author: Paul Stey
// Date: 2017-05-06
// Status: Solved
// CXXFLAGS: -Wall



#include <iostream>
#include <string>
#include <vector>
#include <cmath>

int getinput(std::string prompt);

std::vector<int> primes(int n);

int nth_prime(int n) {
    int n_primes = (2 * n) * log(static_cast<double>(n));
    std::cout << n_primes << std::endl;
    std::vector<int> prime_vec = primes(n_primes);
    std::cout << prime_vec.size() << std::endl;
    int res = prime_vec[n-1];
    return res;
}


int main() {
    // get user input for number of primes
    int n = getinput("Enter max prime:");

    int res = nth_prime(n);
    
    std::cout << res << std::endl;
}

