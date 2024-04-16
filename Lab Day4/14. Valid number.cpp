#include <iostream>
#include <string>

using namespace std;

enum State {
    START,
    INTEGER,
    DECIMAL,
    EXPONENT,
    EXPONENT_SIGN,
    EXPONENT_INTEGER,
    INVALID
};

bool isNumber(string s) {
    State currentState = START;
    int n = s.size();
    int i = 0;

    while (i < n && isspace(s[i])) {
        i++;
    }

    if (i < n && (s[i] == '+' || s[i] == '-')) {
        i++;
    }

    while (i < n && isdigit(s[i])) {
        currentState = INTEGER;
        i++;
    }

    if (i < n && s[i] == '.') {
        i++;
        while (i < n && isdigit(s[i])) {
            currentState = DECIMAL;
            i++;
        }
    }

    if (currentState == INTEGER || currentState == DECIMAL) {
        if (i < n && (s[i] == 'e' || s[i] == 'E')) {
            i++;
            if (i < n && (s[i] == '+' || s[i] == '-')) {
                i++;
            }
            currentState = EXPONENT_SIGN;
            while (i < n && isdigit(s[i])) {
                currentState = EXPONENT_INTEGER;
                i++;
            }
        }
    }

    while (i < n && isspace(s[i])) {
        i++;
    }

    return (currentState == INTEGER || currentState == DECIMAL ||
            currentState == EXPONENT_INTEGER) && i == n;
}

int main() {
    cout << "Enter a string to check if it's a valid number: ";
    string input;
    getline(cin, input);

    cout << boolalpha;
    cout << "\nIs the input a valid number? " << isNumber(input) << endl;

    return 0;
}
