#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        int num = 1;
        for(int j = 1; j <= i; ++j) {
            cout << num << " ";
            num = num * (i - j) / j;
        }
        cout << endl;
    }

    return 0;
}
