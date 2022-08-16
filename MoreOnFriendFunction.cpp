// #include <iostream>
// using namespace std;
// // forward declaration.
// class Y;
// class X
// {
//     int data1; // variable data
// public:
//     void setValue(int value)
//     {
//         data1 = value;
//     }
//     friend void add(X, Y);
// };
// class Y
// {
//     int data2;

// public:
//     void setValue(int value)
//     {
//         data2 = value;
//     }
//     friend void add(X, Y);
// };
// void add(X o1, Y o2)
// {
//     cout << "Addition of data of X and Y gives " << o1.data1 + o2.data2 << endl;
// }
// int main()
// {
//     X x;
//     Y y;
//     x.setValue(10);
//     y.setValue(20);
//     add(x, y);
//     return 0;
// }
#include <iostream>
using namespace std;
class C1
{
    int val1;

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << "val1: " << val1 << endl;
    }
};
class C2
{
    int val2;

public:
    void inData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << "val1: " << val2 << endl;
    }
};
void exchange(C1 &c1, C2 &c2)
{
    int temp = c1.val1;
    c1.val1 = c2.val2;
    c2.val2 = temp;
}

int main()
{

    return 0;
}