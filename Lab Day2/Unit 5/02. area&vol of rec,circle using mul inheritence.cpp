#include <iostream>

class Shape {
protected:
    float length;
    float width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }
};

class Rectangle : public Shape {
public:
    float calculateArea() {
        return length * width;
    }
};

class Cuboid : public Rectangle {
private:
    float height;

public:
    void setDimensions(float l, float w, float h) {
        length = l;
        width = w;
        height = h;
    }

    float calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Cuboid myCuboid;
    float length, width, height;
    std::cout << "Enter length, width, and height of the cuboid: ";
    std::cin >> length >> width >> height;
    myCuboid.setDimensions(length, width, height);
    std::cout << "Area of the base (Rectangle): " << myCuboid.calculateArea() << std::endl;
    std::cout << "Volume of the cuboid: " << myCuboid.calculateVolume() << std::endl;
    return 0;
}
