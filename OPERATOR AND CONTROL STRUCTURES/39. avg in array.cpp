#include <iostream>

using namespace std;

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n;
    int sum = 0;
    double average;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    average = static_cast<double>(sum) / n;

    cout << "Average of all elements in the array: " << average << endl;

    return 0;
}
