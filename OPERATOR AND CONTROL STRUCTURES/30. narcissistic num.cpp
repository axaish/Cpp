#include <iostream>
#include <cmath>
using namespace std;

int calculateDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int calculateSumOfDigits(int num, int n) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }
    return sum;
}

bool isNarcissisticNumber(int num) {
    int n = calculateDigits(num);
    return num == calculateSumOfDigits(num, n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Narcissistic numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isNarcissisticNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
