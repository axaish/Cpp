#include<iostream>
using namespace std;
class pattern
{
public:
int num,i,j;
pattern()
{
cout<<"enter the number of rows: ";
cin>>num;
for(i=1;i<=num;i++)
{
for(j=1;j<=i;j++)
{
cout<<j<<" ";
}
cout<<" \n";
}
}
~pattern()
{
cout<<"object is destroyed";
}
};
int main()
{
pattern p;
return 0;
}
