// #include <iostream>
// using namespace std;
// int main()
// {
//     /*
//         switch(expression){
//             case value1:
//                 statement1;
//                 break;
//             case value2:
//                 statement2;
//                 break;
//             case value3:
//                 statement3;
//                 break;
//             default:
//                 statement4;
//                 break;
//         }
//     */
//     int day;
//     cout << "Enter the day: " << endl;
//     cin >> day;
//     switch (day)

//     {
//     case 1:
//         cout << "Monday" << endl;
//         break;
//     case 2:
//         cout << "Tuesday" << endl;
//         break;
//     case 3:
//         cout << "Wednesday" << endl;
//         break;
//     case 4:
//         cout << "Thursday" << endl;
//         break;
//     case 5:
//         cout << "Friday" << endl;
//         break;
//     case 6:
//         cout << "Saturday" << endl;
//         break;
//     case 7:
//         cout << "Sunday" << endl;
//         break;
//     default:
//         cout << "Not found!!" << endl;
//         break;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    // int i = 1;
    // while (i < 6)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    // cout << endl;
    // i = 0;
    // do
    // {
    //     cout << i << endl;
    //     i++;
    // } while (i < 6);
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break; // continue will not print the i = 4 but print other values
        }
        cout << i << endl;
    }
}