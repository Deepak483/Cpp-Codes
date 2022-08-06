#include <iostream>
using namespace std;

// parent class
class Person
{
public:
    string name;
    int age;

    void introduce()
    {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};

// child class
class Child : public Person
{
public:
    string hair_color;
    void action()
    {
        cout << "I can do things like walk, talk and speak." << endl;
    }
};

// grandchild class
class GrandChild : public Child
{
public:
    void eat()
    {
        cout << "I can eat." << endl;
    }
};

int main()
{
    GrandChild myObj;
    myObj.eat();
    myObj.action();
    return 0;
}