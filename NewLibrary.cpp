#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // setw,setfill,boolalpha,noboolalpha,showpos
    /*
    std::cout<<"Unformatted Table:"<<std::endl;
    std::cout<<"Daniel"<<" "<<"Gray"<<" "<<"25"<<std::endl;
    std::cout<<"Stanley"<<" "<<"Woods"<<" "<<"33"<<std::endl;
    std::cout<<"Jordan"<<" "<<"Parker"<<" "<<"45"<<std::endl;
    std::cout<<"Harry"<<" "<<"Brokes"<<" "<<"22"<<std::endl;
    std::cout<<"Laim"<<" "<<"Levingstone"<<" "<<"34"<<std::endl;


    std::cout<<std::endl;
    std::cout<<"Formatted Table"<<std::endl;
    std::cout<<std::setw(10)<< "Lastname"<<std::setw(10)<<"FirstName"<<std::setw(5)<< "Age"<<std::endl;
    std::cout<<std::setw(10)<< "Gray"<<std::setw(10)<<"Daniel"<<std::setw(5)<< "25"<<std::endl;
    std::cout<<std::setw(10)<< "Woods"<<std::setw(10)<<"Stanley"<<std::setw(5)<< "33"<<std::endl;
    std::cout<<std::setw(10)<< "Parker"<<std::setw(10)<<"Jordan"<<std::setw(5)<< "45"<<std::endl;
    std::cout<<std::setw(10)<< "Brokes"<<std::setw(10)<<"Harry"<<std::setw(5)<< "22"<<std::endl;
    std::cout<<std::setw(10)<< "Levingstone"<<std::setw(10)<<"Laim"<<std::setw()<< "34"<<std::endl;
    */
    // setfill,showpos
    // int col_width = 20;
    // cout << left;
    // cout << setfill('-');
    // cout << setw(col_width) << "LastName" << setw(col_width) << "FirstName" << setw(col_width) << "Age" << endl;
    // cout << setw(col_width) << "Gray" << setw(col_width) << "Daniel" << setw(col_width) << "25" << endl;
    // cout << setw(col_width) << "Woods" << setw(col_width) << "Stanley" << setw(col_width) << "33" << endl;
    // cout << setw(col_width) << "Parker" << setw(col_width) << "Jordan" << setw(col_width) << "45" << endl;
    // cout << setw(col_width) << "Brokes" << setw(col_width) << "Harry" << setw(col_width) << "22" << endl;
    // cout << setw(col_width) << "Levingstone" << setw(col_width) << "Liam" << setw(col_width) << "34" << endl;

    // showpos or noshowpos :show or hide the + sign for positive numbers
    int pos_num{34};
    int neg_num{-45};

    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl;

    // cout << showpos;
    // cout << "After showpos" << endl;
    // cout << "pos_num: " << pos_num << endl;
    // cout << "neg_num: " << neg_num << endl;

    cout << noshowpos;
    cout << "After no showpos" << endl;
    cout << "pos_num: " << pos_num << endl;
    cout << "neg_num: " << neg_num << endl;
}