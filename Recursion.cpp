// // sample program of recursion
// #include <iostream>
// using namespace std;

// int addfun(int n)
// {
//     if (n > 0)
//     {
//         return n + addfun(n - 1);
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int sum = addfun(10);
//     cout << sum << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int factorial(int);
int main()
{
    int fact, value;
    cout << "Enter the value:" << endl;
    cin >> value;
    fact = factorial(value);
    cout << "Factorial of the " << value << " : " << fact << endl;
    return 0;
}
int factorial(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}