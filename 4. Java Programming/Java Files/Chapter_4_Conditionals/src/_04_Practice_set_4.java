/*
Q. Write a java program to find out the day of the week given the number 1 for monday,
   2 for tuesday and so on.
*/

import java.util.Scanner;
public class _04_Practice_set_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println(
                "1. Monday\t2. Tuesday\t3.Wednesday\n4. Thursday\t5. Friday\t6. Saturday\t7. Sunday\nEnter a number for a day");
        int day = sc.nextInt();
        if (day >= 1 && day <= 7) {
            switch (day)
            {
                // case 1:
                // System.out.println("Monday");
                // break;

                // case 2:
                // System.out.println("Tuesday");
                // break;

                // case 3:
                // System.out.println("Wednesday");
                // break;

                // case 4:
                // System.out.println("Thursday");
                // break;

                // case 5:
                // System.out.println("Friday");
                // break;

                // case 6:
                // System.out.println("Saturday");
                // break;

                // case 7:
                // System.out.println("Sunday");
                // break;

                // Using enhance switch case
                case 1 -> System.out.println("Monday");
                case 2 -> System.out.println("Tuesday");
                case 3 -> System.out.println("Wednesday");
                case 4 -> System.out.println("Thursday");
                case 5 -> System.out.println("Friday");
                case 6 -> System.out.println("Saturday");
                case 7 -> System.out.println("Sunday");
            }
        }
        else
        {
            System.out.println("Please enter any valid choice");
        }
        sc.close();
    }

}
