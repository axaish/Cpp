#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    std::cout << "Enter the number of terms in Fibonacci sequence: ";
    std::cin >> n;
    std::cout << "Fibonacci sequence up to " << n << " terms: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
