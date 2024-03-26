#include <iostream>
using namespace std;
class A
{
public:
int a;
A() : a(100)
{}
};
class B
{
public:
int b;
B() : b(200)
{}
};
class C : public A, public B
{
public:
int c;
C() : c(300)
{}
};
int main()
{
C obj;
cout << "value of a: " << obj.a << endl;
cout << "value of b: " << obj.b << endl;
cout << "value of c: " << obj.c << endl;
return 0;
}
