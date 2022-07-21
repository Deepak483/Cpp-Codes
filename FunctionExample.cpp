#include <iostream>
int AddNumber(int first_param, int second_param)
{
    int sum = first_param + second_param;
    return sum;
}
int main()
{
    int first_number{32};
    int second_number{33};
    int sum = first_number + second_number;
    std::cout << "sum of the number is " << sum << std::endl;
    std::cout << "sum using function " << AddNumber(36, 89) << std::endl;
}