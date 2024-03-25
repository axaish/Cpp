#include <iostream>
using namespace std;

int main() {
    int n;
    int* arr;

    cout << "Enter the number of elements in the dynamic array: ";
    cin >> n;

    arr = new int[n];

    cout << "Enter the elements of the dynamic array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Values of the dynamic array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
