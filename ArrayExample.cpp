#include <iostream>
using namespace std;
int main()
{
    // string name[4] = {"John", "Jane", "Jack", "Jill"};
    // int myNum[3] = {1, 2, 3};
    // cout << "Name: " << name[3] << endl;
    // string car[4] = {"Volvo", "BMW", "Audi", "Tesla"};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << car[i] << endl;
    // }
    // cout << endl;
    // car[3] = "Mercedes";
    // cout << car[3] << endl;
    // int myNumbers[5] = {10,20,30,40,50};
    // int getArrayLength = sizeof(myNumbers);
    // sizeof(int);
    // cout << "Array length: " << getArrayLength << endl;

    // two dimensional array
    string name[2][5] = {
        {"Deepak", "Naman", "Yuvraj", "Sandhya", "Pankaj"},
        {"Jerry", "Harry", "Smith", "John"}};

    // for (int i = 0; i <= 1; i++)
    // {
    //     for (int j = 0; j <= j5; i++)
    //     {
    //         cout << name[i][j] << endl;
    //     }
    // }
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << name[i][j] << endl;
    //     }
    // }
    // string letters[2][4] = {
    //     {"A", "B", "C", "D"},
    //     {"E", "F", "G", "H"}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << letters[i][j] << "\n";
    //     }
    // }

    // simple example to declare array and initialize it with values after declaration
    int mathMarks[5];
    mathMarks[0] = 19;
    mathMarks[1] = 89;
    mathMarks[2] = 95;
    mathMarks[3] = 74;
    mathMarks[4] = 98;
    int count = sizeof(mathMarks) / sizeof(mathMarks[0]);
    cout << "count : " << count << endl;
    for (size_t i = 0; i < count; i++)
    {
        cout << mathMarks[i] << "\t";
    }
    cout << endl;
    // Pointers with Array
    int *ptr = mathMarks;
    cout << *ptr << endl;     // 19
    cout << *(ptr++) << endl; // 19
    cout << *(++ptr) << endl; // 95
    cout << "mathMarks[0] : " << *ptr << endl;
    cout << "mathMarks[1] : " << *(ptr + 1) << endl;
    cout << "mathMarks[2] : " << *(ptr + 2) << endl;
    cout << "mathMarks[3] : " << *(ptr + 3) << endl;
    cout << "mathMarks[4] : " << *(ptr + 4) << endl;
    return 0;
}