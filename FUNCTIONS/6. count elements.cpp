#include <iostream>
#include <string>
using namespace std;

int countElements(string str) {
    int count = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != ' ')
            count++;
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Number of elements in the string: " << countElements(str) << endl;
    return 0;
}
