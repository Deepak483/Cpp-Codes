#include <iostream>
using namespace std;
int main()
{

    int number1 = 33, number2 = 45;
    // addition of two numbers
    int sum{number1 + number2};
    cout << "Sum of " << number1 << " and " << number2 << " is " << sum << endl;

    // subtraction of two numbers
    int result = number2 - number1;
    cout << "Subtraction of " << number1 << " and " << number2 << " is " << result
         << endl;

    // multiplication of two numbers
    result = number2 * number1;
    cout << "Multiplication of " << number1 << " and " << number2 << " is " << result << endl;

    // division of two numbers
    result = number2 / number1;
    cout << "Divsion of " << number1 << " and " << number2 << " is " << result << endl;

    // modulus of two number
    result = number2 % number1;
    cout << "Modulus of " << number1 << " and " << number2 << " is " << result << endl;
}