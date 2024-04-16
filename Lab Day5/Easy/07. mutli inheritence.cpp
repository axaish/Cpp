#include <iostream>
class A {
protected:
    int a;
public:
    A(int av) : a(av) {}
};
class B {
protected:
    int b;
public:
    B(int bv) : b(bv) {}
};
class C : public A, public B {
private:
    int c;

public:
    C(int av, int bv, int cv) : A(av), B(bv), c(cv) {}
    void displayValues() {
        std::cout << "Value of a: " << a << std::endl;
        std::cout << "Value of b: " << b << std::endl;
        std::cout << "Value of c: " << c << std::endl;
    }
};

int main() {
    C obj(100, 200, 300);
    obj.displayValues();
    return 0;
}
