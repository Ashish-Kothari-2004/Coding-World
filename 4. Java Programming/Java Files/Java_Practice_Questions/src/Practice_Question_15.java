// Q. Write a java program to find an element in an array if found then print array found.
import java.util.Scanner;
public class Practice_Question_15
{
    public static void main(String []args)
    {
        int flag = 0;
        int i = 0;
        int []arr = {2, 3, 6, 7, 8, 0, 23, 32, 33, 56};
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter element to be found: ");
        int n = sc.nextInt();
        for (i = 0;i < 10; i++)
        {
            if (n == arr[i])
            {
                flag++;
            }
        }
        if(flag > 0)
        {
            System.out.println("Array found");
        }
    }
}