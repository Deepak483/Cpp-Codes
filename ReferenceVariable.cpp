#include <iostream>
using namespace std;
int main()
{

    string food = "burger";
    string drink = "water";
    string dessert = "ice cream";
    string &same_food = food;
    string &same_drink = drink;
    string &same_dessert = dessert;
    cout << same_food << endl;
    cout << same_drink << endl;
    cout << same_dessert << endl;
    cout << endl;
    same_food = "pizza"; // if we change the reference variable value then the original variable value will change too.
    // reference and pointer are the two main concept in c++ programming which is not in python and java.
    //  we can also get the address of the variable using the & operator.
    cout << same_food << endl;
    cout << food << endl;
    cout << &same_food << endl;
    cout << &food << endl;
}