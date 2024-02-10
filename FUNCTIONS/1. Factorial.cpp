#include <iostream>
using namespace std;

unsigned long long int factorial(int n) {
    if(n > 1)
        return n * factorial(n - 1);
    return 1;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Factorial of " << num << " = " << factorial(num);
    return 0;
}
