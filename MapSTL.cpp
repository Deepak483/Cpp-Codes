#include <bits/stdc++.h>
// #include <string>
// #include <map>
/*#include<string>
  #include<map>
  when u are using string and map in the programmer*/
using namespace std;

// map is associative array
int main()
{
    map<string, int> mapMarks;
    mapMarks["Deepak"] = 99;
    mapMarks["Rajamouli"] = 59;
    mapMarks["Shatak"] = 2;

    // just try
    map<string, string> nameSurname;
    nameSurname["Deepak"] = "Tiwari";
    nameSurname["Raju"] = "Shrivastva";
    nameSurname["Jason"] = "Bourne";
    nameSurname["Orvell"] = "Fernandes";

    // map<string, int>::iterator itr;
    // for (itr = nameSurname.begin(); itr != nameSurname.end(); itr++)
    // {
    //     cout << (*itr).first << " " << (*itr).second << endl;
    // }

    map<string, int>::iterator iter;
    for (iter = mapMarks.begin(); iter != mapMarks.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout << "The size is: " << mapMarks.size() << endl;
    cout << "The max size is : " << mapMarks.max_size() << endl;
    cout << "The empty return value  is : " << mapMarks.empty() << endl;
    return 0;
}