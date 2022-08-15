#include <iostream>
using namespace std;
class X
{
    int data1; // variable data
public:
    void setValue(int value)
    {
        data1 = value;
    }
};
class Y
{
    int data2;

public:
    void setValue(int value)
    {
        data2 = value;
    }
};

int main()
{
    X x;
    Y y;
    x.setValue(10);
    y.setValue(20);
    return 0;
}