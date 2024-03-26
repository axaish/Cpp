#include <iostream>
class Sample
{
private:
int x;
public:
void setX(int x)
{
this->x = x;
}
int getX() const {
return x;
}
};
int main()
{
Sample obj;
obj.setX(20);
std::cout << "x = " << obj.getX() << std::endl;
return 0;
}
