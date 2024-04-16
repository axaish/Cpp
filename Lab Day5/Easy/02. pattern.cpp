#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows for the pattern: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        for (int j = i; j < 2 * i; ++j) {
            std::cout << j;
        }

        for (int j = 2 * i - 2; j >= i; --j) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}
