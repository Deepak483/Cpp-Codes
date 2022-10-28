#include <iostream>
using namespace std;

//template defination
template <typename T> 
T myMax(T x, T y)
{
    return (x > y ? x : y);
}
int main()
{
    cout << myMax<int>(7, 3) << endl;//call myMax for int
    cout<<myMax<char>('g','e')<<endl; //call myMax for double
    cout<<myMax<double>(3.2,7.3)<<endl;
    return 0;
}