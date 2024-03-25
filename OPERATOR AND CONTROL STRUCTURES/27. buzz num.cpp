#include <iostream>
using namespace std;

bool isBuzzNumber(int num) {
    return num % 7 == 0 || num % 10 == 7;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Buzz numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isBuzzNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
