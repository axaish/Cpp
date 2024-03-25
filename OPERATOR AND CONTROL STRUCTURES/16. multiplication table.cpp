#include <iostream>
using namespace std;

int main() {
    int num, i, j;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the number of steps: ";
    cin >> j;

    for (i = 1; i <= j; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
