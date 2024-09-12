/* 
Q. Write a function to print the following parttern
    * * * *
    * * *
    * *
    * 
*/

public class _07_Practice_set_5
{
    static void printPattern(int n)
    {
        if(n > 0)
        {
            for(int i = 0; i< n; i++)
            {
                System.out.print("* ");
            }
            System.out.println();
            printPattern(n - 1);
        }
    }
    public static void main(String[] args)
    {
        printPattern(4);
    }
}
