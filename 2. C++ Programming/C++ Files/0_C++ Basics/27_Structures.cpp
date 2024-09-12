// Structure --> A structure is a keyword that creates user-defined data types in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type.

// 1. The structure is a user-defined data type that is available in C++.

// 2.Structures are used to combine different types of data types, just like an array is used to combine the same type of data types.

// 3.A structure is declared by using the keyword “struct“. When we declare a variable of the structure we need to write the keyword “struct in C language but for C++ the keyword is not mandatory

// Structure using typedef: typedef is a keyword that is used to assign a new name to any existing data-type.

#include <iostream>
using namespace std;
typedef struct salary//salary as structure name
{
    int firstIncome;
    float secondIncome;
    char name[20];
}sa;

main()
{
    // struct salary Employee1, Employee2;
    salary Employee1, Employee2;
    // In C++ struct is not mandatory to write
    cout << "Enter the first income of employee 1 ";
    cin >> Employee1.firstIncome;
    cout << "Enter the second income of employee 1 ";
    cin >> Employee1.secondIncome;
    cout << "Enter the name of employee 1";
    cin >> Employee1.name;

    cout << "Enter the first income of employee 2 ";
    cin >> Employee2.firstIncome;
    cout << "Enter the second income of employee 2  ";
    cin >> Employee2.secondIncome;
    cout << "Enter the name of employee 2 ";
    cin >> Employee2.name;

    cout << "The value of first income is " << Employee1.firstIncome << endl;
    cout << "The value of second income is " << Employee1.secondIncome << endl;
    cout << "The name of first employee " << Employee1.name << endl;

    cout << "The value of first income is " << Employee2.firstIncome << endl;
    cout << "The value of second income is " << Employee2.secondIncome << endl;
    cout << "The name of second employee " << Employee2.name << endl;

    return 0;
}
