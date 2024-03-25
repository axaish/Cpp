#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    string result = (num1 == num2) ? "Equal" : "Not Equal";

    cout << "The numbers are: " << result << endl;

    return 0;
}
