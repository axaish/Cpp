#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr1[maxSize];
    int arr2[maxSize];
    int merged[maxSize * 2];
    int n1, n2;

    cout << "Enter the number of elements for the first array: ";
    cin >> n1;

    cout << "Enter the elements of the first array:" << endl;
    for (int i = 0; i < n1; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr1[i];
    }

    cout << "Enter the number of elements for the second array: ";
    cin >> n2;

    cout << "Enter the elements of the second array:" << endl;
    for (int i = 0; i < n2; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr2[i];
    }

    int mergedSize = n1 + n2;
    int index = 0;
    for (int i = 0; i < n1; ++i) {
        merged[index++] = arr1[i];
    }
    for (int i = 0; i < n2; ++i) {
        merged[index++] = arr2[i];
    }

    cout << "\nMerged array:" << endl;
    for (int i = 0; i < mergedSize; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
