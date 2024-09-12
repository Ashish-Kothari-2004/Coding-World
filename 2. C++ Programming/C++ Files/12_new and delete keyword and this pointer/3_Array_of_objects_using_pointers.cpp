#include <iostream>
using namespace std;
class item
{
private:
    int id, price;

public:
    void setData(int i, int p)
    {
        id = i;
        price = p;
    }
    void getData()
    {
        cout << "id of the item is " << id << endl;
        cout << "Price of the item is " << price << endl;
    }
};

int main()
{
    item *arr = new item[3];
    int ID, pri;
    item *tempArr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter id of the item " << i + 1 << endl;
        cin >> ID;
        cout << "Enter price of the item " << i + 1 << endl;
        cin >> pri;

        arr->setData(ID, pri);
        arr++;
    }
    for (int i = 0; i < 3; i++)
    {
        tempArr->getData();
        tempArr++;
    }

    return 0;
}