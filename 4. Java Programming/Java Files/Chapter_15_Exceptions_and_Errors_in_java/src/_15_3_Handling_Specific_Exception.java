import java.util.Scanner;
public class _15_3_Handling_Specific_Exception {
    public static void main(String[] args) {
        int [] arr = new int[3];
        arr[0] = 76;
        arr[1] = 83;
        arr[2] = 95;
        Scanner sc = new Scanner(System.in);
        try {
            System.out.println("Enter array index: ");
            int index = sc.nextInt();
            System.out.println("Enter a the number for division: ");
            int num = sc.nextInt();
            int result = arr[index]/num;
            System.out.println("Result: " + result);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("An Exception occur !!!!!!!!");
            System.out.println(e);
        }
        catch(ArithmeticException e)
        {
            System.out.println("An Exception occur !!!!!!!");
        }
        catch(Exception e)
        {
            System.out.println("An Exception occur !!!!!!!!!");
            System.out.println(e);
        }

    }
}
