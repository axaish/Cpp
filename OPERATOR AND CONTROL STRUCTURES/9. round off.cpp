#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float num;
    cout << "Enter a floating-number: ";
    cin >> num;

    float floor_result = floor(num);
    cout << "Rounded value to the nearest integer: " << floor_result << endl;


    return 0;
}
