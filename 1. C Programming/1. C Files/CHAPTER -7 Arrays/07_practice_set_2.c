// If s[3] is a 1-D array of integers then *(s + 3) refers to the third element :
// (1) True 
// (2) False 
// (3) Depends 

#include <stdio.h>
int main()
{
    int s[3] = {6, 7, 8};// intex starts from 0 
    printf("%d\n", *(s + 3));// *(s + 3)--> refers to the forth element.
    printf("%d\n", *(s + 2));// *(s + 3)--> refers to the third element.
    
    return 0;
}