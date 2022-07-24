#include <iostream>
int main()
{
    // auto var1{20};
    // auto var2{13.0};
    // auto var3{14.0f};
    // auto var4{15.0l};
    // auto var5{'e'};

    // int modifier suffixes
    // auto var6{123u};  // unsigned
    // auto var7{123ul}; // unsigned long
    // auto var8{123ll}; // long long

    // std::cout << sizeof(var1) << std::endl;
    // std::cout << sizeof(var2) << std::endl;
    // std::cout << sizeof(var3) << std::endl;
    // std::cout << sizeof(var4) << std::endl;
    // std::cout << sizeof(var5) << std::endl;

    // std::cout << sizeof(var6) << std::endl;
    // std::cout << sizeof(var7) << std::endl;
    // std::cout << sizeof(var8) << std::endl;

    int var{133}; // declare and intialize
    std::cout << var << std::endl;

    var = 55; // assign
    std::cout << var << std::endl;

    bool state{false}; // declare and intialize
    std::cout << std::boolalpha;
    std::cout << "state :" << state << std::endl;

    state = true;
    std::cout << "state :" << state << std::endl;

    std::cout << "----------------------------------------------------------------" << std::endl;
    // careful about auto Assignement
    auto var3{33u}; // declare and assign unsigned
    var3 = -22;     // assigning now negative value leads to give garbage value;

    std::cout << var3 << std::endl;
    
}