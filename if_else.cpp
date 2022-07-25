#include <iostream>
using namespace std;
int main()
{
    int number1{44}, number2{55};
    bool result = (number1 < number2);
    cout << boolalpha << "result :" << result << endl;

    if (result)
    {
        cout << number1 << " is less than " << number2 << endl;
    }
    else
    {
        cout << number1 << " is greater than " << number2 << endl;
    }
}