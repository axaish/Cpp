#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter the value of n: ";
cin >> n;
int sum = 0;
int count = 0;
int num;
cout << "Enter the numbers: ";
do
{
cin >> num;
sum += num;
count++;
} while (count < n);
cout << "The sum of " << n << " natural numbers is: " << sum << endl;
return 0;
}
