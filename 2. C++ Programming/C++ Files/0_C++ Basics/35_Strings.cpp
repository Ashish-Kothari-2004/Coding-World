// String -> C++ has in its definition a way to represent a sequence of characters as an object of the class. This class is called std:: string. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

// Difference between string and character array --
// 1. A string is a class that defines objects that be represented as a stream of characters.A character array is simply an array of characters that can be terminated by a null characte

// 2. In the case of strings, memory is allocated dynamically. More memory can be allocated at run time on demand. The size of the character array has to be allocated statically, more memory cannot be allocated at run time if required.

// 3. Strings are slower when compared to implementation than character array. Implementation of character array is faster than std:: string.

// 4. String class defines a number of functionalities that allow manifold operations on strings. Character arrays do not offer many inbuilt functions to manipulate strings.

// Ways to initializing string in cpp..............
// 1. string str1 = ("Ashish");
// 2. string str2 = "Ashish";
// 3. string str3;
// str3 = "Ashish";

// String functions -
// getline() - To store a stream of characters.
// push_back() - To input a character at the end of the string.
// pop_back() - To delete the last character from the string.
// capacity() - Returns the capacity allocated to the string.
// length() - This function finds the length of the string.
// begin() - Returns an iterator to the beginning of the string.
// end() - This function returns an iterator to the next to the end of the string.
// swap() - This function swaps one string with another.
// copy(“char array”, len, pos) - This function copies the substring in the target character array mentioned in its arguments.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
        string s1;
        cout << "Enter string ";
        getline(cin, s1);
        cout << "Entered string using getline function is: " << s1 << endl;
        s1.push_back('K');
        cout << "After push_back function the string is: " << s1 << endl;
        s1.pop_back();
        cout << "After pop_back function the string is: " << s1 << endl;
        cout << "The capacity of the string is " << s1.capacity() << endl;
        cout << "The length of the string is " << s1.length() << endl;
        sort(s1.begin(), s1.end());
        cout << "After sorting the string is " << s1 << endl;
        string s2 = "Kothari";
        swap(s1, s2);
        cout << "After swaping the first string is " << s1 << endl;
        char ar[20];
        s1.copy(ar, 7, 0);
        cout << ar << endl;
    
    return 0;
}