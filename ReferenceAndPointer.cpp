#include <iostream>
using namespace std;
int main()
{
    /* This is the example of reference variable
        string food = "pizza";
        string &same_food = food; // reference variable same food
        cout << same_food << endl;
        string drink = "water";

        cout << endl;
        food = "burger";
        cout << same_food << endl;
        cout << &same_food << endl; // address
        cout<<&food<<endl;
        */
    // string action = "walk";
    // string *ptr_action = &action;
    // cout << action << endl;
    // cout << &action << endl;
    // cout << ptr_action << endl;
    // cout << &action << endl;     // output --> 0x91157ff930
    // cout << *ptr_action << endl; // output --> walk
    // int x = 5;
    // ++x;
    // cout << x; // output --> 6
    // modifying the value of the pointers
    string food = "Pizza";
    string *ptr = &food;
    cout << "before changing the value of the pointer" << endl;
    cout << *ptr << endl;
    cout << endl;
    cout << "after chaning the value of pointer" << endl;
    *ptr = "samosa";
    cout << *ptr << endl;
}