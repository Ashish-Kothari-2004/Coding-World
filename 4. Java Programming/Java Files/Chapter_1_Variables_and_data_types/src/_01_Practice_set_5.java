// Q. Write a java program to check whether the entered number is integer or not.

import java.util.Scanner;
public class _01_Practice_set_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any integer value : ");
        boolean result = sc.hasNextInt();
        if(result == true)
        {
            System.out.println("Enter number is integer");
        }
        else
        {
            System.out.println("Enter number is not a integer number");
        }
        sc.close();
    }
}
