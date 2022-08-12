#include <iostream>
using namespace std;
// forward declaration
class Complex;

class Calculator
{
public:
    int addNumber(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumImgComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    friend int Calculator::sumImgComplex(Complex o1, Complex o2);

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
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator::sumImgComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(3, 8);
    o2.setNumber(9, 5);
    Calculator cal;
    int realparts = cal.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << realparts << endl;
    int imgparts = cal.sumImgComplex(o1, o2);
    cout << "The sum of imaginary part of o1 and o2 is " << imgparts << endl;
    cout << "Sum of the complex number is " << (realparts) << " + " << (imgparts) << "i" << endl;
    return 0;
}