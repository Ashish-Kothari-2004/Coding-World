/*
Q. Calculate income tax paid by an employee to the government as per the slabs mentioned below:
Income slab     Tax
2.5L - 5.0L     5%
5.0L - 10.0L    20%
Above 10.0L     30% 
*/

import java.util.Scanner;
public class _04_Practice_set_3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter you income: ");
        float income = sc.nextFloat();
        float tax = 0;
        if (income < 250000.000F)
        {
            System.out.println("You don't need to pay tax ");
        }
        else if (income > 250000.00F && income <= 500000.00F)
        {
            tax = (income - 250000) / 100 * 5;
            System.out.println("Your income tax is: " + tax);
        }
        else if (income > 500000.00F && income <= 1000000.00F)
        {
            tax = ((income - 250000) / 100 * 5) + (income / 100 * 20);
            System.out.println("Your income tax is: " + tax);
        }
        else {
            tax = (income - 250000) / 100 * 5 + income / 100 * 20 + income / 100 * 30;
            System.out.println("Your income tax is: " + tax);
        }
        sc.close();
    }
}
