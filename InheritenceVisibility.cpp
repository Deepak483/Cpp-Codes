#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;

public:
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    void display();
};
void Employee::display()
{
    cout << "the id of the employee is " << id << " and the salary is " << salary << endl;
}
/* //!Inheritance syntax
//* class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}{
    class members/methods/etc.
}
Note: //?Default visibility mode is private
!Private Visibility Mode: public members of the base class become private members of derived class
!Public Visibility Mode: public members of the base class become public membes of derived class
!Private members are never inherited
*/
class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 18;
    void display()
    {
        cout << "inside the programmer class" << endl;
    }
};
int main()
{

    Employee harry(2), jerison(3);
    harry.display();
    Programmer skillF(1);
    skillF.display(); // this is also called as function overriding
    cout << skillF.languageCode;
    // TODO: cout << skillF.id;
    //  TODO: cout << skillF.salary; // inaccessible as declared private while deriving
    return 0;
}