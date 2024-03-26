#include <iostream>
using namespace std;
class A
{
public:
int x;
A() : x(0) {}
void setX(int value)
{
x = value;
}
};
class B : public A
{
public:
void display() {
std::cout << "Value of x: " << x << std::endl;
}
};
int main()
{
B objB;
objB.setX(10);
objB.display();
return 0;
}
