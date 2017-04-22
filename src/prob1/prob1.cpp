// Project Euler: Problem 1
// Take sum of all integers that are multiples of 3 or 5
// Date: 2017-03-11
// Author: Paul Stey
// CXXFLAGS: -Wall

#include<iostream>

bool is_case(int n) {
    bool res = false;
    
    if (n % 3 == 0) {
	res = true;
    }
    else if (n % 5 == 0) {
	res = true;
    }
    return res;
}


int get_maxval() {
    int res;
    std::cout << "Enter maxval: " << std::endl;
    std::cin >> res;
    return res;
}


int main() {
    int res = 0;
    int maxval = get_maxval();
	
    for (int i = 3; i < maxval; ++i) {
	if (is_case(i)) {
	    res += i;
	}
    }
    std::cout << "Solution: " << res << std::endl;
}
