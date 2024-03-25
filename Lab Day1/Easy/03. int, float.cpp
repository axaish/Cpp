#include <iostream>

int main() {
    int myInteger = 10;
    float myFloat;
    myFloat = static_cast<float>(myInteger); 
    std::cout << "Integer: " << myInteger << std::endl;
    std::cout << "Float: " << myFloat << std::endl;

    return 0;
}
