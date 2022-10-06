#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *p = &a;

    int *ptr = new int(40);
    float *x = new float(40.99);

    delete ptr; // !delete operator

    cout << "The value address x is " << *x << endl;
    cout << "The value at address ptr is " << *(ptr) << endl;
    cout << "The value of a is " << *(p) << endl;

    // *we can also create array of dynamically by pointers new concept
    // *new operator
    int *arr = new int[3];
    arr[0] = 33;
    arr[1] = 99;
    arr[2] = 77;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}