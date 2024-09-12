#include <iostream>
using namespace std;
class complex
{
private:
    int v1, v2;

public:
    void getData(int a, int b);
    void setSum(complex o1, complex o2);
    void printSum();
};

void complex ::getData(int a, int b)
{
    v1 = a;
    v2 = b;
}

void complex ::setSum(complex o1, complex o2)
{
    v1 = o1.v1 + o2.v1;
    v2 = o1.v2 + o2.v2;
}
void complex ::printSum()
{
    cout << "Complex number is " << v1 << " + " << v2 << "i" << endl;
}

int main()
{
    complex o1, o2, o3;
    o1.getData(2, 3);
    o1.printSum();

    o2.getData(5, 7);
    o2.printSum();

    o3.setSum(o1, o2);
    o3.printSum();

    return 0;
}