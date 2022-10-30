// vector push_back example
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*code here*/
    vector<int> myvector;
    int myint;
    cout << "Please enter some integers from 0 to end: " << endl;
    do
    {
        cin >> myint;
        myvector.push_back(myint);
    } while (myint);
    cout << "My vector stores " << int(myvector.size()) << " numbers. \n";
    
    return 0;
}