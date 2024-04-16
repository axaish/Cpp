#include <iostream>

void modifyValues(int* a, int* b) {
    *a *= 2;  
    *b *= 3; 
}

int main() {
    int x = 5, y = 7;
    std::cout << "Initial values: x = " << x << ", y = " << y << std::endl;
    modifyValues(&x, &y);
    std::cout << "Modified values: x = " << x << ", y = " << y << std::endl;
    return 0;
}
