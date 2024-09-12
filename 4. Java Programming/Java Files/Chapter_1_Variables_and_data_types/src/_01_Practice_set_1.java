// Q. Write a java program to add three numbers. 
import java.util.Scanner;
public class  _01_Practice_set_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first number: ");
        double num1 = sc.nextDouble();
        System.out.println("Enter second number: ");
        double num2 = sc.nextDouble();
        System.out.println("Enter third number: ");
        double num3 = sc.nextDouble();

        System.out.print("The sum of the given number is: ");
        System.out.println(num1 + num2 + num3);
        sc.close();
    }
}