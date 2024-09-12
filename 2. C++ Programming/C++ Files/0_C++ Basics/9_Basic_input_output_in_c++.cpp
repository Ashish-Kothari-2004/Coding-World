// C++ comes with libraries which helps us in performing input/output.In C++ sequence of bytes corresponding to input and output are commonly known as streams.

// Input stream --> Direction of flow of bytes takes place from input device (eg. keyboard) to the main memory.

// Output stream --> Direction of flow of bytes takes place from main memory to the output device (eg. display)

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout<< "Enter the value of number 1 "<< endl;//  << is insertion operator  
    cin >> n1;// >> is extraction operator 
    cout << "Enter the value of number 2" << endl;
    cin >> n2;

}