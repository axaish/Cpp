#include <iostream>
#include <cstdlib> 
int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int* arr = new (std::nothrow) int[size];
    if (arr == NULL) {
        std::cout << "Error: Memory allocation failed!" << std::endl;
        return 1; 
    }
    std::cout << "Enter " << size << " integers for the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;

    return 0;
}
