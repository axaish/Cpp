#include <iostream>
using namespace std;
int main() {
  int n1, n2;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  if (n1 == n2) {
    cout << "The two numbers are equal." << endl;
  } 
  else {
    cout << "The two numbers are not equal." << endl;
  }
  return 0;
}
