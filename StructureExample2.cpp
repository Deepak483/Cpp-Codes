#include <iostream>
using namespace std;

// sample structure
struct Student
{
    string name;
    int age;
    int marks;
};
typedef struct Employee
{
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    struct Student Emily;
    Emily.name = "Emily";
    Emily.age = 20;
    Emily.marks = 89;
    cout << Emily.name << endl;
    cout << Emily.age << endl;
    cout << Emily.marks << endl;
    cout << endl;

    // defining next structure employee
    cout << "Employee structure" << endl;
    cout << endl;
    ep emp; // by using typedef keyword now we can acces struct employee as ep
    // same thing can be done like
    /* struct Employee emp */
    emp.eId = 101;
    emp.favChar = 'A';
    emp.salary = 10000;

    cout << emp.eId << endl;
    cout << emp.favChar << endl;
    cout << emp.salary << endl;
    return 0;
}