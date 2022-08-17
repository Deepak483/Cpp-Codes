#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
// this will not swap the code
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
// this will swap using pointer reference
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// this will swap using reference variable
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// example of returning a reference
// int &swapReferenceVar(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }
int main()
{
    int x = 10, y = 20;
    cout << "sum of x and y is " << sum(x, y) << endl;
    // swap(x, y);
    // swapPointer(&x, &y); // this will swap using pointer reference
    swapReference(x, y); // this will swap using reference variable
    cout << "Swap varible x and y is " << x << " " << y << endl;

    // swapReferenceVar(x, y) = 766;
    // cout << "Swap varible x and y is " << x << " " << y << endl;
    return 0;
}