// #include <iostream>
// #include <cmath>
// using namespace std;

// double power(double, int); // function declaration

// void print_power(double base, int exponent)
// {
//     double myPower = power(base, exponent);
//     cout << base << " to the power " << exponent << " is " << power(base, exponent) << endl; // function calling another function
// }
// int main()
// {

//     double base;
//     int exponent;
//     cout << "What is the base? :" << endl;
//     cin >> base;
//     cout << "What is the exponent?: " << endl;
//     cin >> exponent;
//     print_power(base, exponent);

//     // double power = pow(base, exponent);
//     // cout << "power is " << power << endl;
// }
// // double power(double base, int exponent) // function defination
// // {
// //     return pow(base, exponent);
// // }
// double power(double base, int exponent) // function defination
// {
//     double result = 1;
//     for (int i = 0; i < exponent; i++)
//     {
//         result *= base;
//     }
//     return result;
// }

#include <iostream>
#include <climits> //used for checking limits
using namespace std;

int main()
{
    short y;
    int b;
    long c;
    long long x;
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << ULLONG_MAX << endl;
}