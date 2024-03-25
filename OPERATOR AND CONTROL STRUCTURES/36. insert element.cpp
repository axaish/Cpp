#include <iostream>
void insertElement(int arr[], int& size, int element, int position) {
    if (position < 0 || position > size) {
        std::cout << "Invalid position\n";
        return;
    }
    
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = element;
    
    size++;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    int element, position;
    
    std::cout << "Enter the element to be inserted: ";
    std::cin >> element;

    std::cout << "Enter the position to insert the element (0 to " << size << "): ";
    std::cin >> position;

    insertElement(arr, size, element, position);

    std::cout << "Modified Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

