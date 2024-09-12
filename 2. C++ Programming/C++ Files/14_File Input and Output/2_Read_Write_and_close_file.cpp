#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    string content;
    // Data flow from program to file
    ofstream aout("ashish2.txt"); // Opening file for writing
    cout << "Enter your full name ";
    getline(cin, str);// For taking multiword string from the console
    aout << "Your name is " << str << endl;
    aout.close();// For closing the file

    ifstream ain("ashish2.txt");
    getline(ain, content);
    cout << "Hello Sir! " << content << endl;
    ain.close();



    return 0;
}