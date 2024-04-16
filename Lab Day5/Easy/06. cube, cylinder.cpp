#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double volume() const = 0;
};

class Cube : public Shape {
private:
    double side;

public:
    Cube(double s) : side(s) {}

    double volume() const override {
        return std::pow(side, 3);
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    double volume() const override {
        return 3.14 * std::pow(radius, 2) * height;
    }
};

int main() {
    double side, radius, height;

    std::cout << "Enter side length of the cube: ";
    std::cin >> side;
    Cube cube(side);
    std::cout << "Volume of the cube: " << cube.volume() << std::endl;

    std::cout << "Enter radius and height of the cylinder: ";
    std::cin >> radius >> height;
    Cylinder cylinder(radius, height);
    std::cout << "Volume of the cylinder: " << cylinder.volume() << std::endl;

    return 0;
}
