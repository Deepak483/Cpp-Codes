#include <iostream>
using namespace std;
/*
syntax for initialization list
constructor(argument):initialization list
{
    assignment + other code;
}
*/
class Test
{
public:
    int a;
    int b;

public:
    Test(int i, int j) : a(i * j), b(j * 2)
    {
        cout << "Constructor executed: " << endl;
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }
};
int main()
{
    Test t(9, 8);

    return 0;
}