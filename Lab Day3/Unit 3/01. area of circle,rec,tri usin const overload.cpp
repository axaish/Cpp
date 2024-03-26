#include<iostream>
#include<cmath>

using namespace std;
class area{
public:
double radius;
int length;
int breadth;
int base;
int height;
area(){
	cout << "Enter radius of cirle: ";
	cin >> radius;
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter breath of rectangle: ";
	cin >> breadth;
	cout << "Enter base of triangle: ";
	cin >> base;
	cout << "Enter height of triangle: ";
	cin >> height;
	}
	~area()
	{
	cout<<"object is destroyed.";
	}
	void areadetails(){
	cout<< "Area of circle = " <<3.14*radius*radius<<endl;
	cout<< "Area of rectangle = " <<length*breadth<<endl;
	cout<< "Area of triangle = " <<0.5*base*height<<endl;
	}
};

int main(){
area a;
a.areadetails();
}
