#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 10)
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};
void Simple::printData()
{
    cout << "The value of the data1 and data2 is " << data1 << " and " << data2 << endl;
}
int main()
{
    Simple s(1);
    s.printData();
    return 0;
}