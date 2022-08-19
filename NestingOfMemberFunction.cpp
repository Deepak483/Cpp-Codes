#include <iostream>
using namespace std;

class Binary
{
    string s;
    void chkBin(void);

public:
    void read(void);
    void onesCompliment(void);
    void display(void);
};
void Binary::read(void)
{
    cout << "Enter a binary number: " << endl;
    cin >> s;
}
void Binary::chkBin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format!" << endl;
            exit(0);
        }
    }
}
void Binary::onesCompliment(void)
{
    chkBin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary::display(void)
{
    cout << "Displaying your binary number : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chkBin();
    // b.display();
    b.onesCompliment();
    b.display();
    return 0;
}

/*
nesting of member function means that we can call the function inside the another function
like chkBin() function is used in onesCompliment because first we can check if the number is binary or not then find out the ones compliment of it.
also this will help to maintain  the data integrate of the codes
Now no one can call chkBin() function code will give the error
*/