#include<iostream>
using namespace std;
class cube
{
public:
int i,n;
cube()
{
cout<<"enter the value: ";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<i*i*i<<endl;
}
}
};
int main()
{
cube c;
}
