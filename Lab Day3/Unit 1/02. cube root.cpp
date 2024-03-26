#include <iostream>
#include <cmath>
int main() {
int number;
std::cout << "Enter a number: ";
std::cin >> number;
double cubeRoot = cbrt(number);
std::cout << "Cube root of " << number << " is: " << cubeRoot << std::endl;
return 0;
}
