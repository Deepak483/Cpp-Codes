#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // ofstream is used to create and write in files
    ofstream myFile("filename.txt");

    //<< operator is used to write in files
    myFile << "Another example of a simple example" << endl;
    myFile << "new line" << endl;

    // close() is used to close the file
    myFile.close();

    ofstream myNewFile("filename1.txt");
    myNewFile << "Another example of a simple example" << endl;
    myNewFile.close();

    return 0;
}