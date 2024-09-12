// Virtual Base class - Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.

#include <iostream>
using namespace std;
class student
{
protected:
    int rollNo;

public:
    void set_rollNo(int r)
    {
        rollNo = r;
    }
    void display()
    {
        cout << "The roll number of the student is " << rollNo << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(int m, int s)
    {
        maths = m;
        physics = s;
    }
    void display()
    {
        cout << "The marks obtained in physics is " << physics << endl
             << "The marks obtained in maths is " << maths << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void display()
    {
        cout << "The score of the student is" << score << endl;
    }
};

class result : public Test, public sport
{
protected:
    float result;

public:
    void display_result()
    {
        set_marks(88, 79);
        set_rollNo(3);
        set_score(89);
        result = (maths + physics + score) / 3;
        cout << "The percentage of the student is " << result << endl;
    }
};
int main()
{
    result r1;
    r1.display_result();
    return 0;
}