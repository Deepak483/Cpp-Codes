/* we can declare methods in class which is same as functions in two ways
    1) inside the class methods will be created
    2) outside the class methods will be created using :: scope resolution operator
*/

#include <iostream>
using namespace std;

// in myclass we have followed inside method declaration where methods has declartion and defination as well.
class MyClass
{
public:
    void myMethod1()
    {
        cout << "hello method1" << endl;
    }
};
// in myClass1 we have followed outside method declartion
class MyClass1
{
public:
    void myMethod2();
};

void MyClass1::myMethod2()
{
    cout << "Hello method2 of myclass1";
}

int main()
{
    MyClass myclassObj;
    myclassObj.myMethod1();
    MyClass1 myclassObj1;
    myclassObj1.myMethod2();
    return 0;
}