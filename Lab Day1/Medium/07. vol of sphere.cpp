#include <iostream>

int main() {
    const double PI = 3.14159;
    double radius;
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;
    double volume = (4.0 / 3.0) * PI * radius * radius * radius;

    std::cout << "The volume of the sphere with radius " << radius << " is: " << volume << std::endl;

    return 0;
}
