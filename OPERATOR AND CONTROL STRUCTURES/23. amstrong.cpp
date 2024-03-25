#include <iostream>
using namespace std;

int calculateSumOfCubes(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Armstrong numbers up to " << num << " are: ";
    for (int i = 0; i <= num; i++) {
        if (i == calculateSumOfCubes(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
