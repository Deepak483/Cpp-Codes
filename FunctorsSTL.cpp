#include <bits/stdc++.h>
#include <algorithm>
// to  be included when u are using functors
// #include <functional>
using namespace std;
int main()
{
    // code here
    // Function Objects: Function wrapped in a class so that it is available like an object
    int arr[] = {3, 88, 2, 9, 11, 10};
    // cout << sizeof(arr);
    sort(arr, arr + 6);
    cout << "Printing the value of arrays: " << endl;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}