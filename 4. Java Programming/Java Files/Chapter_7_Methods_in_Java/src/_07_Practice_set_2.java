// Q. Write a recursive function to calculate sum of first n natural numbers.
import java.util.Scanner;
public class _07_Practice_set_2
{
    static int sum  = 0;
    static int calculateSum(int n)
    {
        sum = n;
        if (n == 1) {
            return 1;
        }
        else
        {
            sum = sum + calculateSum(n - 1);
            return sum;
        }
    }

    public static void main(String[] args)
    {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number: ");
        int number = sc.nextInt();
        System.out.println("The sum of the first n natural number is: " + calculateSum(number));
        sc.close();

    }
}

