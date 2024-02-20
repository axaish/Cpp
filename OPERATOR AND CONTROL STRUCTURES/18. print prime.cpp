#include <iostream>
using namespace std;

int main() {
    int num, flag = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime numbers up to " << num << " are: ";

    for (int i = 2; i <= num; i++) {
        flag = 0;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
