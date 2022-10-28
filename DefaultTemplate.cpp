#include <iostream>
using namespace std;

template <class T1 = double, class T2 = double>
class Deepak
{
public:
    T1 a;
    T2 b;
    Deepak(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    Deepak<char, char> d('g', 'h');
    Deepak<int, double> e(7, 7.3);
    e.display();
    d.display();
    return 0;
}