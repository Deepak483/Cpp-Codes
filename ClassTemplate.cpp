#include <iostream>
using namespace std;
template <class t>

class Calculator
{
    // code here
private:
    t num1;
    t num2;

public:
    Calculator(t n1, t n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void displayResult()
    {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }
    t add()
    {
        return num1 + num2;
    }
    t subtract()
    {
        return num1 - num2;
    }
    t multiply()
    {
        return num1 * num2;
    }
    t divide()
    {
        return num1 / num2;
    }
};
int main()
{
    Calculator<int> intCalc(4, 5);
    intCalc.displayResult();

    Calculator<float> floatCalc(4.5, 5.3);
    floatCalc.displayResult();
    return 0;
}