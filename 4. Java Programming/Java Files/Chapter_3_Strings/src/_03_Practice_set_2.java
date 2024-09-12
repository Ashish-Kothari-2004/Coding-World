// Q. Write a java program to replace white spaces with underscores.
import java.util.Scanner;
public class _03_Practice_set_2
{
    public static void main(String[] args)
    {
        System.out.print("Enter any multiword string: ");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        name = name.replace(' ', '_');
        System.out.println("After replacing spaces with underscore: " + name);
        sc.close();
    }


}
