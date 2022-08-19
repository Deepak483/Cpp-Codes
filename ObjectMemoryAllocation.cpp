#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop::setPrice(void)
{
    cout << "Enter the id of your item " << counter + 1 << " : " << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop mahakirana;
    mahakirana.initCounter();
    mahakirana.setPrice();
    mahakirana.setPrice();
    mahakirana.setPrice();
    mahakirana.displayPrice();
    return 0;
}