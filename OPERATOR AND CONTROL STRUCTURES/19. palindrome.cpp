#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, revStr = "";

    cout << "Enter a string: ";
    getline(cin, str);

    int len = str.length();

    for (int i = len - 1; i >= 0; i--) {
        revStr += str[i];
    }

    int i = 0;
    while (str[i] != '\0') {
        if (str[i] != revStr[i]) {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        i++;
    }
    cout << "The string is a palindrome." << endl;

    return 0;
}
