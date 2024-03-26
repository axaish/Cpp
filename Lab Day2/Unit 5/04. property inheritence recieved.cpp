#include <iostream>

class Grandfather {
protected:
    int property;

public:
    Grandfather(int prop) : property(prop) {}
    int getProperty() { return property; }
};

class Grandson : public Grandfather {
public:
    using Grandfather::Grandfather;
    void accessProperty() { std::cout << "Received the Property" << std::endl; }
};

int main() {
    int propertyValue;
    std::cout << "Enter the property value: ";
    std::cin >> propertyValue;
    Grandson grandson(propertyValue);
    if (grandson.getProperty() == 500)
        grandson.accessProperty();
    else
        std::cout << "Did not receive the full property" << std::endl;
    return 0;
}
