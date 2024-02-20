#include <iostream>
using namespace std;

int main() {
    int num1, num2, min, gcd = 1;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    min = (num1 < num2) ? num1 : num2;

    do {
        if (num1 % min == 0 && num2 % min == 0) {
            gcd = min;
            break;
        }
        min--;
    } while (min != 0);

    cout << "GCD: " << gcd << endl;

    return 0;
}
