#include <iostream>

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
    char* ptr = arr;

    std::cout << "Values of the array using pointer: ";
    while (*ptr != '\0') {
        std::cout << *ptr;
        ptr++;
    }
    std::cout << std::endl;

    return 0;
}
