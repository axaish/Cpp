#include <iostream>

int main() {
    int dividend, divisor;
    std::cout << "Enter the dividend: ";
    std::cin >> dividend;

    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    if (divisor == 0) {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    } else {
        double result = static_cast<double>(dividend) / divisor;
        std::cout << "Result of division: " << result << std::endl;
    }

    return 0;
}
