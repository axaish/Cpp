#include <iostream>
#include <stdexcept>

void riskyFunction() {
    bool success = false;
    if (!success) {
        throw std::runtime_error("An error occurred inside riskyFunction()");
    }
}

int main() {
    try {
        riskyFunction();
        std::cout << "Operation successful!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    } {
        std::cout << "Cleaning up resources..." << std::endl;
    }

    return 0;
}

