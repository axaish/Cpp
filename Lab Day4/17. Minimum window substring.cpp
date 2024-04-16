#include <iostream>
#include <string>
#include <map>
#include <climits>

using namespace std;

string minWindow(string s, string t) {
    map<char, int> targetFreq;
    map<char, int> windowFreq;

    // Count frequencies of characters in t
    for (size_t i = 0; i < t.length(); ++i) {
        targetFreq[t[i]]++;
    }

    int left = 0, right = 0;
    int requiredChars = targetFreq.size();
    int formedChars = 0;
    int minWindowSize = INT_MAX;
    string minWindowString = "";

    while (right < s.length()) {
        // Expand the window
        char currentChar = s[right];
        windowFreq[currentChar]++;

        if (targetFreq.count(currentChar) && windowFreq[currentChar] == targetFreq[currentChar]) {
            formedChars++;
        }

        // Contract the window
        while (left <= right && formedChars == requiredChars) {
            int currentWindowSize = right - left + 1;
            if (currentWindowSize < minWindowSize) {
                minWindowSize = currentWindowSize;
                minWindowString = s.substr(left, minWindowSize);
            }

            char leftChar = s[left];
            windowFreq[leftChar]--;

            if (targetFreq.count(leftChar) && windowFreq[leftChar] < targetFreq[leftChar]) {
                formedChars--;
            }

            left++;
        }

        right++;
    }

    return minWindowString;
}

int main() {
    string s, t;
    cout << "Enter the string s: ";
    cin >> s;
    cout << "Enter the string t: ";
    cin >> t;

    string result = minWindow(s, t);

    cout << "Minimum window substring: " << result << endl;

    return 0;
}
