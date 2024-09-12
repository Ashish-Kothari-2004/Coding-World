// Static data members -> Static data members are class members that are declared using static keywords. A static member has certain special characteristics. These are:

// 1.Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.

// 2.It is initialized before any object of this class is being created, even before main starts.

// 3.It is visible only within the class, but its lifetime is the entire program.

// Methods -> Methods are functions that belongs to the class. There are two ways to define functions that belongs to a class: Inside class definition. Outside class definition.

// Static Function -> It is a member function that is used to access only static data members. It cannot access non-static data members not even call non-static member functions. It can be called even if no objects of the class exist. It is also used to maintain a single copy of the class member function across different objects of the class.

// Static data members and static member function can be called directly without creating the object of that class if static data members and static member function are public in that class.

#include <iostream>
using namespace std;
class employee
{
private:
    static int count1;// Default value is zero and can't be initialize here as count1 is a static data member
    int id;

public:
    static int count2;// Default value is zero and can't be initialize here as count2 is a static data member
    void getData()
    {
        cout << "Enter the value of id ";
        cin >> id;
        count1++;

    }
    void setData()
    {
        cout << "The value of id is " << id << endl;
    }
    void valCount()
    {
        cout << "The value of count is " << count1 << endl;
    }
    void printStatic()
    {
        cout << "The value of count is " << count1 << endl;
    }
    static void StaticFun(void)
    {
        cout << "Hello i am static member function " << endl;
        count1++;
        // id++;// Throw an error, id is a non-static data member 
    }

};

// Static data member
int employee :: count1 = 2;// Default value is zero
int employee :: count2 = 5;
int main()
{
    employee e1, e2;
    e1.getData();
    e1.setData();

    e2.getData();
    e2.setData();

    e1.valCount();
    e2.valCount();
    cout << "The value of count2 is " << employee::count2 << endl;
    employee::StaticFun();

    return 0;
}
