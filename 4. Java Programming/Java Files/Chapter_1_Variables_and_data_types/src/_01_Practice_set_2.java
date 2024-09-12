/*
Q. Write a java program to calculate percentage of a given student in CBSE board exam.
   His marks from five subjects must be taken as input from the kekboard. (marks are out of 10)
*/
import java.util.Scanner;
public class _01_Practice_set_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks 1: ");
        int marks1 = sc.nextInt();

        System.out.println("Enter marks 2: ");
        double marks2 = sc.nextInt();

        System.out.println("Enter marks 3: ");
        double marks3 = sc.nextInt();

        System.out.println("Enter marks 4: ");
        double marks4 = sc.nextInt();

        System.out.println("Enter marks 5: ");
        double marks5 = sc.nextInt();
        
        sc.close();
        double per = ((marks1 + marks2 + marks3 + marks4 + marks5)/500)*100;
        System.out.print("percentage is: ");
        System.out.println(per);
 
    }
}
