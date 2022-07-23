#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char **argv)
{
    // Declare and intialize the variable
    float number1{1.12344566f};
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L};
    // cout << number1 << endl;
    // cout << sizeof(double) << endl;
    // cout << sizeof(long double);

    double number11{};
    double number12{};
    double number43{-3};
    double result{number11 / number12};
    //   cout << setprecision(20) << endl;
    //     cout << "number11 / number12 yeilds " << result << endl;
    //     cout << "number1 " << number1 << endl;
    //     cout << "number2 " << number2 << endl;
    //     cout << "number3 " << number3 << endl;
    // cout << typeof(number11) << endl;
    cout << result << endl;
    cout << number43 << " /" << number12 << " yields " << number43 / number12 << endl;
}