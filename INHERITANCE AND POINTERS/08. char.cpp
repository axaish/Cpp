#include <iostream>

int main() {
    char* ptr;
    char letter = 'A';
    ptr = &letter;

    std::cout << "Value of the char using pointer: " << *ptr << std::endl;

    return 0;
}
