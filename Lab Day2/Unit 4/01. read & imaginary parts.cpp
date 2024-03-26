#include <iostream>
struct ComplexNumber
{
int real;
int imaginary;
};
int main()
{
ComplexNumber number;
std::cout << "Enter the real part: ";
std::cin >> number.real;
std::cout << "Enter the imaginary part: ";
std::cin >> number.imaginary;
ComplexNumber *ptr = &number;
std::cout << "The real part is " << ptr->real << std::endl;
std::cout << "The imaginary part is " << ptr->imaginary << std::endl;
return 0;
}
