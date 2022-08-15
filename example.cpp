// #include <iostream>
// using namespace std;
// int main()
// {
//     int scores[] = {1, 3, 3, 899, 382, 88};
//     // int count{std::size(scores)};
//     cout << "sizeof(scores) :" << sizeof(scores) << endl;
//     cout << "sizeof(scores[0]) :" << sizeof(scores[0]) << endl;
//     int count{sizeof(scores) / sizeof(scores[0])};

//     // for (size_t i{}; i < count; i++)
//     // {
//     //     cout << "scores[" << i << "] :" << scores[i] << endl;
//     // }
//     for (auto i : scores)
//     {
//         cout << "value: " << i << std::endl;
//     }
//     char name[] = {'H', 'e', 'l', 'l', 'o'};
//     for (char i : name)
//     {
//         cout << "name: " << i << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    // Declare array
    char messages[5] = {'H', 'e', 'l', 'l', 'o'};
    cout << "messages :" << endl;
    for (auto c : messages)
    {
        cout << c;
    }

    return 0;
}