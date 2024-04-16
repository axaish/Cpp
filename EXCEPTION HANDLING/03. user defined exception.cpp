#include <iostream>
#include <stdexcept>

class CustomException : public std::exception {
public:
    CustomException(const std::string& message) : m_message(message) {}

    const char* what() const noexcept override {
        return m_message.c_str();
    }

private:
    std::string m_message;
};

void riskyFunction(int option) {
    if (option == 1) {
        throw CustomException("Custom exception: Something went wrong in riskyFunction()");
    }
}

int main() {
    try {
        riskyFunction(1);
    } catch (const CustomException& e) {
        std::cerr << "Caught custom exception: " << e.what() << std::endl;
    }

    return 0;
}
