#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    int salary;

public:
    void getId()
    {
        salary = 20000;
        cout << "Enter the id of the employee ";
        cin >> id;
    }
    void setId()
    {
        cout << endl;
        cout << "The id of employee is " << id << endl;
        cout << "The salary of employee is " << salary << endl;
        cout << endl;
    }

};

int main()
{
    employee er[5];// Array of objects
    for (int i = 0; i < 5; i++)
    {
        er[i].getId();
        er[i].setId();
    }

    return 0;
}