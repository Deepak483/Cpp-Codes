#include <iostream>
using namespace std;
int main()
{
    int var = 56;
    int *ip;
    double *dp;
    float *fp;
    char *cp;
    ip = &var;
    cout << "Variable value: " << var << endl;
    cout << "Address in pointer: " << ip << endl; // address of pointer in both the case will going to be same
    cout << "pointer value: " << *ip << endl;

    cout << endl;
    // now changing the value of pointer will change the value of variable var
    *ip = 6;
    cout << "Variable value " << var << endl;
    cout << "Address in pointer: " << ip << endl;
    cout << "pointer value: " << *ip << endl;
}