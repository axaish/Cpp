#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float num1, num2;
    cout << "Enter two floating point numbers: ";
    cin >> num1 >> num2;

    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division = num1 / num2;
    float modulo = fmod(num1, num2);

    cout << "\nResults:\n";
    cout << "Addition: " << addition << "\n";
    cout << "Subtraction: " << subtraction << "\n";
    cout << "Multiplication: " << multiplication << "\n";
    cout << "Division: " << division << "\n";
    cout << "Modulo: " << modulo << "\n";

    return 0;
}
