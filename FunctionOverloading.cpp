#include <iostream>
using namespace std;

int myFunPlus(int x, int y)
{
    return x + y;
}
double myFunPlus(double x, double y)
{
    return x + y;
}
int main()
{
    int myNum1 = myFunPlus(3, 4);
    double myNum2 = myFunPlus(3.3, 4.3);
    cout << myNum1 << endl;
    cout << myNum2 << endl;
    return 0; // default
}