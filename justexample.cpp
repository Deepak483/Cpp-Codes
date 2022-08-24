// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }
// // this will not swap the code
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// // this will swap using pointer reference
// void swapPointer(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // this will swap using reference variable
// void swapReference(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// // example of returning a reference
// // int &swapReferenceVar(int &a, int &b)
// // {
// //     int temp = a;
// //     a = b;
// //     b = temp;
// //     return a;
// // }
// int main()
// {
//     int x = 10, y = 20;
//     cout << "sum of x and y is " << sum(x, y) << endl;
//     // swap(x, y);
//     // swapPointer(&x, &y); // this will swap using pointer reference
//     swapReference(x, y); // this will swap using reference variable
//     cout << "Swap varible x and y is " << x << " " << y << endl;

//     // swapReferenceVar(x, y) = 766;
//     // cout << "Swap varible x and y is " << x << " " << y << endl;
//     return 0;
// }

//*second example code just for practice
#include <iostream>
using namespace std;
int count = 0;
class Num
{
public:
    Num()
    {

        cout << "this is constructor and object no :" << count << endl;
        count++;
    }
    ~Num()
    {
        cout << "This is destructor and object no : " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function " << endl;
    cout << "Creating our first object n1" << endl;
    Num n1;
    {
        cout << "Entering another block " << endl;
        cout << "Creating two more object " << endl;
        Num n2, n3;
        cout << "Exiting the another block" << endl;
    }
    cout << "Back to the main function" << endl;
    return 0;
}