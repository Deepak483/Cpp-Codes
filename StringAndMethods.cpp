#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string fruit{"Apple "};
    // fruit.append(" Banana");
    // cout << fruit.append(" Banana") << endl;
    // cout << fruit.length() << endl;
    // cout << fruit.insert(5, " Pineapple") << endl;
    // cout << fruit.erase(5, 1) << endl;
    // cout << fruit.erase(3) << endl;
    // fruit.pop_back();
    // fruit.push_back('c');
    // fruit.replace(5, 1, " Banana"); // give first the index where you want to replace the string then how many letters to replace then enter the required string
    // cout << fruit << endl;

    // basic string operation continue
    string greeting = "What the hell?";

    // cout << greeting.find("hell") << endl; // give the starting index of the string
    // cout << greeting.substr(9, 4) << endl; // used when we have to obtain some part of the string
    // cout << greeting.replace(greeting.find("hell"), 4, "****") << endl;
    // cout << greeting.find_first_of("aeiou") << endl;
    // cout << greeting.find_last_of("aeiou") << endl;
    if (greeting.compare("What the hell?") == 0)
        cout << "Equals";
    else
        cout << "Not Equals";
}