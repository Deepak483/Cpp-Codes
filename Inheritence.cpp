#include <iostream>
using namespace std;

// creation of of vehicle class
// template <typename T>
class Vehicle
{
public:
    string brand = "Ford";

    void honk()
    {
        cout << "Pom pom!!" << endl;
    }
};
class Car : public Vehicle
{
public:
    string model = "Mustang";
};

int main()
{
    Car myCar;
    myCar.honk();
    cout << myCar.brand << endl;
    cout << myCar.model << endl;
    
    return 0;
}