#include <iostream>
using namespace std;
void swapNums(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(int argc, char *argv[])
{

    int firstNum = 40;
    int secondNum = 30;
    cout << "Before Swapping:" << endl;
    cout << firstNum << " " << secondNum << endl;
    swapNums(firstNum, secondNum);

    cout << "After Swapping:" << endl;

    cout << firstNum << " " << secondNum << endl;
}