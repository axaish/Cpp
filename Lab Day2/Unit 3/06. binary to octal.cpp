#include<iostream>
using namespace std;
class convert
{
public:
int bin,i,j=1,oct=0;
convert()
{
cout<<"enter the binary number ";
cin>>bin;
while(bin>0)
{
i=bin%2;
oct=oct+i*j;
j=j*2;
bin=bin/8;
}
cout<<oct;
}
};
int main()
{
convert s;
}
