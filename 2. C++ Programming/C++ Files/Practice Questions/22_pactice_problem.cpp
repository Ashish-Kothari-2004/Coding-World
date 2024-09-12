// Q.Write a program to make a function to find the greater number entered by the user.(No argument without return type).

#include <iostream>
using namespace std;
void Greater_number()
{
    int n1, n2, n3;
    cout << "Enter three number ";
    cin >> n1 >> n2 >> n3;
    if (n1 > n2 && n1 > n3)
    {
        cout << "Grater number is " << n1 << endl;
    }
    else if (n2 > n1 && n2 > n3)
    {
        cout << "Grater number is " << n2 << endl;
    }
    else if (n3 > n1 && n3 > n2)
    {
        cout << "Grater number is " << n3 << endl;
    }
}

int main()
{
    Greater_number();
    return 0;
}