#include <iostream>
int sum(int a = 0, int b = 0, int c = 0, int d = 0) {
return a + b + c + d;
}
int main() {
int num1, num2, num3, num4;
std::cout << "Enter four numbers (separated by spaces): ";
std::cin >> num1 >> num2 >> num3 >> num4;
int result = sum(num1, num2, num3, num4);
std::cout << "Sum of the numbers is: " << result << std::endl;
return 0;
}
