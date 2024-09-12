// Q. Write a program to print the factorial of a given number using for loop.

import java.util.Scanner;
public class _05_Practice_set_3
{
    public static void main(String[] args)
    {
        int factorial = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number: ");
        int number = sc.nextInt();
        for (int i = 1; i <= number; i++)
        {
            factorial = factorial * i;
        }
        System.out.println("Factorial of the number is : " + factorial);
        sc.close();
    }
}
