/* Decisions making instructions in java - 
 1. if-else statements
 2. switch statements
*/
import java.util.Scanner;
public class _04_1_Conditionals
{
    public static void main(String[] args) 
    {
        System.out.println("Enter your age: ");
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        if(age > 18)
        {
            System.out.println("you can drive");
        }
        else
        {
            System.out.println("you cannot drive");
        }
        sc.close();
    }
}