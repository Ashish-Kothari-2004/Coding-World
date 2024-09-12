#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out_obj;
    string str;
    // out_obj.open("ashish3.txt");// opening file using open() function for writing to the file
    // cout << "Write your thoughts " << endl;
    // getline(cin, str);
    // out_obj << str;
    // out_obj.close();

    // ifstream in_obj1;
    // in_obj1.open("ashish3.txt");// opening file using open() function for reading from the file
    // getline(in_obj1, str);
    // cout<< str << endl;
    // in_obj1.close();

    ifstream in_obj2;
    in_obj2.open("ashish3.txt"); // opening file using open() function for reading from the file
    while (in_obj2.eof() == 0)
    {
        getline(in_obj2, str);
        cout << str << endl;
    }
    in_obj2.close();
    
    return 0;
}