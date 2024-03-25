#include <iostream>
template<typename T>
T findMax(const T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int intArray[] = {3, 5, 2, 8, 1};
    int intMax = findMax(intArray, 5);
    std::cout << "Maximum element in integer array: " << intMax << std::endl;
    float floatArray[] = {3.5f, 2.1f, 4.8f, 1.2f, 5.7f};
    float floatMax = findMax(floatArray, 5);
    std::cout << "Maximum element in float array: " << floatMax << std::endl;
    double doubleArray[] = {2.3, 4.5, 1.1, 5.6, 3.8};
    double doubleMax = findMax(doubleArray, 5);
    std::cout << "Maximum element in double array: " << doubleMax << std::endl;

    return 0;
}
