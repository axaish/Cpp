#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {
        std::cout << "Rectangle created with length " << length << " and width " << width << std::endl;
    }

    ~Rectangle() {
        std::cout << "Rectangle destroyed." << std::endl;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }

    void display() const {
        std::cout << "Rectangle: Length = " << length << ", Width = " << width << std::endl;
    }
};

int main() {
    Rectangle myRectangle(5.0, 3.0);

    std::cout << "Area: " << myRectangle.area() << std::endl;
    std::cout << "Perimeter: " << myRectangle.perimeter() << std::endl;
    myRectangle.display();

    return 0;
}
