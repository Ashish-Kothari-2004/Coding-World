// Q. Write a java program to reverse an array.
import java.util.Scanner;

public class _06_Practice_set_3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[3];
        for (int i = 0; i < arr.length; i++)
        {
            System.out.println("Enter element: ");
            arr[i] = sc.nextInt();
        }
        System.out.println("Before reversing the array");
        for (int element : arr)
        {
            System.out.print(element + ", ");
        }

        for (int i = 0; i < arr.length/2; i++)
        {
            int temp = arr[i];
            arr[i] = arr[arr.length - 1 - i];
            arr[arr.length - 1 - i] = temp;
        }
        
        System.out.println();
        System.out.println("After reversing the array");
        for (int element : arr)
        {
            System.out.print(element + " ");
        }
        
        System.out.println();
        sc.close();
    }
}
