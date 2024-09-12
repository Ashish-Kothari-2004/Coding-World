// Q. Write a java program to sum first n even numbers using while loop.
import java.util.Scanner;
public class _05_Practice_set_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number: ");
        int number = sc.nextInt();
        int sum = 0;
        int n = 1;
        while(n <= number)
        {
            if(n % 2 == 0)
            {
                sum = sum + n;
            }
            n++;
        }
        System.out.println("Sum of all the even numbers between 0 to " + number + " is : " + sum);
        sc.close();
    }
}
