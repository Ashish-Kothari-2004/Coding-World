/*  Q. WAP to create array of 10 element now ask user to enter elements for array using Scanner class.
    After that calculate the sum of even elements only.
*/

import java.util.Scanner;
class Practice_Question_14
{
    public static void main(String []args)
    {
        int []arr = new int[10];
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        for (int i = 0;i< 10; i++)
        {
            System.out.println("Enter element: ");
            arr[i] = sc.nextInt();
            if ((arr[i] % 2) == 0)
            {
                sum = sum + arr[i];
            }
        }
        System.out.println("Sum of all the even element is: " + sum);
    }
}