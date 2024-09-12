// Q.Write a program to find out whether a student is pass or fail, if it requires total 40% and at least 33% in each subject to pass.Assume 3 subjects and take marks as and take marks as an input from the user.
#include <stdio.h>
int main()
{
    int maths, physics, chemistry;
    float total;

    printf("Enter your maths marks ");
    scanf("%d", &maths);

    printf("Enter your physics marks ");
    scanf("%d", &physics);

    printf("Enter your chemistry marks ");
    scanf("%d", &chemistry);

    total = (maths + physics + chemistry) / 3;

    if (total < 40 || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }
    return 0;
}