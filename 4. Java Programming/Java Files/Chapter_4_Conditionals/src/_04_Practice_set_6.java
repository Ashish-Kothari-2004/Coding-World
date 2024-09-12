/* Q. Write a java program to find out the type of website from the url 
 *      .com -> Commercial website
 *      .org -> Organization website
 *      .in -> Indian website
 */

import java.util.Scanner;
public class _04_Practice_set_6
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter website name: ");
        String website = sc.nextLine();
        if(website.endsWith(".com"))
        {
            System.out.println("Commercial website");
        }
        else if(website.endsWith(".in"))
        {
            System.out.println("Indian website");
        }
        else if(website.endsWith(".org"))
        {
            System.out.println("Organization website");
        }
        sc.close();
    }
}
