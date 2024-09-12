/*
1. throws in java - 1. The throws keyword is used in the function signature. It is used when the function has
                       some statements that can lead to exceptions.
                    2.  The throws keyword can be used to declare multiple exceptions, separated by a comma.
                        Whichever exception occurs, if matched with the declared ones, is thrown automatically then.
                    3. Syntax of throws keyword includes the class names of the Exceptions to be thrown.
                       Syntax wise throws keyword is followed by exception class names.
                    4. throws keyword is used to propagate the checked Exceptions only.

2. throw in java - 1. The throw keyword is used inside a function. It is used when it is required to throw
                      an Exception logically.
                   2. The throw keyword is used to throw an exception explicitly. It can throw only one
                      exception at a time.
                   3. Syntax of throw keyword includes the instance of the Exception to be thrown.
                      Syntax wise throw keyword is followed by the instance variable.
                   4. throw keyword cannot propagate checked exceptions.
                      It is only used to propagate the unchecked Exceptions that are not checked using the
                       'throws' keyword.
*/


// throws keyword in java..........
import java.util.Scanner;
// User defined exception in java
class NegativeRadiusException extends Exception {
    @Override
    public String toString()
    {
        return "Radius cannot be negative, Please enter valid radius...........";
    }
}

public class _15_6_throw_and_throws {
    public static int divide(int a, int b) throws ArithmeticException
    {
        return a/b;
    }

    public static double area(int radius) throws NegativeRadiusException
    {
        if(radius < 0)
        {
            throw new NegativeRadiusException();
        }
        return Math.PI * radius * radius;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the value of a: ");
        int a = sc.nextInt();

//        int result = 0;
//        System.out.println("Enter the value of b: ");
//        int b = sc.nextInt();
//        try{
//            result = divide(a, b);
//        }
//        catch(ArithmeticException e)
//        {
//            System.out.println("An exception occur !!!!!!!");
//            System.out.println(e);
//        }
//        System.out.println("After dividing 'a' with 'b', the value of result is: " + result);

        try{
            System.out.println("The area of circle is : " + area(a));
        }
        catch (Exception e)
        {
            System.out.println(e);
        }

    }
}
