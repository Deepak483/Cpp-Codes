#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1;

public:
    void greetHello()
    {
        cout << "Hello,How are you?" << endl;
    }
};
class Base2
{
protected:
    int base2;

public:
    void greetHello()
    {
        cout << "Kaise ho aap" << endl;
    }
};
class Derived : public Base1, public Base2
{
protected:
    int derived;

public:
    //     void greetHello()
    //     {
    //         cout << "hello derived" << endl;
    //     }
    // };
    //? Ambiguity resolution in inheritance
    void greetHello()
    {
        // Base1::greetHello();
        Base2::greetHello();
    }
};
int main()
{
    Derived d;
    Base1 b;

    d.greetHello();
    return 0;
}