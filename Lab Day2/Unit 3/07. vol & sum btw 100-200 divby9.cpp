#include<iostream>
using namespace std;

class divisible{
public:
int i,count=0;

divisible(){
	cout<< "The numbers between 100 to 200 that are divisible by 9 are: " << endl;
	for(i=100;i<=200;i++){
	if(i%9==0)
	{
	count++;
	cout<< i <<endl;
	}
	}
	cout<< "\nTotal numbers: " <<count<<endl;
	}
};

int main()
{
divisible d;
}
