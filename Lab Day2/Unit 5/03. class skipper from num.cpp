#include <iostream>
using namespace std;
class Number
{
public:
 int M, N, K;
 Number(int m, int n, int k) : M(m), N(n), K(k) {}
};
class Skipper : public Number
{
public:
 Skipper(int m, int n, int k) : Number(m, n, k) {}
 void printSkippingNumbers()
{
 for (int i = M; i <= N; i += K)
 cout << i << " ";
 cout << std::endl;
 }
};
int main()
{
 int M, N, K;
 cout << "Enter M, N, and K: ";
 cin >> M >> N >> K;
 Skipper skipper(M, N, K);
 cout << "Numbers from " << M << " to " << N << " skipping " << K << " numbers in between: ";
 skipper.printSkippingNumbers();
 return 0;
}
