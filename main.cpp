#include <iostream>
#include "operations.h"

int main() {
    int num1, num2; 

    std::cin >> num1;
    std::cin >> num2;

    int sumResult = sum(num1, num2);
    std::cout << sumResult << std::endl;

    int multiplyResult = multiply(num1, num2);
    std::cout << multiplyResult << std::endl;

    return 0;
}
