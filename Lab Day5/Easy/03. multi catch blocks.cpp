#include <iostream>

int main() {
    try {
        int num1 = 10;
        int num2 = 0;
        if (num2 == 0) {
            throw "Division by zero error";
        }
        int result = num1 / num2;
        std::cout << "Result: " << result << std::endl;
    }
    catch (const char* msg) {
        std::cerr << "Error: " << msg << std::endl;
    }
    catch (std::exception& e) {
        std::cerr << "Standard exception caught: " << e.what() << std::endl;
    }
    catch (...) {
    	
        std::cerr << "An unknown error occurred" << std::endl;
    }

    return 0;
}
