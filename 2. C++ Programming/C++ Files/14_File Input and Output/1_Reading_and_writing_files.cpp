/* 
File: A File is a collection of data stored in the secondary memory. So far data was entered into the programs through the keyboard. So Files are used for storing information that can be processed by the programs. Files are not only used for storing the data, programs are also stored in files.

Stream: A stream is a general name given to a flow of data. Each stream has a source and a destination. For output stream, the source is always memory variable and the destination is the file in which the data is to be written. For input stream, it is the reverse.

The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream -> Derived from fstreambase
3. ofstream -> Derived from fstreambase
These classes are present in <fstream> header file.

In order to work with files in c++, you will have to open it. Primarily, there are two way to open a file-
1. Using constructor
2. Using the member function open() of the class 

*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // string str1 = "Ashish Kothari";
    // ofstream out("ashish.txt");// Opening file using constructor for writing in ashish.txt
    // out<<str1;// For writing in the file as we print in console using cout << 
    
    string str2;
    ifstream in("ashish.txt");// Opening file using constructor for reading from ashish.txt
    // in>>str2;// Read only one word form the file
    getline(in, str2);// For reading the line(only one line) form the file.
    cout << str2 <<endl;


    return 0;
}
