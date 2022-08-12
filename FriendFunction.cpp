#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    friend Complex sumComplex(Complex o1, Complex o2);
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2;
    Complex sum;
    c1.setNumber(1, 5);
    c2.setNumber(8, 6);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
}