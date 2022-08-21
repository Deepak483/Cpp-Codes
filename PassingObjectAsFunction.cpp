#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex p1, Complex p2)
    {
        a = p1.a + p2.a;
        b = p1.b + p2.b;
    }
    void displayNumber()
    {
        cout << "The Complex number is " << a << " + " << b << "i" << endl;
    }
};

/**
TODO: this is the first file
** most important features are highlighted
* ? this should be exposed with the file
* @param myParam
*! this is deprecated and don't use this
///// important line is highlighted by default
*/
//*this is some of the important code

int main()
{
    //* making object of complex class
    Complex c1, c2, c3;
    c1.setData(3, 4);
    c1.displayNumber();

    c2.setData(9, 10);
    c2.displayNumber();

    c3.setDataBySum(c1, c2);
    c3.displayNumber();

    return 0;
}