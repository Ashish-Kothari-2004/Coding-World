// Q.Write a C++ program to reverse the given array.
#include <iostream>
using namespace std;
int main()
{
    int temp = 0, n = 6;// Size of the array
    int arr[n] = {3, 5, 6, 9, 4, 7};
    for (int i = 0; i < 6 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}
