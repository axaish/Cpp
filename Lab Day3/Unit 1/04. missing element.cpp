#include <iostream>
using namespace std;
int main() {
int arr[] = {0, 1, 2, 3, 5, 6, 7};
int size = sizeof(arr) / sizeof(arr[0]);
int left = 0;
int right = size - 1;
if (arr[0] != 0) {
cout << "The smallest missing element in the sorted array is: 0" << endl;
return 0;
}
while (left <= right) {
if (arr[left] == left) {
left++;
} else {
cout << "The smallest missing element in the sorted array is: " << left << endl;
return 0;
}
}
cout << "The smallest missing element in the sorted array is: " << arr[size - 1] + 1 << endl;
return 0;
}
