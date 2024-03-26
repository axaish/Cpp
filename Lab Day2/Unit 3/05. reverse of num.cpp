#include<iostream>
using namespace std;
class reverse
{
public:
int n,rem,rev=0;
reverse()
{
cout<<"enter the value: ";
cin>>n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
cout<<rev;
}
};
int main()
{
reverse s;
}
