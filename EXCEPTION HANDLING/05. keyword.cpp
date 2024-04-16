#include <iostream>
#include <stdexcept>

void someFunction(int value) {
    if (value < 0) {
        throw std::runtime_error("Value cannot be negative!");
    }
}

int main() {
    try {
        someFunction(-5);
    } catch(const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
