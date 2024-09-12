#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    // cout << i++ << endl;// First use the value and then update the vlaue by 1.
    // cout << ++i << endl;// First update the value by 1 and the use the value.
    // i++;// Equivalent to --> i = i + 1 ;// It will increase the value of i by 1.
    // ++i;// Equivalent to --> i = 1 + i;// It will increase the value of i by 1.
    // cout << i << endl;
    
    // i = i + 1;
    // i =  1 + i;
    // cout << i << endl; 

    // int j;
    // j = ++i;;// First increase the value of i by 1 and then assign the value of i to j.
    // cout << j << endl;
    
    // int j;
    // j = i++;// First assign the value of i to j and then increase the value of i by 1.
    // cout << j << endl;

    int a = 45;
    // a += i;// a = a + i;// First increase the value of a by i and then assign the value to a.
    a =+ i;// a = i + a;// First assign the value of i to a then increase the value of a by i.
    // a -= i;// a = a - i;
    // // a =- i;// a = i - a;
    cout << a << endl;
    return 0;
}