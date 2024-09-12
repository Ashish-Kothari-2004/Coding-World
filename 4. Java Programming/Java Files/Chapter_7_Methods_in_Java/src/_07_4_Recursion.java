// Recursion - A function in java can call itself. Such calling of function by itself is called recursion.
/* 
    factorial(4) = 4 * 3 * 2 * 1;
    factorial(n) = factorial(n) * factorial(n-1) * factorial(n-2) * factorial(n-3) * factorial(n-4) .... 
*/
public class _07_4_Recursion
{
    static int facto(int a)
    {
        int f = 1;
        if (a == 0 || a == 1) {
            return 1;
        }
        else
        {
            f = a * facto(a - 1);
            return f;
        }
    }

    public static void main(String[] args) {
        System.out.println("Factorial of 4 is : " + facto(4));
    }
}
