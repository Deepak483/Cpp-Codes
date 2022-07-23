#include <iostream>
using namespace std;
int main()
{
    // short short_var{-32768};
    // cout << sizeof(short_var) << endl; // print 2 as size
    // cout << short_var << endl;
    // signed short signed_sort{122};
    // signed short int signed_sort_int{-456};
    // unsigned short int unsigned_sort_int{456};
    /*
    cout << "signed sort :" << signed_sort << endl;
    cout << "signed sort int :" << signed_sort_int << endl;
    cout << "unsigned sort int :" << unsigned_sort_int << endl;
    */
    // cout << "size of signed sort int " << sizeof(signed_sort_int) << endl;
    // cout << "size of unsigned sort int " << sizeof(unsigned_sort_int) << endl;

    long long_var{88};
    long int long_var_int{33};
    signed long signed_long_var{463};
    signed long int signed_long_int_var{89};
    unsigned long int unsigned_long_int_var{844};

    // cout << "long var :" << long_var << endl;
    // cout << "long var int " << sizeof((long_var_int)) << endl;
    // cout << "singed long " << sizeof(signed_long_var) << endl;
    // cout << "singed long int var " << sizeof(signed_long_int_var) << endl;
    // cout << "unsinged long int var " << sizeof(unsigned_long_int_var) << endl;
    // cout << signed_long_var << endl;
    // cout << unsigned_long_int_var << endl;

    // signed signed_value{33};
    // cout << sizeof(signed_value) << endl;
    long long long_long{888};
    long long int long_long_int{999};
    signed long long signed_long_long{4443};
    signed long long int signed_long_long_int{4443};
    unsigned long long int unsigned_long_long_int{4443};
    cout << unsigned_long_long_int << endl;
    cout << "size of unsigned long long int " << sizeof(unsigned_long_long_int) << endl;//print size as 8
}