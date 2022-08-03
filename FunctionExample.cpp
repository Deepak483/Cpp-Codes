#include <iostream>
// int AddNumber(int first_param, int second_param)
// {
//     int sum = first_param + second_param;
//     return sum;
// }
// int main()
// {
//     int first_number{32};
//     int second_number{33};
//     int sum = first_number + second_number;
//     std::cout << "sum of the number is " << sum << std::endl;
//     std::cout << "sum using function " << AddNumber(36, 89) << std::endl;
// }
using namespace std;
int maximum(int, int);
// void printMessage()
// {
//     cout << "Hello World!!" << endl;
// }
// int maximum(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }
void myFunction(string fname)
{
    cout << "Hello " << fname << endl;
}
void myFunction1(string country = "India") // default parameter
{
    cout << country << "\n";
}
int myFunction2(int, int);
int main()
{
    // int a, b;
    // cout << "Enter the two numbers: " << endl;
    // cin >> a >> b;

    // int c = maximum(a, b);
    // cout << "The maximum number is: " << c << endl;
    // printMessage();
    myFunction("Raj");
    myFunction1();
    myFunction1("USA");
    myFunction1("Sweden");
    int z = myFunction2(5, 3);
    cout << z << endl;
    return 0;
}
int myFunction2(int x, int y)
{
    return x + y;
}
