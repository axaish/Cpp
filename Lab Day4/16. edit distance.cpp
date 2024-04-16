#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int minDistance(string word1, string word2) {
    int m = word1.length();
    int n = word2.length();

    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <= m; ++i) {
        for (int j = 0; j <= n; ++j) {
            if (i == 0) {
                dp[i][j] = j;
            } else if (j == 0) {
                dp[i][j] = i;
            } else if (word1[i - 1] == word2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            }
        }
    }

    return dp[m][n];
}

int main() {
    string word1, word2;

    cout << "Enter the first word: ";
    cin >> word1;

    cout << "Enter the second word: ";
    cin >> word2;

    cout << "Minimum edit distance between '" << word1 << "' and '" << word2 << "' is: " << minDistance(word1, word2) << endl;

    return 0;
}
