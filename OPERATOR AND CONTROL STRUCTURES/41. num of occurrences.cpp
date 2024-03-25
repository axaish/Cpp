#include <iostream>
using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n;
    int value;
    int count = 0;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Enter the value to find occurrences of: ";
    cin >> value;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            count++;
        }
    }
    cout << "Number of occurrences of " << value << " in the array: " << count << endl;

    return 0;
}
