#include <iostream>
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() {
        return length * width;
    }
};

int main() {
    const int numRectangles = 3;
    Rectangle rectangles[numRectangles] = {
        Rectangle(4.0, 5.0),
        Rectangle(3.0, 6.0),
        Rectangle(2.5, 4.5)
    };
    for (int i = 0; i < numRectangles; ++i) {
        std::cout << "Area of Rectangle " << i+1 << ": " << rectangles[i].area() << std::endl;
    }
    return 0;
}
