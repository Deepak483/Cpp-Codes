#include <iostream>
using namespace std;
int main()
{
    int scores[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count{size(scores)};
    cout << "sizeof(scores): " << sizeof(scores) << endl;
    cout << "sizeof(scores[0]): " << sizeof(scores[0]) << endl;
    // for (size_t i{0}; i < count; i++)
    // {
    //     cout << "scores[" << i << "] : " << scores[i] << endl;
    // }
    

    return 0;
}