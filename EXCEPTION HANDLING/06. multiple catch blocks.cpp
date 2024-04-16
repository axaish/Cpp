#include <iostream>
#include <stdexcept>

void someFunction(int value) {
    if (value == 0) {
        throw std::logic_error("Value cannot be zero!");
    } else if (value < 0) {
        throw std::runtime_error("Value cannot be negative!");
    }
}

int main() {
    try {
        someFunction(0);
    } catch(const std::logic_error& e) {
        std::cerr << "Caught logic_error: " << e.what() << std::endl;
    } catch(const std::runtime_error& e) {
        std::cerr << "Caught runtime_error: " << e.what() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}

