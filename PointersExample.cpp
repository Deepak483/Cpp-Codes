#include <iostream>
using namespace std;
int main()
{

    string name = "Iqbal";
    string *pname = &name;
    cout << *pname << endl;
    cout << &name << endl;
    cout << pname << endl;

    cout << endl;
    name = "Anchal";
    cout << *pname << endl;
    cout << pname << endl;
    return 0;
}