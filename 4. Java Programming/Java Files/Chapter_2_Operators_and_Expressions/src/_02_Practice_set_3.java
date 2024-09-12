// Q. Use comparison operators to find out whether a given number is greater than the user entered number or not.

import java.util.Scanner;
public class _02_Practice_set_3
{
    public static void main(String[] args)
    {
        int a = 23;
        System.out.println("Enter a number : ");
        Scanner sc = new Scanner(System.in);
        int number  = sc.nextInt();
        if(number > a)
        {
            System.out.println(number + " is greater than 23");
        }
        else if(a == number)
        {
            System.out.println("Number is equal to 23");
        }
        else
        {
            System.out.println( number + " is not greater than 23");
        }
        sc.close();
    }
}
