#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << ".\n";
    }
    else if (num2 > num1) {
        cout << num2 << " is greater than " << num1 << ".\n";
    }
    else {
        cout << num1 << " is equal to " << num2 << ".\n";
    }

    return 0;
}
