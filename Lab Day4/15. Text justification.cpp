#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> result;
    int i = 0, n = words.size();

    while (i < n) {
        int j = i + 1, len = words[i].size();

        while (j < n && len + 1 + words[j].size() <= maxWidth) {
            len += 1 + words[j].size();
            j++;
        }

        int spaces = maxWidth - len + (j - i - 1);

        string line = words[i];

        if (j == n || j - i == 1) {
            for (int k = i + 1; k < j; k++) {
                line += ' ';
                line += words[k];
            }
            line += string(maxWidth - line.size(), ' ');
        } else {
            int extraSpaces = spaces % (j - i - 1);
            int spacesPerWord = spaces / (j - i - 1);

            for (int k = i + 1; k < j; k++) {
                line += string(spacesPerWord + (k - i <= extraSpaces), ' ');
                line += words[k];
            }
        }

        result.push_back(line);
        i = j;
    }

    return result;
}

int main() {
    vector<string> words;
    string word;
    cout << "Enter words (Enter \"done\" to finish input):\n";
    while (cin >> word && word != "done") {
        words.push_back(word);
    }

    int maxWidth;
    cout << "\nEnter maximum width: ";
    cin >> maxWidth;

    vector<string> justified = fullJustify(words, maxWidth);

    for (size_t i = 0; i < justified.size(); ++i) {
        cout << "\n" << justified[i] << endl;
    }

    return 0;
}
