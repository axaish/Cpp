#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, bool> memo;

bool isScramble(string s1, string s2) {
    if (s1 == s2) return true;
    if (s1.size() != s2.size()) return false;
    if (s1.size() == 1) return false;

    string key = s1 + "|" + s2;
    if (memo.find(key) != memo.end()) return memo[key];

    int n = s1.size();
    for (int i = 1; i < n; ++i) {
        if ((isScramble(s1.substr(0, i), s2.substr(n - i)) && isScramble(s1.substr(i), s2.substr(0, n - i))) ||
            (isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i)))) {
            memo[key] = true;
            return true;
        }
    }
    
    memo[key] = false;
    return false;
}

int main() {
    cout << boolalpha;

    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    cout << "Output: " << isScramble(s1, s2) << endl;

    return 0;
}
