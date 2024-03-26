#include<iostream>
using namespace std;
class volume
{
public:
int side;
double radius;
double height;
volume()
{
	cout<<"Enter the side of cube: ";
	cin>>side;
	cout<<"Enter the radius of cylinder: ";
	cin>>radius;
	cout<<"Enter the height of cylinder: ";
	cin>>height;
}
~volume()
{
cout<<"object is destroyed";
}

void volumedetails()
{
cout<<"\nvolume of cube is "<<side*side*side<<endl;
cout<<"volume of cylinder is "<<3.14*radius*radius*height<<endl;
}
};

int main()
{
volume v;
v.volumedetails();
}
