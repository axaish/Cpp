#include <iostream>
typedef void (*CallbackFunc)(int);
void performOperation(int value, CallbackFunc callback) {
    std::cout << "Performing operation with value: " << value << std::endl;
    callback(value * 2); 
}
void callbackFunction1(int result) {
    std::cout << "Callback function 1 called with result: " << result << std::endl;
}
void callbackFunction2(int result) {
    std::cout << "Callback function 2 called with result: " << result << std::endl;
}

int main() {
    performOperation(5, callbackFunction1);

    performOperation(8, callbackFunction2);

    return 0;
}
