#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;

public:
    // setter method
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    // getter method
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
    //! how to access the object with pointers using dereference
    (*ptr).setData(9, 99);
    (*ptr).getData();
    // c1.setData(1, 49);
    // c1.getData();
    return 0;
}