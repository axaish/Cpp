#include <iostream>
using namespace std;
int main() {
  int num1, num2;
  cout << "Enter two integers: ";
  cin >> num1 >> num2;

  int sum = num1 + num2;
  int diff = num1 - num2;
  int mul = num1 * num2;
  int div = num1 / num2;
  int mod = num1 % num2;

  cout << "\nAddition: " << sum << endl;
  cout << "Subtraction: " << diff << endl;
  cout << "Multiplication: " << mul << endl;
  cout << "Division: " << div << endl;
  cout << "Modulo: " << mod << endl;

  return 0;
}
