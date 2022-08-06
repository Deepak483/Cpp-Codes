#include <iostream>
using namespace std;

// base class
class Employee
{
protected: // access specifier protected
    int salary;
};

// derived class
class Programmer : public Employee
{
public:
    int bonus; // variable in derived class which is public
    // setter function
    void setSalary(int s)
    {
        salary = s;
    }
    // getter function
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Programmer p;
    p.setSalary(150000);
    cout << "Salary: " << p.getSalary() << endl;
    p.bonus = 1000;
    cout << "Bonus: " << p.bonus << endl;
    return 0;
}