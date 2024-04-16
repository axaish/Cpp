#include <iostream>
class Largest {
private:
    int a, b;
    static int m;
public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }
    friend void find_Max(Largest obj);
};

int Largest::m = 0;
void find_Max(Largest obj) {
    Largest::m = (obj.a > obj.b) ? obj.a : obj.b;
    std::cout << "Maximum number is " << Largest::m << std::endl;
}
int main() {
    Largest obj;
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    obj.setData(num1, num2);
    find_Max(obj);
    return 0;
}
