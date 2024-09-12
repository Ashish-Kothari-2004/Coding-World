#include <iostream>
using namespace std;
class complex
{
private:
    int real, imaginary;

public:
    void setData(int r, int i)
    {
        real = r;
        imaginary = i;
    }
    void getData()
    {
        cout << "The real part of the complex numbere is " << real << endl;
        cout << "The imaginary part of the complex numbere is " << imaginary << endl;
    }
};
int main()
{
    // complex c1;
    // complex *p = &c1;
    // (*p).setData(34, 45);
    // (*p).getData();
    // Both are same.........
    // p->setData(34, 45);
    // p->getData();

    complex *ptr = new complex;
    ptr->setData(34, 45);
    ptr->getData();

    // Array of object
    complex *p1 = new complex[3];
    p1->setData(2, 1);
    p1->getData();

    (p1 + 1)->setData(13, 12);
    (p1 + 1)->getData();

    (p1 + 2)->setData(14, 34);
    (p1 + 2)->getData();


    
    return 0;
}