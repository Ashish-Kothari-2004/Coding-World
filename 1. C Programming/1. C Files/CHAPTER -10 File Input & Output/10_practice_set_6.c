// Q.Take name and salary of two employee as a input from the user and write them to a text file in the following format. 
// name1, salary1
// name2, salary2
#include <stdio.h>
int main()
{
    FILE *fptr;
    char name[10];
    int n;
    int i = 1;
    fptr = fopen("practice_set_6.txt", "w");
    while(i < 3)
    {
        printf("Enter the name of %d employee ", i);
        scanf("%s", name);
        printf("Enter the salary of %d employee ", i);
        scanf("%d", &n);
        fprintf(fptr, "%s, %d\n", name, n);
        i++;
    }
    fclose(fptr);
    
    return 0;
}