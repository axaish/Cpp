#include <iostream>

class Number {
protected:
    int value;

public:
    Number(int val) : value(val) {}
    virtual void print() const {
        std::cout << value << ", ";
    }
};

class Skipper : public Number {
private:
    int skip;

public:
    Skipper(int val, int skipVal) : Number(val), skip(skipVal) {}
    void print() const override {
        int currentValue = value;
        while (currentValue <= 100) {
            std::cout << currentValue << ", ";
            currentValue += skip;
        }
    }
};

int main() {
    int M = 50;
    int N = 100;
    int K = 7;

    Skipper skipper(M, K);
    skipper.print();

    return 0;
}
