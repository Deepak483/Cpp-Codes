#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string TextFile;
    ifstream myfile("filename.txt");
    while (getline(myfile, TextFile))
    {
        cout << TextFile << endl;
    }
    // close the file
    myfile.close();

    ifstream mynewFile("filename1.txt");
    while (getline(mynewFile, TextFile))
    {
        cout << TextFile << endl;
    }
    mynewFile.close();

    return 0;
}