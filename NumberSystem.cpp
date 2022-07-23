#include <iostream>
int main()
{

    // int number1 = 15;         // Decimal
    // int number2 = 017;        // Octal
    // int number3 = 0x0F;       // Hexadecimal
    // int number4 = 0b00001111; // binary
    // std::cout << "Number1 " << number1 << std::endl;
    // std::cout << "Number2 " << number2 << std::endl;
    // std::cout << "Number3 " << number3 << std::endl;
    // std::cout << "Number4 " << number4 << std::endl;
    /*
        int elephant_count;
        int horse_count;
        int lion_count{};
        int dog_count{3};// bracezed intialization
        int cat_count{4};
        int narrowing_conversion_functional(2.9);
        int domestic_animal_count = {dog_count + cat_count};
        std::cout << "Number of domestic animal " << domestic_animal_count << std::endl;
        std::cout << lion_count << std::endl;
        std::cout << elephant_count << std::endl; // this will give garbage value
        std::cout << horse_count << std::endl;
        std::cout << narrowing_conversion_functional << std::endl;
        // size of method
        std::cout << sizeof(narrowing_conversion_functional) << std::endl;
        std::cout << sizeof(cat_count) << std::endl;

        //defining double variable
        double cow_count;
        std::cout<<sizeof(double) << std::endl;
        std::cout<<sizeof(cow_count) << std::endl;
    */
    // Functional intialization
    int apple_count(3);
    int orange_count(4);
    int fruit_count(apple_count + orange_count);
    // assignment intialization
    int narrowing_conversion_assignment = 2.9;
    std::cout << "Narrowing Conversion Using Assignement " << narrowing_conversion_assignment << std::endl;
    std::cout << "fruit count is " << fruit_count << std::endl;
    std::cout << "size of long " << sizeof(long) << std::endl; // same as integer
}