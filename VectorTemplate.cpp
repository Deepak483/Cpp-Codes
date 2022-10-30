#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    cout << "Elements in the vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int size, element;
    cout << "Enter the size of the vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements to add in the vector: " << endl;
        cin >> element;
        vec1.push_back(element);
    }
    vec1.pop_back();
    cout << endl;
    display(vec1);

    return 0;
}