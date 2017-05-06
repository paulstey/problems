// Sieve of Eratosthenes
// Prime sieve for quickly obtaining
// prime numbers less than some value n;
// Author: Paul Stey
// Date: 2017-03-14

#include <vector>


std::vector<int> primes(int n) {
    std::vector<bool> prime_flag (n+1, true);
    int i, j;

    // Cross out non-primes by removing all multiples
    // of our existing primes. The incrementing of the
    // loop index `j` in the nested loop is the key.
    for (i = 2; i*i <= n; i++) {
    	if (prime_flag[i] == true) {
	    for (j = i*2; j <= n; j += i) {
		prime_flag[j] = false;
	    }
	}
    }

    // collect the non-crossed out integers (i.e., primes)
    std::vector<int> res;
    for (i = 2; i <= n; i++) {
    	if (prime_flag[i] == true) {
    	    res.push_back(i);
    	}
    }

    return res;
}

