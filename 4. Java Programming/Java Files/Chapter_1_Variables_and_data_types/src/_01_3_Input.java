import java.util.Scanner;
public class _01_3_Input
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter integer number: ");
        int number = s.nextInt();
        System.out.print("Number is: ");
        System.out.println(number);
        s.nextLine();// So that string does not take newline character as an input 

        System.out.print("Enter a decimal number: ");
        boolean result = s.hasNextInt();
        System.out.println(result);
        s.nextLine();// So that string does not take newline character as an input 

        System.out.print("Enter string: ");
        String str1 = s.next();
        System.out.print("String is: ");
        System.out.println(str1);
        s.nextLine();

        System.out.print("Enter a multiword string: ");
        String str2 = s.nextLine();
        System.out.print("Multiword String is : ");
        System.out.println(str2);

        /*
          When you create a Scanner object to read from System.in, it internally uses
          an underlying stream (in this case, the standard input stream). If the
          Scanner is not closed properly, the underlying stream might not be released,
          and it can lead to resource leakage.
          By adding s.close(); at the end of the main method, you properly close the
          Scanner and avoid the resource leakage warning.
         */
        s.close();

    }
}
