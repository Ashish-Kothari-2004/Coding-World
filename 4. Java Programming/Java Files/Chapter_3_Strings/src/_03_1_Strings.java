/* String - A string is a sequence of characters.
In Java, string is basically an object that represents sequence of character values.
An array of characters works same as Java string.

A string is instantiated as follows...................
1. String name = new String("Ashish");
2. String name = "Ashish";
    String is a class but can be used as a data type:
    name-> Reference
    Ashish-> Object

    Each time you create a string literal, the JVM checks the "string constant pool" first.
    If the string already exists in the pool, a reference to the pooled instance is returned.
    If the string doesn't exist in the pool, a new string instance is created and placed in the pool.
    String s1 = "Welcome";
    String s2 = "Welcome";//It doesn't create a new instance

What is String constant pool in java ?
    String pool is nothing but a storage area in Java heap where string literals stores.
    It is also known as String Intern Pool or String Constant Pool. It is just like object allocation.
    By default, it is empty and privately maintained by the Java String class.
    Whenever we create a string the string object occupies some space in the heap memory.
    Creating a number of strings may increase the cost and memory too which may reduce the performance also.
    To decrease the number of String objects created in the JVM the String class keeps a pool of strings.
    When we create a string literal, the JVM first check that literal in the String pool.
    If the literal is already present in the pool, it returns a reference to the pooled instance.
    If the literal is not present in the pool, a new String object takes place in the String pool.

3. char[] ch = {'A','s','h','i','s','h'};
String name = new String(ch);

Note - String class objects are immutable and cannot be changed.

We can create strings in Java by using these three classes.
1. String - String class objects are immutable, means once the string object is created it cannot be altered,
            but the reference to the object can be changed.

2. StringBuffer - StringBuffer is mutable means once the string is created it can be altered,
                  and StringBuffer is synchronized. This means that multiple threads cannot call
                  the methods of StringBuffer simultaneously. Due to synchronization,
                  StringBuffer is called a thread safe class. StringBuffer is lot slower than StringBuilder.

3. StringBuilder - StringBuilder is mutable means once the string is created it can be altered,
                   StringBuilder is asynchronized. This means that multiple threads can call
                   the methods of StringBuilder simultaneously. Due to its asynchronous nature,
                   StringBuilder is not a thread safe class. Since there is no preliminary check for multiple threads,
                   StringBuilder is a lot faster than StringBuffer.
*/

import java.util.Scanner;
public class _03_1_Strings
{
    public static void main(String[] args)
    {
        // String name1 = new String("Ashish");
        // System.out.println(name1);
        // String name2 = "Ashish";
        // System.out.println(name2);

        // Different ways to print in java.
        int a = 23;
        float b = 23.23F;
        System.out.print("Ashish Kothari");
        System.out.println("Ashish Kothari");
        System.out.printf("The value of a is %d and the value of b is %f\n", a, b);
        System.out.format("The value of a is %d and the value of b is %f\n", a, b);

        // Taking string as an input
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string : ");
        String inputStr = sc.next();
        System.out.println("String is: " + inputStr);
        sc.nextLine();
        System.out.print("Enter multiword string : ");
        inputStr = sc.nextLine();
        System.out.println("Multiword string is: " + inputStr);

        sc.close();
    }
}