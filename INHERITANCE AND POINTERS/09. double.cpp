#include <iostream>

int main() {
    double* ptr;
    double value = 3.14159;
    ptr = &value;

    std::cout << "Value of the double using pointer: " << *ptr << std::endl;

    return 0;
}
