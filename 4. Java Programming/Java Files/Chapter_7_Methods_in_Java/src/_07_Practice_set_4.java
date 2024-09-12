/*  
Q. Write a program to print the following partter. 
    *
    * *
    * * *
    * * * *
*/

public class _07_Practice_set_4
{
    static void printPattern(int n)
    {
        if(n > 0)
        {
            printPattern(n - 1);
            for(int i = 0; i < n; i++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args)
    {
        printPattern(4);
    }
}
