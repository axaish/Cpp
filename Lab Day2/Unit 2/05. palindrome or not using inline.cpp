#include <iostream>
#include <algorithm>
using namespace std;
inline bool isPalindrome(const string& str) {
return str == string(str.rbegin(), str.rend());
}
int main() {
string inputString;
cout << "Enter a string: ";
cin >> inputString;
if (isPalindrome(inputString)) {
cout << "The string is a palindrome." << endl;
} else {
cout << "The string is not a palindrome." << endl;
}
return 0;
}
