#include <iostream>
using namespace std;

int calculateFactorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += calculateFactorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Strong numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isStrongNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
