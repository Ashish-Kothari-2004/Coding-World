// Q.Write a program to add 3 to the ASCII value of the character 'd' and print the equivalent character.

#include <iostream>
using namespace std;
int main()
{
    char ch = 'd';
    int ASCII = int(ch) + 3;
    ch = char(ASCII);
    cout << "The value of 'd' + 3 is " << ch << endl;
    return 0;
}