#include <iostream>
using namespace std;
int main()
{
    // bool red_light{true};
    // bool green_light{false};

    // if (red_light == true)
    // {
    //     std::cout << "Stop!!" << std::endl;
    // }
    // else
    // {
    //     std::cout << "Go Through!!" << std::endl;
    // }
    // if (green_light)
    // {
    //     std::cout << "Light is green." << std::endl;
    // }
    // else
    // {
    //     std::cout << "Light is not green(red)." << std::endl;
    // }
    // // printing out a bool
    // //  1 --> true
    // //  0 --> false
    // std::cout << std::endl;
    // std::cout << "red_light :" << red_light << std::endl;
    // std::cout << "green_light :" << green_light << std::endl;

    // // Printing out true and false
    // std::cout << std::endl;
    // std::cout << std::boolalpha; // Forces the output format to true/false
    // std::cout << "red_light :" << red_light << std::endl;
    // std::cout << "green_light :" << green_light << std::endl; // Prints out true and false
    int age = 18;
    bool value = (age > 18) ? "Right to vote" : "Not eligible to vote";
    cout << std::boolalpha << value << endl;
    
}
