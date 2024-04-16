#include <iostream>
#include <cmath>

class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double calculateArea() = 0;

    virtual double calculatePerimeter() = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double calculateArea() override {
        return height * width;
    }

    double calculatePerimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double calculateArea() override {
        return 0.5 * height * width;
    }

    double calculatePerimeter() override {
        double hypotenuse = sqrt(height * height + width * width);
        return height + width + hypotenuse;
    }
};

int main() {
    Rectangle rectangle(5.0, 3.0);
    Triangle triangle(4.0, 3.0);

    std::cout << "Rectangle - Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << std::endl;
    std::cout << "Triangle - Area: " << triangle.calculateArea() << ", Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}
