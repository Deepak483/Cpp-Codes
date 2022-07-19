#include <iostream>
using namespace std;
int main()
{
    // int value = 15;
    // string name = "Deepak Tiwari";
    // double fractiondigit = -15.45;
    // char singlechar = 'B';
    // bool isTrue = false;
    // bool isFalse = true;
    // cout << isTrue << endl;
    // cout << isFalse << endl;
    // cout << singlechar << endl;
    // cout << fractiondigit << endl;
    // cout << name << endl;
    // cout << value << endl;
    // if(isTrue == false){
    //     cout << "isTrue is false" << endl;
    // }
    // else{
    //     cout << "isTrue is true" << endl;
    // }
    int myAge = 25;
    cout << "my age is :" << myAge << endl;
    int a = 15;
    int b = 33;
    // defining multiple variables
    int x = 5, y = 7, z = 9;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "z is " << z << endl;
    // cout << sum;
    int sum = x + y + z;
    cout << "Sum of x ,y and z is " << sum << endl;
    cout << "sum of x and y is " << x + y;
    const int myNum = 15; // myNum will always be 15
                          // myNum = 10;           // error: assignment of read-only variable 'myNum'
    return 0;
}