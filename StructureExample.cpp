#include <iostream>
using namespace std;
int main()
{
    // creating the structure
    struct
    {
        int age;
        string myString;
        bool isTrue;
    } myStructure;

    // Assign the value to the structure
    myStructure.myString = "Hello";
    myStructure.isTrue = true;
    myStructure.age = 18;

    // printing the structure variable
    cout << myStructure.myString << endl;
    cout << myStructure.isTrue << endl;
    cout << myStructure.age << endl;

    // we can also create one structure and assign to different struct variable
    struct
    {
        string brand;
        int year;
        string model;
    } myCar1, myCar2;
    myCar1.model = "24BCD";
    myCar1.brand = "BMW";
    myCar1.year = 2;

    // printing the myCar1
    cout << endl;
    cout << myCar1.brand << endl;
    cout << myCar1.model << endl;
    cout << myCar1.year << endl;

    myCar2.model = "Mustang";
    myCar2.brand = "Ford";
    myCar2.year = 1969;
    // printing the struct second variable
    cout << endl;
    cout << myCar2.brand << endl;
    cout << myCar2.model << endl;
    cout << myCar2.year << endl;

    return 0;
}