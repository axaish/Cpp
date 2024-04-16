#include <iostream>
#include <stdexcept>

void someFunction(int value) {
    if (value == 0) {
        throw std::runtime_error("Division by zero error!");
    }
}

int main() {
    int value;
    std::cout << "Enter a value: ";
    std::cin >> value;

    try {
        someFunction(value);
        std::cout << "Result: " << 10 / value << std::endl;
    } catch(const std::runtime_error& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } catch(...) {
        std::cerr << "Caught unknown exception!" << std::endl;
    }

    return 0;
}
