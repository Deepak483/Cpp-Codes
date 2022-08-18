#include <iostream>
using namespace std;
int main()
{
    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner<<endl;

    Meal meal;
    meal = dinner;
    cout << meal << endl;

    cout << boolalpha;
    meal = lunch;
    cout << (meal == 1);
    return 0;
}