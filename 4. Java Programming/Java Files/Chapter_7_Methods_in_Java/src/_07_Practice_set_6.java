
// Q. Write a program to print nth term of fibonnaci series using recursion.
import java.util.Scanner;

public class _07_Practice_set_6
{
    static int fibonacci(int n)
    {
        int fib;
        if(n == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return 1;
        }
        else
        {
            fib = fibonacci(n - 1) + fibonacci(n - 2);
            return fib;
        }
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any the position of the number in fibonacci series: ");
        int num = sc.nextInt();
        System.out.println("The " + num + "th term of fibonnaci series is: " + fibonacci(num));
        sc.close();
    }
}
