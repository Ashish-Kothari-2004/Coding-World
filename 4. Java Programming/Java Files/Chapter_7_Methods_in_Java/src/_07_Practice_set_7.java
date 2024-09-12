// Q. Write a program to print the fibonnaci series using recursion.

import java.util.Scanner;
public class _07_Practice_set_7
{
    static int fibonacci(int n)
    {
        int fib;
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        } else {
            fib = fibonacci(n - 1) + fibonacci(n - 2);
            return fib;
        }
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many number you want to print: ");
        int num = sc.nextInt();
        for(int i = 0; i <= num; i ++)
        {
            System.out.print(fibonacci(i) + " ");
        }
        System.out.println();
        sc.close();
    }
}
