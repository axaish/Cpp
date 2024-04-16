#include <iostream>
#include <string>
#include <vector>

bool isMatch(std::string s, std::string p) {
    int m = s.length(), n = p.length();
    std::vector<std::vector<bool> > dp(m + 1, std::vector<bool>(n + 1, false));
    dp[0][0] = true;

    for (int j = 1; j <= n; ++j) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i - 1] == p[j - 1] || p[j - 1] == '?') {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 1] || dp[i - 1][j];
            }
        }
    }

    return dp[m][n];
}

int main() {
    std::string s1 = "aa", p1 = "a";
    std::string s2 = "aa", p2 = "*";
    std::string s3 = "cb", p3 = "?a";

    std::cout << "s1 = 'aa', p1 = ''a'; Output: " << (isMatch(s1, p1) ? "true" : "false") << std::endl;
    std::cout << "s2 = 'aa', p2 = '*'; Output: " << (isMatch(s2, p2) ? "true" : "false") << std::endl;
    std::cout << "s3 = 'cb', p3 = '?a'; Output: " << (isMatch(s3, p3) ? "true" : "false") << std::endl;

    return 0;
}
