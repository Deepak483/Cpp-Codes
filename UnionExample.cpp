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
    char bookName[20];
    float bookPrice;
};

int main()
{
    union book vr;
    vr.bookId = 101;
    vr.bookPrice = 200.00;
    cout << "Book Id : " << vr.bookId << endl;//gives garbage value
    cout << "Book Price : " << vr.bookPrice << endl;//this will give you atuaal value 200
    return 0;
}