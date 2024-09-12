// Member functions -> Member functions are operators and functions that are declared as members of a class. Member functions can be define outside the class using scope resolution operator(::)

// Nesting of member function -> If one member function is called inside the other member function of the same class it is called nesting of a member function.

// C++ -> initially called C with class by bjarne stroustup
// Class -> Extentions of structures (in C)
// Structure had limitations
//   - Members are public
//   - No methods
// Classes ->  Structures + more
// Classes ->  Classes can have methods and propertise.
// Classes ->  Classes can make few members as private and few as public.
// Structures in C++ are typedefed.
// In C++ all the members of the class are private by default.
// You can declare objects along with the class declaration like this:
// class employee
// {
//      class definition;
// } ashish, lovish, rohan;// But it is not recommended.



#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s; // By default all the members of the class are private.
    void check_binary(void);

public:
    void read_binary(void); // Function declaration
    void ones_compliment(void);
    void display(void);
};

void binary ::read_binary(void)
{
    cout << "Enter any binary ";
    cin >> s;
}

void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
            // The exit function terminates the currently running program explicitly which called it. The exit() function flushes all the buffers used by the program, closes all the programs associated with the program calling it, and deletes all the temporary files associated.
        }
    }
}
void binary ::ones_compliment(void)
{
    check_binary();// Nesting of member function 
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary :: display(void)
{
    for(int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read_binary();
    // b.check_binary();// Throw error as check_binary is private.
    b.ones_compliment();
    b.display();
    cout << endl;
    return 0;
}
