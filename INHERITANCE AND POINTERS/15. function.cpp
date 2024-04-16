#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int);
    ptr = add;

    int result = ptr(3, 4);

    std::cout << "Result of add function: " << result << std::endl;

    return 0;
}
