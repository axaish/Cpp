#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    int secondLargest = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != maxElement && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }
    return 0;
}
