#include <iostream>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;
    // Car(string x, string y, int z)
    // {
    //     brand = x;
    //     model = y;
    //     year = z;
    // }
    // constructor can be declared outside the class also
    // first we have to declared constructor in class then definition outside
    Car(string x, string y, int z);
};
Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    Car carObj1("Jaguar", "XB58", 1998);
    Car carObj2("Ford", "Mustang", 1999);

    // Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
}