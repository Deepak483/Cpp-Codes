#include <iostream>
int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop!!" << std::endl;
    }
    else
    {
        std::cout << "Go Through!!" << std::endl;
    }
    if (green_light)
    {
        std::cout << "Light is green." << std::endl;
    }
    else
    {
        std::cout << "Light is not green(red)." << std::endl;
    }
}