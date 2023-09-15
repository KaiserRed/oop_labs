#include <iostream>
#include "time.hpp"


int main() {
    std::string input;
    std::cout << "Enter the time: ";
    std::getline(std::cin, input);
    std::cout << time(input);
    return 0;
}