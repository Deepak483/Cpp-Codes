#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
    int c;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(9);
    c2.printNumber();

    Complex c3(8, 9, 10);
    c2.printNumber();

    return 0;
}