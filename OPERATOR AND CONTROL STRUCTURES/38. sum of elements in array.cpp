#include <iostream>

using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n;
    int sum = 0;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
