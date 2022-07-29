#include <iostream>
using namespace std;
int main()
{
    // int number1{44}, number2{55};
    // bool result = (number1 < number2);
    // cout << boolalpha << "result :" << result << endl;

    // if (result)
    // {
    //     cout << number1 << " is less than " << number2 << endl;
    // }
    // else
    // {
    //     cout << number1 << " is greater than " << number2 << endl;
    // }
    // int time = 20;
    // if (time < 18)
    // {
    //     cout << "Good day.";
    // }
    // else
    // {
    //     cout << "Good evening.";
    // }
    int time = 22;
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good afternoon.";
    }
    else
    {
        cout << "Good evening.";
    }
    // ternary operator
    string value = (time < 10) ? "Good morning" : "Good evening";
}