#include <iostream>
using namespace std;

int main() {
    int num = 5;

    for (int i = 1; i <= num; i++) {
        int j = i;
        while (j > 0) {
            cout << i;
            j--;
        }
        cout << endl;
    }

    return 0;
}
