/* Q. Write a java program to print the following pattern
    * * * * 
    * * * 
    * * 
    *
*/

public class _05_Practice_set_1
{
    public static void main(String[] args) {
        for(int i = 0; i < 4; i++)
        {
            for(int j = i; j < 4; j++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}
