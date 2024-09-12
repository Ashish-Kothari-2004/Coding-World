/*  Q. What will the value of the following expression (x)
    int y = 7;
    int x = ++y * 8;
    and
    int x = y++ * 8;
    value of x ?
*/
public class _02_Practice_set_1
{
    public static void main(String[] args)
    {
        int y = 7;
        // int x = ++y * 8;// x : 64
        int x = y++ * 8;// x : 56
        System.out.println("Value of x : " + x);
    }
}