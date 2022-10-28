#include <iostream>
using namespace std;
// It is also class function template
template <class T>
class Vector
{
public:
    int size;
    T *arr;

public:
    Vector(int m)
    {
        m = size;
        arr = new T[size];
    }
    T DotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 0.2;
    v1.arr[1] = 5.2;
    v1.arr[2] = 2.1;

    Vector<float> v2(3);
    v2.arr[0] = 2.2;
    v2.arr[1] = 0.2;
    v2.arr[2] = 3.1;
    float a = v1.DotProduct(v2);
    cout << a << endl;
    return 0;
}