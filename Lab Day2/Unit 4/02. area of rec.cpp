#include <iostream>
struct Rectangle {
double length;
double width;
double getArea() const { return length * width; }
};
int main() {
Rectangle rectangle;
std::cout << "Enter length of the rectangle: ";
std::cin >> rectangle.length;
std::cout << "Enter width of the rectangle: ";
std::cin >> rectangle.width;
double area = rectangle.getArea();
std::cout << "Area of the rectangle: " << area << std::endl;
return 0;
}
