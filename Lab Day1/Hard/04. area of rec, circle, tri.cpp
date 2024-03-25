#include <iostream>
double calculateArea(double length, double width) {
    return length * width;
}

double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}
double calculateArea(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    double length, width, radius, base, height;
    std::cout << "Enter length and width of rectangle: ";
    std::cin >> length >> width;
    std::cout << "Area of rectangle: " << calculateArea(length, width) << std::endl;
    std::cout << "Enter radius of circle: ";
    std::cin >> radius;
    std::cout << "Area of circle: " << calculateArea(radius) << std::endl;
    std::cout << "Enter base and height of triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of triangle: " << calculateArea(base, height, 't') << std::endl;

    return 0;
}
