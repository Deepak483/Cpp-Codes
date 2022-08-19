#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int count = 0;// don't have to declare here
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the emloyee id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Your employee id is " << id << " and you'r employee number " << count << endl;
    }
    static void getCount();
};

void Employee::getCount()
{
    cout << "The value of the count is " << count << endl;
}

int Employee::count; // default value is zero so don't have to explicitly declare it

int main()
{
    Employee deepak, hannah, clay;
    // deepak.id = 1; can't access the private member of the class
    deepak.setData();
    deepak.getData();
    deepak.getCount();

    hannah.setData();
    hannah.getData();
    hannah.getCount();

    clay.setData();
    clay.getData();
    hannah.getCount();

    return 0;
}