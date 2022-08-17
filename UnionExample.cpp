/*
defining union be same as structure
union union_name{
    data member1;
    data member2;
    data member3;
}
accessing union memmber
union_name.member_name
*/
#include <iostream>
using namespace std;

// union example
union book
{
    int bookId;
    char bookName;
    float bookPrice;
};

union money
{
    int rupees;
    float dollar;
};

int main()
{
    // union book bk;
    // cout << "Enter Book Id No: " << endl;
    // cin >> bk.bookId;
    // cout << "Enter Book Name: " << endl;
    // // cin >> bk.bookName;
    // cout << "Enter price of book: " << endl;
    // cin >> bk.bookPrice;

    // cout << endl;
    // cout << "Book Id No: " << bk.bookId << endl;
    // cout << "Book Name : " << bk.bookId << endl;
    // cout << "Book price : " << bk.bookId << endl;
    union money my;
    my.rupees = 100;
    my.dollar = 400;
    cout << my.rupees << endl;
    my.dollar = 200;
    cout << my.dollar << endl;

    return 0;
}