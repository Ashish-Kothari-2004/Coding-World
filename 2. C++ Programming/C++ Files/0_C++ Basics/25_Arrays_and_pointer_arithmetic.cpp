// Arrays --> An array is a collection of items of same data type stored at contiguous memory locations.

// This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array). The base value is index 0 and the difference between the two indexes is the offset.

#include <iostream>
using namespace std;
int main()
{
    // int result[] = {34, 35, 67, 75, 7};
    // cout << result[0] << endl
    //      << result[1] << endl
    //      << result[2] << endl
    //      << result[3] << endl
    //      << result[4] << endl;
    // cout << "With the help of loop" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << result[i] << endl;
    // }

    // Another way to create an array -------
    cout << "Another way to create an array " << endl;
    int number[5];
    number[0] = 78;
    number[1] = 23;
    number[2] = 45;
    number[3] = 76;
    number[4] = 79;
    int *pt = number;
    cout << *pt << endl;
    pt = pt+1;
    // pt++;
    cout << *pt << endl;
    pt = pt+1;
    // pt++;
    cout << *pt << endl;
    pt = pt+1;
    // pt++;
    cout << *pt << endl;
    pt = pt+1;
    // pt++;
    cout << *pt << endl;
    
}