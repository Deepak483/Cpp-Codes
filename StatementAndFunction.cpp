#include <iostream>

int addNumber(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}
int main()
{
    int firstNumber{10};
    int secondNumber{34};
    int sum = addNumber(firstNumber, secondNumber);
    sum = addNumber(14, 34);
    std::cout << "Sum of the two numbers is :" << sum << std::endl;
    std::cout << "Sum of the two numbers is :" << addNumber(10, 33) << std::endl;
    return 0;
}