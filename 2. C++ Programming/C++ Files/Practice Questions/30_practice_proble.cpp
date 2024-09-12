// Q. Write a program to demonstrate a default Constructor can have default Argument as name Student.
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;

public:
    Person(string n = "Student")
    {
        name = n;
    }
    void print_name()
    {
        cout << "Name: " << name << endl;
    }
};

int main()
{

    Person person1;
    Person person2("John");

    person1.print_name();
    person2.print_name();
    
    return 0;
}
