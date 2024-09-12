// Q. Write a program that will display the grade of a student provided his/her percentage in 6 subjects
// according to following criteria:
// a) Percentage > 80 then Grade = A
// b) Percentage between 61 & 80 then Grade = B
// c) Percentage between 51 & 60 then Grade = C
// d) Percentage between 41 & 50 then Grade = D
// e) Percentage between 35 & 40 then Grade = E
// f) Percentage < 35 then Grade = F

#include <stdio.h>
int main()
{
    float per;
    printf("Enter your percentage ");
    scanf("%f", &per);

    if (per > 80)
    {
        printf("your grade is : A\n");
    }
    else if (per >= 61 && per <= 80)
    {
        printf("Your grade is : B\n");
    }
    else if (per >= 51 && per <= 0)
    {
        printf("your grade is : C\n");
    }
    else if (per >= 41 && per <= 50)
    {
        printf("your grade is : D\n");
    }
    else if (per >= 35 && per <= 40)
    {
        printf("your grade is : E\n");
    }
    else if (per < 35)
    {
        printf("Your grade is : F\n");
    }
    return 0;
}
