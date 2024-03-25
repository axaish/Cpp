#include <iostream>
using namespace std;

bool isNeonNumber(int num) {
    int square = num * num;
    int sum = 0;
    while (square != 0) {
        sum += square % 10;
        square /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Neon numbers up to " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (isNeonNumber(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
