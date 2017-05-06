#include <iostream>
#include <string>

int getinput(std::string prompt) {
    int res;
    std::cout << prompt;
    std::cin >> res;
    return res;
}

