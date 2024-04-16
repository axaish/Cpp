#include <iostream>

int main() {
    int dividend, divisor;
    double quotient;
    std::cout << "Enter dividend: ";
    std::cin >> dividend;
    std::cout << "Enter divisor: ";
    std::cin >> divisor;

    try {
        if (divisor == 0) {
            throw "Division by zero error!";
        }

        quotient = static_cast<double>(dividend) / divisor;
        std::cout << "Quotient: " << quotient << std::endl;
    }
    catch (const char* error) {
        std::cerr << "Exception caught: " << error << std::endl;
    }

    return 0;
}
