/*
Static Variable: When a variable is declared as static, then a single copy of the variable is created and
                 shared among all objects at the class level. Static variables are, essentially, global variables.
                 All instances of the class share the same static variable.

Important points for static variables:
1. Static variables are declared using the static keyword at the class level, outside of any method.
2. Static variables are executed in order they are present in a program.
3. They are associated with the class itself, not with instances (objects) of the class. All instances of the class share the same static variable.
4. You can access static variables using the class name without creating an instance of the class.
5. In Java, static variables are not inherited by subclasses. When you declare a static variable in a class,
   it belongs to the class itself rather than any specific instance of the class. Subclasses do not inherit
   or have direct access to the static variables of their parent classes. If a subclass wants to access a static
   variable defined in its superclass, it can do so by using the class name followed by the dot operator.
6. Static variables are initialized only once, when the class is loaded into memory.
   They are initialized with default values (e.g., 0 for int, null for reference types) unless explicitly initialized.
7. Static variables are stored in a special area of memory called the "Method Area" or "Static Area" in the Java
   Virtual Machine (JVM). They exist for the entire lifetime of the program.
8. Common Use Cases:
a) Constants: Use static variables for defining constants that should not change during program execution.
b) Counters: Static variables are useful for counting instances or maintaining global counts.
c) Resource Sharing: When you want to share a resource (e.g., a database connection) across multiple instances,
   you can use a static variable to store that resource.
9. Best Practices: It's a good practice to make static variables final (if they are meant to be constants) and access
   them through getter methods. This helps encapsulate the variable and make your code more maintainable.

*/

class A{
    static int a = 34;
    void meth1()
    {
//        static int b = 12;// Throw an error cannot declare inside method body
        System.out.println("The value of a is : " + a);
    }
}
class B{
    static int c = 87;
    void meth2()
    {
//        System.out.println("The value of a is : " + a);// Throw error since static variable never inherited in java.
//        static variable is associated with a specific class.
        System.out.println("The value of a is: " + A.a);
        System.out.println("The value of c is : " + c);
    }
}

public class _10_1_static_variable_in_java {
    public static void main(String []args)
    {
//      Accessing through object name
        A obj1 = new A();
        obj1.a = 123;
        System.out.println("The value of a is : " + obj1.a);

//      Accessing through class name
        A.a = 11;
        System.out.println("The value of a is : " + A.a);

        B obj2 = new B();
        obj2.c = 73;
        System.out.println("The value of c is : " + obj2.c);
    }
}
