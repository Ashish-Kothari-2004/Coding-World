// Q.Take a 4 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the number TAKEN.

// For example, if the number which was taken is 5696, then the displayed number should be 7818.

#include <iostream>
using namespace std; 
int main()
{
    int number, remainder, reverse = 0, real_number = 0;
    cout << "Enter any four digit number ";
    cin >> number;
    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;

        if (remainder == 8)
        {
            remainder = 1;
        }
        else if (remainder == 9)
        {
            remainder = 2;
        }
        else
        {
            remainder = remainder + 2;
        }
        reverse = reverse * 10 + remainder;
    }

    // Now reverse the number 
    while(reverse != 0)
    {
        remainder = reverse % 10;
        reverse = reverse / 10;
        real_number = real_number * 10 + remainder;
    }
    cout << real_number << endl;
    return 0;
}
