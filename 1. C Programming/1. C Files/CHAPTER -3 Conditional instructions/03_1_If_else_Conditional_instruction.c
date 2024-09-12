#include <stdio.h>
int main()
{
    // Types of conditional statement/instruction--> 1.If else , 2.switch
    int age;
    printf("Enter your age ");
    scanf("%d", &age); // don't use --> \n in scanf function  (Very important)

    if (18 <= age && age <= 100) // It is wrong instruction --> (18 <= age < 100)
    {
        printf("You can drive\n");
    }
    else if (age > 100)
    {
        printf("You are old, you can not\n");
    }
    else
    {
        printf("You are teenager you can not drive\n");
    }
    printf("Thankyou\n");
    return 0;
}