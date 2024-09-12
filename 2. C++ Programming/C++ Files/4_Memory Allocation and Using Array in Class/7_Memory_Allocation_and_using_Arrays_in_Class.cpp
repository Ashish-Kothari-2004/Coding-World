#include <iostream>
using namespace std;
class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initialize(void) { counter = 0; }
    void getPrice(void);
    void DisplayPrice(void);
};

void shop ::getPrice(void)
{
    cout << "Enter the Item ID ";
    cin >> ItemId[counter];
    cout << "Enter the Item Price ";
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item " << ItemId[i] << " is " << ItemPrice[i] << endl;
        
    }
}

int main()
{
    shop dukan;
    dukan.initialize();
    dukan.getPrice();
    dukan.getPrice();
    dukan.getPrice();
    dukan.DisplayPrice();
    return 0;
}