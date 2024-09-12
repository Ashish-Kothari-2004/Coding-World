// Q.Write a program containing funtion which counts the number of positive intgers in an array.
#include <stdio.h>
void Count(int *array, int n)
{
    int countN = 0, countP = 0;
     for (int i = 0; i < 5; i++)
    {
        if(array[i] < 0)
        {
            countN++;// countN = countN + 1;
        }
        if(array[i] > 0)
        {
            countP++;// countP = countP + 1;
        }
    }
    printf("The Number Of Negative Integer is %d\n", countN);
    printf("The Number Of Positive Integer is %d\n", countP);
}

int main()
{
    int array[5];
    printf("Enter any 5 element of an array -------------------\n");
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
    Count(array, 5);
    return 0;
}
