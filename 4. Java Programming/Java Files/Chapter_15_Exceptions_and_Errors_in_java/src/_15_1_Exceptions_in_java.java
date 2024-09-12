/*
Exceptions in java - In Java, Exception is an unwanted or unexpected event, which occurs during the execution of a program,
                     at run time, that disrupts the normal flow of the program’s instructions. Exceptions can be caught
                     and handled by the program. When an exception occurs within a method, it creates an object.
                     This object is called the exception object. It contains information about the exception,
                     such as the name and description of the exception and the state of the program when the exception occurred.

Exceptions Handling in java - Exception Handling is a mechanism to handle Exceptions(runtime error) such as ClassNotFoundException,
                              IOException, SQLException, RemoteException, etc. The Exception Handling in Java is one of the powerful
                              mechanism to handle the runtime errors so that the normal flow of the application can be maintained.

Types of Errors -   1. Syntax Errors
                    2. Logical Errors (Bugs)
                    3. Runtime Errors (Exceptions)

Hierarchy of Java Exceptions classes - The java.lang.Throwable class is the root class of Java Exception hierarchy inherited
                                       by two subclasses: Exception and Error. The hierarchy of Java Exception classes is given below:

                                Throwable(Parent class)
        1. Exception(Child class)                  2. Error(Child class)
            A. IOException                           A. StackOverflowError
            B. SQLException                          B. VirtualMachineError
            C. ClassNotFoundException                C. OutOfMemoryError
            D. RuntimeException
               i) ArithmeticException
               ii) NullPointerException
               iii) NumberFormatException
               iv) ArrayIndexOutOfBoundException
                    a). ArrayIndexOutOfBoundException
                    b). StringIndexOutOfBoundException


Types of Exceptions (Runtime Errors)
1. Checked Exceptions - Checked exceptions are called compile-time exceptions because these exceptions are checked at
                        compile-time by the compiler.
                        A. ClassNotFoundException
                        B. InterruptedException
                        C. IOException
                        D. InstantiationException
                        E. SQLException
                        F. FileNotFoundException

2. Unchecked Exceptions - The unchecked exceptions are just opposite to the checked exceptions. The compiler will not
                          check these exceptions at compile time. In simple words, if a program throws an unchecked exception,
                          and even if we didn’t handle or declare it, the program would not give a compilation error.
                          A. ArithmeticException
                          B. ClassCastException
                          C. NullPointerException
                          D. ArrayIndexOutOfBoundsException
                          E. ArrayStoreException
                          F. IllegalThreadStateException

NOTE: Both checked and unchecked Exception occurs at runtime not compile time.
*/

// Exception in java
import java.util.Scanner;
public class _15_1_Exceptions_in_java {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number as divisor for 200: ");
        int n = sc.nextInt();

//        int result = 200/n;
/*        System.out.println("After dividing 200 by entered number, the value of quotient is : " + result);
        // Throw an Exception for n = 0, it can be handled by using try catch block */

        try{
            int result = 200/n;
            System.out.println("After dividing 200 by entered number, the value of quotient is : " + result);
        }
        catch(Exception e)
        {
            System.out.println("Cannot divide, reason: " + e);
        }
    }
}
