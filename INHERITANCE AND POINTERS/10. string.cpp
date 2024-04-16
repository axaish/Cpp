#include <iostream>
#include <string>

int main() {
    std::string* ptr;
    std::string text = "Hello, World!";
    ptr = &text;

    std::cout << "Value of the string using pointer: " << *ptr << std::endl;

    return 0;
}
