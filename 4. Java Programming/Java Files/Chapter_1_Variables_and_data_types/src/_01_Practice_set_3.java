/*
Q. Write a java program which ask the user to enter his/her name and greet them with "Hello <name>
hava a good day" text.

*/
import java.util.Scanner;
public class _01_Practice_set_3
{
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your full name: ");
        String name = sc.nextLine();
        sc.close();
        System.out.println("Hello " + name + " have a good day !");
    }
}
