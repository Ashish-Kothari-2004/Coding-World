/*
Variable Arguments (Varargs) were introduced in JDK 5. From JDK 5 onwards,
we can declare a method with a variable number of arguments.
Such types of methods are called Varargs methods.
The varargs feature offers a simpler, better option.
*/

public class _07_3_VarArgs
{
/* 
    static int sum(int a, int b) {
        return a + b;
    }

    static int sum(int a, int b, int c) {
        return a + b + c;
    }

    static int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }

    static int sum(int a, int b, int c, int d, int e) {
        return a + b + c + d + e;
    }
*/
    // To resolve this problem VarArgs is introduced
    static int sum(int ...arr)
    {
        int result = 0;
        for(int element: arr)
        {
            result = result + element;
        }
        return result;
    }
    
    public static void main(String[] args)
    {
        /* 
        System.out.println("The sum of two numbers is: " + sum(2, 3));
        System.out.println("The sum of three numbers is: " + sum(2, 3, 1));
        System.out.println("The sum of four numbers is: " + sum(2, 3, 1, 1));
        System.out.println("The sum of five numbers is: " + sum(2, 3, 1, 2, 3)); 
        */

        System.out.println("The sum of two number is: " + sum(2, 3));
        System.out.println("The sum of three number is: " + sum(2, 3, 1));
        System.out.println("The sum of four number is: " + sum(2, 3, 1, 1));
        System.out.println("The sum of five number is: " + sum(2, 3, 1, 2, 3));
        System.out.println("The sum of zero number is: " + sum());// We can also pass zero arguments.

        
    }
}
