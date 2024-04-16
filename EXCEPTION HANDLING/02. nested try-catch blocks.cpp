#include <iostream>
#include <stdexcept>

void riskyFunction(int option) {
    if (option == 1) {
        throw std::logic_error("Logic error occurred in riskyFunction()");
    } else if (option == 2) {
        throw std::runtime_error("Runtime error occurred in riskyFunction()");
    }
}

int main() {
    try {
        try {
            riskyFunction(1);
        } catch (const std::logic_error& e) {
            std::cerr << "Caught logic_error inside inner try block: " << e.what() << std::endl;
        }
        
        try {
            riskyFunction(2);
        } catch (const std::runtime_error& e) {
            std::cerr << "Caught runtime_error inside another inner try block: " << e.what() << std::endl;
        }
        
        std::cout << "Operations completed successfully." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught exception in outer try block: " << e.what() << std::endl;
    }

    return 0;
}
