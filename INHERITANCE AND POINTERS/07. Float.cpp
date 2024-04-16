#include <iostream>

int main() {
    float* ptr;
    float num = 3.14;
    ptr = &num;

    std::cout << "Value of the float using pointer: " << *ptr << std::endl;

    return 0;
}
