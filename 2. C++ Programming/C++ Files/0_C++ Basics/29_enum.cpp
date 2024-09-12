// // enum -> Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.

// // If we assign a float value in a character value, then the compiler generates an error. In the same way if we try to assign any other value to the enumerated data types, the compiler generates an error. Enumerator types of values are also known as enumerators. It is also assigned by zero the same as the array. It can also be used with switch statements.

// #include <iostream>
// using namespace std;
// enum daysName {sun, mon, tue, wed, thu, fri, sat};
// int main()
// {
//     // enum daysName day  = mon;// In C++ it's not madatory to write the enum before the name of the custom data type.
//     daysName day  = mon;
//     cout << mon << endl;
//     cout << tue << endl;

//     // daysName wrong_day = xyz;
//     // It will give error.We cannot assign a value to enum variable which is not defined in enum.
//     // cout << wrong_day << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Defining enum Gender
    enum Gender
    {
        Male,
        Female
    };

    // Creating Gender type variable
    Gender gender = Male;// In C++ it's not mandatory to write enum before variable name.

    switch (gender)
    {
    case Male:
        cout << "Gender is Male" << endl;
        break;
    case Female:
        cout << "Gender is Female" << endl;
        break;
    default:
        cout << "Value can be Male or Female" << endl;
    }
    return 0;
}