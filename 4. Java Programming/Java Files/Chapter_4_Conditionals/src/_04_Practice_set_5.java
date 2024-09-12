// Q. Write a java program to find whether a year entered by the user is leap year or not.
import java.util.Scanner;
public class _04_Practice_set_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter year: ");
        int year = sc.nextInt();
        if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        {
            System.out.println("Year is leap year");
        }
        else
        {
            System.out.println("year is not a leap year");
        }
        sc.close();
    }
}
