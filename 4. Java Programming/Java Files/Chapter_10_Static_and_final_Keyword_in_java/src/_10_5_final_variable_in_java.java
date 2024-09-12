/*
final variable: In Java, we can use final keyword with variables, methods, and classes.
                When the final keyword is used with a variable of primitive data types such as int,
                float, etc), the value of the variable cannot be changed.

*/

public class _10_5_final_variable_in_java {
    public static void main(String [] args)
    {
        int a = 123;
        a = 0;
        final int  b = 1;
//        b = 0;// Throw error final variables cannot be reinitialized.
        System.out.println("The value of non-final variable is: " + a);
        System.out.println("The value of final variable is: " + b);

    }
}
