#include <iostream>
using namespace std;

class Car
{
public:
    int speed(int maxspeed);
};
int Car::speed(int maxspeed)
{
    return maxspeed;
}

int main()
{
    Car mycarObj;
    int speed = mycarObj.speed(500);
    cout << speed;
    return 0;
}