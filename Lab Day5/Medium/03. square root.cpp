#include <iostream>
#include <cmath>
void findSquareRoot(double number) {
    if (number < 0) {
        std::cerr << "Cannot find square root of a negative number." << std::endl;
        return;
    }

    double squareRoot = std::sqrt(number);
    std::cout << "Square root of " << number << " is: " << squareRoot << std::endl;
}
inline void incrementDecrement(int& num) {
    num++;
    num--;
}

int main() {
    double num;
    std::cout << "Enter a number to find its square root: ";
    std::cin >> num;
    findSquareRoot(num);

    int x = 5;
    std::cout << "Initial value of x: " << x << std::endl;
    incrementDecrement(x);

    std::cout << "After incrementing and decrementing, value of x: " << x << std::endl;

    return 0;
}
