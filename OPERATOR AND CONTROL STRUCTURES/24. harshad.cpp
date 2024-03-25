#include <iostream>
using namespace std;

int calculateSumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

bool isHarshadNumber(int num) {
    int sum = calculateSumOfDigits(num);
    return num % sum == 0;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Harshad numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isHarshadNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
