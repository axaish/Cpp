#include<iostream>
#include<cmath>
using namespace std;
class calculator
{
public:
int area_of_square(int side)
{
return side*side;
}
int area_of_circle(double radius)
{
return 3.14*radius*radius;
}
};
int main()
{
calculator calc;
int side=3;
double radius=5;
cout<< "Area of square: " << calc.area_of_square(side) <<endl;
cout<< "Area of circle: " << calc.area_of_circle(radius)<<endl;
return 0;
}
