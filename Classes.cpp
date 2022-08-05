#include <iostream>
using namespace std;

class MyClass
{
public:
    int myNum;
    string myString;
};
class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{
    MyClass obj; // create an instance of class using object this is object creation
    obj.myNum = 5;
    obj.myString = "Hii,there!!";
    cout << obj.myString << endl;
    cout << obj.myNum << endl;

    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1996;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1999;

    // Car carObj2;
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    return 0;
}
