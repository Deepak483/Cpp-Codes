#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    //* when no copy constructor is found compiler supplies it own copy constructor.
    Number(Number &obj)
    {
        cout << "copy constructor is called!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(45), z3;

    // z.display();
    // x.display();// ! this will display "the number for this object is 0"

    // *Number z1(x);
    // *z1.display();
    // z2 = z;        // copy constructor not invoked
    Number z2 = z; // copy constructor will get invoked
    Number z2(z);
    z2.display();
    return 0;
}