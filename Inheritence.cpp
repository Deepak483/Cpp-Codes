// #include <iostream>
// using namespace std;

// // creation of of vehicle class
// // template <typename T>
// class Vehicle
// {
// public:
//     string brand = "Ford";

//     void honk()
//     {
//         cout << "Pom pom!!" << endl;
//     }
// };
// class Car : public Vehicle
// {
// public:
//     string model = "Mustang";
// };

// int main()
// {
//     Car myCar;
//     myCar.honk();
//     cout << myCar.brand << endl;
//     cout << myCar.model << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

class Bird
{
    string color;
    int legs;

public:
    void eat()
    {
        cout << "The bird has eaten" << endl;
    }
    void fly()
    {
        cout << "The bird is flying" << endl;
    }
};
// derived class: which is inherited from bird class
class Pigeon : public Bird
{
public:
    void fly()
    {
        cout << "Pigeon is flying" << endl;
    }
};
int main()
{
    Pigeon p;
    p.fly();

    return 0;
}