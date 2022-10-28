#include <iostream>
using namespace std;
template <typename T1 = int, typename T2 = int>
T1 add(T1 num1, T2 num2)
{
    return (num1 + num2);
}
int main()
{
    float result1;
    // calling with int parameters
    result1 = add<float, float>(4.2, 8.9);
    cout << result1 << endl;

    double result2;
    result2 = add<>(3.4, 9.2);
    cout << "Result2: " << result2 << endl;
    return 0;
}