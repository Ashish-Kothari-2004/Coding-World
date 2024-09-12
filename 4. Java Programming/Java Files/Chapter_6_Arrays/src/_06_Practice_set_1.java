// Q. Write a java program to find out whether a given integer is present in an array or not.
import java.util.Scanner;
public class _06_Practice_set_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number to be searched: ");
        int number = sc.nextInt();
        int [] arr = {23, 34, 234, 236, 78, 45};
        sc.close();
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] == number)
            {
                System.out.println("Entered number is present in array at index " + i);
                return;
            }
        }
        System.out.println("Element not found in the array");
        
    }
}
