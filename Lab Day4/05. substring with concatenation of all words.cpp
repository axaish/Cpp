#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findSubstring(string s, vector<string>& words) {
    vector<int> result;
    if (s.empty() || words.empty()) return result;
    
    int wordLen = words[0].size();
    int totalLen = wordLen * words.size();
    int sLen = s.size();
    
    unordered_map<string, int> wordFreq;
    for (const auto& word : words) {
        wordFreq[word]++;
    }
    
    for (int i = 0; i <= sLen - totalLen; ++i) {
        unordered_map<string, int> tempFreq;
        int j = 0;
        for (; j < words.size(); ++j) {
            string word = s.substr(i + j * wordLen, wordLen);
            if (wordFreq.find(word) == wordFreq.end()) break;
            tempFreq[word]++;
            if (tempFreq[word] > wordFreq[word]) break;
        }
        if (j == words.size()) result.push_back(i);
    }
    
    return result;
}

int main() {
    string s1 = "barfoothefoobarman";
    vector<string> words1 = {"foo", "bar"};
    vector<int> result1 = findSubstring(s1, words1);
    cout << "Output for s1: ";
    for (int idx : result1) {
        cout << idx << " ";
    }
    cout << endl;

    string s2 = "wordgoodgoodgoodbestword";
    vector<string> words2 = {"word", "good", "best", "word"};
    vector<int> result2 = findSubstring(s2, words2);
    cout << "Output for s2: ";
    for (int idx : result2) {
        cout << idx << " ";
    }
    cout << endl;

    string s3 = "barfoofoobarthefoobarman";
    vector<string> words3 = {"bar", "foo", "the"};
    vector<int> result3 = findSubstring(s3, words3);
    cout << "Output for s3: ";
    for (int idx : result3) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
