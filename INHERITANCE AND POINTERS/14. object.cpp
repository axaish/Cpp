#include <iostream>
#include <string>

class MyClass {
private:
    int id;
    std::string name;

public:
    MyClass(int id, std::string name) : id(id), name(name) {}

    int getId() const {
        return id;
    }

    std::string getName() const {
        return name;
    }
};

int main() {
    MyClass obj(1001, "Example");

    MyClass* ptr = &obj;

    std::cout << "Object attributes using pointer:" << std::endl;
    std::cout << "ID: " << ptr->getId() << std::endl;
    std::cout << "Name: " << ptr->getName() << std::endl;

    return 0;
}
