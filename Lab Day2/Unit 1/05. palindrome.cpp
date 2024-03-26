#include <iostream>
int main()
{
int number, originalNumber, reversedNumber = 0, remainder;
std::cout << "Enter a number: ";
std::cin >> number;

originalNumber = number;

while (number > 0){
remainder = number % 10;
reversedNumber = reversedNumber * 10 + remainder;
number /= 10;
}

if (originalNumber == reversedNumber) {
std::cout << "The number is a palindrome." << std::endl;
} 
else {
std::cout << "The number is not a palindrome." << std::endl;
}
return 0;
}
