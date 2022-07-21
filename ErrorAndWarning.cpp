#include <iostream>
int main()
{

    /*
    std::cout "Printing data to the console terminal"
    std::cin "Taking input from the console"
    std::cerr "Printing error to the console"
    std::clog "Printing log message to the console"
    */
    // std::cout "priting stuff to the console"
    // std::cout << "Hello World bhai shab!!" << std::endl;
    // int age{21};
    // std::cout << "Age is " << age << std::endl;
    // std::cerr "printing error"
    // std::cerr << "std::cerr output:Something went wrong" << std::endl;
    // std::clog "printing log message"
    // std::clog << "std::clog output: log message on the console" << std::endl;

    // int age;
    // std::string name;
    // std::cout << "Please enter your Name: " << std::endl;
    // std::cin >> name;
    // std::cout << "Type your age: " << std::endl;
    // std::cin >> age;
    // std::cout << "hello " << name << " ! Your are " << age << " year old." << std::endl;

    // int age;
    // std::string name;
    // std::cout << "Please enter your Last name and age, separated by spaces :" << std::endl;
    // std::cin >> name >> age;
    // std::cout << "Hello! " << name << "! You are " << age << " year old." << std::endl;

    // Reading data with spaces
    int age = 0;
    std::string fullName;
    std::cout << "Please enter your full name:" << std::endl;
    std::getline(std::cin, fullName);
    std::cout << "Type in your age:" << std::endl;
    std::cin >> age;
    std::cout << "Hello " << fullName << "! You are " << age << " year old." << std::endl;
}
