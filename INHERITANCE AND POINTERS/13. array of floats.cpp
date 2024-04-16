#include <iostream>

int main() {
    float arr[] = {3.14f, 2.718f, 1.414f, 0.577f, 1.732f};
    float* ptr = arr;

    std::cout << "Values of the array using pointer:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
