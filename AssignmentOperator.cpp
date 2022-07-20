#include <iostream>
#include <string>
using namespace std;
int main()
{
    string greeting = "Hello, world!";
    cout << greeting << endl;
    // greeting.size();
    greeting.append("!");// some string methods
    cout << greeting << endl;
    cout << greeting.size() << endl;
    string firstName = "Deepak";
    string lastName = "Tiwari";
    string fullName = firstName + " " + lastName;
    //same line with append method
    cout<<firstName.append(lastName);
    // cout << fullName << endl;
    //trying to add string with number
    string x = "10";
    int y = 20;
    // cout << x + y << endl; this line will give error because of type mismatch  between string and int
}