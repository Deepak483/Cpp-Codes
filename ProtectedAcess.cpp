#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

public:
    int c;

private:
    int b;
};
/*
*for a protected members    //!Public derivation Private derivation Protected derivation
    1.Private members       not inherited       not inherited       not inherited
    2.Protected members     protected           private             protected
    3.Public members        public              private             protected
*/
class Derived : protected Base
{
};
int main()
{
    Base b;
    Derived d;
    // cout << b.a; //* will not print on console as it is protected in both base and derived class
    // cout << d.a; //* will not print same reason above
    // cout << d.c;
    return 0;
}