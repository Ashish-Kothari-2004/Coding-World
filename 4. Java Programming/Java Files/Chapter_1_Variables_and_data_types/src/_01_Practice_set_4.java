// Q. Write a java program to convert kilometers to miles.

import java.util.Scanner;
public class _01_Practice_set_4
{
    public static void main(String[] args)
    {
        System.out.println("Enter distance in kilometer: ");
        Scanner sc = new Scanner(System.in);
        float kilometer = sc.nextFloat();
        float miles = (float)( kilometer/1.609);
        sc.close();
        System.out.println("Miles : " + miles);
    }
}
