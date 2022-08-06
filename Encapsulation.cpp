#include <iostream>
using namespace std;

class MyClass
{
private:
    int bonus;

public:
    // setter
    void setBonus(int x)
    {
        bonus = x;
    }
    // getter
    int getBonus()
    {
        return bonus;
    }
};
int main()
{
    MyClass obj;
    obj.setBonus(100);
    cout << obj.getBonus() << endl;
    return 0;
}
