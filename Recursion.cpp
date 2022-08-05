// sample program of recursion
#include <iostream>
using namespace std;

int addfun(int n)
{
    if (n > 0)
    {
        return n + addfun(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int sum = addfun(10);
    cout << sum << endl;
    return 0;
}