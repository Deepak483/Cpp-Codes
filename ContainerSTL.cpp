#include <bits/stdc++.h>
//#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        /* code */
        cout << (*it) << endl;
    }
}
int main()
{
    // 6 8 9 10
    int size, element;
    list<int> lst1;  // empty list of size zero
    list<int> list2; // list of size 7 but empty value
    lst1.push_back(6);
    lst1.push_back(8);
    lst1.push_back(9);
    lst1.push_back(10);

    // iterator
    list<int>::iterator itr;
    /* for printing the whole values*/
    // for (itr = lst1.begin(); itr != lst1.end(); itr++)
    // {
    //     cout << (*itr) << endl;
    // }

    // itr = lst1.begin();
    // cout << *itr << endl;
    // cout << "Enter the value of the size: " << endl;
    // cin >> size;
    // for (int i = 1; i <= size; i++)
    // {
    //     /* code */
    //     cout << "Enter the value: ";
    //     cin >> element;
    //     list2.push_back(element);
    // }
    // display(list2);
    // lst1.pop_back();
    lst1.remove();
    // lst1.pop_front();
    display(lst1);
    return 0;
}