#include <iostream>
using namespace std;
int main()
{
    int value = 5;
    cout << "value is " << value++ << endl;
    cout << value << endl;
    --value;
    cout << value << endl;
    cout << --value << endl;
    return 0;
}