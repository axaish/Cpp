#include <iostream>
#include <stack>
#include <string>

using namespace std;

int longestValidParentheses(string s) {
    stack<int> stk;
    stk.push(-1);

    int maxLength = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {
            stk.push(i);
        } else {
            stk.pop();

            if (stk.empty()) {
                stk.push(i);
            } else {
                maxLength = max(maxLength, i - stk.top());
            }
        }
    }

    return maxLength;
}

int main() {
    string s = "(()))())(";
    cout << "Length of the longest valid parentheses substring: " << longestValidParentheses(s) << endl;
    return 0;
}
