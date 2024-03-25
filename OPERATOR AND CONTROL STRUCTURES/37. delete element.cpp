#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n;
    int pos;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the position of the element to delete (1 to " << n << "): ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = pos - 1; i < n - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        n--; 
        cout << "Array after deletion:" << endl;
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
