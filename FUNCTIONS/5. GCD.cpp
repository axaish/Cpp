#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int main() {
    int num1, num2;
    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " = " << gcd(num1, num2) << endl;
    return 0;
}
