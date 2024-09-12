// Q. Write a java program to calculate the sum of the number occurring in the multiplication table of 8.
public class _05_Practice_set_4
{
    public static void main(String[] args)
    {
        int number = 8;
        int table = 0;
        int sum = 0;
        for(int i = 1; i <= 10; i++)
        {
            table = number * i;
            sum = sum + table;
        }
        System.out.println(sum);
        
    }
}
