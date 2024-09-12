// 5. Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance. 

// Heirarchical inheritance + Multiple inheritance
#include <iostream>
using namespace std;
class vehicle
{
public:
    void display_vehicle()
    {
        cout << "Display vehicle is called" << endl;
    }
};


class car : public vehicle
{
public:
    void display_car()
    {
        cout << "Display car is called" << endl;
    }

};


class bike : public vehicle
{
public:
    void display_bike()
    {
        cout << "Display bike is called" << endl;
    }
};


class race : public bike, public car
{
public:
    void display_race()
    {
        cout<< "Display race is called" << endl;
    }
    void display_vehicle()// For resolve the ambiguity
    {
        bike :: display_vehicle();
    }
};


int main()
{
    race r1;
    r1.display_vehicle();
    r1.display_car();
    r1.display_bike();
    r1.display_race();

    return 0;
}