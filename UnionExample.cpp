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
    vr.bookName = "Two";
    vr.price = 89;
    return 0;
}