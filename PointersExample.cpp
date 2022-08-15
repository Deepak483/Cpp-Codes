#include <iostream>
using namespace std;
int main()
{

    // string name = "Iqbal";
    // string *pname = &name;
    // cout << *pname << endl;
    // cout << &name << endl;
    // cout << pname << endl;

    // cout << endl;
    // name = "Anchal";
    // cout << *pname << endl;
    // cout << pname << endl;
    int a = 3;
    int *b = &a;
    // cout << "a is " << a << endl;
    // cout << "*b is " << *b << endl;
    // cout << "b is " << b << endl;

    // cout << "&a is " << &a << endl;
    // cout << "&b is " << &b << endl;

    // Pointer to Pointer reference
    int **c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of b(c) is " << c << endl;
    cout << "the value at address c is " << *c << endl;
    cout << "the value at address value_at(value_at(c))  is " << **c << endl;
    return 0;
}