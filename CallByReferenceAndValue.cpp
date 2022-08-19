#include <iostream>
using namespace std;

// function sum
int sum(int a, int b)
{
    return a + b;
}

// swap -> swap two variables
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 8;
    cout << "The sum of " << a << " and " << b << " is " << sum(a, b) << endl;
    // swap(a, b);
    return 0;
}