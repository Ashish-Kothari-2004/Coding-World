// Q. Write a java program to convert a string to lowercase.

import java.util.Scanner;
public class _03_Practice_set_1
{
    public static void main(String[] args)
    {
        System.out.print("Enter string in uppercase: ");
        Scanner scan = new Scanner(System.in);
        String name = scan.nextLine();
        name = name.toLowerCase();
        System.out.println("After converting the string to lowercase " + name);
        scan.close();
    }
}
