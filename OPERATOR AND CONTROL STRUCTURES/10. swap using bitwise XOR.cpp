#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << "After swapping, \nnum1 is: " << num1 << "\nnum2 is: " << num2 << endl;

    return 0;
}
