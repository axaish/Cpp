#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1; 
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number < 0) {
        std::cout << "Error: Please enter a non-negative integer." << std::endl;
        return 1; 
    }
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }
    std::cout << "The factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}
