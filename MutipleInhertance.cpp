#include <iostream>
using namespace std;

class Parent
{
public:
    void myParentFunction()
    {
        cout << "Some content in Parent function" << endl;
    }
};
class Child
{
public:
    void myChildFunction()
    {
        cout << "Some content in Child function" << endl;
    }
};
class MyOtherFunction : public Child, public Parent
{
public:
    void myOtherFunction()
    {
        cout << "Some content in MyOtherFunction function" << endl;
    }
};

;
int main()
{
    MyOtherFunction myObj;
    myObj.myOtherFunction();
    myObj.myChildFunction();
    myObj.myParentFunction();
    return 0;
}