// Question for function.
// Q.Write a function to calculate force of attraction on body of mass m exerted of earth.
// g = 9.8 m/Second squre
// g is acceleration due to the Earth's gravity.
// #include <stdio.h>
// float force(float mass);
// int main()
// {
//     float mass = 50; // In kg
//     printf("Force of attraction is %f Newton\n", force(mass));
//     return 0;
// }
// float force(float mass)
// {
//     float force = mass * 9.8; // force = mass * acceleration
//     return force;
// }

// Q.What will the following line produce in a C program.
// a = 2;
// printf("%d, %d, %d\n", a, a++, ++a);
// #include <stdio.h>
// int main()
// {
//     int a = 2;
//     printf("%d, %d, %d\n", a, ++a, a++);
//     // Result is 4 , 4 , 2  Because execution is going to Right to left.
//     return 0;
// }

// Question for recursion.
// Q.print the sum of n natural numbers given by the user.
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d", &n);
    printf("The sum is %d\n", sum(n));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int sumNm1 = sum(n - 1);
    int sumN = sumNm1 + n;
    return sumN;
}