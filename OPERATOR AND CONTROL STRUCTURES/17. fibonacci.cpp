#include <iostream>
using namespace std;
int main() {
    int num, firstNum = 0, secondNum = 1, nextNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Fibonacci Series up to " << num << " : ";

    for (int i = 1; nextNum <= num; i++) {
        if (i == 1) {
            cout << firstNum << ", ";
            continue;
        }
        if (i == 2) {
            cout << secondNum << ", ";
            continue;
        }
        nextNum = firstNum + secondNum;
        if (nextNum <= num) {
            cout << nextNum << ", ";
        }
        firstNum = secondNum;
        secondNum = nextNum;
    }

    cout << endl;
    return 0;
}
