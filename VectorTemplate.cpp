#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    // cout << "Elements in the vector : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;        // zero length character vector
    vector<char> vec2(4);    // 4 elements character vector
    vector<char> vec3(vec2); // 4 elements character vector from vec2
    vector<int> v(6, 3);     // 6 element vectors of 3s
    int size = 5, element;
    vec2.push_back('g');
    vec2.push_back('d');
    // cout << "Enter the size of the vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the elements to add in the vector: " << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // cout << endl;
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 2, 2, 53);
    // display(vec1);

    display(vec2);

    return 0;
}