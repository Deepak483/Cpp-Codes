#include <iostream>
using namespace std;
int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted--you are old enough to vote" << endl;
        }
        else
        {
            // throw age;
            throw 505;
        }
    }
    // catch (int myAge)
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old to vote" << endl;
        // cout << "Age is: " << myAge << endl;
        // cout << "Error no: " << myAge << endl;
        // cout << "Error no:" << endl;
    }
}