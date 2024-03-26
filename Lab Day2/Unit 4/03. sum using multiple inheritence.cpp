#include<iostream>
using namespace std;
class number1
{
public:
int n1;
void getdata1()
{
cout<<"Enter the first number :";
cin>>n1;
}
};
class number2
{
public:
int n2;
void getdata2()
{
cout<<"Enter the second number :";
cin>>n2;
}
};
class sum:public number1, public number2
{
public:
int sum;
void getdata3()
{
sum=n1+n2;
cout<<"The sum of the two numbers is :"<<sum;
}
};
int main()
{
sum s;
s.getdata1();
s.getdata2();
s.getdata3();
}
