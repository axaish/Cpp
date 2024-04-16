#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
    void backtrack(vector<string>& result, string current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }
        if (open < max)
            backtrack(result, current + "(", open + 1, close, max);
        if (close < open)
            backtrack(result, current + ")", open, close + 1, max);
    }
};
int main() {
    Solution solution;
    int n = 3;
    vector<string> result = solution.generateParenthesis(n);
    cout << "Output: [";
    for (int i = 0; i < result.size(); ++i) {
        if (i > 0) cout << ",";
        cout << "\"" << result[i] << "\"";
    }
    cout << "]" << endl;
    return 0;
}
