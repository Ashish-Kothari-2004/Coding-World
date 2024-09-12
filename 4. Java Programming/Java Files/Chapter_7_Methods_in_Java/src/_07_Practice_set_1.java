// Q. Write a java method to print multiplecation table of a number n. 
import java.util.Scanner;
public class _07_Practice_set_1
{
    static void multiplication(int number)
    {
        for(int i = 1; i <=10; i++)
        {
            System.out.println(number * i);
        }
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number: ");
        int number = sc.nextInt();
        System.out.println();
        multiplication(number);
        sc.close();
    }
}
