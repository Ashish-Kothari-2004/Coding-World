// Q. Write a java program to detect double and triple spaces in a string.

import java.util.Scanner;
public class _03_Practice_set_4
{
    public static void main(String[] args)
    {
        System.out.print("Enter a string : ");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        System.out.println(name.indexOf("  "));
        System.out.println(name.indexOf("   "));
        sc.close();
    }
}
