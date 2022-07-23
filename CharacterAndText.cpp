#include <iostream>
int main()
{
    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    // printing the character
    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    // One byte in memory 2^8=256 different values can be stored
    std::cout << std::endl;
    char value = 65; // ASCII character code for 'A'
    std::cout << "value :" << value << std::endl;
    std::cout << "value(int) :" << static_cast<int>(value) << std::endl;
    char value97 = 97;
    std::cout << value97 << static_cast<int>(value97) << std::endl;
}