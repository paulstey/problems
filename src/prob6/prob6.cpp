// Proj Euler 6: Sum Square Difference
// Fin difference between sum of squares and square of sums
// Author: Paul Stey
// Date: 2017-04-22
// CXXFLAGS: -Wall

#include<iostream>
#include<vector>
#include<cmath>

int sum_of_squares(int n) {
    int res = 0;
    int i;
    for (i = 1; i <= n; i++) {
	res += std::pow(i, 2);;
    }
    return res;
}


int square_of_sums(int n) {
    int res = 0;
    int i;
    for (i = 1; i <= n; i++) {
	res += i;
    }
    res = std::pow(res, 2);
    
    return res;
}



int main() {
    int res, n_max = 100;
    res = square_of_sums(n_max) - sum_of_squares(n_max);
    std::cout << res << std::endl;
}

