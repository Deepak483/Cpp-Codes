#include <iostream>
using namespace std;
void myFunction(int myNumber[5])
{
    for (int i = 0; i < (sizeof(myNumber) / sizeof(myNumber[0])); i++)
    {
        cout << myNumber[i] << endl;
    }
}
int main()
{

    int myNumbers[5] = {
        10,
        20,
        30,
        40,
        50,
    };
    myFunction(myNumbers);
    cout << sizeof(myNumbers) << endl;

    return 0;
}