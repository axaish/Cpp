#include <iostream>
using namespace std;
int main() {
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  string result = (num % 3 == 0) ? "is divisible by 3" : "is not divisible by 3";

  cout << num << " " << result << endl;

  return 0;
}
