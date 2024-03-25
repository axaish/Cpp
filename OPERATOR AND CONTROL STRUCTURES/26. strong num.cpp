#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int sumOfFactorialOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum;
}

bool isStrong(int num) {
    return num == sumOfFactorialOfDigits(num);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isStrong(number)) {
        cout << number << " is a strong number." << endl;
    } else {
        cout << number << " is not a strong number." << endl;
    }
    
    return 0;
}
