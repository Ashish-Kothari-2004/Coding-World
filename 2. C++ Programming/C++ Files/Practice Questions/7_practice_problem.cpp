// Write a program to calculate the sum of the first and the second last digit of a 5 digit.
// E.g.- NUMBER : 12345
// OUTPUT : 1+4=5

#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0, r;
    cout << "Enter any five digit number ";
    cin >> number;
    if (number >= 10000 && number <= 99999)
    {
        number = number / 10;
        r = number % 10;
        sum = r + sum;
        while (number > 0)
        {
            r = number % 10;
            number = number / 10;
        }
        sum = sum + r;
        cout << "The sum of first and second last digit of a five digit number is " << sum << endl;
    }
    else
    {
        cout << "you have entered wronge number " << endl;
    }
    return 0;
}