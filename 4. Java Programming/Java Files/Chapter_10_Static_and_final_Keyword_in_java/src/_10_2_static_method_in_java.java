/*
Static Method: The static keyword is used to construct methods that will exist regardless of whether or
               not any instances of the class are generated. Any method that uses the static keyword is referred
               to as a static method.

Important points about static method in java:
1. A static method in Java is a method that is part of a class rather than an instance of that class.
2. Static methods have access to class variables (static variables) without using the class’s object (instance).
3. Only static data may be accessed by a static method. It is unable to access data that is not static (instance variables).
4. In both static and non-static methods, static methods can be accessed directly.
5. In a static environment, this and super aren’t allowed to be used.
6. Overloading a static method is possible but overriding a static method is not. This is because static methods are
   resolved at compile time, while instance methods are resolved at runtime. This means that the compiler can determine
   which static method to call based on the type of reference variable used to call the method. However, the compiler
   cannot determine which instance method to call until runtime, when it knows the actual object that is being referenced.
*/

class MyClass {
       int a = 23;
       static int b = 1111;
//     non-static method can access both static and non-static variable within a same class.
       void nonStatic ()
       {
           System.out.println("The value of non-static variable a is: " + a);
           System.out.println("The value of static variable b is: " + b);
       }

/*     static method can access only static variable (class variable) and static methods within
       a same class or different class using class a name or without a class name.*/

       static void staticMethod()
       {
//           System.out.println("The value of non static variable a is: " + a);
           System.out.println("The value of static variable b is: " + b);
       }
}

class NewClass {
//    Non-static method can access both static and non-static method from different class using object name or class name.
    void newNotStaticMethod(MyClass obj)
    {
        System.out.println("The value of no-static variable a is : " + obj.a);
        System.out.println("The value of static variable b is: " + MyClass.b);
    }
}
public class _10_2_static_method_in_java {
    public static void main(String[] args) {
//      main() method is a static method so it can access static variable as well as static method of a class.

//        Accessing static variable and static method using class name
        System.out.println("The value of b is : " + MyClass.b);
        MyClass.staticMethod();

//        Accessing static variable and static method using object.
        MyClass obj = new MyClass();
        System.out.println("The value of a is: " + obj.a);
        System.out.println("The value of b is: " + obj.b);

//        Passing object to access static variable and static method of another class.
        NewClass obj2 = new NewClass();
        obj2.newNotStaticMethod(obj);
    }
}
