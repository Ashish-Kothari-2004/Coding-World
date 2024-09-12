// 3.Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.
#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    void setRoll(int n);
    void getRoll();
};

void student ::setRoll(int n)
{
    rollNo = n;
}
void student ::getRoll()
{
    cout << "The roll No is " << rollNo << endl;
}

class Test : public student
{
protected:
    int physics;
    int maths;

public:
    void setMarks(int p, int m);
    void getMarks();
};
void Test ::setMarks(int p, int m)
{
    physics = p;
    maths = m;
}
void Test ::getMarks()
{
    cout << "The marks in maths is " << maths << endl;
    cout << "The marks in physics is " << physics << endl;
}
class result : public Test// Test is the base class for result class and student is the base class for Test class. 
{
    int percentage;

public:
    void display()
    {
        getRoll();
        getMarks();
        cout << "The percentage of the student " << (physics+maths)/2 << endl;
    }
};

 int main()
{
    result r1;
    r1.setRoll(17);
    r1.setMarks(45, 65);
    r1.display();
    return 0;
}