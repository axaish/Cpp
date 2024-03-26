#include <iostream>
#include <cmath>
using namespace std;
int main() {
 int number;
 std::cout << "Enter a number: ";
 std::cin >> number;
 if (number >= 0) {
 double squareRoot = sqrt(number);
 cout << "Square root of " << number << " is: " << squareRoot << endl;
 } else {
 std::cout << "Square root of a negative number is imaginary and cannot be calculated." << std::endl;
 }
 return 0;
}
