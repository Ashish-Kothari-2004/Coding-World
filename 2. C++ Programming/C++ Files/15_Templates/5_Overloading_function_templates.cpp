#include <iostream>
using namespace std;

template <class T>
class ashish
{
private:
    T data;

public:
    ashish(T d)
    {
        data = d;
    }
    template <class T1>
    void ClassFunc(T1 a)// Function Template Overloading
    {
        cout << "The value of a is:" << endl
            << a << endl;
    }
    template <class T1, class T2>// Function Template Overloading
    void ClassFunc(T1 a, T2 b)
    {
        cout << "The value of a and b is:" << endl
            << a << endl << b << endl;
    }
    void display();
};

template <class T>
void ashish<T>::display()
{
    cout << data << endl;
}

int func1(int a)// Exact match takes heighest priority
{
    cout << "I am func1 with value a = " << a << endl;
}

template <class T>
T func1(int a)
{
    cout << "I am func1 as templatized funtion with value a = " << a << endl;
}

int main()
{
    ashish<int> obj1(23);
    obj1.display();

    ashish<float> obj2(23.454);
    obj2.display();

    func1(23);// Exact match takes highest priority.
    func1<float>(2.4);

    obj1.ClassFunc<int>(2);// function template overloading 
    obj1.ClassFunc<int, int>(2, 3);
    return 0;
}
