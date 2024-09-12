/*
Templates - A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter.

C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

Types Of Templates..........
1. Function Templates - We write a generic function that can be used for different data types.
2. Class Templates - Class templates like function templates, class templates are useful when a class defines something that is independent of the data type. Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc. 


Vectors - Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended.

*/

#include <iostream>
using namespace std;
template <class T> // In place of T we can write any alphabet (a, b, t, x, etc)
class vector
{
public:
    int size;
    T *arr;
    vector(int s)
    {
        size = s;
        arr = new T[size];
    }
    T DotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 3;
    v1.arr[2] = 4;
    vector<int> v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 6;
    v2.arr[2] = 7;
    int a = v1.DotProduct(v2);
    cout << "The dot product in integer form: " << a << endl;

    vector<float> v3(3);
    v3.arr[0] = 7.2;
    v3.arr[1] = 3.2;
    v3.arr[2] = 1.4;
    vector<float> v4(3);
    v4.arr[0] = 0.5;
    v4.arr[1] = 0.6;
    v4.arr[2] = 1.23;
    float b = v3.DotProduct(v4);
    cout << "The dot product in integer form: " << b << endl;

    return 0;
}
