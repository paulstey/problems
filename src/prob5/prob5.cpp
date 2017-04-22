// Proj Euler 5: Smallest Multiple
// Find smallest positive number evenly divisible by numbers from 1 to 20
// Author: Paul Stey
// Date: 2017-04-22
// CXXFLAGS: -Wall

#include<iostream>


bool is_case(int n, int maxval) {
    bool res = true;
    for (int i = 1; i <= maxval; i++) {
	if (n % i != 0) {
	    res = false;
	    break;
	}
    }
    return res;
}


int main() {
    long long int res, max_iter;
    max_iter = 100000000000;
    res = 1;
    
    int maxval = 20;
    int i;
    for (i = maxval; i <= max_iter; i += maxval) {
	if (is_case(i, maxval)) {
	    res = i;
	    break;
	}
    }
    std::cout << res << std::endl;
}


	
