#include <iostream>
using namespace std;

// Polymorphism simply means that a class can take on many forms.
// Inheritance is one of the ways to achieve polymorphism.
// base class Animal
class Animal
{
public:
    void animalSound()
    {
        cout << "Animal makes some sound" << endl;
    }
};
// derived class pig inherits animal class
class Pig : public Animal
{
public:
    void animalSound()
    {
        cout << "Pigs make sound wee wee \n";
    }
};
// derived class dog inherits animal class
class Cat : public Animal
{
public:
    void animalSound()
    {
        cout << "Cat makes sound meow  meow\n";
    }
};
int main()
{
    Animal myanimal;
    Pig mypig;
    Cat mycat;
    myanimal.animalSound();
    mypig.animalSound();
    mycat.animalSound();

    return 0;
}