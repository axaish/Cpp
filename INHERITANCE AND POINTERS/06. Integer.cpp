#include <iostream>

int main() {
    int* ptr;
    int num = 42;
    ptr = &num;

    std::cout << "Value of the integer using pointer: " << *ptr << std::endl;

    return 0;
}
