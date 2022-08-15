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
    cout << "a is " << a << endl;
    cout << "*b is " << *b << endl;
    cout << "b is " << b << endl;

    cout << "&a is " << &a << endl;
    cout << "&b is " << &b << endl;
    return 0;
}