#include <iostream>
using namespace std;
// template <typename T>
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 1222;
        cout << "Enter the id of employee: " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "Id of the employee: " << id << endl;
    }
};

int main()
{
    Employee justin;
    // justin.setId();
    // justin.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}