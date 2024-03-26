#include<iostream>
using namespace std;
class sum
{
public:
int i,n,count=0;
sum()
{
cout<<"enter the value ";
cin>>n;
for(i=1;i<=n;i++)
{
count=count+i;
}
cout<<count;
}
};
int main()
{
sum s;
}
