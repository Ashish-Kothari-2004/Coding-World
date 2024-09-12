import java.util.Scanner;

/*
Q. Write a java program that allows you to keep accessing an array until a valid index is given. If max retires exceed 5
   print 'Error'.
*/
public class _15_Practice_set_1 {
    public static void main(String []args) {
        int[] arr = {23, 54, 23, 4, 2, 11};
        int i = 1;
        while(i <= 5)
        {
            try {
                Scanner sc = new Scanner(System.in);
                System.out.println("Enter the value of index : ");
                int index = sc.nextInt();
                System.out.println("Value at index " + index + " is : " + arr[index]);
                break;
            }
            catch(Exception e)
            {
                System.out.println("Invalid Index !!!!!!!!!!!");
                i++;
            }
            if(i>5)
            {
                System.out.println("Error...........");
            }
        }
    }
}
