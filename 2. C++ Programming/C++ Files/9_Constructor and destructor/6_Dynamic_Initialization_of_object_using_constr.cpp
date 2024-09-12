#include <iostream>
using namespace std;
class BankDeposit
{
private:
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 1; i <= y; i++)
    {
        returnValue = returnValue * (r + 1);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 1; i <= y; i++)
    {
        returnValue = returnValue * (r + 1);
    }
}

void BankDeposit ::show()
{
    cout << endl
         << "The principal amount was " << principal << endl
         << "After " << year << " years the return amount is " << returnValue << endl;
}

int main()
{
    int p, y, r;
    float R;
    cout << "Enter the value of principal Amount ";
    cin >> p;
    cout << "Enter year ";
    cin >> y;
    cout << "Enter interest rate (integer) ";
    cin >> r;
    cout << "Enter interest rate (float) ";
    cin >> R;
    BankDeposit bd1(p, y, r), bd2(p, y, R);
    bd1.show();
    bd2.show();

    return 0;
}