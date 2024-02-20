#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i) {
        int numSpaces = rows - i;
        for(int j = 1; j <= numSpaces; ++j) {
            cout << " ";
        }
        int numStars = 2 * i - 1;
        for(int j = 1; j <= numStars; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = rows - 1; i >= 1; --i) {
        int numSpaces = rows - i;
        for(int j = 1; j <= numSpaces; ++j) {
            cout << " ";
        }
        int numStars = 2 * i - 1;
        for(int j = 1; j <= numStars; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
