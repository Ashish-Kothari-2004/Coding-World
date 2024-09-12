/*
Q. Write a java program to find whether a student is pass or fail, if it requires total 40% and 33%
in each subject to pass. Assume 3 subjects and take marks as an input from the user.
*/

import java.util.Scanner;
public class _04_Practice_set_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter your physics marks out of 100: ");
        float maths = sc.nextFloat();
        System.out.println("Enter your maths marks out of 100: ");
        float physics = sc.nextFloat();
        System.out.println("Enter your chemistry marks out of 100: ");
        float chemistry = sc.nextFloat();        
        float total = (physics + maths + chemistry)/3;
        if(total > 40 && physics > 33 && chemistry > 33 && maths > 33)
        {
            System.out.println("Congratulations !, You are pass");
        }
        else
        {
            System.out.println("Sorry ! you are fail");
        }
        sc.close();
    }

}
