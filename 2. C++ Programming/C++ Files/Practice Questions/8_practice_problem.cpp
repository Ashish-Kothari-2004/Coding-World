// Q.Write a program to reverse a 3-digit number. 
// e.g.- Number : 132
// Output : 231
#include <iostream>
using namespace std;
int main()
{
    int num, r, reverse = 0;
    cout << "Enter any number ";
    cin >> num;
    while(num > 0)
    {
        r = num % 10;
        reverse = reverse * 10 + r;
        num = num / 10;
    }
    cout << "The revese of a number is " << reverse << endl;
    return 0;
    
}
