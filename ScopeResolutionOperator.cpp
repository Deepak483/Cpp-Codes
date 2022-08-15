#include <iostream>
using namespace std;
int c = 45;
int main()
{
    // int a, b, c;
    // cout << "Enter the value of a:" << endl;
    // cin >> a;
    // cout << "Enter the value of b:" << endl;
    // cin >> b;
    // c = a + b;
    // cout << "The sum is " << c << endl;
    // cout << "The global variable c is " << ::c << endl;
    // float d = 34.4;
    // long double e = 34.4;
    // cout << typeid(d).name() << endl;
    // cout << typeid(e).name() << endl;
    // cout << "The value of d is " << d << endl
    //      << "The value of e is " << e << endl;
    // cout << "size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "size of 34.4l is " << sizeof(34.4l) << endl;
    // cout << "size of 34.4L is " << sizeof(34.4L ) << endl;

    // float x = 455;
    // float &y = x;
    // cout << x << endl;
    // cout << "is the reference variable: same as the x " << y << endl;

    // ****Type Casting Variable****
    int n = 89;
    float some_number = 89.339;
    // cout << "type casted variable is " << (float)n << endl;
    // cout << "Size of the integer variable : " << sizeof(n) << endl;
    // cout << "Size of the type casted float  variable : " << sizeof((float)n) << endl;

    // this both are same below two
    cout << "(float)some_number : " << (float)some_number << endl;
    cout << "float(some_number) : " << float(some_number) << endl;

    cout << "The expression is n+some_number : " << n + some_number << endl;
    cout << "The expression is n+int(some_number) : " << n + int(some_number) << endl;
    cout << "the expression is float(n) + float(some_number) : " << float(n) + float(some_number) << endl;
    cout << "The expression is float(n) + n: " << float(n) + n;
    return 0;
}